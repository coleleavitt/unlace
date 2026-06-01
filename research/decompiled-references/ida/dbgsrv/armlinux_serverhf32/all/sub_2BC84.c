/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2BC84
// Address: 0x0002BC84

//----- (0002BC84) --------------------------------------------------------
int __fastcall sub_2BC84(int result, int a2, int a3, int a4)
{
  unsigned int v4; // r3
  unsigned int v5; // r4
  unsigned int v6; // r0
  _BOOL4 v7; // r3
  unsigned __int64 v8; // r2
  unsigned int v9; // r5
  int v10; // r0
  __int64 v11; // r6

  v4 = *(unsigned __int16 *)(result + 30);
  *(_DWORD *)(result + 60) = 0;
  if ( v4 != 0xFFFF )
  {
    if ( v4 < 0xFF00 )
      *(_DWORD *)(result + 60) = v4;
    return result;
  }
  v5 = result;
  v6 = *(_DWORD *)(a2 + 216);
  v7 = v5 < v6;
  if ( !v5 )
    v7 = 1;
  if ( v7 || v5 > v6 + 68 * *(_DWORD *)(a2 + 220) )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(20088);
  }
  LODWORD(v8) = *(_DWORD *)(a2 + 228);
  v9 = -252645135 * ((int)(v5 - v6) >> 2);
  if ( v9 >= (unsigned int)v8 )
  {
    HIDWORD(v8) = *(_DWORD *)(a2 + 140);
    v9 -= v8;
    if ( HIDWORD(v8) )
      goto LABEL_13;
    return sub_23388((int)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", v9, v8, a4);
  }
  HIDWORD(v8) = *(_DWORD *)(a2 + 136);
  if ( !HIDWORD(v8) )
    return sub_23388((int)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", v9, v8, a4);
LABEL_13:
  if ( !*(_BYTE *)(a2 + 176) )
    sub_147B8();
  LODWORD(v8) = *(_DWORD *)(a2 + 60);
  if ( HIDWORD(v8) >= (unsigned int)v8 )
    return sub_23388((int)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", v9, v8, a4);
  v10 = *(_DWORD *)(a2 + 56) + (HIDWORD(v8) << 6);
  if ( !v10 )
    return sub_23388((int)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", v9, v8, a4);
  v11 = *(_QWORD *)(v10 + 24);
  if ( !v11 )
    return sub_23388((int)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", v9, v8, a4);
  v8 = *(_QWORD *)(v10 + 32);
  if ( 4 * v9 >= v8 )
    return sub_23388((int)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", v9, v8, a4);
  result = sub_2BBBC(a2, a2, v11 + 4 * v9, (v11 + (unsigned __int64)(4 * v9)) >> 32);
  *(_DWORD *)(v5 + 60) = result;
  if ( !result )
    return sub_23388((int)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", v9, v8, a4);
  return result;
}
// 2BD34: variable 'v8' is possibly undefined
// D5C00: using guessed type char under_debugger;
