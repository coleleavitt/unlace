/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qustrncpy
// Address: 0x000A2D40

//----- (000A2D40) --------------------------------------------------------
char __cdecl qustrncpy(unsigned int a1, int a2, int a3)
{
  int i; // edx
  char v4; // bl
  char v5; // al
  char *v6; // esi
  unsigned int v7; // edi
  _BYTE *v8; // eax
  _BYTE *v9; // esi
  unsigned int v12; // [esp+10h] [ebp-1Ch]
  char *v13[6]; // [esp+14h] [ebp-18h] BYREF

  v13[1] = (char *)__readgsdword(0x14u);
  if ( a3 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
LABEL_24:
    BUG();
  }
  if ( !a3 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1538);
    goto LABEL_24;
  }
  v12 = a1 + a3;
  for ( i = 0; i != a3; ++i )
  {
    v4 = *(_BYTE *)(a2 + i);
    *(_BYTE *)(a1 + i) = v4;
    if ( !v4 )
      return 1;
  }
  *(_BYTE *)(a1 + i - 1) = 0;
  if ( a1 + i - 1 > a1 )
  {
    v5 = *(_BYTE *)(a1 + i - 2);
    if ( v5 < 0 )
    {
      v6 = (char *)(i + a1 - 2);
      v7 = v12 - 4;
      if ( v12 - 4 <= a1 )
        v7 = a1;
      if ( (unsigned int)v6 > v7 && (v5 & 0xC0) == 0x80 )
      {
        v8 = (_BYTE *)(a1 + i - 3);
        do
        {
          v9 = v8 - 1;
          if ( (unsigned int)v8 <= v7 )
            break;
        }
        while ( (*v8-- & 0xC0) == 0x80 );
        v6 = v9 + 1;
      }
      v13[0] = v6;
      if ( get_utf8_char(v13) == -1 )
        *v6 = 0;
    }
  }
  return 0;
}
// 13E34C: using guessed type int under_debugger;
