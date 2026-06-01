__int64 __fastcall sub_F1A0(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r13
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // edx
  _QWORD *v13; // rcx
  int i; // eax
  __int64 v15; // rcx
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int16 v21; // si
  unsigned int v22; // eax
  __int64 v24; // rcx
  size_t v25; // r8
  unsigned __int64 v26; // rax
  unsigned int v27; // r13d
  char *v28; // rcx
  unsigned __int64 v29; // r14
  char *v30; // rax
  unsigned __int64 v31; // r15
  size_t v32; // r15
  _QWORD *v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rax
  int v36; // eax
  __int64 v37; // [rsp+8h] [rbp-40h]

  *a3 = sub_F090(a1);
  while ( 1 )
  {
    v5 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 8) = v5;
    if ( !v5 || (v6 = v5 + 24, v5 + 24 > *(_QWORD *)(a1 + 16)) )
    {
      v7 = 2LL * *(_QWORD *)(a1 + 32);
      if ( v7 < 0x20 )
        v7 = 32;
      *(_QWORD *)(a1 + 32) = v7;
      v8 = v7 + 8;
      v9 = malloc(v7 + 8);
      v10 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 24) = v9;
      *v9 = v10;
      v5 = ((unsigned __int64)v9 + 15) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)(a1 + 16) = (char *)v9 + v8;
      v6 = v5 + 24;
    }
    *(_QWORD *)(a1 + 8) = v6;
    *(_WORD *)(v5 + 16) = 224;
    *(_BYTE *)(v5 + 18) = 0;
    v11 = *(unsigned int *)(a2 + 8);
    v12 = *(_DWORD *)(a2 + 12);
    if ( (unsigned int)v11 >= v12 )
    {
      v24 = *(_QWORD *)(a1 + 8);
      v25 = 8LL * v12;
      if ( v24 == v25 + *(_QWORD *)a2 && (unsigned __int64)(v24 + 8) <= *(_QWORD *)(a1 + 16) )
      {
        *(_QWORD *)(a1 + 8) = v24 + 8;
        v13 = *(_QWORD **)a2;
        ++*(_DWORD *)(a2 + 12);
        v11 = *(unsigned int *)(a2 + 8);
      }
      else
      {
        v26 = 2 * v12;
        v27 = 2 * v12;
        if ( v26 < 4 )
          v26 = 4;
        v28 = (char *)((v24 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        *(_QWORD *)(a1 + 8) = v28;
        v29 = 8 * (v12 + v26);
        if ( !v28 || (v30 = &v28[v29], (unsigned __int64)&v28[v29] > *(_QWORD *)(a1 + 16)) )
        {
          v37 = 8LL * v12;
          v31 = 2LL * *(_QWORD *)(a1 + 32);
          if ( v31 < v29 + 8 )
            v31 = v29 + 8;
          *(_QWORD *)(a1 + 32) = v31;
          v32 = v31 + 8;
          v33 = malloc(v32);
          v34 = *(_QWORD *)(a1 + 24);
          v25 = v37;
          *(_QWORD *)(a1 + 24) = v33;
          *v33 = v34;
          v28 = (char *)(((unsigned __int64)v33 + 15) & 0xFFFFFFFFFFFFFFF8LL);
          *(_QWORD *)(a1 + 16) = (char *)v33 + v32;
          v30 = &v28[v29];
        }
        *(_QWORD *)(a1 + 8) = v30;
        v35 = memcpy(v28, *(const void **)a2, v25);
        *(_QWORD *)a2 = v35;
        v13 = v35;
        v36 = 4;
        if ( v27 >= 4 )
          v36 = v27;
        *(_DWORD *)(a2 + 12) += v36;
        v11 = *(unsigned int *)(a2 + 8);
      }
    }
    else
    {
      v13 = *(_QWORD **)a2;
    }
    *(_DWORD *)(a2 + 8) = v11 + 1;
    v13[v11] = v5;
    for ( i = *(_DWORD *)(a1 + 96); i; i = *(_DWORD *)(a1 + 96) )
    {
      v15 = (unsigned int)(i - 1);
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v15);
      if ( *(_WORD *)(v16 + 16) != 221 )
        break;
      *(_DWORD *)(a1 + 96) = v15;
      if ( !v16 )
        break;
      sub_C080(v5, v16, (_QWORD *)a1);
    }
    sub_C3A0(v5, 0);
    v17 = *(_DWORD *)(a1 + 96);
    if ( !v17 )
      return 0;
    v18 = *(_QWORD *)(a1 + 88);
    v19 = (unsigned int)(v17 - 1);
    v20 = *(_QWORD *)(v18 + 8 * v19);
    v21 = *(_WORD *)(v20 + 16);
    if ( v21 == 262 )
      break;
LABEL_19:
    if ( v21 == 263 )
    {
      *(_DWORD *)(a1 + 96) = v19;
      if ( v20 )
        continue;
    }
    return 0;
  }
  *(_DWORD *)(a1 + 96) = v19;
  if ( !v20 )
  {
    if ( v17 == 1 )
      return 0;
    v22 = v17 - 2;
    v20 = *(_QWORD *)(v18 + 8LL * v22);
    LODWORD(v19) = v22;
    v21 = *(_WORD *)(v20 + 16);
    goto LABEL_19;
  }
  return 1;
}
