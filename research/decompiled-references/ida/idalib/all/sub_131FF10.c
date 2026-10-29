void __fastcall sub_131FF10(__int64 a1, unsigned __int32 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 **v8; // rbx
  __int64 **v9; // rbp
  __int64 *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  _DWORD *v13; // rcx
  __int64 v14; // r15
  size_t v15; // rsi
  const char *v16; // r15
  size_t v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __m128i *v22; // rsi
  __int64 v23; // rax
  __int64 **v24; // r15
  __int64 v25; // rsi
  _DWORD *v26; // rcx
  __int64 v27; // r15
  size_t v28; // rsi
  const char *v29; // r15
  size_t v30; // rax
  char *v31; // rsi
  __int64 v32; // rdx
  char *v33; // r15
  size_t v34; // rax
  __int64 v35; // rax
  size_t v36; // rax
  void *v37; // rdi
  __int64 v38; // rax
  const char *v39; // rdi
  unsigned int v40; // eax
  const char *v41; // rdi
  unsigned int v42; // eax
  __int64 v44; // [rsp+10h] [rbp-78h]
  _DWORD *v45; // [rsp+10h] [rbp-78h]
  _DWORD *v46; // [rsp+10h] [rbp-78h]
  char *v47; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v48; // [rsp+28h] [rbp-60h]
  __m128i v49; // [rsp+30h] [rbp-58h] BYREF
  __m128i v50[4]; // [rsp+40h] [rbp-48h] BYREF

  v49.m128i_i32[0] = a2;
  v6 = sub_21B6DA0(a1, &v49, 1);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = (__int64 **)(v7 + 8LL * (unsigned int)v6);
  v9 = (__int64 **)(v7 + 8 * HIDWORD(v6));
  if ( v8 != v9 )
  {
    if ( a2 )
    {
      do
      {
        if ( *v8 && (unsigned __int8)sub_21B9810(*v8, a2) )
          break;
        ++v8;
      }
      while ( v9 != v8 );
    }
    else
    {
      v8 += ((unsigned __int64)((char *)(v9 - 1) - (char *)v8) >> 3) + 1;
    }
  }
LABEL_6:
  if ( v9 == v8 )
    return;
  v10 = *v8;
  v11 = **v8;
  if ( *(_BYTE *)(v11 + 44) != 3 )
  {
LABEL_8:
    if ( !(unsigned __int8)sub_21B9810(v10, a3) )
    {
      v32 = -1;
      v33 = *(char **)v10[6];
      v49.m128i_i64[0] = (__int64)v50;
      if ( v33 )
        v32 = (__int64)&v33[strlen(v33)];
      sub_12FAAE0(&v49, v33, v32);
      v22 = *(__m128i **)(a4 + 8);
      if ( v22 != *(__m128i **)(a4 + 16) )
      {
        v22->m128i_i64[0] = (__int64)v22[1].m128i_i64;
        v23 = v49.m128i_i64[0];
        if ( (__m128i *)v49.m128i_i64[0] == v50 )
          goto LABEL_44;
LABEL_21:
        v22->m128i_i64[0] = v23;
        v22[1].m128i_i64[0] = v50[0].m128i_i64[0];
LABEL_22:
        v22->m128i_i64[1] = v49.m128i_i64[1];
        *(_QWORD *)(a4 + 8) += 32LL;
        goto LABEL_23;
      }
      sub_A82970((void ***)a4, v22, &v49);
      v37 = (void *)v49.m128i_i64[0];
      if ( (__m128i *)v49.m128i_i64[0] != v50 )
        goto LABEL_53;
      goto LABEL_23;
    }
    v12 = v10[1];
    v13 = (_DWORD *)(*(_QWORD *)(v12 + 32) + 80LL * (unsigned int)(*(_DWORD *)(*v10 + 40) - 1));
    v14 = **(_QWORD **)(v12 + 8);
    if ( *v13 )
    {
      v15 = 0;
      v41 = (const char *)(v14 + *(unsigned int *)(*(_QWORD *)(v12 + 16) + 4LL * (unsigned int)(*v13 + 1)));
      if ( v41 )
      {
        v46 = v13;
        v42 = strlen(v41);
        v13 = v46;
        v15 = v42;
      }
      v17 = 0;
      v16 = (const char *)((unsigned int)v13[1] + v14);
      if ( !v16 )
        goto LABEL_12;
    }
    else
    {
      v15 = 0;
      v16 = (const char *)((unsigned int)v13[1] + v14);
      if ( !v16 )
        goto LABEL_14;
    }
    v17 = strlen(v16);
LABEL_12:
    if ( v15 <= v17 )
    {
      v36 = v17 - v15;
      v16 += v15;
      if ( v36 == -1 )
      {
        v18 = -2;
      }
      else
      {
        if ( !v36 )
          goto LABEL_14;
        v18 = v36 - 1;
      }
      ++v16;
LABEL_15:
      v47 = (char *)v16;
      v48 = v18;
      v44 = v18;
      v19 = sub_2247130(&v47, "=-", 2, -1);
      v49.m128i_i64[0] = (__int64)v50;
      v20 = v19 + 1;
      if ( v20 > v48 )
        v20 = v48;
      v21 = v20 + v48 - v44;
      if ( v21 > v48 )
        v21 = v48;
      sub_12FAAE0(&v49, v47, (__int64)&v47[v21]);
      v22 = *(__m128i **)(a4 + 8);
      if ( v22 != *(__m128i **)(a4 + 16) )
      {
        v22->m128i_i64[0] = (__int64)v22[1].m128i_i64;
        v23 = v49.m128i_i64[0];
        if ( (__m128i *)v49.m128i_i64[0] != v50 )
          goto LABEL_21;
        goto LABEL_44;
      }
      sub_A82970((void ***)a4, v22, &v49);
      v37 = (void *)v49.m128i_i64[0];
      if ( (__m128i *)v49.m128i_i64[0] != v50 )
LABEL_53:
        operator delete(v37);
      goto LABEL_23;
    }
    v16 += v17;
LABEL_14:
    v18 = 0;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v25 = v10[1];
    v26 = (_DWORD *)(*(_QWORD *)(v25 + 32) + 80LL * (unsigned int)(*(_DWORD *)(v11 + 40) - 1));
    v27 = **(_QWORD **)(v25 + 8);
    if ( !*v26 )
    {
      v28 = 0;
      v29 = (const char *)((unsigned int)v26[1] + v27);
      if ( !v29 )
        goto LABEL_36;
LABEL_33:
      v30 = strlen(v29);
      goto LABEL_34;
    }
    v38 = *(_QWORD *)(v25 + 16);
    v28 = 0;
    v39 = (const char *)(v27 + *(unsigned int *)(v38 + 4LL * (unsigned int)(*v26 + 1)));
    if ( v39 )
    {
      v45 = v26;
      v40 = strlen(v39);
      v26 = v45;
      v28 = v40;
    }
    v30 = 0;
    v29 = (const char *)((unsigned int)v26[1] + v27);
    if ( v29 )
      goto LABEL_33;
LABEL_34:
    if ( v30 < v28 )
    {
      v29 += v30;
LABEL_36:
      v31 = (char *)v29;
      goto LABEL_37;
    }
    v34 = v30 - v28;
    v29 += v28;
    if ( v34 == -1 )
    {
      v35 = -2;
    }
    else
    {
      if ( !v34 )
        goto LABEL_36;
      v35 = v34 - 1;
    }
    v31 = (char *)(v29 + 1);
    v29 += v35 + 1;
LABEL_37:
    v49.m128i_i64[0] = (__int64)v50;
    sub_12FAAE0(&v49, v31, (__int64)v29);
    v22 = *(__m128i **)(a4 + 8);
    if ( v22 != *(__m128i **)(a4 + 16) )
    {
      v22->m128i_i64[0] = (__int64)v22[1].m128i_i64;
      if ( (__m128i *)v49.m128i_i64[0] != v50 )
      {
        v22->m128i_i64[0] = v49.m128i_i64[0];
        v22[1].m128i_i64[0] = v50[0].m128i_i64[0];
        goto LABEL_22;
      }
LABEL_44:
      v22[1] = _mm_load_si128(v50);
      goto LABEL_22;
    }
    sub_A82970((void ***)a4, v22, &v49);
    v37 = (void *)v49.m128i_i64[0];
    if ( (__m128i *)v49.m128i_i64[0] != v50 )
      goto LABEL_53;
LABEL_23:
    v24 = v8 + 1;
    if ( v8 + 1 == v9 )
      break;
    if ( a2 )
    {
      while ( !*v24 || !(unsigned __int8)sub_21B9810(*v24, a2) )
      {
        if ( ++v24 == v9 )
          return;
      }
      v8 = v24;
      goto LABEL_6;
    }
    v8 = &v24[((unsigned __int64)((char *)(v9 - 2) - (char *)v8) >> 3) + 1];
    if ( v9 == v8 )
      return;
    v10 = *v8;
    v11 = **v8;
    if ( *(_BYTE *)(v11 + 44) != 3 )
      goto LABEL_8;
  }
}
