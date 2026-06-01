__int64 __fastcall sub_1765140(__int64 *a1, __int64 a2)
{
  __int64 v2; // r13
  char v3; // bl
  __int64 v5; // r15
  unsigned __int16 *v6; // r13
  unsigned __int16 *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  bool v10; // zf
  _BYTE *v11; // rbp
  unsigned __int64 v12; // rdx
  __m128i *v13; // rcx
  const __m128i *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 *v19; // rax
  __int64 v20; // r14
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  _BYTE *v25; // rbp
  unsigned __int64 v26; // rdx
  __m128i *v27; // rcx
  const __m128i *v28; // rax
  __int64 v29; // rax
  void **v30; // rsi
  __m128 *v31; // r13
  void **v32; // rdi
  void **v33; // rsi
  __int64 v35; // [rsp+10h] [rbp-188h]
  unsigned __int64 v36; // [rsp+18h] [rbp-180h] BYREF
  __int64 v37; // [rsp+20h] [rbp-178h]
  unsigned __int64 v38; // [rsp+28h] [rbp-170h] BYREF
  void **p_ptr; // [rsp+30h] [rbp-168h]
  __m128 *v40; // [rsp+38h] [rbp-160h]
  __m128 v41; // [rsp+40h] [rbp-158h] BYREF
  __int64 v42; // [rsp+50h] [rbp-148h]
  void *v43[2]; // [rsp+60h] [rbp-138h] BYREF
  _QWORD v44[4]; // [rsp+70h] [rbp-128h] BYREF
  void *ptr; // [rsp+90h] [rbp-108h] BYREF
  __int64 v46; // [rsp+98h] [rbp-100h]
  char v47; // [rsp+A0h] [rbp-F8h] BYREF

  v2 = a2;
  p_ptr = &ptr;
  ptr = &v47;
  v46 = 0x800000000LL;
  if ( (*(_DWORD *)(a2 + 16) & 0x7FFFFFFF) != 0 )
  {
    v3 = 0;
    v5 = 0;
    v35 = 8LL * ((*(_DWORD *)(a2 + 16) & 0x7FFFFFFFu) - 1) + 8;
    v40 = &v41;
    while ( 1 )
    {
      v6 = *(unsigned __int16 **)(a2 + 2 * v5 + 40);
      v7 = *(unsigned __int16 **)(a2 + 2 * v5 + 48);
      if ( *(char *)(a2 + 19) < 0 )
      {
        v19 = (__int64 *)(a2 + v5 + 16LL * (*(_DWORD *)(a2 + 16) & 0x7FFFFFFF) + 40);
        v37 = *v19;
        if ( *(_DWORD *)v19 )
          break;
      }
      v8 = sub_175B800(a1, v6);
      if ( v8 == 1 )
        goto LABEL_40;
      if ( v6 != (unsigned __int16 *)(v8 & 0xFFFFFFFFFFFFFFFELL) )
        v3 = 1;
      v9 = sub_175B800(a1, v7);
      if ( v9 == 1 )
      {
LABEL_40:
        v17 = 1;
        goto LABEL_17;
      }
      v36 = v9 & 0xFFFFFFFFFFFFFFFELL;
      v10 = v7 == (unsigned __int16 *)(v9 & 0xFFFFFFFFFFFFFFFELL);
      v11 = ptr;
      if ( !v10 )
        v3 = 1;
      v44[0] = 0;
      v12 = (unsigned int)v46 + 1LL;
      v13 = (__m128i *)((char *)ptr + 24 * (unsigned int)v46);
      v14 = (const __m128i *)v43;
      *(__m128 *)v43 = _mm_loadh_ps((const double *)&v36);
      if ( v12 > HIDWORD(v46) )
      {
        v30 = p_ptr + 2;
        if ( ptr > v43 || v13 <= (__m128i *)v43 )
        {
          sub_2237220(p_ptr, v30, v12, 24);
          v13 = (__m128i *)((char *)ptr + 24 * (unsigned int)v46);
          v14 = (const __m128i *)v43;
        }
        else
        {
          sub_2237220(p_ptr, v30, v12, 24);
          v14 = (const __m128i *)((char *)ptr + (char *)v43 - v11);
          v13 = (__m128i *)((char *)ptr + 24 * (unsigned int)v46);
        }
      }
      *v13 = _mm_loadu_si128(v14);
      v15 = v14[1].m128i_i64[0];
      LODWORD(v46) = v46 + 1;
      v13[1].m128i_i64[0] = v15;
LABEL_12:
      v5 += 8;
      if ( v5 == v35 )
      {
        v2 = a2;
        goto LABEL_14;
      }
    }
    v43[0] = v44;
    v43[1] = (void *)0x200000000LL;
    sub_1E4CA90(v6);
    sub_1E4CA90(v7);
    v20 = *a1;
    v21 = *(_DWORD *)(*a1 + 12632);
    *(_DWORD *)(*a1 + 12632) = 0;
    LODWORD(v36) = v21;
    v22 = sub_175B800(a1, v6);
    if ( v22 == 1 )
      goto LABEL_30;
    v38 = v22 & 0xFFFFFFFFFFFFFFFELL;
    if ( v6 != (unsigned __int16 *)(v22 & 0xFFFFFFFFFFFFFFFELL) )
      v3 = 1;
    v23 = sub_175B800(a1, v7);
    if ( v23 == 1 )
    {
LABEL_30:
      v17 = 1;
      *(_DWORD *)(v20 + 12632) = v36;
      if ( v43[0] != v44 )
        free(v43[0]);
      goto LABEL_17;
    }
    v24 = v23 & 0xFFFFFFFFFFFFFFFELL;
    v10 = v7 == (unsigned __int16 *)v24;
    v38 = v24;
    v25 = ptr;
    if ( !v10 )
      v3 = 1;
    v42 = v37;
    v26 = (unsigned int)v46 + 1LL;
    v41 = _mm_loadh_ps((const double *)&v38);
    v27 = (__m128i *)((char *)ptr + 24 * (unsigned int)v46);
    v28 = (const __m128i *)v40;
    if ( v26 > HIDWORD(v46) )
    {
      v31 = v40;
      if ( ptr > v40 )
      {
        v32 = p_ptr;
        v33 = p_ptr + 2;
      }
      else
      {
        v32 = p_ptr;
        v33 = p_ptr + 2;
        if ( v27 > (__m128i *)v40 )
        {
          sub_2237220(p_ptr, v33, v26, 24);
          v28 = (const __m128i *)((char *)ptr + (char *)v40 - v25);
          v27 = (__m128i *)((char *)ptr + 24 * (unsigned int)v46);
          goto LABEL_28;
        }
      }
      sub_2237220(v32, v33, v26, 24);
      v27 = (__m128i *)((char *)ptr + 24 * (unsigned int)v46);
      v28 = (const __m128i *)v31;
    }
LABEL_28:
    *v27 = _mm_loadu_si128(v28);
    v29 = v28[1].m128i_i64[0];
    LODWORD(v46) = v46 + 1;
    v27[1].m128i_i64[0] = v29;
    *(_DWORD *)(v20 + 12632) = v36;
    if ( v43[0] != v44 )
      free(v43[0]);
    goto LABEL_12;
  }
  v3 = 0;
LABEL_14:
  v16 = *a1;
  if ( *(_DWORD *)(*a1 + 12632) || v3 )
    v17 = sub_19E4C10(*(_QWORD *)(v16 + 736), *(_QWORD *)(v2 + 20), ptr, (unsigned int)v46);
  else
    v17 = sub_19A3E40(v16, v2);
LABEL_17:
  if ( ptr != p_ptr + 2 )
    free(ptr);
  return v17;
}
