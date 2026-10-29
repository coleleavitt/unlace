/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005FED0
// Address: 0x000000014005FED0

//----- (000000014005FED0) ----------------------------------------------------
__int64 __fastcall sub_14005FED0(const char *Src, __int64 a2)
{
  int v3; // r14d
  int v5; // r15d
  size_t v6; // rbx
  char *v7; // rax
  char *v8; // rsi
  const char *v9; // rbx
  int v10; // ecx
  UINT MaxCharSize; // ecx
  __int64 (__fastcall *v12)(_DWORD *, unsigned __int8 *, int); // rax
  const char *v14; // rdx
  UINT v15; // eax
  struct _cpinfo CPInfo; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  v5 = 1;
  v6 = strlen(Src);
  v7 = (char *)j__malloc_base(v6 + 1);
  v8 = v7;
  if ( !v7 )
    return 0;
  memcpy(v7, Src, v6);
  v8[v6] = 0;
  while ( 1 )
  {
    v9 = &v8[strlen(v8) - 1];
    if ( v8 > v9 )
      break;
    while ( *v9 != 47 || strncmp(v9, "//", 2u) )
    {
      if ( v8 > --v9 )
        goto LABEL_7;
    }
    if ( !stricmp(v9 + 2, "nocompat") )
    {
      v5 = 0;
      *v9 = 0;
    }
    else if ( !stricmp(v9 + 2, "translit") )
    {
      v3 |= 2u;
      *v9 = 0;
    }
    else
    {
      if ( !stricmp(v9 + 2, "ignore") )
        v3 |= 4u;
      *v9 = 0;
    }
  }
LABEL_7:
  *(_DWORD *)(a2 + 40) = 0;
  *(_DWORD *)(a2 + 4) = v3;
  *(_QWORD *)(a2 + 24) = 0;
  *(_QWORD *)(a2 + 32) = 0;
  *(_QWORD *)(a2 + 48) = 0;
  v10 = sub_1400604A0(v8);
  *(_DWORD *)a2 = v10;
  if ( (unsigned int)(v10 - 1200) <= 1 )
  {
    *(_QWORD *)(a2 + 8) = sub_140060710;
    *(_QWORD *)(a2 + 16) = sub_140060890;
    if ( stricmp(v8, "UTF-16") && stricmp(v8, "UTF16") && stricmp(v8, "UCS-2") && stricmp(v8, "UCS2") )
    {
      v14 = "UCS-2-INTERNAL";
LABEL_42:
      if ( stricmp(v8, v14) )
        goto LABEL_44;
    }
LABEL_43:
    *(_DWORD *)(a2 + 4) |= 1u;
    goto LABEL_44;
  }
  if ( (unsigned int)(v10 - 12000) <= 1 )
  {
    *(_QWORD *)(a2 + 8) = sub_1400609C0;
    *(_QWORD *)(a2 + 16) = sub_140060B50;
    if ( stricmp(v8, "UTF-32") && stricmp(v8, "UTF32") && stricmp(v8, "UCS-4") )
    {
      v14 = "UCS4";
      goto LABEL_42;
    }
    goto LABEL_43;
  }
  if ( v10 == 65001 )
  {
    *(_QWORD *)(a2 + 8) = sub_14005FBD0;
    *(_QWORD *)(a2 + 16) = sub_14005FCA0;
    *(_QWORD *)(a2 + 24) = sub_140060C60;
    goto LABEL_44;
  }
  if ( (unsigned int)(v10 - 50220) <= 2 && (unsigned int)sub_14005FDF0() )
  {
    *(_QWORD *)(a2 + 8) = sub_14005F6B0;
    *(_QWORD *)(a2 + 16) = sub_14005F960;
    *(_QWORD *)(a2 + 32) = sub_14005F610;
    goto LABEL_44;
  }
  if ( *(_DWORD *)a2 == 51932 && (unsigned int)sub_14005FDF0() )
  {
    *(_QWORD *)(a2 + 8) = sub_140060340;
    *(_QWORD *)(a2 + 16) = sub_1400603D0;
    *(_QWORD *)(a2 + 24) = sub_14005F250;
    goto LABEL_44;
  }
  if ( !IsValidCodePage(*(_DWORD *)a2) || !GetCPInfo(*(_DWORD *)a2, &CPInfo) )
  {
    free(v8);
    *errno() = 22;
    return 0;
  }
  MaxCharSize = CPInfo.MaxCharSize;
  *(_QWORD *)(a2 + 8) = sub_14005FBD0;
  *(_QWORD *)(a2 + 16) = sub_14005FCA0;
  if ( MaxCharSize == 1 )
  {
    *(_QWORD *)(a2 + 24) = charNode::raw_length;
  }
  else
  {
    v12 = sub_1400602B0;
    if ( MaxCharSize == 2 )
      v12 = sub_14005F210;
    *(_QWORD *)(a2 + 24) = v12;
  }
LABEL_44:
  if ( v5 )
  {
    v15 = *(_DWORD *)a2;
    if ( *(int *)a2 > 50221 )
    {
      if ( v15 != 50222 )
      {
        if ( v15 == 51932 )
          *(__int64 (**)[16])(a2 + 48) = off_1400C9EE8[0];
        goto LABEL_51;
      }
LABEL_50:
      *(_QWORD *)(a2 + 48) = off_1400C9EF0;
      goto LABEL_51;
    }
    switch ( v15 )
    {
      case 0xC42Du:
        goto LABEL_50;
      case 0x3A4u:
        *(_QWORD *)(a2 + 48) = qword_1400C9DF0;
        break;
      case 0x51C4u:
        *(_QWORD *)(a2 + 48) = qword_1400C9E70;
        break;
      case 0xC42Cu:
        goto LABEL_50;
    }
  }
LABEL_51:
  free(v8);
  return 1;
}
// 1400C9DF0: using guessed type __int64 qword_1400C9DF0[16];
// 1400C9E70: using guessed type __int64 qword_1400C9E70[15];
// 1400C9EE8: using guessed type __int64 (*off_1400C9EE8[2])[16];
// 1400C9EF0: using guessed type __int64 (*off_1400C9EF0)[16];
