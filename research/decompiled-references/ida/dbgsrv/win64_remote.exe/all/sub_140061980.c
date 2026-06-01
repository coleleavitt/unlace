/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140061980
// Address: 0x0000000140061980

//----- (0000000140061980) ----------------------------------------------------
__int64 __fastcall sub_140061980(unsigned __int8 *a1)
{
  unsigned __int8 v1; // dl
  __int64 v2; // rdi
  unsigned __int8 *v3; // r9
  unsigned __int8 *v4; // rax
  int v5; // r8d
  unsigned __int8 v6; // r10
  unsigned int v7; // edx
  unsigned __int8 v8; // r10
  unsigned __int8 v9; // r11
  unsigned __int8 v10; // r10
  unsigned __int8 v11; // r11
  unsigned __int8 v12; // bl
  unsigned __int8 *v13; // rcx

  v1 = *a1;
  v2 = 0;
  v3 = a1;
  if ( *a1 )
  {
    do
    {
      v4 = v3 + 1;
      v5 = -1;
      if ( v1 < 0x80u )
      {
        ++v3;
        v5 = v1;
        goto LABEL_19;
      }
      if ( (v1 & 0xE0) == 0xC0 )
      {
        v6 = *v4;
        v4 = v3 + 2;
        if ( (unsigned __int8)(v6 + 0x80) <= 0x3Fu )
        {
          v7 = v6 & 0x3F | ((v1 & 0x1F) << 6);
          if ( v7 < 0x80 )
            goto LABEL_19;
LABEL_18:
          v5 = v7;
          goto LABEL_19;
        }
      }
      else if ( (v1 & 0xF0) == 0xE0 )
      {
        v8 = *v4;
        if ( (unsigned __int8)(*v4 + 0x80) <= 0x3Fu )
        {
          v9 = v3[2];
          v4 = v3 + 3;
          if ( (unsigned __int8)(v9 + 0x80) <= 0x3Fu )
          {
            v7 = v9 & 0x3F | (unsigned __int16)((v8 & 0x3F | (v1 << 6)) << 6);
            if ( v7 < 0x800 )
              goto LABEL_19;
            goto LABEL_18;
          }
        }
      }
      else
      {
        if ( (v1 & 0xF8) != 0xF0 )
          goto LABEL_19;
        v10 = *v4;
        if ( (unsigned __int8)(*v4 + 0x80) <= 0x3Fu )
        {
          v11 = v3[2];
          if ( (unsigned __int8)(v11 + 0x80) <= 0x3Fu )
          {
            v12 = v3[3];
            v4 = v3 + 4;
            if ( (unsigned __int8)(v12 + 0x80) <= 0x3Fu )
            {
              v7 = v12 & 0x3F | ((v11 & 0x3F | ((v10 & 0x3F | ((v1 & 7) << 6)) << 6)) << 6);
              if ( v7 - 0x10000 <= 0xFFFFF )
                goto LABEL_18;
LABEL_19:
              if ( v5 == -1 )
                v4 = v3;
              v3 = v4;
            }
          }
        }
      }
      v13 = v3 + 1;
      if ( v5 != -1 )
        v13 = v3;
      ++v2;
      v3 = v13;
      v1 = *v13;
    }
    while ( *v13 );
  }
  return v2;
}
