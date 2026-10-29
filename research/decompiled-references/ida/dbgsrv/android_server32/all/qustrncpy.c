/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qustrncpy
// Address: 0x00075268

//----- (00075268) --------------------------------------------------------
int __fastcall qustrncpy(unsigned int a1, int a2, int a3)
{
  unsigned int v3; // r4
  int v4; // r7
  int v5; // r6
  int v6; // r3
  _BYTE *v7; // r1
  int v8; // r4
  unsigned __int8 *v9; // r6
  unsigned int v10; // r2
  int v11; // r4
  _BYTE *v12; // r3
  unsigned __int8 v13; // r4
  unsigned int v15; // [sp+4h] [bp-18h]
  unsigned int v16; // [sp+Ch] [bp-10h]
  unsigned __int8 *v17; // [sp+14h] [bp-8h] BYREF

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
LABEL_23:
    __debugbreak();
  }
  if ( !a3 )
  {
    if ( !under_debugger )
      interr(1538);
    goto LABEL_23;
  }
  v15 = a1 + a3;
  v3 = a1 - 1;
  v16 = a1 - 2;
  v4 = 0;
  while ( 1 )
  {
    v5 = *(unsigned __int8 *)(a2 + v4);
    *(_BYTE *)(a1 + v4) = v5;
    v6 = 1;
    if ( !v5 )
      break;
    if ( a3 == ++v4 )
    {
      v6 = 0;
      *(_BYTE *)(v3 + v4) = 0;
      v7 = (_BYTE *)(v3 + v4 - 2);
      if ( v3 + v4 > a1 )
      {
        v8 = *(char *)(v16 + v4);
        v9 = (unsigned __int8 *)(v16 + v4);
        if ( v8 < 0 )
        {
          v10 = v15 - 4;
          if ( v15 - 4 <= a1 )
            v10 = a1;
          v11 = v8 & 0xC0;
          if ( (unsigned int)v9 > v10 && v11 == 128 )
          {
            do
            {
              v12 = v7 - 1;
              v13 = *v7 & 0xC0;
              if ( (unsigned int)v7 <= v10 )
                break;
              --v7;
            }
            while ( v13 == 128 );
            v9 = v12 + 1;
          }
          v17 = v9;
          if ( get_utf8_char(&v17) == -1 )
            *v9 = 0;
          return 0;
        }
      }
      return v6;
    }
  }
  return v6;
}
// E0550: using guessed type char under_debugger;
