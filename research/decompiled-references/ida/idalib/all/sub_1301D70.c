__m128i *__fastcall sub_1301D70(char **a1, __m128i *a2, __int64 *a3, _BYTE *a4, _BYTE *a5)
{
  __m128i *v5; // r11
  char *v7; // r13
  int v8; // r12d
  char v9; // bp
  char *v10; // rdi
  char v11; // bl
  __int64 v12; // rsi
  _BYTE *v13; // rdx
  char v14; // al
  __m128i *v15; // r14
  char *v17; // rbp
  __int64 v18; // r12
  __int64 v19; // rdi
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r14
  __m128i *v22; // rax
  __m128i *v23; // rbx
  char v24; // si
  __int64 *v25; // rax
  int v26; // r14d
  _BYTE *v27; // rdi
  __int64 v28; // rdx
  char v29; // r12
  __int64 v30; // rsi
  __int64 *v31; // rax
  char v32; // dl
  const __m128i *v33; // rdx
  char *v34; // rsi
  __m128i *v35; // rax
  __int32 v36; // ecx
  const __m128i *v37; // rcx
  void **v38; // r12
  unsigned __int64 v39; // rdx
  char *v40; // rax
  __int64 v41; // [rsp+0h] [rbp-68h] BYREF
  __m128i *v42; // [rsp+8h] [rbp-60h]
  __int64 *v43; // [rsp+10h] [rbp-58h]
  __int64 *v44; // [rsp+18h] [rbp-50h]
  _BYTE *v45; // [rsp+20h] [rbp-48h]
  _BYTE *v46; // [rsp+28h] [rbp-40h]

  v5 = a2;
  v7 = a1[1];
  if ( v7 != a1[2] )
  {
    v8 = *(_DWORD *)a3;
    v9 = *a4;
    v10 = a1[1];
    v11 = *a5;
    v12 = a2->m128i_i64[0];
    v13 = (_BYTE *)v5->m128i_i64[1];
    *(_QWORD *)v7 = v7 + 16;
    sub_12FAAE0(v10, (_BYTE *)v12, (__int64)&v13[v12]);
    v14 = v7[36];
    v15 = (__m128i *)a1[1];
    *((_DWORD *)v7 + 8) = v8;
    v7[36] = (2 * (v11 & 1)) | v9 & 1 | v14 & 0xFC;
    a1[1] = &v15[2].m128i_i8[8];
    return v15;
  }
  v17 = *a1;
  v18 = v7 - *a1;
  v19 = v18 >> 3;
  if ( 0xCCCCCCCCCCCCCCCDLL * (v18 >> 3) )
  {
    v20 = 0x999999999999999ALL * v19;
    v21 = 0x1FFFFFFFFFFFFFFELL;
    if ( 0xCCCCCCCCCCCCCCCDLL * v19 <= 0x999999999999999ALL * v19 && v20 <= 0x666666666666666LL )
    {
      if ( !v20 )
      {
        v41 = 40;
        v23 = nullptr;
        v44 = nullptr;
        goto LABEL_7;
      }
      v21 = 2 * v19;
    }
  }
  else
  {
    v21 = 5;
  }
  v46 = a5;
  v45 = a4;
  v43 = a3;
  v42 = v5;
  v22 = (__m128i *)operator new(v21 * 8);
  v5 = v42;
  a3 = v43;
  v23 = v22;
  a4 = v45;
  a5 = v46;
  v44 = &v22->m128i_i64[v21];
  v41 = (__int64)&v22[2].m128i_i64[1];
LABEL_7:
  v24 = *a4;
  v25 = (__int64 *)((char *)v23->m128i_i64 + v18);
  v26 = *(_DWORD *)a3;
  v27 = (_BYTE *)v5->m128i_i64[1];
  v28 = (__int64)v23[1].m128i_i64 + v18;
  v29 = *a5;
  v43 = v25;
  LOBYTE(v42) = v24;
  v30 = v5->m128i_i64[0];
  *v25 = v28;
  sub_12FAAE0(v25, (_BYTE *)v30, (__int64)&v27[v30]);
  v31 = v43;
  v32 = (char)v42;
  *((_DWORD *)v43 + 8) = v26;
  *((_BYTE *)v31 + 36) = (2 * (v29 & 1)) | v32 & 1 | *((_BYTE *)v31 + 36) & 0xFC;
  if ( v7 == v17 )
  {
    v15 = v23;
  }
  else
  {
    v33 = (const __m128i *)(v17 + 16);
    v34 = v17;
    v35 = v23;
    do
    {
      v35->m128i_i64[0] = (__int64)v35[1].m128i_i64;
      v37 = (const __m128i *)v33[-1].m128i_i64[0];
      if ( v37 == v33 )
      {
        v35[1] = _mm_loadu_si128(v33);
      }
      else
      {
        v35->m128i_i64[0] = (__int64)v37;
        v35[1].m128i_i64[0] = v33->m128i_i64[0];
      }
      v34 += 40;
      v35 = (__m128i *)((char *)v35 + 40);
      v35[-2].m128i_i64[0] = v33[-1].m128i_i64[1];
      v36 = v33[1].m128i_i32[0];
      v33[-1].m128i_i64[0] = (__int64)v33;
      v33 = (const __m128i *)((char *)v33 + 40);
      v33[-3].m128i_i64[0] = 0;
      v33[-3].m128i_i8[8] = 0;
      v35[-1].m128i_i32[2] = v36;
      LOBYTE(v36) = *(v34 - 4) & 1 | v35[-1].m128i_i8[12] & 0xFE;
      v35[-1].m128i_i8[12] = v36;
      v35[-1].m128i_i8[12] = *(v34 - 4) & 2 | v36 & 0xFD;
    }
    while ( v7 != v34 );
    v38 = (void **)v17;
    v39 = (0xCCCCCCCCCCCCCCDLL * ((unsigned __int64)(v7 - 40 - v17) >> 3)) & 0x1FFFFFFFFFFFFFFFLL;
    v15 = (__m128i *)((char *)v23 + 40 * v39 + 40);
    v41 = (__int64)&v23[5].m128i_i64[5 * v39];
    do
    {
      while ( *v38 != v38 + 2 )
      {
        operator delete(*v38);
        v38 += 5;
        if ( v7 == (char *)v38 )
          goto LABEL_17;
      }
      v38 += 5;
    }
    while ( v7 != (char *)v38 );
  }
LABEL_17:
  if ( v17 )
    operator delete(v17);
  v42 = v23;
  v40 = (char *)v44;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v41);
  a1[2] = v40;
  return v15;
}
