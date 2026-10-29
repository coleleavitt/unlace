/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400615C0
// Address: 0x00000001400615C0

//----- (00000001400615C0) ----------------------------------------------------
__int64 __fastcall sub_1400615C0(unsigned __int8 **a1)
{
  unsigned __int8 v2; // r8
  unsigned __int8 *v3; // rdx
  unsigned int v5; // ecx
  unsigned __int8 v6; // r9
  unsigned __int8 *v7; // rdx
  unsigned int v8; // r8d
  unsigned __int8 v9; // r9
  unsigned __int8 v10; // r11
  unsigned __int8 *v11; // rdx
  unsigned int v12; // r8d
  unsigned __int8 v13; // r9
  unsigned __int8 v14; // r11
  unsigned __int8 v15; // bl
  unsigned __int8 *v16; // rdx
  int v17; // r8d

  v2 = **a1;
  v3 = *a1 + 1;
  if ( !v2 )
    return 0;
  v5 = -1;
  if ( v2 < 0x80u )
  {
    *a1 = v3;
    *a1 = v3;
    return v2;
  }
  if ( (v2 & 0xE0) == 0xC0 )
  {
    v6 = *v3;
    v7 = v3 + 1;
    if ( (unsigned __int8)(v6 + 0x80) <= 0x3Fu )
    {
      v8 = v6 & 0x3F | ((v2 & 0x1F) << 6);
      if ( v8 >= 0x80 )
      {
        *a1 = v7;
        return v8;
      }
    }
  }
  else if ( (v2 & 0xF0) == 0xE0 )
  {
    v9 = *v3;
    if ( (unsigned __int8)(*v3 + 0x80) <= 0x3Fu )
    {
      v10 = v3[1];
      v11 = v3 + 2;
      if ( (unsigned __int8)(v10 + 0x80) <= 0x3Fu )
      {
        v12 = v10 & 0x3F | (unsigned __int16)((v9 & 0x3F | (v2 << 6)) << 6);
        if ( v12 >= 0x800 )
        {
          *a1 = v11;
          return v12;
        }
      }
    }
  }
  else if ( (v2 & 0xF8) == 0xF0 )
  {
    v13 = *v3;
    if ( (unsigned __int8)(*v3 + 0x80) <= 0x3Fu )
    {
      v14 = v3[1];
      if ( (unsigned __int8)(v14 + 0x80) <= 0x3Fu )
      {
        v15 = v3[2];
        v16 = v3 + 3;
        if ( (unsigned __int8)(v15 + 0x80) <= 0x3Fu )
        {
          v17 = v15 & 0x3F | ((v14 & 0x3F | ((v13 & 0x3F | ((v2 & 7) << 6)) << 6)) << 6);
          if ( (unsigned int)(v17 - 0x10000) <= 0xFFFFF )
          {
            v5 = v17;
            *a1 = v16;
          }
        }
      }
    }
  }
  return v5;
}
