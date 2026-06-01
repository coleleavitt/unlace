/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_859D0
// Address: 0x000859D0

//----- (000859D0) --------------------------------------------------------
int __fastcall sub_859D0(_DWORD *a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r1

  result = sub_85F50(a1);
  if ( !result )
  {
    v3 = a1[7];
    *(_DWORD *)(v3 + 60) = 2 * *(_DWORD *)(v3 + 44);
    *(_WORD *)(*(_DWORD *)(v3 + 68) + 2 * *(_DWORD *)(v3 + 76) - 2) = 0;
    memset(*(void **)(v3 + 68), 0, 2 * *(_DWORD *)(v3 + 76) - 2);
    *(_DWORD *)(v3 + 5812) = 0;
    v4 = 3 * *(_DWORD *)(v3 + 132);
    *(_DWORD *)(v3 + 140) = LOWORD(dword_DB2B8[v4]);
    *(_DWORD *)(v3 + 128) = HIWORD(dword_DB2B8[v4]);
    *(_DWORD *)(v3 + 144) = LOWORD(dword_DB2B8[v4 + 1]);
    *(_DWORD *)(v3 + 116) = 0;
    *(_DWORD *)(v3 + 120) = 2;
    *(_DWORD *)(v3 + 92) = 0;
    *(_DWORD *)(v3 + 96) = 2;
    *(_DWORD *)(v3 + 104) = 0;
    *(_DWORD *)(v3 + 108) = 0;
    *(_DWORD *)(v3 + 72) = 0;
    *(_DWORD *)(v3 + 124) = HIWORD(dword_DB2B8[v4 + 1]);
    return 0;
  }
  return result;
}
// DB2B8: using guessed type int dword_DB2B8[2];
