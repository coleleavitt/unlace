/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67070
// Address: 0x0000000000067070

//----- (0000000000067070) ----------------------------------------------------
__int64 __fastcall sub_67070(__int64 a1, char a2)
{
  __int64 v2; // x8
  void *v5; // x1
  void *v6; // x0
  __int64 v7; // x8
  __int64 v8; // x22

  v2 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int64)(v2 - 1) >= 0x400 && v2 )
  {
    sub_39FA0((__int64)"%s", *(const char **)a1);
    v6 = *(void **)a1;
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree(v6);
      v5 = nullptr;
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    else
    {
      v5 = nullptr;
    }
  }
  else
  {
    v5 = *(void **)a1;
  }
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 )
    v8 = v7 - 1;
  else
    v8 = 0;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v8 + 2) )
  {
    v5 = qvector_reserve((pthread_mutex_t *)a1, v5, v8 + 2, 1u);
    *(_QWORD *)a1 = v5;
  }
  *(_QWORD *)(a1 + 8) = v8 + 2;
  *((_BYTE *)v5 + v8) = a2;
  *(_BYTE *)(*(_QWORD *)a1 + v8 + 1) = 0;
  return 0;
}
