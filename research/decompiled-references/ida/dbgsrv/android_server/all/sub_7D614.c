/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7D614
// Address: 0x000000000007D614

//----- (000000000007D614) ----------------------------------------------------
void __fastcall sub_7D614(__int64 a1, int a2, __int64 a3, int a4, int a5, int a6, int a7, int a8)
{
  FILE **v9; // x20
  void **v10; // x21
  __int64 v11; // x9
  __int64 v12; // x10
  __int64 v13; // x10
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 v16; // x0
  int v17; // w9

  if ( a2 )
    sub_7CEC8(a1, 0, 0, a4, a5, a6, a7, a8);
  if ( *(_QWORD *)(a1 + 256) )
  {
    v9 = (FILE **)(a1 + 272);
    v10 = (void **)(a1 + 280);
    do
    {
      if ( *v9 )
        qfclose(*v9);
      qfree(*(void **)(a1 + 280));
      v12 = *(_QWORD *)(a1 + 248);
      v11 = *(_QWORD *)(a1 + 256);
      *(_QWORD *)(a1 + 280) = 0;
      v13 = v12 + 40 * (v11 - 1);
      *(_QWORD *)(a1 + 272) = *(_QWORD *)(v13 + 8);
      *(_DWORD *)(a1 + 288) = *(_DWORD *)(v13 + 32);
      *(_QWORD *)(a1 + 280) = *(_QWORD *)v13;
      *(_BYTE *)(a1 + 128) = *(_BYTE *)(v13 + 36);
      *(_QWORD *)(a1 + 200) = *(_QWORD *)(v13 + 16);
      *(_QWORD *)(a1 + 208) = *(_QWORD *)(v13 + 24);
      if ( !v11 )
        break;
      *(_QWORD *)(a1 + 256) = v11 - 1;
    }
    while ( v11 != 1 );
  }
  else
  {
    v10 = (void **)(a1 + 280);
    v9 = (FILE **)(a1 + 272);
  }
  qfree(*v10);
  *v10 = nullptr;
  if ( *v9 )
    qfclose(*v9);
  v14 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 288) = -1;
  for ( *(_BYTE *)(a1 + 128) = 0; v14; v14 = *(_QWORD *)(a1 + 64) )
  {
    v15 = v14 - 1;
    v16 = *(_QWORD *)(a1 + 56) + 56 * v15;
    *(_QWORD *)a1 = *(_QWORD *)(v16 + 24);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v16 + 32);
    v17 = *(_DWORD *)(v16 + 48);
    *(_QWORD *)(a1 + 64) = v15;
    *(_DWORD *)(a1 + 80) = v17;
    sub_39570(v16);
  }
}
