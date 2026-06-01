unsigned __int64 __fastcall sub_A55A00(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r15
  __int64 v12; // rcx
  char v13; // al
  char v14; // al
  __int64 i; // rax
  unsigned __int64 *v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // rdx
  void *v20; // rax
  size_t v21; // r14
  char *v22; // rbp
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  int v26; // ecx
  unsigned int v28; // [rsp+4h] [rbp-54h]
  __int64 v29; // [rsp+8h] [rbp-50h]
  void *src; // [rsp+18h] [rbp-40h]

  v8 = 8LL * *(unsigned int *)(a2 + 144) + 16;
  a1[304] += v8;
  v29 = (__int64)(a1 + 294);
  v9 = a1[294];
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v8 + v10 && v9 )
  {
    a1[294] = v8 + v10;
    v11 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v11 = sub_986170((__int64)(a1 + 294), v8, v8, 3, v10, a6);
  }
  v12 = *(unsigned int *)(a2 + 144);
  v13 = *(_BYTE *)(v11 + 8);
  v28 = 0;
  *(_QWORD *)v11 = v12;
  v14 = *(_BYTE *)(a2 + 128) & 1 | v13 & 0xFE;
  *(_BYTE *)(v11 + 8) = v14;
  *(_BYTE *)(v11 + 8) = (2 * (*(_BYTE *)(a2 + 129) & 1)) | v14 & 0xFD;
  for ( i = 0; (unsigned __int64)v28 < *(_QWORD *)v11; i = v28 )
  {
    while ( 1 )
    {
      v16 = (unsigned __int64 *)(v11 + 8 * i + 16);
      v17 = *(_QWORD *)(*(_QWORD *)(a2 + 136) + 8 * i);
      v18 = v17 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v17 & 2) != 0 || !v18 )
        break;
      i = ++v28;
      *v16 = v18;
      if ( (unsigned __int64)v28 >= *(_QWORD *)v11 )
        return v11;
    }
    v19 = a1[294];
    v20 = *(void **)(v18 + 8);
    v21 = *(_QWORD *)(v18 + 16);
    a1[304] += v21;
    src = v20;
    v22 = (char *)((v19 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a1[295] >= (unsigned __int64)&v22[v21] && v19 )
      a1[294] = &v22[v21];
    else
      v22 = (char *)sub_986170(v29, v21, v21, 3, v10, a6);
    if ( v21 )
      memmove(v22, src, v21);
    v23 = a1[294];
    a1[304] += 24LL;
    v24 = (v23 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a1[295] >= v24 + 24 && v23 )
    {
      a1[294] = v24 + 24;
      v25 = (v23 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v25 = sub_986170(v29, 24, 24, 3, v10, a6);
      v24 = v25 & 0xFFFFFFFFFFFFFFFDLL;
    }
    v26 = *(_DWORD *)v18;
    *(_QWORD *)(v25 + 8) = v22;
    *(_QWORD *)(v25 + 16) = v21;
    *(_DWORD *)v25 = v26;
    ++v28;
    *v16 = v24 | 2;
  }
  return v11;
}
