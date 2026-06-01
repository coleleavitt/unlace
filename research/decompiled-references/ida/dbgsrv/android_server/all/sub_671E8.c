/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_671E8
// Address: 0x00000000000671E8

//----- (00000000000671E8) ----------------------------------------------------
__int64 __fastcall sub_671E8(__int64 a1, char a2)
{
  _BYTE *v2; // x8
  __int64 v3; // x9
  __int64 v6; // x22

  v2 = *(_BYTE **)a1;
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    v6 = v3 - 1;
  else
    v6 = 0;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v6 + 2) )
  {
    v2 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v6 + 2, 1u);
    *(_QWORD *)a1 = v2;
  }
  *(_QWORD *)(a1 + 8) = v6 + 2;
  v2[v6] = a2;
  *(_BYTE *)(*(_QWORD *)a1 + v6 + 1) = 0;
  return 0;
}
