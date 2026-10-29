/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_idcv_class_name
// Address: 0x0000000100035FC0

//----- (0000000100035FC0) ----------------------------------------------------
__int64 __fastcall get_idcv_class_name(_QWORD *a1, __int64 a2)
{
  __int64 v2; // x30
  __int64 v4; // x0
  _QWORD *v5; // x8
  unsigned __int64 v6; // x10
  size_t v7; // x19
  const void *v9; // x21
  _QWORD *v10; // x1
  _QWORD *v11; // x20

  if ( a2 && *(_BYTE *)a2 == 5 )
  {
    if ( a1 )
    {
      v4 = sub_10002F0C0(*(int *)(*(_QWORD *)(a2 + 8) + 28LL));
      if ( (_QWORD *)(v4 + 32) != a1 )
      {
        v5 = a1;
        v6 = *(_QWORD *)(v4 + 40);
        if ( v6 )
          v7 = v6 - 1;
        else
          v7 = 0;
        if ( v6 >= 2 )
        {
          v9 = *(const void **)(v4 + 32);
          v10 = (_QWORD *)*a1;
          if ( a1[2] <= v7 )
          {
            v10 = qvector_reserve(a1, v10, v7 + 1, 1u);
            v5 = a1;
            *a1 = v10;
          }
          v5[1] = v7 + 1;
          v11 = v5;
          memmove(v10, v9, v7);
          *(_BYTE *)(*v11 + v7) = 0;
        }
        else
        {
          a1[1] = 0;
        }
      }
    }
    return 0;
  }
  else
  {
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return set_qerrno();
  }
}
// 10003602C: variable 'v2' is possibly undefined
