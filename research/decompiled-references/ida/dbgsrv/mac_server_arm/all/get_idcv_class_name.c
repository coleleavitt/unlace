/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_idcv_class_name
// Address: 0x000000010003478C

//----- (000000010003478C) ----------------------------------------------------
__int64 __fastcall get_idcv_class_name(_QWORD *a1, __int64 a2)
{
  __int64 v3; // x0
  _QWORD *v4; // x8
  unsigned __int64 v5; // x10
  size_t v6; // x19
  const void *v8; // x21
  _QWORD *v9; // x1
  _QWORD *v10; // x20

  if ( !a2 || *(_BYTE *)a2 != 5 )
    return set_qerrno();
  if ( a1 )
  {
    v3 = sub_10002DD14(*(int *)(*(_QWORD *)(a2 + 8) + 28LL));
    if ( (_QWORD *)(v3 + 32) != a1 )
    {
      v4 = a1;
      v5 = *(_QWORD *)(v3 + 40);
      if ( v5 )
        v6 = v5 - 1;
      else
        v6 = 0;
      if ( v5 >= 2 )
      {
        v8 = *(const void **)(v3 + 32);
        v9 = (_QWORD *)*a1;
        if ( a1[2] <= v6 )
        {
          v9 = qvector_reserve(a1, v9, v6 + 1, 1u);
          v4 = a1;
          *a1 = v9;
        }
        v4[1] = v6 + 1;
        v10 = v4;
        memmove(v9, v8, v6);
        *(_BYTE *)(*v10 + v6) = 0;
      }
      else
      {
        a1[1] = 0;
      }
    }
  }
  return 0;
}
