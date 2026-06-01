/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60738
// Address: 0x0000000000060738

//----- (0000000000060738) ----------------------------------------------------
__int64 __fastcall sub_60738(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x8
  _BYTE *v4; // x0
  int v5; // w21
  __int64 v6; // x10
  __int64 v7; // x8
  _DWORD *v8; // x0

  v1 = *(_QWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -85;
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
  v4[v3] = -85;
  ++*(_QWORD *)(v1 + 8);
  v5 = *(_DWORD *)(a1 + 208) + 1;
  *(_DWORD *)(a1 + 208) = v5;
  sub_5EB14(a1, 0);
  sub_5EB14(a1, 0);
  v6 = *(_QWORD *)(a1 + 232);
  if ( v6 )
    *(_QWORD *)(a1 + 232) = v6 - 1;
  ((void (__fastcall *)(_QWORD))loc_68E54)(*(_QWORD *)(a1 + 200));
  v7 = *(_QWORD *)(a1 + 232);
  if ( *(_QWORD *)(a1 + 240) >= (unsigned __int64)(v7 + 1) )
  {
    v8 = *(_DWORD **)(a1 + 224);
  }
  else
  {
    v8 = qvector_reserve((pthread_mutex_t *)(a1 + 224), *(void **)(a1 + 224), v7 + 1, 4u);
    v7 = *(_QWORD *)(a1 + 232);
    *(_QWORD *)(a1 + 224) = v8;
  }
  v8[v7] = v5;
  ++*(_QWORD *)(a1 + 232);
  return 0;
}
