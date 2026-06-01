__int64 __fastcall sub_4A1220(__int64 a1, __int64 a2, const void **a3, unsigned __int64 a4, __int64 a5, int a6)
{
  char *v8; // r14
  void *v10; // rbx
  unsigned int v11; // ebp
  __int64 v12; // rax
  int v13; // r14d
  __int16 v15; // ax
  __int16 v16; // r8
  __int16 v17; // r13
  __int64 v18; // xmm2_8
  __m128d v19; // xmm0
  __m128d v20; // xmm1
  __m128i v21; // rax
  const void *v22; // r9
  __int64 v23; // rax
  void *v24; // rax
  void *v25; // rdi
  void *v26; // rdx
  __m128i v27; // xmm3
  __m128i v28; // xmm4
  __int16 v29; // ax
  __int16 v30; // ax
  void *v31; // rdi
  __int64 v32; // rax
  void *v33; // rdx
  __m128i v34; // xmm0
  char *v35; // rax
  bool v36; // zf
  __int64 v37; // rax
  __int64 v38; // rbx
  size_t v39; // r8
  char *v40; // rax
  __int64 v41; // rax
  __int64 v42; // r12
  size_t v43; // r11
  char *v44; // rax
  int v45; // [rsp+0h] [rbp-F0h]
  size_t v46; // [rsp+0h] [rbp-F0h]
  __int16 v47; // [rsp+Ch] [rbp-E4h]
  __int16 v48; // [rsp+Ch] [rbp-E4h]
  const void *v49; // [rsp+10h] [rbp-E0h]
  size_t v50; // [rsp+18h] [rbp-D8h]
  __m128i v51; // [rsp+38h] [rbp-B8h] BYREF
  void *dest; // [rsp+48h] [rbp-A8h] BYREF
  __m128i v53; // [rsp+50h] [rbp-A0h] BYREF
  void *ptr; // [rsp+68h] [rbp-88h] BYREF
  __m128i v55; // [rsp+70h] [rbp-80h] BYREF
  __m128d v56; // [rsp+88h] [rbp-68h]
  __int64 v57; // [rsp+98h] [rbp-58h]
  int v58; // [rsp+A0h] [rbp-50h]
  __int16 v59; // [rsp+A4h] [rbp-4Ch]
  __int16 v60; // [rsp+A6h] [rbp-4Ah]
  int v61; // [rsp+A8h] [rbp-48h]
  unsigned __int64 v62; // [rsp+B0h] [rbp-40h]

  v8 = (char *)*a3;
  v62 = __readfsqword(0x28u);
  dest = nullptr;
  v51 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)a4);
  v53 = 0;
  if ( !a6 )
  {
    v35 = v8;
    do
    {
      if ( (unsigned __int64)v35 >= a4 )
        return 0;
      ++v35;
    }
    while ( *(v35 - 1) );
    v51.m128i_i64[0] = (__int64)v35;
    if ( !v8 )
      return 0;
    v37 = v35 - v8;
    v36 = v37 == 0;
    v38 = v37;
    v39 = v37 - 1;
    v40 = nullptr;
    if ( !v36 )
    {
      v46 = v39;
      v40 = (char *)qvector_reserve(&dest, 0, v38, 1);
      dest = v40;
      v39 = v46;
    }
    v53.m128i_i64[0] = v38;
    v40[v38 - 1] = 0;
    memmove(dest, v8, v39);
  }
  v10 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a5 + 16LL))(a5);
  v11 = (*(__int64 (__fastcall **)(void *, __m128i *, unsigned __int64))(*(_QWORD *)v10 + 104LL))(v10, &v51, a4);
  if ( !(_BYTE)v11 )
    goto LABEL_6;
  v12 = v51.m128i_i64[0];
  v13 = 0;
  if ( v51.m128i_i64[0] < (unsigned __int64)v51.m128i_i64[1] )
  {
    v13 = *(unsigned __int8 *)v51.m128i_i64[0];
    v12 = v51.m128i_i64[0] + 1;
  }
  v51.m128i_i64[0] = v12;
  v45 = unpack_dd(&v51);
  v47 = unpack_dw(&v51, v51.m128i_i64[1]);
  if ( v51.m128i_i64[0] >= (unsigned __int64)v51.m128i_i64[1] )
    goto LABEL_6;
  v15 = unpack_dw(&v51, v51.m128i_i64[1]);
  v16 = v47;
  v17 = v15;
  if ( v13 == 1 )
  {
    ptr = nullptr;
    v55 = 0;
    if ( a6 )
    {
      v18 = 0;
      v19 = 0;
      v20 = 0;
LABEL_18:
      v24 = *(void **)(a2 + 48);
      v25 = *(void **)(a2 + 40);
      *(_DWORD *)(a2 + 32) = v13;
      v26 = dest;
      v27 = _mm_loadu_si128((const __m128i *)(a2 + 56));
      *(__m128d *)a2 = _mm_unpacklo_pd(v19, v20);
      dest = v24;
      v28 = _mm_loadu_si128(&v53);
      *(_QWORD *)(a2 + 48) = v26;
      *(_DWORD *)(a2 + 24) = v45;
      v29 = 0;
      if ( v16 >= 0 )
        v29 = v16;
      *(__m128i *)(a2 + 56) = v28;
      v53 = v27;
      *(_WORD *)(a2 + 28) = v29;
      v30 = 0;
      if ( v17 >= 0 )
        v30 = v17;
      *(_QWORD *)(a2 + 16) = v18;
      *(_WORD *)(a2 + 30) = v30;
      if ( v25 )
        qfree(v25);
      v31 = *(void **)(a2 + 72);
      v32 = *(_QWORD *)(a2 + 88);
      *(_QWORD *)(a2 + 40) = v10;
      v33 = ptr;
      v34 = _mm_loadu_si128(&v55);
      ptr = v31;
      *(_QWORD *)(a2 + 72) = v33;
      v55.m128i_i64[1] = v32;
      *(__m128i *)(a2 + 80) = v34;
      if ( v31 )
      {
        v55.m128i_i64[0] = 0;
        qfree(v31);
      }
      goto LABEL_7;
    }
    v18 = 0;
    v21.m128i_i64[1] = v51.m128i_i64[1];
    v22 = (const void *)v51.m128i_i64[0];
    v19 = 0;
    v20 = 0;
LABEL_35:
    v21.m128i_i64[0] = (__int64)v22;
    while ( v21.m128i_i64[0] < (unsigned __int64)v21.m128i_i64[1] )
    {
      if ( !*(_BYTE *)v21.m128i_i64[0]++ )
      {
        v51.m128i_i64[0] = v21.m128i_i64[0];
        if ( !v22 )
          break;
        v41 = v21.m128i_i64[0] - (_QWORD)v22;
        v42 = v41;
        v43 = v41 - 1;
        if ( v41 )
        {
          v50 = v41 - 1;
          v49 = v22;
          v44 = (char *)qvector_reserve(&ptr, 0, v41, 1);
          v43 = v50;
          ptr = v44;
          v22 = v49;
          v16 = v47;
        }
        else
        {
          v44 = (char *)ptr;
        }
        v55.m128i_i64[0] = v42;
        v44[v42 - 1] = 0;
        v48 = v16;
        memmove(ptr, v22, v43);
        v16 = v48;
        v20 = (__m128d)*(unsigned __int64 *)&v20.m128d_f64[0];
        v19 = (__m128d)*(unsigned __int64 *)&v19.m128d_f64[0];
        if ( (unsigned int)(v13 - 4) > 0x7FFFFFFB )
          goto LABEL_16;
        goto LABEL_17;
      }
    }
LABEL_15:
    if ( (unsigned int)(v13 - 4) > 0x7FFFFFFB )
    {
LABEL_16:
      if ( v13 )
        goto LABEL_18;
    }
LABEL_17:
    v13 = 1;
    goto LABEL_18;
  }
  v21 = v51;
  v22 = (const void *)(v51.m128i_i64[0] + 24);
  if ( v51.m128i_i64[1] >= (unsigned __int64)(v51.m128i_i64[0] + 24) )
  {
    v51.m128i_i64[0] += 24;
    v19 = (__m128d)_mm_loadu_si128((const __m128i *)v21.m128i_i64[0]);
    v23 = *(_QWORD *)(v21.m128i_i64[0] + 16);
    v59 = v47;
    v58 = v45;
    v56 = v19;
    v19 = (__m128d)*(unsigned __int64 *)&v19.m128d_f64[0];
    v20 = (__m128d)*(unsigned __int64 *)&v56.m128d_f64[1];
    v57 = v23;
    v18 = v23;
    v60 = v17;
    v61 = v13;
    ptr = nullptr;
    v55 = 0;
    if ( a6 )
      goto LABEL_15;
    goto LABEL_35;
  }
LABEL_6:
  qfree(v10);
  v11 = 0;
LABEL_7:
  if ( dest )
  {
    v53.m128i_i64[0] = 0;
    qfree(dest);
  }
  return v11;
}

