/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C55C
// Address: 0x0005C55C

//----- (0005C55C) --------------------------------------------------------
int __fastcall sub_5C55C(int a1, int a2)
{
  int v2; // r4
  int v5; // r9
  const char *v6; // r1
  int v7; // r6
  int v8; // r4
  _BYTE v10[5136]; // [sp+0h] [bp+0h] BYREF

  v2 = 0;
  v10[1] = 0;
  v5 = a1 + 4;
  v10[0] = 0;
  memset(&v10[4], 0, 0x1408u);
  if ( !a2 )
    v2 = *(_DWORD *)(a1 + 1080);
  v6 = (const char *)(a1 + 4);
  v7 = *(_DWORD *)(a1 + 1084);
  sub_1700C((int)"Looking for GNU DWARF file at \"%s\"... ", v6);
  if ( sub_77404(v5)
    && sub_5C51C((int)v10, v5, v7)
    && (!v2
     || *(unsigned __int16 *)&v10[8] == *(unsigned __int16 *)(v2 + 8)
     && !memcmp(&v10[10], (const void *)(v2 + 10), *(unsigned __int16 *)&v10[8])) )
  {
    v8 = 1;
    sub_1700C((int)"found!\n");
  }
  else
  {
    v8 = 0;
    sub_1700C((int)"no.\n");
  }
  return v8;
}
