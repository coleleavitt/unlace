/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5EC14
// Address: 0x000000000005EC14

//----- (000000000005EC14) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_5EC14(__int64 a1, const char *a2, size_t a3)
{
  __int64 v3; // x22
  __int64 v5; // x8
  _BYTE *v8; // x0
  pthread_mutex_t *result; // x0

  v3 = *(_QWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -88;
  v5 = *(_QWORD *)(v3 + 8);
  if ( *(_QWORD *)(v3 + 16) >= (unsigned __int64)(v5 + 1) )
  {
    v8 = *(_BYTE **)v3;
  }
  else
  {
    v8 = qvector_reserve((pthread_mutex_t *)v3, *(void **)v3, v5 + 1, 1u);
    v5 = *(_QWORD *)(v3 + 8);
    *(_QWORD *)v3 = v8;
  }
  v8[v5] = -88;
  ++*(_QWORD *)(v3 + 8);
  ++*(_DWORD *)(a1 + 208);
  if ( !a3 )
    a3 = strlen(a2);
  sub_5EB14(a1, a3);
  sub_5EB14(a1, SWORD1(a3));
  result = sub_68D00(*(pthread_mutex_t **)(a1 + 200), a2, a3);
  *(_DWORD *)(a1 + 208) += a3;
  return result;
}
