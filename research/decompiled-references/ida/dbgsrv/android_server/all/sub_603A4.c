/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_603A4
// Address: 0x00000000000603A4

//----- (00000000000603A4) ----------------------------------------------------
__int64 __fastcall sub_603A4(__int64 a1)
{
  __int64 v1; // x20
  char v3; // w21
  __int64 v4; // x8
  _BYTE *v5; // x0
  int v6; // w8
  __int64 v7; // x20
  __int64 v8; // x8
  _BYTE *v9; // x0

  v1 = *(_QWORD *)(a1 + 200);
  if ( *(_DWORD *)(a1 + 216) == 1 )
    v3 = 112;
  else
    v3 = -32;
  *(_BYTE *)(a1 + 212) = v3;
  v4 = *(_QWORD *)(v1 + 8);
  if ( *(_QWORD *)(v1 + 16) >= (unsigned __int64)(v4 + 1) )
  {
    v5 = *(_BYTE **)v1;
  }
  else
  {
    v5 = qvector_reserve((pthread_mutex_t *)v1, *(void **)v1, v4 + 1, 1u);
    v4 = *(_QWORD *)(v1 + 8);
    *(_QWORD *)v1 = v5;
  }
  v5[v4] = v3;
  ++*(_QWORD *)(v1 + 8);
  v6 = *(_DWORD *)(a1 + 208);
  v7 = *(_QWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -81;
  *(_DWORD *)(a1 + 208) = v6 + 1;
  v8 = *(_QWORD *)(v7 + 8);
  if ( *(_QWORD *)(v7 + 16) >= (unsigned __int64)(v8 + 1) )
  {
    v9 = *(_BYTE **)v7;
  }
  else
  {
    v9 = qvector_reserve((pthread_mutex_t *)v7, *(void **)v7, v8 + 1, 1u);
    v8 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)v7 = v9;
  }
  v9[v8] = -81;
  ++*(_QWORD *)(v7 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
