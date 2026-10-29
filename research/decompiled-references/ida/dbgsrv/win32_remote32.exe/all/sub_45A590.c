/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45A590
// Address: 0x0045A590

//----- (0045A590) --------------------------------------------------------
int __stdcall sub_45A590(unsigned __int8 **a1, int a2)
{
  int v2; // ebp
  unsigned __int8 *v3; // edi
  unsigned __int8 v4; // bl
  unsigned __int8 *v5; // eax
  int v6; // edx
  unsigned __int8 v7; // ch
  unsigned int v8; // esi
  bool v9; // cf
  unsigned __int8 *v10; // ecx
  unsigned __int8 v12; // ch
  unsigned __int8 v13; // bh
  unsigned __int8 v14; // ch
  unsigned __int8 v15; // [esp+10h] [ebp+8h]

  v2 = a2;
  v3 = *a1;
  if ( a2 )
  {
    while ( 1 )
    {
      v4 = *v3;
      v5 = v3 + 1;
      if ( !*v3 )
      {
LABEL_16:
        *a1 = v3;
        return v2;
      }
      v6 = -1;
      if ( v4 < 0x80u )
      {
        ++v3;
        v6 = v4;
        goto LABEL_10;
      }
      if ( (v4 & 0xE0) == 0xC0 )
        break;
      if ( (v4 & 0xF0) == 0xE0 )
      {
        v12 = *v5;
        if ( (unsigned __int8)(*v5 + 0x80) > 0x3Fu )
          goto LABEL_17;
        v13 = v3[2];
        v5 = v3 + 3;
        if ( (unsigned __int8)(v13 + 0x80) > 0x3Fu )
          goto LABEL_17;
        v8 = v13 & 0x3F | ((v12 & 0x3F | (v4 << 6) & 0x3FF) << 6);
        v9 = v8 < 0x800;
LABEL_8:
        if ( v9 )
          goto LABEL_10;
LABEL_9:
        v6 = v8;
        goto LABEL_10;
      }
      if ( (v4 & 0xF8) == 0xF0 )
      {
        v14 = *v5;
        if ( (unsigned __int8)(*v5 + 0x80) > 0x3Fu
          || (unsigned __int8)(v3[2] + 0x80) > 0x3Fu
          || (v5 = v3 + 4, v15 = v3[3], (unsigned __int8)(v15 + 0x80) > 0x3Fu) )
        {
LABEL_17:
          v6 = -1;
          goto LABEL_13;
        }
        v8 = v15 & 0x3F | ((v3[2] & 0x3F | ((v14 & 0x3F | ((v4 & 7) << 6)) << 6)) << 6);
        if ( v8 - 0x10000 <= 0xFFFFF )
          goto LABEL_9;
      }
LABEL_10:
      if ( v6 == -1 )
        v5 = v3;
      v3 = v5;
      if ( !v6 )
        goto LABEL_16;
LABEL_13:
      v10 = v3 + 1;
      if ( v6 != -1 )
        v10 = v3;
      v3 = v10;
      if ( !--v2 )
        goto LABEL_16;
    }
    v7 = *v5;
    v5 = v3 + 2;
    if ( (unsigned __int8)(v7 + 0x80) > 0x3Fu )
      goto LABEL_17;
    v8 = v7 & 0x3F | ((v4 & 0x1F) << 6);
    v9 = v8 < 0x80;
    goto LABEL_8;
  }
  *a1 = v3;
  return 0;
}
