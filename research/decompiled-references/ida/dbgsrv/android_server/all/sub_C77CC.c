/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C77CC
// Address: 0x00000000000C77CC

//----- (00000000000C77CC) ----------------------------------------------------
__int64 __fastcall sub_C77CC(__int64 a1, unsigned __int64 a2)
{
  int v2; // w23
  int v3; // w24
  unsigned __int64 v6; // x22
  int v7; // w0
  int v8; // w0
  void *v9; // x0
  signed __int64 v10; // x0
  unsigned __int64 v11; // x8
  signed __int64 v12; // x0
  __int64 v13; // x8
  unsigned __int64 v14; // x8
  __int64 v15; // x11
  unsigned __int64 v16; // x10
  unsigned __int64 v17; // x22
  __int64 v18; // x0
  unsigned int v19; // w20
  __int64 v20; // x9
  unsigned __int64 v22; // x22
  int v23; // w0
  int v24; // w0
  void *v25; // x0
  int v26[2]; // [xsp+0h] [xbp-50h] BYREF
  __int64 v27; // [xsp+8h] [xbp-48h]

  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(a1 + 8) )
  {
    v6 = 0;
    do
    {
      v7 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v6);
      if ( v7 != -1 )
        close(v7);
      v8 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v6);
      if ( v8 != -1 )
        close(v8);
      ++v6;
    }
    while ( v6 < *(_QWORD *)(a1 + 8) );
  }
  qfree(*(void **)(a1 + 16));
  v9 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0;
  qfree(v9);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = a2;
  v10 = qcalloc(a2, 4u);
  v11 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = v10;
  v12 = qcalloc(v11, 4u);
  v13 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 24) = v12;
  if ( !v13 )
    return 0;
  v14 = 0;
  do
  {
    v15 = 4 * v14++;
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + v15) = -1;
    *(_DWORD *)(*(_QWORD *)(a1 + 24) + v15) = -1;
    v16 = *(_QWORD *)(a1 + 8);
  }
  while ( v14 < v16 );
  if ( !v16 )
    return 0;
  v17 = 0;
  while ( 1 )
  {
    v18 = pipe(v26);
    if ( !(_DWORD)v18 )
    {
      v2 = v26[0];
      v3 = v26[1];
      goto LABEL_17;
    }
    v19 = *(_DWORD *)__errno(v18);
    if ( v19 )
      break;
LABEL_17:
    v20 = 4 * v17++;
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + v20) = v2;
    *(_DWORD *)(*(_QWORD *)(a1 + 24) + v20) = v3;
    if ( v17 >= *(_QWORD *)(a1 + 8) )
      return 0;
  }
  if ( *(_QWORD *)(a1 + 8) )
  {
    v22 = 0;
    do
    {
      v23 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v22);
      if ( v23 != -1 )
        close(v23);
      v24 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v22);
      if ( v24 != -1 )
        close(v24);
      ++v22;
    }
    while ( v22 < *(_QWORD *)(a1 + 8) );
  }
  qfree(*(void **)(a1 + 16));
  v25 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0;
  qfree(v25);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  return v19;
}
// C78E0: variable 'v2' is possibly undefined
// C78E8: variable 'v3' is possibly undefined
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
