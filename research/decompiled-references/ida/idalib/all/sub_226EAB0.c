void __fastcall sub_226EAB0(__int64 a1)
{
  char *v1; // r9
  char *v2; // rsi
  __int64 v3; // r10
  char v4; // al
  char *v5; // rdx
  char *v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx

  v1 = *(char **)(a1 + 40);
  v2 = *(char **)(a1 + 48);
  v3 = a1;
  if ( v1 == v2 )
    return;
  while ( 1 )
  {
    v4 = *v1;
    if ( *v1 != 32 && v4 != 9 )
      break;
    ++v1;
    ++*(_DWORD *)(a1 + 60);
    *(_QWORD *)(a1 + 40) = v1;
    if ( v1 == v2 )
      return;
  }
LABEL_4:
  if ( v4 != 35 )
  {
    v5 = v1;
    if ( v4 == 13 )
      goto LABEL_17;
LABEL_6:
    if ( v4 == 10 )
    {
      ++v1;
      goto LABEL_20;
    }
    return;
  }
  while ( 1 )
  {
    if ( (unsigned __int8)(v4 - 32) <= 0x5Eu || v4 == 9 )
    {
      v6 = v1++;
      goto LABEL_9;
    }
    if ( v4 >= 0 )
      break;
    v8 = sub_226DDA0(v1, v2 - v1);
    v6 = *(char **)(v3 + 40);
    v2 = *(char **)(v3 + 48);
    v9 = HIDWORD(v8);
    if ( (_DWORD)v8 != 65279
      && v9
      && ((unsigned int)(v8 - 160) <= 0xD75F
       || (_DWORD)v8 == 133
       || (unsigned int)(v8 - 57344) <= 0x1FFD
       || (unsigned int)(v8 - (_DWORD)&stru_10000) <= 0xFFFFF) )
    {
      v1 += v9;
    }
LABEL_9:
    if ( v1 == v6 )
      break;
    *(_QWORD *)(v3 + 40) = v1;
    ++*(_DWORD *)(v3 + 60);
    if ( v1 == v2 )
      return;
    v4 = *v1;
  }
  if ( v1 == v2 )
    return;
  v4 = *v1;
  v5 = v1;
  if ( *v1 != 13 )
    goto LABEL_6;
LABEL_17:
  if ( ++v1 == v2 )
    goto LABEL_21;
  if ( v5[1] == 10 )
    v1 = v5 + 2;
LABEL_20:
  if ( v1 != v5 )
  {
LABEL_21:
    v7 = *(_DWORD *)(v3 + 68);
    *(_QWORD *)(v3 + 40) = v1;
    ++*(_DWORD *)(v3 + 64);
    *(_DWORD *)(v3 + 60) = 0;
    if ( !v7 )
      *(_BYTE *)(v3 + 73) = 1;
    while ( v1 != v2 )
    {
      v4 = *v1;
      if ( *v1 != 32 && v4 != 9 )
        goto LABEL_4;
      ++v1;
      ++*(_DWORD *)(v3 + 60);
      *(_QWORD *)(v3 + 40) = v1;
    }
  }
}
