void (*__fastcall sub_1455030(__int64 a1, __int64 a2, __m128i a3, double a4))()
{
  unsigned int v4; // r12d
  void (*result)(); // rax
  __int64 v6; // r14
  char v7; // bp
  _BYTE *v8; // rcx
  __int64 v9; // r13
  __int64 i; // rbp
  __int64 v11; // rax
  __int16 v12; // ax
  __int64 v13; // rbp
  __int64 v14; // rdi
  unsigned int *v15; // rdx
  __int64 v16; // rcx
  unsigned int *v17; // rdx
  __int64 v18; // rax
  size_t v19; // rax
  int v20; // eax
  size_t v21; // rax
  size_t v22; // r9
  size_t v23; // rax
  size_t v24; // r9
  int v25; // eax
  size_t v26; // rax
  int v27; // [rsp+Ch] [rbp-ACh]
  _BYTE *s1a; // [rsp+10h] [rbp-A8h]
  void *s1; // [rsp+10h] [rbp-A8h]
  size_t n; // [rsp+18h] [rbp-A0h]
  size_t na; // [rsp+18h] [rbp-A0h]
  size_t nb; // [rsp+18h] [rbp-A0h]
  int v33; // [rsp+20h] [rbp-98h] BYREF
  __int64 v34; // [rsp+28h] [rbp-90h]
  unsigned __int8 *v35[17]; // [rsp+30h] [rbp-88h] BYREF

  v4 = *(_DWORD *)a2;
  v33 = 0;
  v34 = 0;
  result = (void (*)())sub_1453A80(a1, a2, (__int64)&v33, 1u);
  if ( (_BYTE)result )
    return result;
  v6 = v34;
  v7 = *(_BYTE *)(a1 + 544);
  *(_BYTE *)(a1 + 544) = v7 | 0x20;
  sub_14634E0(a1, a2);
  *(_BYTE *)(a1 + 544) = (32 * ((v7 & 0x20) != 0)) | *(_BYTE *)(a1 + 544) & 0xDF;
  if ( *(_WORD *)(a2 + 16) != 2 )
  {
    sub_FC70B0((__int64)v35, *(_QWORD *)(a1 + 48), *(_DWORD *)a2, 1239);
    sub_AE9DF0(v35, (__int64)"pragma", 1u);
    sub_AEA040((__int64)v35);
    sub_141A820(a1, (unsigned int *)v35);
  }
  v27 = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 1112) + 26LL) = 1;
  v8 = *(_BYTE **)(a1 + 1112);
  v9 = *((_QWORD *)v8 + 19);
  for ( i = v9; ; i = *((_QWORD *)v8 + 19) )
  {
    sub_13DB5F0(v8, a2, a3, a4);
    v12 = *(_WORD *)(a2 + 16);
    if ( v12 == 1 )
      break;
    v8 = *(_BYTE **)(a1 + 1112);
    if ( v12 != 67 || (*(_BYTE *)(a2 + 18) & 1) == 0 )
      continue;
    v8[24] = 1;
    sub_13DB5F0(*(_BYTE **)(a1 + 1112), a2, a3, a4);
    if ( *(_WORD *)(a2 + 16) != 6 )
      goto LABEL_13;
    v8 = *(_BYTE **)(a1 + 1112);
    if ( *(_DWORD *)(a2 + 4) != 6 )
      continue;
    v11 = *(_QWORD *)(a2 + 8);
    if ( *(_DWORD *)v11 != 1734439536 || *(_WORD *)(v11 + 4) != 24941 )
      continue;
    sub_13DB5F0(*(_BYTE **)(a1 + 1112), a2, a3, a4);
    if ( *(_WORD *)(a2 + 16) != 6 )
      goto LABEL_13;
    v8 = *(_BYTE **)(a1 + 1112);
    if ( *(_DWORD *)(a2 + 4) != 5 )
      continue;
    v18 = *(_QWORD *)(a2 + 8);
    if ( *(_DWORD *)v18 != 1851878499 || *(_BYTE *)(v18 + 4) != 103 )
      continue;
    sub_13DB5F0(*(_BYTE **)(a1 + 1112), a2, a3, a4);
    if ( *(_WORD *)(a2 + 16) != 6 )
      goto LABEL_13;
    v19 = j__strlen("module");
    v8 = *(_BYTE **)(a1 + 1112);
    if ( v19 != *(_DWORD *)(a2 + 4) )
      continue;
    if ( v19 )
    {
      s1a = *(_BYTE **)(a1 + 1112);
      v20 = memcmp(*(const void **)(a2 + 8), "module", v19);
      v8 = s1a;
      if ( v20 )
        continue;
    }
    sub_13DB5F0(v8, a2, a3, a4);
    if ( *(_WORD *)(a2 + 16) != 6 )
      goto LABEL_13;
    v21 = j__strlen("build");
    v22 = *(unsigned int *)(a2 + 4);
    s1 = *(void **)(a2 + 8);
    if ( v21 != v22 )
    {
      na = *(unsigned int *)(a2 + 4);
      v23 = j__strlen("endbuild");
      v24 = na;
      v8 = *(_BYTE **)(a1 + 1112);
      if ( v23 != na )
        continue;
      if ( !na )
        goto LABEL_34;
LABEL_33:
      nb = (size_t)v8;
      v25 = memcmp(s1, "endbuild", v24);
      v8 = (_BYTE *)nb;
      if ( !v25 )
      {
LABEL_34:
        sub_13DB5F0(v8, a2, a3, a4);
        if ( !--v27 )
          goto LABEL_15;
LABEL_13:
        v8 = *(_BYTE **)(a1 + 1112);
        continue;
      }
      continue;
    }
    if ( !*(_DWORD *)(a2 + 4) || (n = *(unsigned int *)(a2 + 4), !memcmp(*(const void **)(a2 + 8), "build", v22)) )
    {
      sub_13DB5F0(*(_BYTE **)(a1 + 1112), a2, a3, a4);
      ++v27;
      v8 = *(_BYTE **)(a1 + 1112);
      continue;
    }
    v26 = j__strlen("endbuild");
    v24 = n;
    v8 = *(_BYTE **)(a1 + 1112);
    if ( n == v26 )
      goto LABEL_33;
  }
  sub_FC70B0((__int64)v35, *(_QWORD *)(a1 + 48), v4, 1162);
  sub_AEA040((__int64)v35);
LABEL_15:
  v13 = i - v9;
  *(_BYTE *)(*(_QWORD *)(a1 + 1112) + 26LL) = 0;
  v14 = *(_QWORD *)(a1 + 112);
  v15 = *(unsigned int **)(v6 + 16);
  v16 = *v15;
  v17 = v15 + 4;
  result = *(void (**)())(*(_QWORD *)v14 + 24LL);
  if ( result != nullsub_607 )
    return (void (*)())((__int64 (__fastcall *)(__int64, _QWORD, unsigned int *, __int64, __int64, __int64))result)(
                         v14,
                         v4,
                         v17,
                         v16,
                         v9,
                         v13);
  return result;
}
