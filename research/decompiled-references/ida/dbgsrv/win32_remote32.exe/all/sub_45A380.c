/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45A380
// Address: 0x0045A380

//----- (0045A380) --------------------------------------------------------
int __stdcall sub_45A380(_BYTE *a1)
{
  _BYTE *v1; // edi
  int v2; // ebp
  unsigned __int8 v3; // bl
  int v4; // edx
  _BYTE *v5; // eax
  char v6; // ch
  unsigned int v7; // esi
  bool v8; // cf
  _BYTE *v9; // ecx
  char v11; // ch
  char v12; // bh
  char v13; // ch
  char v14; // [esp+10h] [ebp+4h]

  v1 = a1;
  v2 = 0;
  v3 = *a1;
  if ( *a1 )
  {
    do
    {
      v4 = -1;
      v5 = v1 + 1;
      if ( v3 < 0x80u )
      {
        ++v1;
        v4 = v3;
        goto LABEL_9;
      }
      if ( (v3 & 0xE0) == 0xC0 )
      {
        v6 = *v5;
        v5 = v1 + 2;
        if ( (unsigned __int8)(v6 + 0x80) <= 0x3Fu )
        {
          v7 = v6 & 0x3F | ((v3 & 0x1F) << 6);
          v8 = v7 < 0x80;
          goto LABEL_7;
        }
      }
      else if ( (v3 & 0xF0) == 0xE0 )
      {
        v11 = *v5;
        if ( (unsigned __int8)(*v5 + 0x80) <= 0x3Fu )
        {
          v12 = v1[2];
          v5 = v1 + 3;
          if ( (unsigned __int8)(v12 + 0x80) <= 0x3Fu )
          {
            v7 = v12 & 0x3F | ((v11 & 0x3F | (v3 << 6) & 0x3FF) << 6);
            v8 = v7 < 0x800;
LABEL_7:
            if ( !v8 )
              goto LABEL_8;
            goto LABEL_9;
          }
        }
      }
      else
      {
        if ( (v3 & 0xF8) != 0xF0 )
          goto LABEL_9;
        v13 = *v5;
        if ( (unsigned __int8)(*v5 + 0x80) <= 0x3Fu && (unsigned __int8)(v1[2] + 0x80) <= 0x3Fu )
        {
          v5 = v1 + 4;
          v14 = v1[3];
          if ( (unsigned __int8)(v14 + 0x80) <= 0x3Fu )
          {
            v7 = v14 & 0x3F | ((v1[2] & 0x3F | ((v13 & 0x3F | ((v3 & 7) << 6)) << 6)) << 6);
            if ( v7 - 0x10000 <= 0xFFFFF )
LABEL_8:
              v4 = v7;
LABEL_9:
            if ( v4 == -1 )
              v5 = v1;
            v1 = v5;
            goto LABEL_12;
          }
        }
      }
      v4 = -1;
LABEL_12:
      v9 = v1 + 1;
      if ( v4 != -1 )
        v9 = v1;
      ++v2;
      v1 = v9;
      v3 = *v9;
    }
    while ( *v9 );
  }
  return v2;
}
