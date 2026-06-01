/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C3784
// Address: 0x00000000000C3784

//----- (00000000000C3784) ----------------------------------------------------
__int64 __fastcall sub_C3784(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x19
  size_t v4; // x20
  const void *v5; // x21
  __int64 v6; // x8
  __int64 v7; // x23
  unsigned __int64 v8; // x22
  _BYTE *v9; // x0

  v3 = *(_QWORD *)(a1 + 8 * a2 + 32);
  v5 = *(const void **)a3;
  v4 = *(_QWORD *)(a3 + 8);
  v6 = *(_QWORD *)(v3 + 8);
  if ( v6 )
    v7 = v6 - 1;
  else
    v7 = 0;
  v8 = v7 + v4 + 1;
  if ( *(_QWORD *)(v3 + 16) >= v8 )
  {
    v9 = *(_BYTE **)v3;
  }
  else
  {
    v9 = qvector_reserve((pthread_mutex_t *)v3, *(void **)v3, v7 + v4 + 1, 1u);
    *(_QWORD *)v3 = v9;
  }
  *(_QWORD *)(v3 + 8) = v8;
  v9[v7 + v4] = 0;
  memmove((void *)(*(_QWORD *)v3 + v7), v5, v4);
  return 1;
}
