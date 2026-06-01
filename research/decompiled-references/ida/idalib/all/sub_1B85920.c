unsigned __int16 *__fastcall sub_1B85920(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7)
{
  const __m128i *v8; // rdx
  int v9; // eax
  int v10; // eax
  __int64 v11; // r13
  unsigned __int16 *v12; // rdx
  unsigned __int16 *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  void *v18; // r14
  __int64 v19; // rax
  _BYTE *v20; // r12
  unsigned __int64 v21; // rdx
  const __m128i *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int16 *v25; // rbp
  __int64 v27; // r14
  __int64 v28; // rdx
  int v29; // eax
  unsigned __int16 *v30; // rsi
  unsigned __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  const __m128i *v37; // r12
  unsigned __int64 v38; // rdx
  __m128i *v39; // rax
  __int64 v40; // rdx
  void **v41; // rsi
  __int64 v42; // [rsp+8h] [rbp-180h]
  unsigned __int16 *v43; // [rsp+10h] [rbp-178h] BYREF
  int v44; // [rsp+1Ch] [rbp-16Ch]
  void **p_ptr; // [rsp+20h] [rbp-168h]
  unsigned __int64 v46; // [rsp+28h] [rbp-160h]
  __m128 v47; // [rsp+30h] [rbp-158h] BYREF
  unsigned __int64 v48; // [rsp+40h] [rbp-148h]
  void *v49; // [rsp+50h] [rbp-138h] BYREF
  unsigned __int64 v50; // [rsp+58h] [rbp-130h]
  _QWORD v51[4]; // [rsp+60h] [rbp-128h] BYREF
  void *ptr; // [rsp+80h] [rbp-108h] BYREF
  __int64 v53; // [rsp+88h] [rbp-100h]
  _BYTE v54[248]; // [rsp+90h] [rbp-F8h] BYREF

  v8 = (const __m128i *)v54;
  p_ptr = &ptr;
  v53 = 0x800000000LL;
  v9 = *(_DWORD *)(a2 + 16);
  ptr = v54;
  v10 = v9 & 0x7FFFFFFF;
  if ( v10 )
  {
    v11 = 0;
    v42 = 8LL * (unsigned int)(v10 - 1) + 8;
    while ( 1 )
    {
      v12 = *(unsigned __int16 **)(a2 + 2 * v11 + 40);
      v13 = *(unsigned __int16 **)(a2 + 2 * v11 + 48);
      if ( *(char *)(a2 + 19) < 0
        && (v46 = *(_QWORD *)(a2 + v11 + 16LL * (*(_DWORD *)(a2 + 16) & 0x7FFFFFFF) + 40), a6 = v46, (_DWORD)v46) )
      {
        v43 = v12;
        v49 = v51;
        v50 = 0x200000000LL;
        sub_1E4CA90(v12);
        sub_1E4CA90(v13);
        v27 = *a1;
        v28 = (__int64)v43;
        v29 = *(_DWORD *)(*a1 + 12632);
        v30 = v43;
        *(_DWORD *)(*a1 + 12632) = 0;
        v44 = v29;
        v43 = (unsigned __int16 *)sub_1B7CAD0(a1, v30, a3, a4, v28, v31, v32);
        if ( v43 == (unsigned __int16 *)((char *)&dword_0 + 1)
          || (v36 = sub_1B7CAD0(a1, v13, a3, a4, v33, v34, v35), v36 == 1) )
        {
          v25 = (_WORD *)(&dword_0 + 1);
          *(_DWORD *)(v27 + 12632) = v44;
          if ( v49 != v51 )
            free(v49);
          goto LABEL_11;
        }
        v43 = (unsigned __int16 *)v36;
        v37 = (const __m128i *)&v47;
        a6 = HIDWORD(v53);
        v48 = v46;
        a3 = (__m128)_mm_and_si128((__m128i)_mm_loadh_ps((const double *)&v43), (__m128i)xmmword_23AA750);
        v38 = (unsigned int)v53 + 1LL;
        v47 = a3;
        v39 = (__m128i *)((char *)ptr + 24 * (unsigned int)v53);
        if ( v38 > HIDWORD(v53) )
        {
          if ( ptr > &v47 || v39 <= (__m128i *)&v47 )
          {
            sub_2237220(p_ptr, p_ptr + 2, v38, 24);
            v39 = (__m128i *)((char *)ptr + 24 * (unsigned int)v53);
          }
          else
          {
            v43 = (unsigned __int16 *)ptr;
            sub_2237220(p_ptr, p_ptr + 2, v38, 24);
            v37 = (const __m128i *)((char *)ptr + (char *)&v47 - (char *)v43);
            v39 = (__m128i *)((char *)ptr + 24 * (unsigned int)v53);
          }
        }
        *v39 = _mm_loadu_si128(v37);
        v40 = v37[1].m128i_i64[0];
        LODWORD(v53) = v53 + 1;
        v39[1].m128i_i64[0] = v40;
        *(_DWORD *)(v27 + 12632) = v44;
        if ( v49 != v51 )
          free(v49);
      }
      else
      {
        v14 = sub_1B7CAD0(a1, v12, a3, a4, (__int64)v12, a6, a7);
        if ( v14 == 1
          || (v18 = (void *)(v14 & 0xFFFFFFFFFFFFFFFELL), v19 = sub_1B7CAD0(a1, v13, a3, a4, v15, v16, v17), v19 == 1) )
        {
          v25 = (_WORD *)(&dword_0 + 1);
          goto LABEL_11;
        }
        v20 = ptr;
        v51[0] = 0;
        v50 = v19 & 0xFFFFFFFFFFFFFFFELL;
        v49 = v18;
        v21 = (unsigned int)v53 + 1LL;
        a6 = (unsigned __int64)ptr + 24 * (unsigned int)v53;
        v22 = (const __m128i *)&v49;
        if ( v21 > HIDWORD(v53) )
        {
          v41 = p_ptr + 2;
          if ( ptr > &v49 || a6 <= (unsigned __int64)&v49 )
          {
            sub_2237220(p_ptr, v41, v21, 24);
            a6 = (unsigned __int64)ptr + 24 * (unsigned int)v53;
            v22 = (const __m128i *)&v49;
          }
          else
          {
            sub_2237220(p_ptr, v41, v21, 24);
            v22 = (const __m128i *)((char *)ptr + (char *)&v49 - v20);
            a6 = (unsigned __int64)ptr + 24 * (unsigned int)v53;
          }
        }
        a4 = (__m128)_mm_loadu_si128(v22);
        *(__m128 *)a6 = a4;
        v23 = v22[1].m128i_i64[0];
        LODWORD(v53) = v53 + 1;
        *(_QWORD *)(a6 + 16) = v23;
      }
      v11 += 8;
      if ( v11 == v42 )
      {
        v8 = (const __m128i *)ptr;
        v24 = (unsigned int)v53;
        goto LABEL_10;
      }
    }
  }
  v24 = 0;
LABEL_10:
  v25 = sub_19E4C10(*(_QWORD *)(*a1 + 736), *(_QWORD *)(a2 + 20), v8, v24, a3, a4);
LABEL_11:
  if ( ptr != p_ptr + 2 )
    free(ptr);
  return v25;
}
