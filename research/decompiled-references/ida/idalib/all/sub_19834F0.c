__int64 __fastcall sub_19834F0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // r13
  char v5; // bl
  __int64 v7; // r15
  unsigned __int16 *v8; // r13
  unsigned __int16 *v9; // rbp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  bool v12; // zf
  _BYTE *v13; // rbp
  unsigned __int64 v14; // rdx
  __m128 *v15; // rcx
  const __m128i *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v21; // r14
  int v22; // eax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  _BYTE *v26; // rbp
  unsigned __int64 v27; // rdx
  __m128i *v28; // rcx
  const __m128i *v29; // rax
  __int64 v30; // rax
  void **v31; // rsi
  __m128 *v32; // r13
  void **v33; // rdi
  void **v34; // rsi
  __int64 v36; // [rsp+10h] [rbp-188h]
  unsigned __int64 v37; // [rsp+18h] [rbp-180h] BYREF
  __int64 v38; // [rsp+20h] [rbp-178h]
  unsigned __int64 v39; // [rsp+28h] [rbp-170h] BYREF
  void **p_ptr; // [rsp+30h] [rbp-168h]
  __m128 *v41; // [rsp+38h] [rbp-160h]
  __m128 v42; // [rsp+40h] [rbp-158h] BYREF
  __int64 v43; // [rsp+50h] [rbp-148h]
  void *v44[2]; // [rsp+60h] [rbp-138h] BYREF
  _QWORD v45[4]; // [rsp+70h] [rbp-128h] BYREF
  void *ptr; // [rsp+90h] [rbp-108h] BYREF
  __int64 v47; // [rsp+98h] [rbp-100h]
  char v48; // [rsp+A0h] [rbp-F8h] BYREF

  v4 = a2;
  p_ptr = &ptr;
  ptr = &v48;
  v47 = 0x800000000LL;
  if ( (*(_DWORD *)(a2 + 16) & 0x7FFFFFFF) != 0 )
  {
    v5 = 0;
    v7 = 0;
    v36 = 8LL * ((*(_DWORD *)(a2 + 16) & 0x7FFFFFFFu) - 1) + 8;
    v41 = &v42;
    while ( 1 )
    {
      v8 = *(unsigned __int16 **)(a2 + 2 * v7 + 40);
      v9 = *(unsigned __int16 **)(a2 + 2 * v7 + 48);
      if ( *(char *)(a2 + 19) >= 0
        || (v38 = *(_QWORD *)(a2 + v7 + 16LL * (*(_DWORD *)(a2 + 16) & 0x7FFFFFFF) + 40), !(_DWORD)v38) )
      {
        v10 = sub_190CCA0(a1, v8, *(double *)a3.m128_u64, a4);
        if ( v10 == 1 )
          goto LABEL_37;
        if ( v8 != (unsigned __int16 *)(v10 & 0xFFFFFFFFFFFFFFFELL) )
          v5 = 1;
        v11 = sub_190CCA0(a1, v9, *(double *)a3.m128_u64, a4);
        if ( v11 == 1 )
        {
LABEL_37:
          v19 = 1;
          goto LABEL_15;
        }
        v37 = v11 & 0xFFFFFFFFFFFFFFFELL;
        v12 = v9 == (unsigned __int16 *)(v11 & 0xFFFFFFFFFFFFFFFELL);
        v13 = ptr;
        if ( !v12 )
          v5 = 1;
        v45[0] = 0;
        v14 = (unsigned int)v47 + 1LL;
        a3 = _mm_loadh_ps((const double *)&v37);
        v15 = (__m128 *)((char *)ptr + 24 * (unsigned int)v47);
        v16 = (const __m128i *)v44;
        *(__m128 *)v44 = a3;
        if ( v14 > HIDWORD(v47) )
        {
          v31 = p_ptr + 2;
          if ( ptr > v44 || v15 <= (__m128 *)v44 )
          {
            sub_2237220(p_ptr, v31, v14, 24);
            v15 = (__m128 *)((char *)ptr + 24 * (unsigned int)v47);
            v16 = (const __m128i *)v44;
          }
          else
          {
            sub_2237220(p_ptr, v31, v14, 24);
            v16 = (const __m128i *)((char *)ptr + (char *)v44 - v13);
            v15 = (__m128 *)((char *)ptr + 24 * (unsigned int)v47);
          }
        }
        a4 = (__m128)_mm_loadu_si128(v16);
        *v15 = a4;
        v17 = v16[1].m128i_i64[0];
        LODWORD(v47) = v47 + 1;
        v15[1].m128_u64[0] = v17;
        goto LABEL_12;
      }
      v44[0] = v45;
      v44[1] = (void *)0x200000000LL;
      sub_1E4CA90(v8);
      sub_1E4CA90(v9);
      v21 = *a1;
      v22 = *(_DWORD *)(*a1 + 12632);
      *(_DWORD *)(*a1 + 12632) = 0;
      LODWORD(v37) = v22;
      v23 = sub_190CCA0(a1, v8, *(double *)a3.m128_u64, a4);
      if ( v23 == 1 )
        goto LABEL_28;
      v39 = v23 & 0xFFFFFFFFFFFFFFFELL;
      if ( v8 != (unsigned __int16 *)(v23 & 0xFFFFFFFFFFFFFFFELL) )
        v5 = 1;
      v24 = sub_190CCA0(a1, v9, *(double *)a3.m128_u64, a4);
      if ( v24 == 1 )
      {
LABEL_28:
        v19 = 1;
        *(_DWORD *)(v21 + 12632) = v37;
        if ( v44[0] != v45 )
          free(v44[0]);
        goto LABEL_15;
      }
      v25 = v24 & 0xFFFFFFFFFFFFFFFELL;
      v12 = v9 == (unsigned __int16 *)v25;
      v39 = v25;
      v26 = ptr;
      if ( !v12 )
        v5 = 1;
      v43 = v38;
      a3 = _mm_loadh_ps((const double *)&v39);
      v27 = (unsigned int)v47 + 1LL;
      v42 = a3;
      v28 = (__m128i *)((char *)ptr + 24 * (unsigned int)v47);
      v29 = (const __m128i *)v41;
      if ( v27 > HIDWORD(v47) )
      {
        v32 = v41;
        if ( ptr > v41 )
        {
          v33 = p_ptr;
          v34 = p_ptr + 2;
        }
        else
        {
          v33 = p_ptr;
          v34 = p_ptr + 2;
          if ( v28 > (__m128i *)v41 )
          {
            sub_2237220(p_ptr, v34, v27, 24);
            v29 = (const __m128i *)((char *)ptr + (char *)v41 - v26);
            v28 = (__m128i *)((char *)ptr + 24 * (unsigned int)v47);
            goto LABEL_26;
          }
        }
        sub_2237220(v33, v34, v27, 24);
        v28 = (__m128i *)((char *)ptr + 24 * (unsigned int)v47);
        v29 = (const __m128i *)v32;
      }
LABEL_26:
      *v28 = _mm_loadu_si128(v29);
      v30 = v29[1].m128i_i64[0];
      LODWORD(v47) = v47 + 1;
      v28[1].m128i_i64[0] = v30;
      *(_DWORD *)(v21 + 12632) = v37;
      if ( v44[0] != v45 )
        free(v44[0]);
LABEL_12:
      v7 += 8;
      if ( v7 == v36 )
      {
        v4 = a2;
        v18 = *a1;
        if ( !v5 )
          goto LABEL_41;
        v19 = sub_19E4C10(*(_QWORD *)(v18 + 736), *(_QWORD *)(a2 + 20), ptr, (unsigned int)v47);
        goto LABEL_15;
      }
    }
  }
  v18 = *a1;
LABEL_41:
  v19 = sub_19A3E40(v18, v4);
LABEL_15:
  if ( ptr != p_ptr + 2 )
    free(ptr);
  return v19;
}
