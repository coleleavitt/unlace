__int64 __fastcall sub_13F10C0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v4; // eax
  __int64 v6; // r8
  char v7; // bl
  char v8; // r11
  _QWORD *v9; // rcx
  _QWORD *v10; // r9
  _QWORD *v11; // r8
  __int64 v12; // r15
  __int64 v13; // r9
  __int16 v14; // r8
  __int16 v15; // cx
  unsigned int v19; // r12d
  char v20; // dl
  __int64 v21; // rsi
  bool v22; // r15
  __int64 *v23; // rcx
  __int64 v24; // r9
  __int16 v25; // dx
  __int16 v26; // si
  __int64 v27; // rsi
  bool v28; // r10
  __int64 v29; // rdi
  __int64 v30; // rdi
  _QWORD *v31; // r8
  _QWORD *v32; // rsi
  _QWORD *v33; // rdx
  int v34; // edi
  __int64 v35; // rsi
  _QWORD *v36; // r8
  _QWORD *v37; // rcx
  _QWORD *v38; // rdx
  __int64 v39; // rdx
  int v40; // eax
  char v41; // [rsp+1h] [rbp-91h]
  __int64 *v42; // [rsp+12h] [rbp-80h]
  void *s1; // [rsp+1Ah] [rbp-78h] BYREF
  size_t n; // [rsp+22h] [rbp-70h]
  __int64 v45; // [rsp+2Ah] [rbp-68h] BYREF
  void *s2[2]; // [rsp+3Ah] [rbp-58h] BYREF
  __int64 v47; // [rsp+4Ah] [rbp-48h] BYREF

  v4 = *(_DWORD *)(a1 + 28);
  if ( v4 != *(_DWORD *)(a2 + 28) )
    return 0;
  v6 = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)v6 != *(_DWORD *)(a2 + 24) )
    return 0;
  v7 = *(_BYTE *)(a1 + 36);
  v8 = *(_BYTE *)(a2 + 36);
  if ( ((v7 & 2) != 0) != ((v8 & 2) != 0) || ((v7 & 4) != 0) != ((v8 & 4) != 0) || ((v7 & 8) != 0) != ((v8 & 8) != 0) )
    return 0;
  v41 = a4 ^ 1;
  if ( a4 != 1 )
  {
    v9 = *(_QWORD **)(a1 + 8);
    v10 = *(_QWORD **)(a2 + 8);
    v11 = &v9[v6];
    if ( v11 != v9 )
    {
      if ( *v10 != *v9 )
        return 0;
      while ( 1 )
      {
        ++v9;
        ++v10;
        if ( v9 == v11 )
          break;
        if ( *v9 != *v10 )
          return 0;
      }
    }
  }
  if ( !v4 )
    return 1;
  v12 = *(_QWORD *)(a1 + 16);
  v13 = *(_QWORD *)(a2 + 16);
  v14 = *(_WORD *)(v12 + 16);
  v15 = *(_WORD *)(v13 + 16);
  if ( v14 != v15 )
    return 0;
  v19 = 0;
  while ( 1 )
  {
    if ( (unsigned __int16)(v14 - 7) > 0xCu )
    {
      if ( v14 != 1 )
      {
        v27 = *(_QWORD *)(v12 + 8);
        if ( v27 )
        {
          v20 = 0;
          v28 = v15 == 7 || (unsigned __int16)(v15 - 9) <= 2u;
          if ( v28 )
            goto LABEL_42;
          goto LABEL_38;
        }
      }
      v20 = 0;
    }
    else
    {
      v20 = 1;
    }
    if ( (unsigned __int16)(v15 - 7) <= 0xCu || v15 == 1 || !*(_QWORD *)(v13 + 8) )
    {
      sub_13D35F0((__int64)s2, v13, *(_QWORD *)(a3 + 88), *(_QWORD *)(a3 + 56), nullptr);
      v21 = v12;
      v22 = 0;
      sub_13D35F0((__int64)&s1, v21, *(_QWORD *)(a3 + 88), *(_QWORD *)(a3 + 56), nullptr);
      v23 = (__int64 *)s1;
      if ( (void *)n == s2[1] )
      {
        v22 = 1;
        if ( n )
        {
          v42 = (__int64 *)s1;
          v40 = memcmp(s1, s2[0], n);
          v23 = v42;
          v22 = v40 == 0;
        }
      }
      if ( v23 != &v45 )
        operator delete(v23);
      if ( s2[0] != &v47 )
        operator delete(s2[0]);
      if ( !v22 )
        return 0;
      v4 = *(_DWORD *)(a1 + 28);
      goto LABEL_29;
    }
    if ( v20 )
      goto LABEL_54;
    if ( v14 == 1 )
    {
      if ( ((v15 - 7) & 0xFFFD) == 0 )
        goto LABEL_29;
LABEL_54:
      if ( (unsigned __int16)(v15 - 10) <= 1u || (unsigned __int16)(v15 - 12) <= 7u )
        goto LABEL_29;
      v27 = 0;
      goto LABEL_57;
    }
    v27 = *(_QWORD *)(v12 + 8);
    if ( (unsigned __int16)(v15 - 9) <= 2u )
      goto LABEL_40;
LABEL_38:
    v20 = 0;
    if ( (unsigned __int16)(v15 - 12) <= 7u || v15 == 8 )
    {
LABEL_40:
      v28 = 1;
      v29 = 0;
      goto LABEL_41;
    }
LABEL_57:
    if ( v15 == 1 )
    {
      v28 = 0;
      v29 = 0;
    }
    else
    {
      v29 = *(_QWORD *)(v13 + 8);
      v28 = 0;
    }
LABEL_41:
    if ( v29 == v27 )
      goto LABEL_29;
LABEL_42:
    if ( v41 )
      return 0;
    v30 = v14 == 1 || v20 ? 0LL : *(_QWORD *)(v12 + 8);
    v31 = *(_QWORD **)(a1 + 8);
    v32 = &v31[*(unsigned int *)(a1 + 24)];
    if ( v31 == v32 )
      return 0;
    if ( v30 != *v31 )
      break;
    v34 = 0;
LABEL_60:
    if ( v15 == 1 || v28 )
      v35 = 0;
    else
      v35 = *(_QWORD *)(v13 + 8);
    v36 = *(_QWORD **)(a2 + 8);
    v37 = &v36[*(unsigned int *)(a2 + 24)];
    if ( v36 == v37 )
      return 0;
    if ( v35 != *v36 )
    {
      v38 = *(_QWORD **)(a2 + 8);
      while ( 1 )
      {
        if ( v37 == ++v38 )
          return 0;
        if ( *v38 == v35 )
        {
          v39 = v38 - v36;
          goto LABEL_71;
        }
      }
    }
    LODWORD(v39) = 0;
LABEL_71:
    if ( v34 != (_DWORD)v39 )
      return 0;
LABEL_29:
    if ( ++v19 == v4 )
      return 1;
    v24 = 24LL * v19;
    v12 = v24 + *(_QWORD *)(a1 + 16);
    v13 = *(_QWORD *)(a2 + 16) + v24;
    v14 = *(_WORD *)(v12 + 16);
    v15 = *(_WORD *)(v13 + 16);
    if ( v14 == v15 )
    {
      if ( !v19 )
        continue;
      v25 = *(_WORD *)(v12 + 18);
      v26 = *(_WORD *)(v13 + 18);
      if ( (v25 & 1) == (v26 & 1) && ((v26 & 2) != 0) == ((v25 & 2) != 0) )
        continue;
    }
    return 0;
  }
  v33 = *(_QWORD **)(a1 + 8);
  while ( 1 )
  {
    if ( v32 == ++v33 )
      return 0;
    if ( *v33 == v30 )
    {
      v34 = v33 - v31;
      if ( v34 == -1 )
        return 0;
      goto LABEL_60;
    }
  }
}
