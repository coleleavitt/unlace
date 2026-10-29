void __fastcall sub_14B5E30(const __m128i *a1, __int64 a2, __m128i a3, __m128 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  char *v7; // r12
  signed __int64 v8; // r15
  char *v9; // r9
  unsigned __int64 v10; // r14
  signed __int64 v11; // r8
  __int64 v12; // rsi
  char *v13; // r13
  unsigned __int64 v14; // rcx
  char *v15; // r10
  unsigned int v16; // r14d
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  char *v22; // r13
  char *v23; // rdi
  size_t v24; // r14
  size_t v25; // r8
  char *v26; // r11
  unsigned __int64 v27; // rdx
  __int64 i; // rax
  signed __int64 v29; // [rsp+8h] [rbp-B0h]
  char *v30; // [rsp+8h] [rbp-B0h]
  char *v31; // [rsp+8h] [rbp-B0h]
  char *v32; // [rsp+10h] [rbp-A8h]
  char *v33; // [rsp+10h] [rbp-A8h]
  char *v34; // [rsp+10h] [rbp-A8h]
  char *v35; // [rsp+10h] [rbp-A8h]
  char *v36; // [rsp+18h] [rbp-A0h]
  char *v37; // [rsp+18h] [rbp-A0h]
  char *v38; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v39; // [rsp+20h] [rbp-98h]
  __int64 v40; // [rsp+30h] [rbp-88h] BYREF
  void *src; // [rsp+38h] [rbp-80h]
  __int64 v42; // [rsp+40h] [rbp-78h]
  _BYTE v43[16]; // [rsp+48h] [rbp-70h] BYREF
  __int8 *v44; // [rsp+58h] [rbp-60h] BYREF
  void *ptr; // [rsp+60h] [rbp-58h]
  __int64 v46; // [rsp+68h] [rbp-50h]
  _BYTE v47[72]; // [rsp+70h] [rbp-48h] BYREF

  v44 = &a1[31].m128i_i8[8];
  v40 = 0;
  src = v43;
  ptr = v47;
  v42 = 0x200000000LL;
  v46 = 0x200000000LL;
  sub_1490230(a1, (__int64)&v40, 0, a2, a3, a4);
  v5 = *(unsigned int *)(a2 + 744);
  v6 = a2 + 736;
  v7 = (char *)src;
  v8 = 8LL * (unsigned int)v42;
  v9 = (char *)src + v8;
  v10 = v8 >> 3;
  v11 = 8 * v5;
  if ( 8 * v5 )
  {
    v12 = *(unsigned int *)(a2 + 744);
    if ( v5 + v10 > *(unsigned int *)(a2 + 748) )
    {
      v33 = (char *)src + v8;
      sub_2237220(a2 + 736, a2 + 752, v5 + v10, 8);
      v12 = *(unsigned int *)(a2 + 744);
      v9 = v33;
      v13 = *(char **)(a2 + 736);
      v6 = a2 + 736;
      v11 = 8 * v12;
      v15 = &v13[8 * v12];
      v14 = (8 * v12) >> 3;
      if ( v10 > v14 )
        goto LABEL_4;
    }
    else
    {
      v13 = *(char **)(a2 + 736);
      v14 = v11 >> 3;
      v15 = &v13[v11];
      if ( v10 > v11 >> 3 )
      {
LABEL_4:
        v16 = v12 + v10;
        *(_DWORD *)(a2 + 744) = v16;
        if ( v15 != v13 )
        {
          v39 = v14;
          v36 = v9;
          v32 = v15;
          v29 = v11;
          memcpy(&v13[8 * v16 - v11], v13, v11);
          v14 = v39;
          v9 = v36;
          v15 = v32;
          v11 = v29;
        }
        if ( v14 )
        {
          if ( (v13 >= v7 + 16 || v7 >= v13 + 16) && v14 - 1 > 3 )
          {
            v17 = 0;
            v18 = 0;
            v19 = ((v14 - 2) >> 1) + 1;
            do
            {
              ++v18;
              *(__m128i *)&v13[v17] = _mm_loadu_si128((const __m128i *)&v7[v17]);
              v17 += 16;
            }
            while ( v18 < v19 );
            v20 = 2 * v19;
            v21 = 16 * v19;
            v22 = &v13[v21];
            if ( v14 != v20 )
              *(_QWORD *)v22 = *(_QWORD *)&v7[v21];
          }
          else
          {
            for ( i = 0; i != v14; ++i )
              *(_QWORD *)&v13[8 * i] = *(_QWORD *)&v7[8 * i];
          }
          v7 += v11;
        }
        if ( v9 != v7 )
          memcpy(v15, v7, v9 - v7);
        goto LABEL_16;
      }
    }
    v23 = v15;
    v24 = v11 - v8;
    v25 = v8;
    v26 = &v13[v24];
    v27 = (v8 >> 3) + v12;
    if ( v27 > *(unsigned int *)(a2 + 748) )
    {
      v38 = v9;
      v35 = v15;
      sub_2237220(v6, a2 + 752, v27, 8);
      v12 = *(unsigned int *)(a2 + 744);
      v25 = v8;
      v26 = &v13[v24];
      v9 = v38;
      v15 = v35;
      v23 = (char *)(*(_QWORD *)(a2 + 736) + 8 * v12);
    }
    if ( v15 != v26 )
    {
      v37 = v9;
      v34 = v26;
      memmove(v23, v26, v25);
      LODWORD(v12) = *(_DWORD *)(a2 + 744);
      v9 = v37;
      v26 = v34;
    }
    *(_DWORD *)(a2 + 744) = v12 + (v8 >> 3);
    if ( v26 != v13 )
    {
      v30 = v9;
      memmove(&v13[v8], v13, v24);
      v9 = v30;
    }
    if ( v7 != v9 )
      memmove(v13, v7, v8);
  }
  else
  {
    if ( v5 + v10 > *(unsigned int *)(a2 + 748) )
    {
      v31 = (char *)src + v8;
      sub_2237220(a2 + 736, a2 + 752, v5 + v10, 8);
      v5 = *(unsigned int *)(a2 + 744);
      v9 = v31;
    }
    if ( v7 != v9 )
    {
      memcpy((void *)(*(_QWORD *)(a2 + 736) + 8 * v5), v7, v8);
      LODWORD(v5) = *(_DWORD *)(a2 + 744);
    }
    *(_DWORD *)(a2 + 744) = v10 + v5;
  }
LABEL_16:
  LODWORD(v42) = 0;
  sub_15D8C50(a2 + 768, &v44);
  LODWORD(v46) = 0;
  if ( HIDWORD(v40) )
    *(_DWORD *)(a2 + 92) = HIDWORD(v40);
  sub_15DCED0(v44, &v44);
  if ( ptr != v47 )
    free(ptr);
  if ( src != v43 )
    free(src);
}
