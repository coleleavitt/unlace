/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_458A70
// Address: 0x00458A70

//----- (00458A70) --------------------------------------------------------
int __cdecl sub_458A70(const char *a1, UINT *a2)
{
  int v2; // ebp
  unsigned int v3; // esi
  char *v4; // eax
  char *v5; // edi
  char *v6; // esi
  signed int v7; // eax
  UINT MaxCharSize; // ecx
  int (__cdecl *v9)(_DWORD *, unsigned __int8 *, int); // eax
  int v11; // eax
  UINT v12; // eax
  int *v13; // eax
  int v14; // [esp+10h] [ebp-24h]
  int v15; // [esp+14h] [ebp-20h]
  struct _cpinfo CPInfo; // [esp+1Ch] [ebp-18h] BYREF

  v2 = 0;
  v15 = 1;
  v14 = 0;
  v3 = strlen(a1);
  v4 = (char *)sub_46D25F(v3 + 1);
  v5 = v4;
  if ( !v4 )
    return 0;
  sub_464310((unsigned int)v4, (unsigned int)a1, v3);
  v5[v3] = 0;
  while ( 1 )
  {
    v6 = &v5[strlen(v5) - 1];
    if ( v5 > v6 )
      break;
    while ( *v6 != 47 || sub_467F80((int)v6, &word_48BF64, 2u) )
    {
      if ( v5 > --v6 )
        goto LABEL_7;
    }
    if ( !v6 )
      break;
    if ( !sub_468261((int)a2, (int)v5, (unsigned __int8 *)v6 + 2, "nocompat") )
    {
      v15 = 0;
      goto LABEL_16;
    }
    if ( sub_468261((int)a2, (int)v5, (unsigned __int8 *)v6 + 2, "translit") )
    {
      if ( sub_468261((int)a2, (int)v5, (unsigned __int8 *)v6 + 2, "ignore") )
      {
LABEL_16:
        v2 = v14;
        *v6 = 0;
      }
      else
      {
        v2 = v14 | 4;
        *v6 = 0;
        v14 |= 4u;
      }
    }
    else
    {
      v2 = v14 | 2;
      *v6 = 0;
      v14 |= 2u;
    }
  }
LABEL_7:
  a2[6] = 0;
  a2[1] = v2;
  a2[4] = 0;
  a2[5] = 0;
  a2[7] = 0;
  v7 = sub_458FF0((int)v5);
  *a2 = v7;
  switch ( v7 )
  {
    case 1200:
    case 1201:
      a2[2] = (UINT)sub_4592C0;
      a2[3] = (UINT)sub_459410;
      if ( sub_468261((int)a2, (int)v5, (unsigned __int8 *)v5, "UTF-16")
        && sub_468261((int)a2, (int)v5, (unsigned __int8 *)v5, "UTF16")
        && sub_468261((int)a2, (int)v5, (unsigned __int8 *)v5, "UCS-2")
        && sub_468261((int)a2, (int)v5, (unsigned __int8 *)v5, "UCS2") )
      {
        v11 = sub_468261((int)a2, (int)v5, (unsigned __int8 *)v5, "UCS-2-INTERNAL");
LABEL_47:
        if ( v11 )
          goto LABEL_49;
      }
LABEL_48:
      a2[1] |= 1u;
      goto LABEL_49;
    case 12000:
    case 12001:
      a2[2] = (UINT)sub_459530;
      a2[3] = (UINT)sub_459640;
      if ( sub_468261((int)a2, (int)v5, (unsigned __int8 *)v5, "UTF-32")
        && sub_468261((int)a2, (int)v5, (unsigned __int8 *)v5, "UTF32")
        && sub_468261((int)a2, (int)v5, (unsigned __int8 *)v5, "UCS-4") )
      {
        v11 = sub_468261((int)a2, (int)v5, (unsigned __int8 *)v5, "UCS4");
        goto LABEL_47;
      }
      goto LABEL_48;
    case 65001:
      a2[2] = (UINT)sub_458820;
      a2[3] = (UINT)sub_4588E0;
      a2[4] = (UINT)sub_459750;
      goto LABEL_49;
  }
  if ( (v7 == 50220 || v7 == 50221 || v7 == 50222) && sub_4589F0() )
  {
    a2[2] = (UINT)sub_458330;
    a2[3] = (UINT)sub_4585E0;
    a2[5] = (UINT)sub_4582B0;
    goto LABEL_49;
  }
  if ( *a2 == 51932 && sub_4589F0() )
  {
    a2[2] = (UINT)sub_458EA0;
    a2[3] = (UINT)sub_458F10;
    a2[4] = (UINT)sub_457E50;
    goto LABEL_49;
  }
  if ( !IsValidCodePage(*a2) || !GetCPInfo(*a2, &CPInfo) )
  {
    sub_46C918(v5);
    *sub_46B984() = 22;
    return 0;
  }
  MaxCharSize = CPInfo.MaxCharSize;
  a2[2] = (UINT)sub_458820;
  a2[3] = (UINT)sub_4588E0;
  if ( MaxCharSize == 1 )
  {
    a2[4] = (UINT)sub_40D230;
  }
  else
  {
    v9 = sub_458E20;
    if ( MaxCharSize == 2 )
      v9 = sub_457E20;
    a2[4] = (UINT)v9;
  }
LABEL_49:
  if ( v15 )
  {
    v12 = *a2;
    if ( (int)*a2 > 50221 )
    {
      if ( v12 == 50222 )
      {
LABEL_55:
        v13 = (int *)off_4B5CEC;
      }
      else
      {
        if ( v12 != 51932 )
          goto LABEL_57;
        v13 = (int *)off_4B5CE8[0];
      }
      a2[7] = (UINT)v13;
      goto LABEL_57;
    }
    if ( *a2 == 50221 )
      goto LABEL_55;
    switch ( v12 )
    {
      case 0x3A4u:
        a2[7] = (UINT)dword_4B5BF8;
        break;
      case 0x51C4u:
        a2[7] = (UINT)dword_4B5C70;
        break;
      case 0xC42Cu:
        goto LABEL_55;
    }
  }
LABEL_57:
  sub_46C918(v5);
  return 1;
}
// 4582B0: using guessed type int sub_4582B0();
// 4588E0: using guessed type int sub_4588E0();
// 48BF64: using guessed type __int16 word_48BF64;
// 4B5BF8: using guessed type int dword_4B5BF8[30];
// 4B5C70: using guessed type int dword_4B5C70[30];
// 4B5CE8: using guessed type int (*off_4B5CE8[2])[30];
// 4B5CEC: using guessed type int (*off_4B5CEC)[30];
