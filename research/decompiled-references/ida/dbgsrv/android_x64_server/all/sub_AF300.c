/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AF300
// Address: 0x00000000000AF300

//----- (00000000000AF300) ----------------------------------------------------
bool __fastcall sub_AF300(__int64 a1, __int64 a2)
{
  pthread_mutex_t *v3; // r14
  char **v4; // rdi
  __int64 v5; // rcx
  char *v6; // rax

  v3 = *(pthread_mutex_t **)a1;
  qmutex_lock(*(pthread_mutex_t **)a1);
  v4 = (char **)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 24) >= (unsigned __int64)(v5 + 1) )
  {
    v6 = *v4;
  }
  else
  {
    v6 = (char *)qvector_reserve((__int64)v4, *v4, v5 + 1, 8u);
    *(_QWORD *)(a1 + 8) = v6;
    v5 = *(_QWORD *)(a1 + 16);
  }
  *(_QWORD *)&v6[8 * v5] = a2;
  ++*(_QWORD *)(a1 + 16);
  return qmutex_unlock(v3);
}
