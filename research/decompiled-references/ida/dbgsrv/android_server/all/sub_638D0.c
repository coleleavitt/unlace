/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_638D0
// Address: 0x00000000000638D0

//----- (00000000000638D0) ----------------------------------------------------
__int64 __fastcall sub_638D0(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x8
  _BYTE *v4; // x0

  v1 = *(_QWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -89;
  v3 = *(_QWORD *)(v1 + 8);
  if ( *(_QWORD *)(v1 + 16) >= (unsigned __int64)(v3 + 1) )
  {
    v4 = *(_BYTE **)v1;
  }
  else
  {
    v4 = qvector_reserve((pthread_mutex_t *)v1, *(void **)v1, v3 + 1, 1u);
    v3 = *(_QWORD *)(v1 + 8);
    *(_QWORD *)v1 = v4;
  }
  v4[v3] = -89;
  ++*(_QWORD *)(v1 + 8);
  ++*(_DWORD *)(a1 + 208);
  sub_5EB14(a1, 0xFFFF);
  sub_5EB14(a1, 0x7FFF);
  sub_635B0(a1, 3);
  return 0;
}
