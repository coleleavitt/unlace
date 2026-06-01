/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2BA78
// Address: 0x0002BA78

//----- (0002BA78) --------------------------------------------------------
int __fastcall sub_2BA78(unsigned int a1, int a2)
{
  int result; // r0
  unsigned int v4; // r2
  unsigned int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r5
  unsigned int v8; // r2
  int v9; // r7
  int v10; // [sp+8h] [bp-4h]

  result = 0;
  *(_DWORD *)(a1 + 60) = 0;
  v4 = *(unsigned __int16 *)(a1 + 30);
  if ( v4 != 0xFFFF )
  {
    if ( v4 < 0xFF00 )
      *(_DWORD *)(a1 + 60) = v4;
    return result;
  }
  v5 = *(_DWORD *)(a2 + 216);
  if ( v5 > a1 || v5 + 68 * *(_DWORD *)(a2 + 220) < a1 )
  {
    if ( !under_debugger )
      interr(20088);
LABEL_22:
    __debugbreak();
  }
  v6 = *(_DWORD *)(a2 + 228);
  v7 = -252645135 * ((int)(a1 - v5) >> 2);
  if ( v7 >= v6 )
  {
    v8 = *(_DWORD *)(a2 + 140);
    v7 -= v6;
    if ( !v8 )
      return sub_2BC80((int)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u");
  }
  else
  {
    v8 = *(_DWORD *)(a2 + 136);
    if ( !v8 )
      return sub_2BC80((int)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u");
  }
  if ( !*(_BYTE *)(a2 + 176) )
  {
    if ( !under_debugger )
      interr(20099);
    goto LABEL_22;
  }
  if ( *(_DWORD *)(a2 + 60) <= v8 )
    return sub_2BC80((int)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u");
  v9 = *(_DWORD *)(a2 + 56) + (v8 << 6);
  if ( !v9 )
    return sub_2BC80((int)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u");
  v10 = 4 * v7;
  if ( !*(_QWORD *)(v9 + 24) )
    return sub_2BC80((int)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u");
  if ( (unsigned __int64)(unsigned int)v10 >= *(_QWORD *)(v9 + 32) )
    return sub_2BC80((int)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u");
  result = sub_2BB74(a2, *(_QWORD *)(v9 + 24) + (unsigned int)v10);
  *(_DWORD *)(a1 + 60) = result;
  if ( !result )
    return sub_2BC80((int)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u");
  return result;
}
// E0550: using guessed type char under_debugger;
