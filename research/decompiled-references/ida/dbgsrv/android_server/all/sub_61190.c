/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61190
// Address: 0x0000000000061190

//----- (0000000000061190) ----------------------------------------------------
__int64 __fastcall sub_61190(__int64 a1, char a2, int a3)
{
  __int64 v3; // x21
  __int64 v6; // x9
  _BYTE *v8; // x0
  int v9; // w8
  int v10; // w21
  int i; // w20
  __int64 v12; // x9
  __int64 v13; // x1
  __int64 v14; // x9
  int v15; // w1

  v3 = *(_QWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 212) = a2;
  v6 = *(_QWORD *)(v3 + 8);
  if ( *(_QWORD *)(v3 + 16) >= (unsigned __int64)(v6 + 1) )
  {
    v8 = *(_BYTE **)v3;
  }
  else
  {
    v8 = qvector_reserve((pthread_mutex_t *)v3, *(void **)v3, v6 + 1, 1u);
    v6 = *(_QWORD *)(v3 + 8);
    *(_QWORD *)v3 = v8;
  }
  v8[v6] = a2;
  ++*(_QWORD *)(v3 + 8);
  v9 = *(_DWORD *)(a1 + 208);
  v10 = a3 - 5 - v9;
  *(_DWORD *)(a1 + 208) = v9 + 1;
  sub_5EB14(a1, a3 - 5 - v9);
  sub_5EB14(a1, SHIWORD(v10));
  for ( i = a3 - 4;
        ;
        ((void (__fastcall *)(_QWORD, __int64, _QWORD))loc_68E54)(*(_QWORD *)(a1 + 200), v13, (unsigned int)(i - v13)) )
  {
    v12 = *(_QWORD *)(a1 + 280);
    v13 = *(unsigned int *)(*(_QWORD *)(a1 + 272) + 4 * (v12 - 1));
    if ( v12 )
      *(_QWORD *)(a1 + 280) = v12 - 1;
    if ( (_DWORD)v13 == -1 )
      break;
  }
  while ( 1 )
  {
    v14 = *(_QWORD *)(a1 + 256);
    v15 = *(_DWORD *)(*(_QWORD *)(a1 + 248) + 4 * (v14 - 1));
    if ( v14 )
      *(_QWORD *)(a1 + 256) = v14 - 1;
    if ( v15 == -1 )
      break;
    ((void (__fastcall *)(_QWORD))loc_68E54)(*(_QWORD *)(a1 + 200));
  }
  return 0;
}
