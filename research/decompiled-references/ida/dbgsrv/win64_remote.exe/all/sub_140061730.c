/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140061730
// Address: 0x0000000140061730

//----- (0000000140061730) ----------------------------------------------------
char __fastcall sub_140061730(unsigned __int8 *a1)
{
  unsigned __int8 v1; // dl
  unsigned __int8 *v2; // r9
  unsigned __int8 *v3; // rax
  int v4; // r8d
  unsigned __int8 v5; // r10
  unsigned int v6; // edx
  unsigned __int8 v7; // r10
  unsigned __int8 v8; // r11
  unsigned int v9; // edx
  unsigned __int8 v10; // r10
  unsigned __int8 v11; // r11
  unsigned __int8 v12; // bl
  int v13; // edx

  v1 = *a1;
  v2 = a1;
  if ( !*a1 )
    return 1;
  while ( 1 )
  {
    v3 = v2 + 1;
    v4 = -1;
    if ( v1 >= 0x80u )
    {
      if ( (v1 & 0xE0) == 0xC0 )
      {
        v5 = *v3;
        v3 = v2 + 2;
        if ( (unsigned __int8)(v5 + 0x80) > 0x3Fu )
          return 0;
        v6 = v5 & 0x3F | ((v1 & 0x1F) << 6);
        if ( v6 >= 0x80 )
          v4 = v6;
      }
      else if ( (v1 & 0xF0) == 0xE0 )
      {
        v7 = *v3;
        if ( (unsigned __int8)(*v3 + 0x80) > 0x3Fu )
          return 0;
        v8 = v2[2];
        v3 = v2 + 3;
        if ( (unsigned __int8)(v8 + 0x80) > 0x3Fu )
          return 0;
        v9 = v8 & 0x3F | (unsigned __int16)((v7 & 0x3F | (v1 << 6)) << 6);
        if ( v9 >= 0x800 )
          v4 = v9;
      }
      else if ( (v1 & 0xF8) == 0xF0 )
      {
        v10 = *v3;
        if ( (unsigned __int8)(*v3 + 0x80) > 0x3Fu )
          return 0;
        v11 = v2[2];
        if ( (unsigned __int8)(v11 + 0x80) > 0x3Fu )
          return 0;
        v12 = v2[3];
        v3 = v2 + 4;
        if ( (unsigned __int8)(v12 + 0x80) > 0x3Fu )
          return 0;
        v13 = v12 & 0x3F | ((v11 & 0x3F | ((v10 & 0x3F | ((v1 & 7) << 6)) << 6)) << 6);
        if ( (unsigned int)(v13 - 0x10000) <= 0xFFFFF )
          v4 = v13;
      }
    }
    else
    {
      ++v2;
      v4 = v1;
    }
    if ( v4 == -1 )
      v3 = v2;
    v2 = v3;
    if ( v4 == -1 )
      break;
    v1 = *v3;
    if ( !*v3 )
      return 1;
  }
  return 0;
}
