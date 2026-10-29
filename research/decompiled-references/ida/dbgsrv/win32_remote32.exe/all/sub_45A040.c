/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45A040
// Address: 0x0045A040

//----- (0045A040) --------------------------------------------------------
int __stdcall sub_45A040(int *a1)
{
  unsigned __int8 v1; // dl
  char *v2; // ecx
  char v4; // bl
  int v5; // ecx
  unsigned int v6; // edx
  char v7; // bh
  unsigned int v8; // edx
  char v9; // bl
  char v10; // al

  v1 = *(_BYTE *)*a1;
  v2 = (char *)(*a1 + 1);
  if ( !v1 )
    return 0;
  if ( v1 < 0x80u )
  {
    *a1 = (int)v2;
    *a1 = (int)v2;
    return v1;
  }
  if ( (v1 & 0xE0) == 0xC0 )
  {
    v4 = *v2;
    v5 = *a1 + 2;
    if ( (unsigned __int8)(v4 + 0x80) <= 0x3Fu )
    {
      v6 = v4 & 0x3F | ((v1 & 0x1F) << 6);
      if ( v6 < 0x80 )
        return -1;
      goto LABEL_19;
    }
    return -1;
  }
  if ( (v1 & 0xF0) != 0xE0 )
  {
    if ( (v1 & 0xF8) != 0xF0 )
      return -1;
    v9 = *v2;
    if ( (unsigned __int8)(*v2 + 0x80) <= 0x3Fu && (unsigned __int8)(*(_BYTE *)(*a1 + 2) + 0x80) <= 0x3Fu )
    {
      v10 = *(_BYTE *)(*a1 + 3);
      v5 = *a1 + 4;
      if ( (unsigned __int8)(v10 + 0x80) <= 0x3Fu )
      {
        v6 = v10 & 0x3F | ((*(_BYTE *)(*a1 + 2) & 0x3F | ((v9 & 0x3F | ((v1 & 7) << 6)) << 6)) << 6);
        if ( v6 - 0x10000 > 0xFFFFF )
          return -1;
LABEL_19:
        *a1 = v5;
        return v6;
      }
    }
    return -1;
  }
  if ( (unsigned __int8)(*v2 + 0x80) > 0x3Fu )
    return -1;
  v7 = *(_BYTE *)(*a1 + 2);
  if ( (unsigned __int8)(v7 + 0x80) > 0x3Fu )
    return -1;
  v8 = v7 & 0x3F | ((*v2 & 0x3F | (v1 << 6) & 0x3FF) << 6);
  if ( v8 < 0x800 )
    return -1;
  *a1 += 3;
  return v8;
}
