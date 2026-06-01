/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_idcv_class_name
// Address: 0x000000010003B350

//----- (000000010003B350) ----------------------------------------------------
__int64 __fastcall get_idcv_class_name(void **a1, __int64 a2)
{
  __int64 v2; // rax
  const void **v3; // rdx
  void **v4; // rcx
  __int64 v5; // rax
  size_t v6; // rbx
  bool v7; // cf
  size_t v8; // rax
  const void *v10; // r15
  void *v11; // rax
  void **v12; // r14

  if ( !a2 || *(_BYTE *)a2 != 5 )
    return set_qerrno();
  if ( a1 )
  {
    v2 = sub_100033F10(*(int *)(*(_QWORD *)(a2 + 8) + 28LL));
    v3 = (const void **)(v2 + 32);
    if ( (void **)(v2 + 32) != a1 )
    {
      v4 = a1;
      v5 = *(_QWORD *)(v2 + 40);
      v6 = 0;
      v7 = v5 == 0;
      v8 = v5 - 1;
      if ( !v7 )
        v6 = v8;
      if ( v7 || v8 == 0 )
      {
        a1[1] = nullptr;
      }
      else
      {
        v10 = *v3;
        v11 = *a1;
        if ( (unsigned __int64)a1[2] <= v6 )
        {
          v11 = qvector_reserve((__int64)a1, v11, v6 + 1, 1u);
          v4 = a1;
          *a1 = v11;
        }
        v4[1] = (void *)(v6 + 1);
        v12 = v4;
        memmove(v11, v10, v6);
        *((_BYTE *)*v12 + v6) = 0;
      }
    }
  }
  return 0;
}
