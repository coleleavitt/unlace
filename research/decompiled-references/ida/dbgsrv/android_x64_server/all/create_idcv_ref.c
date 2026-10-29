/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: create_idcv_ref
// Address: 0x0000000000071E20

//----- (0000000000071E20) ----------------------------------------------------
__int64 __fastcall create_idcv_ref(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  pthread_mutex_t *v4; // r14
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rbx
  unsigned int v8; // r12d
  _OWORD *v9; // r13

  v4 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  v5 = sub_6B0F0();
  v6 = a2 - 24;
  v7 = *(_QWORD *)(v5 + 88);
  v8 = 0;
  if ( v7 <= a2 - 24 && v7 + 56LL * *(_QWORD *)(v5 + 96) > v6 )
  {
    free_idcv((char *)a1, a3, a4);
    *(_BYTE *)a1 = 10;
    v9 = (_OWORD *)(a1 + 8);
    if ( *(_BYTE *)a2 == 10 )
    {
      *v9 = *(_OWORD *)(a2 + 8);
    }
    else
    {
      *(_QWORD *)v9 = 0;
      *(_DWORD *)(a1 + 16) = ~(-1227133513 * ((v6 - v7) >> 3));
    }
    LOBYTE(v8) = 1;
  }
  qmutex_unlock(v4);
  return v8;
}
