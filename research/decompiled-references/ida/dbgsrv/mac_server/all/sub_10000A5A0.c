/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000A5A0
// Address: 0x000000010000A5A0

//----- (000000010000A5A0) ----------------------------------------------------
void __fastcall sub_10000A5A0(__int64 a1)
{
  char *v1; // rbx
  char *v2; // r13
  __int64 v3; // rdx
  __int64 v4; // rcx
  char *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned __int64 v8; // r12
  char *v9; // r15
  void *v10; // r14
  char *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  char *v14; // r12
  char *v15; // r14
  __int64 v16; // r12
  char *v17; // r8
  char *v18; // r13
  char *v19; // r13
  unsigned __int64 v20; // rax
  size_t v21; // r14
  char *v22; // rsi
  char *v23; // r13
  char *v24; // r15
  unsigned __int64 v25; // r12
  char *v26; // rax
  unsigned __int64 v27; // rdx
  signed __int64 v28; // r14
  unsigned __int64 v29; // r14
  char *v30; // r9
  char *v31; // rcx
  char *v32; // r14
  char *v33; // r15
  char *v34; // r12
  __int64 v35; // r14
  unsigned __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int128 v39; // xmm1
  void *v40; // rdi
  __int64 v41; // rax
  char *__p; // [rsp+10h] [rbp-40h]
  void *v44; // [rsp+18h] [rbp-38h] BYREF

  v1 = *(char **)(a1 + 8);
  v2 = *(char **)(a1 + 16);
  v3 = 0;
  if ( v2 != v1 )
    v3 = 56LL * ((*(_QWORD *)(a1 + 16) - (_QWORD)v1) >> 3) - 1;
  v4 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int64)(v3 - (v4 + *(_QWORD *)(a1 + 40))) >= 0x38 )
  {
    *(_QWORD *)(a1 + 32) = v4 + 56;
    v44 = *((void **)v2 - 1);
    *(_QWORD *)(a1 + 16) = v2 - 8;
    sub_10000A9C0(a1, &v44);
    return;
  }
  v5 = *(char **)a1;
  v6 = *(_QWORD *)(a1 + 24) - *(_QWORD *)a1;
  if ( v2 - v1 < (unsigned __int64)v6 )
  {
    if ( v1 == v5 )
    {
      v44 = operator new(0xFC0u);
      sub_10000AD60((char **)a1, &v44);
      v12 = *(_QWORD *)(a1 + 16);
      v44 = *(void **)(v12 - 8);
      *(_QWORD *)(a1 + 16) = v12 - 8;
      sub_10000A9C0(a1, &v44);
    }
    else
    {
      v44 = operator new(0xFC0u);
      sub_10000AB90(a1, &v44);
    }
    v13 = 28;
    if ( *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8) != 8 )
      v13 = *(_QWORD *)(a1 + 32) + 56LL;
    *(_QWORD *)(a1 + 32) = v13;
    return;
  }
  v7 = v6 >> 2;
  v8 = 1;
  if ( *(char **)(a1 + 24) != v5 )
    v8 = v7;
  if ( v8 >> 61 )
    sub_10000AF40();
  v9 = (char *)operator new(8 * v8);
  v10 = operator new(0xFC0u);
  if ( v8 )
  {
    v11 = &v9[8 * v8];
  }
  else
  {
    v14 = (char *)operator new(8u);
    operator delete(v9);
    v11 = v14 + 8;
    v1 = *(char **)(a1 + 8);
    v2 = *(char **)(a1 + 16);
    v9 = v14;
  }
  *(_QWORD *)v9 = v10;
  v15 = v9 + 8;
  if ( v1 != v2 )
  {
    __p = v9;
    v16 = a1;
    while ( 1 )
    {
      if ( v15 == v11 )
      {
        if ( v9 <= __p )
        {
          v25 = (v15 - __p) >> 2;
          if ( v15 == __p )
            v25 = 1;
          if ( v25 > 0x1FFFFFFFFFFFFFFFLL )
            sub_10000AF40();
          v26 = (char *)operator new(8 * v25);
          v27 = v25 >> 2;
          v17 = &v26[8 * (v25 >> 2)];
          v18 = v17;
          v28 = v15 - v9;
          if ( v28 )
          {
            v18 = &v17[v28];
            v29 = v28 - 8;
            if ( v29 < 0x38 || (unsigned __int64)(&v26[8 * v27] - v9) < 0x20 )
            {
              v30 = &v26[8 * (v25 >> 2)];
              v31 = v9;
              goto LABEL_35;
            }
            v35 = (v29 >> 3) + 1;
            v36 = v35 & 0xFFFFFFFFFFFFFFFCLL;
            v30 = &v17[8 * (v35 & 0xFFFFFFFFFFFFFFFCLL)];
            v31 = &v9[8 * (v35 & 0xFFFFFFFFFFFFFFFCLL)];
            v37 = (__int64)&v26[8 * v27 + 16];
            v38 = 0;
            do
            {
              v39 = *(_OWORD *)&v9[8 * v38 + 16];
              *(_OWORD *)(v37 + 8 * v38 - 16) = *(_OWORD *)&v9[8 * v38];
              *(_OWORD *)(v37 + 8 * v38) = v39;
              v38 += 4;
            }
            while ( v36 != v38 );
            if ( v35 != v36 )
            {
              do
              {
LABEL_35:
                *(_QWORD *)v30 = *(_QWORD *)v31;
                v30 += 8;
                v31 += 8;
              }
              while ( v30 != v18 );
            }
          }
          v11 = &v26[8 * v25];
          if ( __p )
          {
            v32 = &v26[8 * (v25 >> 2)];
            v33 = &v26[8 * v25];
            v34 = v26;
            operator delete(__p);
            v11 = v33;
            v17 = v32;
            __p = v34;
          }
          else
          {
            __p = v26;
          }
          v16 = a1;
          goto LABEL_22;
        }
        v20 = (4 * (((unsigned __int64)(((v9 - __p) >> 3) + 1) >> 63) + ((v9 - __p) >> 3) + 1)) & 0xFFFFFFFFFFFFFFF8LL;
        v17 = &v9[-v20];
        v21 = v15 - v9;
        if ( v21 )
        {
          v22 = v9;
          v23 = v11;
          v24 = &v9[-v20];
          memmove(v24, v22, v21);
          v11 = v23;
          v17 = v24;
        }
        v15 = &v17[v21];
      }
      else
      {
        v17 = v9;
      }
      v18 = v15;
LABEL_22:
      *(_QWORD *)v18 = *(_QWORD *)v1;
      v1 += 8;
      v19 = v18 + 8;
      v15 = v19;
      v9 = v17;
      if ( v1 == *(char **)(v16 + 16) )
        goto LABEL_45;
    }
  }
  __p = v9;
  v17 = v9;
  v19 = v9 + 8;
  v16 = a1;
LABEL_45:
  v40 = *(void **)v16;
  *(_QWORD *)v16 = __p;
  *(_QWORD *)(v16 + 8) = v17;
  *(_QWORD *)(v16 + 16) = v19;
  *(_QWORD *)(v16 + 24) = v11;
  v41 = 28;
  if ( v19 - v17 != 8 )
    v41 = *(_QWORD *)(v16 + 32) + 56LL;
  *(_QWORD *)(v16 + 32) = v41;
  if ( v40 )
    operator delete(v40);
}
