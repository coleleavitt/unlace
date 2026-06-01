/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45A180
// Address: 0x0045A180

//----- (0045A180) --------------------------------------------------------
char __stdcall sub_45A180(_BYTE *a1)
{
  _BYTE *v1; // edi
  unsigned __int8 v2; // dl
  int v3; // esi
  _BYTE *v4; // eax
  char v5; // bl
  unsigned int v6; // edx
  char v7; // bl
  char v8; // bh
  unsigned int v9; // edx
  char v10; // bl
  char v11; // bh
  char v12; // cl
  int v13; // edx

  v1 = a1;
  v2 = *a1;
  if ( !*a1 )
    return 1;
  while ( 1 )
  {
    v3 = -1;
    v4 = v1 + 1;
    if ( v2 >= 0x80u )
    {
      if ( (v2 & 0xE0) == 0xC0 )
      {
        v5 = *v4;
        v4 = v1 + 2;
        if ( (unsigned __int8)(v5 + 0x80) > 0x3Fu )
          return 0;
        v6 = v5 & 0x3F | ((v2 & 0x1F) << 6);
        if ( v6 >= 0x80 )
          v3 = v6;
      }
      else if ( (v2 & 0xF0) == 0xE0 )
      {
        v7 = *v4;
        if ( (unsigned __int8)(*v4 + 0x80) > 0x3Fu )
          return 0;
        v8 = v1[2];
        v4 = v1 + 3;
        if ( (unsigned __int8)(v8 + 0x80) > 0x3Fu )
          return 0;
        v9 = v8 & 0x3F | ((v7 & 0x3F | (v2 << 6) & 0x3FF) << 6);
        if ( v9 >= 0x800 )
          v3 = v9;
      }
      else if ( (v2 & 0xF8) == 0xF0 )
      {
        v10 = *v4;
        if ( (unsigned __int8)(*v4 + 0x80) > 0x3Fu )
          return 0;
        v11 = v1[2];
        if ( (unsigned __int8)(v11 + 0x80) > 0x3Fu )
          return 0;
        v12 = v1[3];
        v4 = v1 + 4;
        if ( (unsigned __int8)(v12 + 0x80) > 0x3Fu )
          return 0;
        v13 = v12 & 0x3F | ((v11 & 0x3F | ((v10 & 0x3F | ((v2 & 7) << 6)) << 6)) << 6);
        if ( (unsigned int)(v13 - 0x10000) <= 0xFFFFF )
          v3 = v13;
      }
    }
    else
    {
      ++v1;
      v3 = v2;
    }
    if ( v3 == -1 )
      v4 = v1;
    v1 = v4;
    if ( v3 == -1 )
      break;
    v2 = *v4;
    if ( !*v4 )
      return 1;
  }
  return 0;
}
