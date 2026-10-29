__int64 __fastcall sub_195ACA0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  _BYTE *v5; // rdx
  int v6; // eax
  int v7; // eax
  __int64 v8; // r13
  unsigned __int16 *v9; // rdx
  unsigned __int16 *v10; // r12
  __int64 v11; // rax
  void *v12; // r14
  __int64 v13; // rax
  _BYTE *v14; // r12
  unsigned __int64 v15; // rdx
  __m128 *v16; // rcx
  const __m128i *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v22; // r14
  int v23; // eax
  unsigned __int16 *v24; // rsi
  __int64 v25; // rax
  const __m128i *v26; // r12
  unsigned __int64 v27; // rdx
  __m128i *v28; // rax
  __int64 v29; // rdx
  void **v30; // rsi
  __int64 v31; // [rsp+8h] [rbp-180h]
  unsigned __int16 *v32; // [rsp+10h] [rbp-178h] BYREF
  int v33; // [rsp+1Ch] [rbp-16Ch]
  void **p_ptr; // [rsp+20h] [rbp-168h]
  __int64 v35; // [rsp+28h] [rbp-160h]
  __m128 v36; // [rsp+30h] [rbp-158h] BYREF
  __int64 v37; // [rsp+40h] [rbp-148h]
  void *v38; // [rsp+50h] [rbp-138h] BYREF
  unsigned __int64 v39; // [rsp+58h] [rbp-130h]
  _QWORD v40[4]; // [rsp+60h] [rbp-128h] BYREF
  void *ptr; // [rsp+80h] [rbp-108h] BYREF
  __int64 v42; // [rsp+88h] [rbp-100h]
  _BYTE v43[248]; // [rsp+90h] [rbp-F8h] BYREF

  v5 = v43;
  p_ptr = &ptr;
  v42 = 0x800000000LL;
  v6 = *(_DWORD *)(a2 + 16);
  ptr = v43;
  v7 = v6 & 0x7FFFFFFF;
  if ( v7 )
  {
    v8 = 0;
    v31 = 8LL * (unsigned int)(v7 - 1) + 8;
    while ( 1 )
    {
      v9 = *(unsigned __int16 **)(a2 + 2 * v8 + 40);
      v10 = *(unsigned __int16 **)(a2 + 2 * v8 + 48);
      if ( *(char *)(a2 + 19) < 0
        && (v35 = *(_QWORD *)(a2 + v8 + 16LL * (*(_DWORD *)(a2 + 16) & 0x7FFFFFFF) + 40), (_DWORD)v35) )
      {
        v32 = v9;
        v38 = v40;
        v39 = 0x200000000LL;
        sub_1E4CA90(v9);
        sub_1E4CA90(v10);
        v22 = *a1;
        v23 = *(_DWORD *)(*a1 + 12632);
        v24 = v32;
        *(_DWORD *)(*a1 + 12632) = 0;
        v33 = v23;
        v32 = (unsigned __int16 *)sub_1944E10(a1, v24, a3, a4);
        if ( v32 == (unsigned __int16 *)((char *)&dword_0 + 1) || (v25 = sub_1944E10(a1, v10, a3, a4), v25 == 1) )
        {
          v20 = 1;
          *(_DWORD *)(v22 + 12632) = v33;
          if ( v38 != v40 )
            free(v38);
          goto LABEL_11;
        }
        v32 = (unsigned __int16 *)v25;
        v26 = (const __m128i *)&v36;
        v37 = v35;
        a3 = (__m128)_mm_and_si128((__m128i)_mm_loadh_ps((const double *)&v32), (__m128i)xmmword_23AA750);
        v27 = (unsigned int)v42 + 1LL;
        v36 = a3;
        v28 = (__m128i *)((char *)ptr + 24 * (unsigned int)v42);
        if ( v27 > HIDWORD(v42) )
        {
          if ( ptr > &v36 || v28 <= (__m128i *)&v36 )
          {
            sub_2237220(p_ptr, p_ptr + 2, v27, 24);
            v28 = (__m128i *)((char *)ptr + 24 * (unsigned int)v42);
          }
          else
          {
            v32 = (unsigned __int16 *)ptr;
            sub_2237220(p_ptr, p_ptr + 2, v27, 24);
            v26 = (const __m128i *)((char *)ptr + (char *)&v36 - (char *)v32);
            v28 = (__m128i *)((char *)ptr + 24 * (unsigned int)v42);
          }
        }
        *v28 = _mm_loadu_si128(v26);
        v29 = v26[1].m128i_i64[0];
        LODWORD(v42) = v42 + 1;
        v28[1].m128i_i64[0] = v29;
        *(_DWORD *)(v22 + 12632) = v33;
        if ( v38 != v40 )
          free(v38);
      }
      else
      {
        v11 = sub_1944E10(a1, v9, a3, a4);
        if ( v11 == 1 || (v12 = (void *)(v11 & 0xFFFFFFFFFFFFFFFELL), v13 = sub_1944E10(a1, v10, a3, a4), v13 == 1) )
        {
          v20 = 1;
          goto LABEL_11;
        }
        v14 = ptr;
        v40[0] = 0;
        v39 = v13 & 0xFFFFFFFFFFFFFFFELL;
        v38 = v12;
        v15 = (unsigned int)v42 + 1LL;
        v16 = (__m128 *)((char *)ptr + 24 * (unsigned int)v42);
        v17 = (const __m128i *)&v38;
        if ( v15 > HIDWORD(v42) )
        {
          v30 = p_ptr + 2;
          if ( ptr > &v38 || v16 <= (__m128 *)&v38 )
          {
            sub_2237220(p_ptr, v30, v15, 24);
            v16 = (__m128 *)((char *)ptr + 24 * (unsigned int)v42);
            v17 = (const __m128i *)&v38;
          }
          else
          {
            sub_2237220(p_ptr, v30, v15, 24);
            v17 = (const __m128i *)((char *)ptr + (char *)&v38 - v14);
            v16 = (__m128 *)((char *)ptr + 24 * (unsigned int)v42);
          }
        }
        a4 = (__m128)_mm_loadu_si128(v17);
        *v16 = a4;
        v18 = v17[1].m128i_i64[0];
        LODWORD(v42) = v42 + 1;
        v16[1].m128_u64[0] = v18;
      }
      v8 += 8;
      if ( v8 == v31 )
      {
        v5 = ptr;
        v19 = (unsigned int)v42;
        goto LABEL_10;
      }
    }
  }
  v19 = 0;
LABEL_10:
  v20 = sub_19E4C10(*(_QWORD *)(*a1 + 736), *(_QWORD *)(a2 + 20), v5, v19);
LABEL_11:
  if ( ptr != p_ptr + 2 )
    free(ptr);
  return v20;
}
