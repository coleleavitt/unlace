/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_idcv_class_name
// Address: 0x0000000000071630

//----- (0000000000071630) ----------------------------------------------------
__int64 __fastcall get_idcv_class_name(__int64 a1, __int64 a2)
{
  __int64 v3; // x0
  unsigned __int64 v4; // x21
  const void *v5; // x22
  void *v6; // x0

  if ( !a2 || *(_BYTE *)a2 != 5 )
    return set_qerrno(0x5FCu);
  if ( a1 )
  {
    v3 = sub_6A1B0(*(int *)(*(_QWORD *)(a2 + 8) + 28LL));
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
          v6 = *(void **)a1;
        }
        else
        {
          v6 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v4, 1u);
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
