/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61D1C
// Address: 0x00061D1C

//----- (00061D1C) --------------------------------------------------------
int __fastcall sub_61D1C(int a1, int a2)
{
  int v4; // r4
  const char *v5; // r7
  bool v6; // zf
  int v7; // r6
  int v8; // r5
  size_t v9; // r2
  _WORD v11[2568]; // [sp+18h] [bp-1410h] BYREF

  v4 = 0;
  v11[0] = 0;
  memset(&v11[2], 0, 0x1408u);
  v5 = (const char *)(a1 + 4);
  v6 = a2 == 0;
  v7 = 0;
  if ( v6 )
    v7 = *(_DWORD *)(a1 + 1080);
  v8 = *(_DWORD *)(a1 + 1084);
  sub_1BBA0((int)"Looking for GNU DWARF file at \"%s\"... ", v5);
  if ( qfileexist(v5)
    && sub_5A7C8((int)v11, v5, v8)
    && (!v7 || (v9 = *(unsigned __int16 *)(v7 + 8), v9 == v11[4]) && !memcmp(&v11[5], (const void *)(v7 + 10), v9)) )
  {
    v4 = 1;
    sub_1BBA0((int)"found!\n");
  }
  else
  {
    sub_1BBA0((int)"no.\n");
  }
  return v4;
}
