/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_term_file_0
// Address: 0x000000010003FF94

//----- (000000010003FF94) ----------------------------------------------------
void __fastcall lex_term_file_0(__int64 a1, int a2)
{
  FILE *v3; // x0
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x8
  FILE *v7; // x0
  __int64 i; // x8
  __int64 v9; // x8

  if ( a2 )
    sub_10003F820(a1, 0, 0);
  if ( *(_QWORD *)(a1 + 256) )
  {
    do
    {
      v3 = *(FILE **)(a1 + 272);
      if ( v3 )
        qfclose(v3);
      qfree(*(void **)(a1 + 280));
      *(_QWORD *)(a1 + 280) = 0;
      v4 = *(_QWORD *)(a1 + 256);
      v5 = *(_QWORD *)(a1 + 248) + 40 * v4;
      *(_QWORD *)(a1 + 272) = *(_QWORD *)(v5 - 32);
      *(_DWORD *)(a1 + 288) = *(_DWORD *)(v5 - 8);
      *(_QWORD *)(a1 + 280) = *(_QWORD *)(v5 - 40);
      *(_BYTE *)(a1 + 128) = *(_BYTE *)(v5 - 4);
      *(_QWORD *)(a1 + 200) = *(_QWORD *)(v5 - 24);
      *(_QWORD *)(a1 + 208) = *(_QWORD *)(v5 - 16);
      if ( !v4 )
        break;
      v6 = v4 - 1;
      *(_QWORD *)(a1 + 256) = v6;
    }
    while ( v6 );
  }
  qfree(*(void **)(a1 + 280));
  *(_QWORD *)(a1 + 280) = 0;
  v7 = *(FILE **)(a1 + 272);
  if ( v7 )
    qfclose(v7);
  *(_QWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 288) = -1;
  *(_BYTE *)(a1 + 128) = 0;
  for ( i = *(_QWORD *)(a1 + 64); i; i = *(_QWORD *)(a1 + 64) )
  {
    v9 = *(_QWORD *)(a1 + 56) + 56 * i;
    *(_QWORD *)a1 = *(_QWORD *)(v9 - 32);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v9 - 24);
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(v9 - 8);
    sub_10003F3C8((__int64 *)(a1 + 56));
  }
}
