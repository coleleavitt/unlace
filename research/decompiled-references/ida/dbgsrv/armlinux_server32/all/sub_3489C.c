/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3489C
// Address: 0x0003489C

//----- (0003489C) --------------------------------------------------------
int __fastcall sub_3489C(int a1, int a2)
{
  int v2; // r8
  __int64 v3; // r4
  const char *v5; // r0
  int v6; // r6
  int v7; // r6
  unsigned int v8; // r3
  int v9; // r2

  v2 = *(unsigned __int8 *)(a1 + 16);
  if ( !*(_BYTE *)(a1 + 16) )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(20082);
  }
  v3 = *(_QWORD *)(a1 + 4);
  HIDWORD(v3) = v3 + 28 * HIDWORD(v3);
  if ( (_DWORD)v3 == HIDWORD(v3) )
    return 0;
  while ( 1 )
  {
    v5 = *(_DWORD *)(v3 + 4) ? *(const char **)v3 : (const char *)&dword_8DB98;
    if ( !strcmp(v5, "GNU") && *(_DWORD *)(v3 + 24) == 3 )
      break;
    LODWORD(v3) = v3 + 28;
    if ( (_DWORD)v3 == HIDWORD(v3) )
      return 0;
  }
  v6 = *(_DWORD *)(v3 + 16);
  if ( v6 )
  {
    v7 = v6 - 1;
    v8 = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a2 + 4) = 0;
    if ( 2 * v7 > v8 )
      *(_DWORD *)a2 = sub_78018(a2, *(void **)a2, 2 * v7, 1u);
    if ( v7 > 0 )
    {
      HIDWORD(v3) = 0;
      do
      {
        v9 = *(_DWORD *)(v3 + 16) | HIDWORD(v3);
        if ( v9 )
          v9 = *(unsigned __int8 *)(*(_DWORD *)(v3 + 12) + HIDWORD(v3));
        ++HIDWORD(v3);
        sub_34260(a2, "%02x", v9);
      }
      while ( v7 != HIDWORD(v3) );
    }
  }
  else
  {
    *(_DWORD *)(a2 + 4) = 0;
  }
  return v2;
}
// 8DB98: using guessed type int dword_8DB98;
// D6C20: using guessed type char under_debugger;
