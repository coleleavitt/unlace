/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_idcv_class_name
// Address: 0x0000000000075690

//----- (0000000000075690) ----------------------------------------------------
__int64 __fastcall get_idcv_class_name(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r14
  const void *v5; // r12
  char *v6; // rdi

  if ( !a2 || *(_BYTE *)a2 != 5 )
    return set_qerrno(0x5FCu);
  if ( a1 )
  {
    v3 = sub_6D420(*(int *)(*(_QWORD *)(a2 + 8) + 28LL));
    if ( v3 + 32 != a1 )
    {
      v4 = *(_QWORD *)(v3 + 40);
      if ( v4 < 2 )
      {
        *(_QWORD *)(a1 + 8) = 0;
      }
      else
      {
        v5 = *(const void **)(v3 + 32);
        if ( *(_QWORD *)(a1 + 16) >= v4 )
        {
          v6 = *(char **)a1;
        }
        else
        {
          v6 = (char *)qvector_reserve(a1, *(char **)a1, *(_QWORD *)(v3 + 40), 1u);
          *(_QWORD *)a1 = v6;
        }
        *(_QWORD *)(a1 + 8) = v4;
        memmove(v6, v5, v4 - 1);
        *(_BYTE *)(*(_QWORD *)a1 + v4 - 1) = 0;
      }
    }
  }
  return 0;
}
