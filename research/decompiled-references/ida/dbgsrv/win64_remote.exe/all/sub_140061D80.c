/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140061D80
// Address: 0x0000000140061D80

//----- (0000000140061D80) ----------------------------------------------------
char __fastcall sub_140061D80(__int64 a1, unsigned __int16 *a2, int a3)
{
  unsigned __int16 *v4; // r14
  int v6; // esi
  int v7; // eax
  int v8; // ebx
  char v9; // dl
  int v10; // esi
  int v11; // eax
  unsigned int v12; // ebp

  v4 = a2;
  if ( a2 && a1 )
  {
    v6 = 0;
    v7 = 16;
    *(_QWORD *)(a1 + 8) = 0;
    if ( a3 > 0 )
      v7 = a3;
    if ( (unsigned __int64)v7 > *(_QWORD *)(a1 + 16) )
      *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v7, 1u);
    while ( 1 )
    {
      while ( 1 )
      {
        if ( a3 >= 0 && v6 >= a3 )
          return 1;
        v8 = *v4++;
        if ( a3 < 0 && !(_WORD)v8 )
          return 1;
        if ( (unsigned __int16)v8 >= 0x80u )
          break;
LABEL_24:
        sub_140004830(a1, v8);
        ++v6;
      }
      if ( (unsigned __int16)v8 < 0x800u )
        break;
      if ( (unsigned int)(v8 - 55296) > 0x3FF )
      {
        if ( (unsigned int)(v8 - 56320) <= 0x3FF )
          return 0;
        sub_140004830(a1, ((unsigned __int16)v8 >> 12) | 0xE0);
        v9 = ((unsigned __int16)v8 >> 6) & 0x3F | 0x80;
        goto LABEL_23;
      }
      v10 = v6 + 1;
      if ( a3 >= 0 && v10 >= a3 )
        return 0;
      v11 = *v4++;
      if ( a3 < 0 && !(_WORD)v11 )
        return 0;
      if ( (unsigned int)(v11 - 56320) > 0x3FF )
        return 0;
      v12 = v11 & 0x3FF | (((v8 & 0x3FF) + 64) << 10);
      sub_140004830(a1, (v12 >> 18) | 0xF0);
      sub_140004830(a1, (v12 >> 12) & 0x3F | 0x80);
      sub_140004830(a1, (v12 >> 6) & 0x3F | 0x80);
      sub_140004830(a1, v12 & 0x3F | 0x80);
      v6 = v10 + 1;
    }
    v9 = ((unsigned __int16)v8 >> 6) & 0x1F | 0xC0;
LABEL_23:
    sub_140004830(a1, v9);
    LOBYTE(v8) = v8 & 0x3F | 0x80;
    goto LABEL_24;
  }
  return 0;
}
