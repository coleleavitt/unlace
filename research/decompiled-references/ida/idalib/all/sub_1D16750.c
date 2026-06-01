unsigned __int16 *__fastcall sub_1D16750(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __m128 *a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // r13
  char v8; // bl
  __int64 v10; // r15
  unsigned __int16 *v11; // r13
  unsigned __int16 *v12; // rbp
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  bool v17; // zf
  _BYTE *v18; // rbp
  const __m128i *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int16 *v22; // rbx
  unsigned int *v24; // rax
  __int64 v25; // r14
  int v26; // eax
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  _BYTE *v35; // rbp
  const __m128i *v36; // rax
  __int64 v37; // rax
  void **v38; // rsi
  __m128 *v39; // r13
  void **v40; // rdi
  void **v41; // rsi
  __int64 v43; // [rsp+10h] [rbp-188h]
  unsigned __int64 v44; // [rsp+18h] [rbp-180h] BYREF
  __int64 v45; // [rsp+20h] [rbp-178h]
  unsigned __int64 v46; // [rsp+28h] [rbp-170h] BYREF
  void **p_ptr; // [rsp+30h] [rbp-168h]
  __m128 *v48; // [rsp+38h] [rbp-160h]
  __m128 v49; // [rsp+40h] [rbp-158h] BYREF
  __int64 v50; // [rsp+50h] [rbp-148h]
  void *v51[2]; // [rsp+60h] [rbp-138h] BYREF
  _QWORD v52[4]; // [rsp+70h] [rbp-128h] BYREF
  void *ptr; // [rsp+90h] [rbp-108h] BYREF
  __int64 v54; // [rsp+98h] [rbp-100h]
  char v55; // [rsp+A0h] [rbp-F8h] BYREF

  v7 = a2;
  p_ptr = &ptr;
  ptr = &v55;
  v54 = 0x800000000LL;
  if ( (*(_DWORD *)(a2 + 16) & 0x7FFFFFFF) != 0 )
  {
    v8 = 0;
    v10 = 0;
    v43 = 8LL * ((*(_DWORD *)(a2 + 16) & 0x7FFFFFFFu) - 1) + 8;
    v48 = &v49;
    while ( 1 )
    {
      v11 = *(unsigned __int16 **)(a2 + 2 * v10 + 40);
      v12 = *(unsigned __int16 **)(a2 + 2 * v10 + 48);
      if ( *(char *)(a2 + 19) < 0 )
      {
        v24 = (unsigned int *)(a2 + v10 + 16LL * (*(_DWORD *)(a2 + 16) & 0x7FFFFFFF) + 40);
        v45 = *(_QWORD *)v24;
        a3 = *v24;
        if ( (_DWORD)a3 )
          break;
      }
      v13 = sub_1D11200(a1, v11, a6, a7, a3, (unsigned __int64)a4, a5);
      if ( v13 == 1 )
        goto LABEL_40;
      if ( v11 != (unsigned __int16 *)(v13 & 0xFFFFFFFFFFFFFFFELL) )
        v8 = 1;
      v16 = sub_1D11200(a1, v12, a6, a7, 1, v14, v15);
      if ( v16 == 1 )
      {
LABEL_40:
        v22 = (_WORD *)(&dword_0 + 1);
        goto LABEL_17;
      }
      v44 = v16 & 0xFFFFFFFFFFFFFFFELL;
      v17 = v12 == (unsigned __int16 *)(v16 & 0xFFFFFFFFFFFFFFFELL);
      v18 = ptr;
      if ( !v17 )
        v8 = 1;
      v52[0] = 0;
      a3 = (unsigned int)v54 + 1LL;
      a6 = _mm_loadh_ps((const double *)&v44);
      a4 = (__m128 *)((char *)ptr + 24 * (unsigned int)v54);
      v19 = (const __m128i *)v51;
      *(__m128 *)v51 = a6;
      if ( a3 > HIDWORD(v54) )
      {
        v38 = p_ptr + 2;
        if ( ptr > v51 || a4 <= (__m128 *)v51 )
        {
          sub_2237220(p_ptr, v38, a3, 24);
          a3 = 3LL * (unsigned int)v54;
          a4 = (__m128 *)((char *)ptr + 24 * (unsigned int)v54);
          v19 = (const __m128i *)v51;
        }
        else
        {
          sub_2237220(p_ptr, v38, a3, 24);
          a3 = (unsigned __int64)ptr;
          v19 = (const __m128i *)((char *)ptr + (char *)v51 - v18);
          a4 = (__m128 *)((char *)ptr + 24 * (unsigned int)v54);
        }
      }
      a7 = (__m128)_mm_loadu_si128(v19);
      *a4 = a7;
      v20 = v19[1].m128i_i64[0];
      LODWORD(v54) = v54 + 1;
      a4[1].m128_u64[0] = v20;
LABEL_12:
      v10 += 8;
      if ( v10 == v43 )
      {
        v7 = a2;
        goto LABEL_14;
      }
    }
    v51[0] = v52;
    v51[1] = (void *)0x200000000LL;
    sub_1E4CA90(v11);
    sub_1E4CA90(v12);
    v25 = *a1;
    v26 = *(_DWORD *)(*a1 + 12632);
    *(_DWORD *)(*a1 + 12632) = 0;
    LODWORD(v44) = v26;
    v30 = sub_1D11200(a1, v11, a6, a7, v27, v28, v29);
    if ( v30 == 1 )
      goto LABEL_30;
    v46 = v30 & 0xFFFFFFFFFFFFFFFELL;
    if ( v11 != (unsigned __int16 *)(v30 & 0xFFFFFFFFFFFFFFFELL) )
      v8 = 1;
    v33 = sub_1D11200(a1, v12, a6, a7, v31, 1u, v32);
    if ( v33 == 1 )
    {
LABEL_30:
      v22 = (_WORD *)(&dword_0 + 1);
      *(_DWORD *)(v25 + 12632) = v44;
      if ( v51[0] != v52 )
        free(v51[0]);
      goto LABEL_17;
    }
    v34 = v33 & 0xFFFFFFFFFFFFFFFELL;
    v17 = v12 == (unsigned __int16 *)v34;
    v46 = v34;
    v35 = ptr;
    if ( !v17 )
      v8 = 1;
    v50 = v45;
    a6 = _mm_loadh_ps((const double *)&v46);
    a3 = (unsigned int)v54 + 1LL;
    v49 = a6;
    a4 = (__m128 *)((char *)ptr + 24 * (unsigned int)v54);
    v36 = (const __m128i *)v48;
    if ( a3 > HIDWORD(v54) )
    {
      v39 = v48;
      if ( ptr > v48 )
      {
        v40 = p_ptr;
        v41 = p_ptr + 2;
      }
      else
      {
        v40 = p_ptr;
        v41 = p_ptr + 2;
        if ( a4 > v48 )
        {
          sub_2237220(p_ptr, v41, a3, 24);
          a3 = (unsigned __int64)ptr;
          v36 = (const __m128i *)((char *)ptr + (char *)v48 - v35);
          a4 = (__m128 *)((char *)ptr + 24 * (unsigned int)v54);
          goto LABEL_28;
        }
      }
      sub_2237220(v40, v41, a3, 24);
      a3 = 3LL * (unsigned int)v54;
      a4 = (__m128 *)((char *)ptr + 24 * (unsigned int)v54);
      v36 = (const __m128i *)v39;
    }
LABEL_28:
    *(__m128i *)a4 = _mm_loadu_si128(v36);
    v37 = v36[1].m128i_i64[0];
    LODWORD(v54) = v54 + 1;
    a4[1].m128_u64[0] = v37;
    *(_DWORD *)(v25 + 12632) = v44;
    if ( v51[0] != v52 )
      free(v51[0]);
    goto LABEL_12;
  }
  v8 = 0;
LABEL_14:
  v21 = *a1;
  if ( *(_DWORD *)(*a1 + 12632) || v8 )
    v22 = sub_19E4C10(*(_QWORD *)(v21 + 736), *(_QWORD *)(v7 + 20), (const __m128i *)ptr, (unsigned int)v54, a6, a7);
  else
    v22 = sub_19A3E40(v21, (unsigned __int16 *)v7, a3, (unsigned __int64)a4, a5, a6, a7);
LABEL_17:
  if ( ptr != p_ptr + 2 )
    free(ptr);
  return v22;
}
