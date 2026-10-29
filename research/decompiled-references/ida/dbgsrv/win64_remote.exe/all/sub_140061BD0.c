/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140061BD0
// Address: 0x0000000140061BD0

//----- (0000000140061BD0) ----------------------------------------------------
__int64 __fastcall sub_140061BD0(unsigned __int8 **a1, __int64 a2)
{
  unsigned __int8 *v2; // r9
  __int64 v3; // r10
  unsigned __int8 v5; // r8
  unsigned __int8 *v6; // rax
  unsigned __int8 *v7; // rbx
  int v8; // edx
  unsigned int v9; // r8d
  unsigned __int8 v10; // r11
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // r11
  unsigned __int8 v13; // bl
  unsigned __int8 v14; // di
  int v15; // r8d

  v2 = *a1;
  v3 = a2;
  if ( a2 )
  {
    while ( 1 )
    {
      v5 = *v2;
      v6 = v2 + 1;
      v7 = v2;
      if ( !*v2 )
      {
        *a1 = v2;
        return v3;
      }
      v8 = -1;
      if ( v5 >= 0x80u )
      {
        if ( (v5 & 0xE0) == 0xC0 )
        {
          if ( (unsigned __int8)(*v6 + 0x80) <= 0x3Fu )
          {
            v2 += 2;
            v9 = *v6 & 0x3F | ((v5 & 0x1F) << 6);
            if ( v9 >= 0x80 )
              v8 = v9;
            if ( v8 == -1 )
              v2 = v7;
          }
          goto LABEL_29;
        }
        if ( (v5 & 0xF0) == 0xE0 )
        {
          v10 = *v6;
          if ( (unsigned __int8)(*v6 + 0x80) <= 0x3Fu )
          {
            v11 = v2[2];
            if ( (unsigned __int8)(v11 + 0x80) <= 0x3Fu )
            {
              v2 += 3;
              if ( (v11 & 0x3Fu | (unsigned __int16)((v10 & 0x3F | (v5 << 6)) << 6)) >= 0x800 )
                v8 = v11 & 0x3F | (unsigned __int16)((v10 & 0x3F | (v5 << 6)) << 6);
              if ( v8 == -1 )
                v2 = v7;
            }
          }
          goto LABEL_29;
        }
        if ( (v5 & 0xF8) == 0xF0 )
        {
          v12 = *v6;
          if ( (unsigned __int8)(*v6 + 0x80) > 0x3Fu )
            goto LABEL_29;
          v13 = v2[2];
          if ( (unsigned __int8)(v13 + 0x80) > 0x3Fu )
            goto LABEL_29;
          v14 = v2[3];
          v6 = v2 + 4;
          if ( (unsigned __int8)(v14 + 0x80) > 0x3Fu )
            goto LABEL_29;
          v15 = v14 & 0x3F | ((v13 & 0x3F | ((v12 & 0x3F | ((v5 & 7) << 6)) << 6)) << 6);
          if ( (unsigned int)(v15 - 0x10000) <= 0xFFFFF )
            v8 = v15;
        }
      }
      else
      {
        ++v2;
        v8 = v5;
      }
      if ( v8 == -1 )
        v6 = v2;
      v2 = v6;
      if ( !v8 )
      {
LABEL_32:
        *a1 = v6;
        return v3;
      }
LABEL_29:
      v6 = v2 + 1;
      if ( v8 != -1 )
        v6 = v2;
      v2 = v6;
      if ( !--v3 )
        goto LABEL_32;
    }
  }
  *a1 = v2;
  return 0;
}
