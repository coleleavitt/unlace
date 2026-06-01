/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A0780
// Address: 0x00000000000A0780

//----- (00000000000A0780) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_A0780(pthread_mutex_t *a1, __int64 a2)
{
  pthread_mutex_t *v4; // x0
  pthread_mutex_t *result; // x0
  size_t v6; // x2
  pthread_mutex_t *p_src; // x1
  pthread_mutex_t *v8; // x0
  pthread_mutex_t src; // [xsp+Ch] [xbp-44h] BYREF

  *(__int64 *)((char *)&src.__align + 12) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = pack_dd(&src, (unsigned __int64)&src.__align + 5, (unsigned int)(*(_DWORD *)a2 + 3));
  result = sub_545E8(a1, &src, (char *)v4 - (char *)&src);
  if ( *(_DWORD *)a2 != -3 )
  {
    if ( *(_DWORD *)a2 == -2 )
    {
      v6 = (char *)pack_dq(&src, (unsigned __int64)&src.__align + 10, *(_QWORD *)(a2 + 8) + 1LL) - (char *)&src;
      p_src = &src;
    }
    else
    {
      v8 = pack_dd(&src, (unsigned __int64)&src.__align + 5, *(unsigned int *)(a2 + 16));
      sub_545E8(a1, &src, (char *)v8 - (char *)&src);
      p_src = *(pthread_mutex_t **)(a2 + 8);
      v6 = *(_QWORD *)(a2 + 16);
    }
    return sub_545E8(a1, p_src, v6);
  }
  return result;
}
