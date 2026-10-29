unsigned __int64 __fastcall sub_DCA0(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  __int64 v4; // rdx
  char *v5; // rbp
  __int64 v6; // r15
  char *i; // r15
  char v8; // bl
  unsigned __int8 v9; // bl
  char v10; // r13
  __int64 v11; // rbx
  unsigned int v12; // r14d
  char *v13; // rsi
  size_t v14; // r10
  char *v15; // rdi
  unsigned __int64 v16; // rdx
  int v17; // r8d
  unsigned __int64 v18; // rdx
  char *v19; // rax
  unsigned __int64 v20; // r9
  _QWORD *v21; // rax
  __int64 v22; // rdi
  char *v23; // rax
  int v24; // r8d
  __int64 v25; // r13
  unsigned int v26; // r14d
  char *v27; // rsi
  unsigned __int64 v28; // rax
  char v29; // al
  size_t v31; // r10
  char *v32; // rdi
  unsigned __int64 v33; // rdx
  int v34; // r8d
  unsigned __int64 v35; // rdx
  char *v36; // rax
  unsigned __int64 v37; // r9
  _QWORD *v38; // rax
  __int64 v39; // rdi
  char *v40; // rax
  int v41; // r8d
  unsigned __int64 v42; // [rsp+8h] [rbp-80h]
  unsigned int v43; // [rsp+8h] [rbp-80h]
  unsigned __int64 v44; // [rsp+8h] [rbp-80h]
  unsigned int v45; // [rsp+8h] [rbp-80h]
  unsigned __int64 v46; // [rsp+10h] [rbp-78h]
  unsigned __int64 v47; // [rsp+10h] [rbp-78h]
  char *src; // [rsp+18h] [rbp-70h]
  char *srca; // [rsp+18h] [rbp-70h]
  int v50; // [rsp+2Ch] [rbp-5Ch]
  int v51; // [rsp+2Ch] [rbp-5Ch]
  char *v52; // [rsp+30h] [rbp-58h] BYREF
  size_t n; // [rsp+38h] [rbp-50h]
  unsigned __int64 v54; // [rsp+48h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  v1 = *(_DWORD *)(a1 + 96);
  if ( !v1 )
    return 0;
  v2 = (unsigned int)(v1 - 1);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v2);
  if ( *(_WORD *)(v4 + 16) != 98 )
    return 0;
  *(_DWORD *)(a1 + 96) = v2;
  if ( !v4 )
    return 0;
  v5 = *(char **)v4;
  v6 = *(_QWORD *)(v4 + 8);
  v52 = nullptr;
  n = 0;
  for ( i = &v5[v6]; i != v5; LODWORD(n) = v11 + 1 )
  {
    while ( 1 )
    {
      v8 = *v5;
      if ( *v5 >= 0 )
        break;
      v25 = (unsigned int)n;
      v26 = HIDWORD(n);
      v27 = v52;
      if ( (unsigned int)n >= HIDWORD(n) )
      {
        v31 = HIDWORD(n);
        v32 = *(char **)(a1 + 8);
        if ( v32 == &v52[HIDWORD(n)] && (unsigned __int64)(v32 + 1) <= *(_QWORD *)(a1 + 16) )
        {
          *(_QWORD *)(a1 + 8) = v32 + 1;
          HIDWORD(n) = v26 + 1;
        }
        else
        {
          v33 = (unsigned int)(2 * HIDWORD(n));
          v34 = 2 * HIDWORD(n);
          if ( v33 < 4 )
            v33 = 4;
          v35 = HIDWORD(n) + v33;
          if ( !v32 || (v36 = &v32[v35], (unsigned __int64)&v32[v35] > *(_QWORD *)(a1 + 16)) )
          {
            v51 = 2 * HIDWORD(n);
            v37 = 2LL * *(_QWORD *)(a1 + 32);
            srca = v52;
            v47 = v35;
            if ( v37 < v35 + 1 )
              v37 = v35 + 1;
            *(_QWORD *)(a1 + 32) = v37;
            v44 = v37 + 8;
            v38 = malloc(v37 + 8);
            v39 = *(_QWORD *)(a1 + 24);
            v34 = v51;
            *(_QWORD *)(a1 + 24) = v38;
            v31 = v26;
            v27 = srca;
            *v38 = v39;
            v32 = (char *)(v38 + 1);
            *(_QWORD *)(a1 + 16) = (char *)v38 + v44;
            v36 = (char *)v38 + v47 + 8;
          }
          *(_QWORD *)(a1 + 8) = v36;
          v45 = v34;
          v40 = (char *)memcpy(v32, v27, v31);
          v41 = v45;
          v52 = v40;
          v27 = v40;
          if ( v45 < 4 )
            v41 = 4;
          HIDWORD(n) = v26 + v41;
        }
      }
      ++v5;
      v27[v25] = v8;
      LODWORD(n) = v25 + 1;
      if ( i == v5 )
        goto LABEL_24;
    }
    v9 = v8 - 97;
    if ( v9 > 0x19u )
      return 0;
    v10 = asc_39700[(char)v9];
    if ( v10 == 32 )
      return 0;
    v11 = (unsigned int)n;
    v12 = HIDWORD(n);
    v13 = v52;
    if ( (unsigned int)n >= HIDWORD(n) )
    {
      v14 = HIDWORD(n);
      v15 = *(char **)(a1 + 8);
      if ( v15 == &v52[HIDWORD(n)] && (unsigned __int64)(v15 + 1) <= *(_QWORD *)(a1 + 16) )
      {
        *(_QWORD *)(a1 + 8) = v15 + 1;
        HIDWORD(n) = v12 + 1;
      }
      else
      {
        v16 = (unsigned int)(2 * HIDWORD(n));
        v17 = 2 * HIDWORD(n);
        if ( v16 < 4 )
          v16 = 4;
        v18 = HIDWORD(n) + v16;
        if ( !v15 || (v19 = &v15[v18], (unsigned __int64)&v15[v18] > *(_QWORD *)(a1 + 16)) )
        {
          v50 = 2 * HIDWORD(n);
          v20 = 2LL * *(_QWORD *)(a1 + 32);
          src = v52;
          v46 = v18;
          if ( v20 < v18 + 1 )
            v20 = v18 + 1;
          *(_QWORD *)(a1 + 32) = v20;
          v42 = v20 + 8;
          v21 = malloc(v20 + 8);
          v22 = *(_QWORD *)(a1 + 24);
          v17 = v50;
          *(_QWORD *)(a1 + 24) = v21;
          v14 = v12;
          v13 = src;
          *v21 = v22;
          v15 = (char *)(v21 + 1);
          *(_QWORD *)(a1 + 16) = (char *)v21 + v42;
          v19 = (char *)v21 + v46 + 8;
        }
        *(_QWORD *)(a1 + 8) = v19;
        v43 = v17;
        v23 = (char *)memcpy(v15, v13, v14);
        v24 = v43;
        v52 = v23;
        v13 = v23;
        if ( v43 < 4 )
          v24 = 4;
        HIDWORD(n) = v12 + v24;
      }
    }
    ++v5;
    v13[v11] = v10;
  }
LABEL_24:
  v28 = *(_QWORD *)(a1 + 72);
  if ( v28 >= *(_QWORD *)(a1 + 64) )
    return 0;
  *(_QWORD *)(a1 + 72) = v28 + 1;
  v29 = *(_BYTE *)(*(_QWORD *)(a1 + 56) + v28);
  if ( v29 == 105 )
    return sub_C5B0((_QWORD *)a1, 118, (__int64 *)&v52);
  if ( v29 == 112 )
    return sub_C5B0((_QWORD *)a1, 164, (__int64 *)&v52);
  if ( v29 != 80 )
    return 0;
  return sub_C5B0((_QWORD *)a1, 163, (__int64 *)&v52);
}

