bool __fastcall sub_64B100(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // r12d
  unsigned int v9; // eax
  __int64 v10; // rcx
  size_t v11; // rdi
  unsigned __int64 v12; // rsi
  int v13; // r12d
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  _BYTE *v19; // rax
  __int64 v20; // rax
  bool result; // al
  size_t v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // r8

  if ( (*(_BYTE *)(a1 + 8) & 1) == 0 )
    return 1;
  v8 = (((unsigned int)(3 * *(_DWORD *)(a1 + 12) + 3) >> 1) + 0x1FFF) & 0xFFFFE000;
  if ( *(_DWORD *)(a1 + 16) == v8 )
  {
    v9 = 0;
    if ( !v8 )
      goto LABEL_5;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = v8;
    qfree(*(void **)(a1 + 24));
    v20 = qcalloc(v8, 4);
    *(_QWORD *)(a1 + 24) = v20;
    if ( !v20 )
      return 0;
    sub_648B00(a1, 0, a2);
    v9 = 0;
    if ( !*(_DWORD *)(a1 + 16) )
      goto LABEL_5;
  }
  do
  {
    v10 = (int)v9++;
    *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v10) = 0x7FFFFFFF;
  }
  while ( v9 < *(_DWORD *)(a1 + 16) );
LABEL_5:
  v11 = *(_QWORD *)(a1 + 32);
  v12 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 12) )
  {
    if ( !a2 )
    {
      v13 = 0;
LABEL_8:
      v14 = *(_DWORD *)v11;
      if ( *(_DWORD *)v11 == 2147483646 )
      {
LABEL_11:
        v11 = sub_647640((const char *)v11);
        goto LABEL_12;
      }
      v15 = *(char *)(v11 + 4);
      if ( *(_BYTE *)(v11 + 4) == 35 )
      {
        if ( !*(_BYTE *)(v11 + 5) )
          goto LABEL_11;
LABEL_42:
        v22 = v11 + 5;
      }
      else
      {
        v17 = v11 + 4;
LABEL_35:
        v22 = v17 + 1;
        v23 = 0;
        if ( !(_BYTE)v15 )
          goto LABEL_38;
      }
      v23 = 0;
      do
      {
        ++v22;
        v23 = v15 ^ __ROL4__(v23, 5);
        v15 = *(char *)(v22 - 1);
      }
      while ( *(_BYTE *)(v22 - 1) );
LABEL_38:
      v24 = (int)(v23 % *(_DWORD *)(a1 + 16));
      v25 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL * (int)v24);
      v26 = v25 | v14 & 0x80000000;
      *(_DWORD *)v11 = v26;
      if ( v25 < 0 )
        sub_647850(v11, v12, v24, v22, v26, a6);
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v24) = v11 - *(_DWORD *)(a1 + 32);
      if ( !a2 )
        goto LABEL_11;
      LODWORD(a6) = *(_DWORD *)(a1 + 20);
      v12 = *(_QWORD *)(a1 + 32);
      while ( 1 )
      {
        v11 = (size_t)sub_649150(a6, v12, (_DWORD *)v11);
LABEL_12:
        if ( !v11 )
          return 0;
        if ( (unsigned int)++v13 >= *(_DWORD *)(a1 + 12) )
          goto LABEL_44;
        if ( !a2 )
          goto LABEL_8;
        v16 = *(unsigned int *)(a1 + 20);
        v12 = *(_QWORD *)(a1 + 32);
        a6 = v16;
LABEL_16:
        v17 = v11 + 4;
        if ( v11 + 4 > v12 + v16 || v11 < v12 )
          return 0;
        v14 = *(_DWORD *)v11;
        if ( *(_DWORD *)v11 != 2147483646 )
        {
          if ( v17 < v12 )
            return 0;
          v18 = v12 + v16 - 1;
          v19 = (_BYTE *)(v11 + 4);
          if ( v17 >= v18 )
            return 0;
          while ( *v19 )
          {
            if ( (_BYTE *)v18 == ++v19 )
              return 0;
          }
          if ( (unsigned __int64)v19 >= v18 )
            return 0;
          v15 = *(char *)(v11 + 4);
          if ( *(_BYTE *)(v11 + 4) != 35 )
            goto LABEL_35;
          if ( *(_BYTE *)(v11 + 5) )
            goto LABEL_42;
        }
      }
    }
    if ( v11 )
    {
      v16 = *(unsigned int *)(a1 + 20);
      v13 = 0;
      a6 = v16;
      goto LABEL_16;
    }
    return 0;
  }
LABEL_44:
  if ( a2 && v11 != *(_QWORD *)(a1 + 32) + *(unsigned int *)(a1 + 20) )
    return 0;
  result = 1;
  if ( (*(_BYTE *)(a1 + 8) & 2) != 0 )
    return sub_64AEC0(a1, a2) != nullptr;
  return result;
}
