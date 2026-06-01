__int64 __fastcall sub_186BF80(_QWORD *a1, double a2, __m128 a3)
{
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r13
  unsigned __int8 v11; // al
  __int64 v12; // rsi
  __int64 v13; // rax
  char v14; // al
  unsigned __int8 v15; // al
  unsigned int v16; // r15d
  char *v17; // rcx
  __int64 v18; // rdx
  char *v19; // rsi
  char *v20; // rdi
  const __m128i *v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r9
  const __m128i *v24; // rdx
  __m128d *v25; // rsi
  const __m128i *v26; // r8
  __m128d v27; // xmm1
  __m128d v28; // xmm0
  char *v29; // rdx
  char *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  _BYTE *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  _BYTE *v48; // r14
  __int64 v49; // r10
  _BYTE *v50; // r15
  __m128 v51; // xmm0
  __int64 v52; // rax
  __int64 v53; // rdx
  void *v54; // rsi
  size_t v55; // rdx
  unsigned __int64 v56; // [rsp+0h] [rbp-1A8h] BYREF
  __m128 *v57; // [rsp+8h] [rbp-1A0h]
  __int64 v58; // [rsp+10h] [rbp-198h] BYREF
  __int64 v59; // [rsp+18h] [rbp-190h]
  __m128 v60; // [rsp+20h] [rbp-188h] BYREF
  __int64 *v61; // [rsp+30h] [rbp-178h]
  _QWORD *v62; // [rsp+38h] [rbp-170h]
  void *ptr; // [rsp+40h] [rbp-168h] BYREF
  __int64 v64; // [rsp+48h] [rbp-160h]
  _BYTE v65[128]; // [rsp+50h] [rbp-158h] BYREF
  __int64 v66; // [rsp+D0h] [rbp-D8h] BYREF
  void *src; // [rsp+D8h] [rbp-D0h] BYREF
  __int64 v68; // [rsp+E0h] [rbp-C8h]
  _BYTE v69[192]; // [rsp+E8h] [rbp-C0h] BYREF

  v4 = *a1;
  sub_1C36400(*a1, 0);
  v66 = *(_QWORD *)(**(_QWORD **)(a1[2] + 120LL) + 48LL);
  v7 = sub_C1BEF0((__int64)&v66, 0, v5, v6);
  LOBYTE(v66) = 0;
  v10 = v7;
  src = v69;
  v68 = 0x1000000000LL;
  v11 = *((_BYTE *)a1 + 24);
  if ( !v11 )
    goto LABEL_68;
  if ( v11 <= 2u )
  {
    v12 = 0;
    v13 = *(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v13 & 8) != 0 )
      v12 = *(__int64 *)((char *)&qword_18 + (v13 & 0xFFFFFFFFFFFFFFF0LL));
    sub_1846360(a1, &v66, a1[1], v12 | ((unsigned __int8)v13 | (unsigned __int8)v10) & 7, v8, v9, a2, a3);
    v14 = v66;
    goto LABEL_6;
  }
  if ( v11 > 4u )
LABEL_68:
    BUG();
  v35 = sub_18391B0(a1, 0);
  v37 = sub_1842C10((int *)a1, v10, v35, v36, a2, *(double *)a3.m128_u64);
  LOBYTE(v66) = (v37 == 1) | v66;
  if ( (_BYTE)v66 )
    goto LABEL_27;
  v38 = (unsigned int)v68;
  v39 = v37 & 0xFFFFFFFFFFFFFFFELL;
  v40 = (unsigned int)v68 + 1LL;
  if ( v40 > HIDWORD(v68) )
  {
    v56 = v39;
    sub_2237220(&src, v69, v40, 8);
    v38 = (unsigned int)v68;
    v39 = v56;
  }
  *((_QWORD *)src + v38) = v39;
  v14 = v66;
  LODWORD(v68) = v68 + 1;
LABEL_6:
  if ( v14 )
  {
LABEL_27:
    v33 = 1;
    goto LABEL_28;
  }
  v58 = 0;
  v15 = *((_BYTE *)a1 + 24);
  if ( v15 == 2 )
  {
    v42 = sub_186B8D0((__int64 *)*a1, 2u, *((_DWORD *)a1 + 44), 1);
    if ( (v42 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_27;
    v43 = sub_B62340((__int64 *)(*(_QWORD *)(*a1 + 248LL) + 22888LL), v42);
    v44 = sub_B614A0(v43, 0);
    v45 = sub_1837680(a1, *((_QWORD *)v44 + 1));
    v58 = v45;
    if ( v45 == 1 )
      goto LABEL_27;
    v58 = sub_18398F0((__int64)a1, v45 & 0xFFFFFFFFFFFFFFFELL, a2, v46, v47);
    v32 = v58;
LABEL_26:
    if ( v32 == 1 )
      goto LABEL_27;
    goto LABEL_40;
  }
  if ( v15 > 2u )
  {
    if ( v15 <= 4u )
    {
      v32 = *((_QWORD *)src + (unsigned int)v68 - 1);
      LODWORD(v68) = v68 - 1;
      v58 = v32;
      if ( v32 == 1 )
        goto LABEL_27;
      goto LABEL_40;
    }
  }
  else if ( v15 == 1 )
  {
    v16 = v68;
    v64 = 0x1000000000LL;
    ptr = v65;
    if ( !(_DWORD)v68 )
    {
      v61 = &v66;
      v56 = (unsigned __int64)&v58;
      v59 = 0;
      v62 = a1;
      v60 = _mm_loadh_ps((const double *)&v56);
LABEL_12:
      if ( (unsigned __int8)sub_1839500((__int64)&v60) )
      {
LABEL_58:
        v33 = 1;
        if ( ptr != v65 )
          free(ptr);
        goto LABEL_28;
      }
      v17 = (char *)src;
      v18 = 8LL * (unsigned int)v68;
      v19 = (char *)src + v18;
      if ( src != (char *)src + v18 )
      {
        v20 = v19 - 8;
        if ( src < v19 - 8 )
        {
          v21 = (const __m128i *)src;
          v22 = (unsigned __int64)(v18 - 9) >> 4;
          v23 = v22 + 1;
          if ( (v18 <= 0 || (__int64)(v18 - 8 * v22 - 8) >= (__int64)(8 * (v22 + 1)))
            && (unsigned __int64)(v18 - 9) > 0x1F )
          {
            v24 = (const __m128i *)((char *)src + v18 - 16);
            v25 = (__m128d *)v24;
            v26 = (const __m128i *)((char *)src + 16 * (v23 >> 1));
            do
            {
              v27 = (__m128d)_mm_loadu_si128(v24);
              v28 = (__m128d)_mm_loadu_si128(v21++);
              --v24;
              --v25;
              v21[-1] = (const __m128i)_mm_shuffle_pd(v27, v27, 1);
              v25[1] = _mm_shuffle_pd(v28, v28, 1);
            }
            while ( v21 != v26 );
            v29 = &v17[8 * (v23 & 0xFFFFFFFFFFFFFFFELL)];
            v30 = &v20[-8 * (v23 & 0xFFFFFFFFFFFFFFFELL)];
            if ( (v23 & 0xFFFFFFFFFFFFFFFELL) != v23 )
            {
              v31 = *(_QWORD *)v29;
              *(_QWORD *)v29 = *(_QWORD *)v30;
              *(_QWORD *)v30 = v31;
            }
          }
          else
          {
            do
            {
              v52 = *(_QWORD *)v17;
              v53 = *(_QWORD *)v20;
              v17 += 8;
              v20 -= 8;
              *((_QWORD *)v17 - 1) = v53;
              *((_QWORD *)v20 + 1) = v52;
            }
            while ( v20 > v17 );
          }
        }
      }
      if ( !v58 )
        v58 = sub_19A26C0(*a1, *((unsigned int *)a1 + 44), 149);
      if ( ptr != v65 )
        free(ptr);
      v32 = v58;
      goto LABEL_26;
    }
    v48 = src;
    v49 = 8LL * (unsigned int)v68;
    if ( src != v69 )
    {
      ptr = src;
      src = v69;
      v64 = v68;
      HIDWORD(v68) = 0;
      v50 = &v48[v49];
      goto LABEL_47;
    }
    if ( (unsigned int)v68 > 0x10uLL )
    {
      sub_2237220(&ptr, v65, (unsigned int)v68, 8);
      v48 = ptr;
      v54 = src;
      v49 = 8LL * v16;
      v55 = 8LL * (unsigned int)v68;
      if ( !v55 )
        goto LABEL_65;
    }
    else
    {
      v54 = src;
      v55 = 8LL * (unsigned int)v68;
      v48 = v65;
    }
    v56 = v49;
    memcpy(v48, v54, v55);
    v48 = ptr;
    v49 = v56;
LABEL_65:
    LODWORD(v64) = v16;
    v50 = &v48[v49];
LABEL_47:
    v61 = &v66;
    v56 = (unsigned __int64)&v58;
    LODWORD(v68) = 0;
    v59 = 0;
    v51 = _mm_loadh_ps((const double *)&v56);
    v62 = a1;
    v60 = v51;
    if ( v50 != v48 )
    {
      v57 = &v60;
      while ( 1 )
      {
        if ( ((**((_WORD **)v50 - 1) + 509) & 0x1FFu) <= 0x7E )
        {
          if ( v59 )
          {
            v59 = sub_1928110(*a1, *((unsigned int *)a1 + 44), 19, *((_QWORD *)v50 - 1), v59 & 0xFFFFFFFFFFFFFFFELL, 0);
            if ( v59 == 1 )
              goto LABEL_58;
          }
          else
          {
            v59 = *((_QWORD *)v50 - 1);
          }
        }
        else
        {
          v56 = *((_QWORD *)v50 - 1);
          if ( (unsigned __int8)sub_1839500((__int64)v57) )
            goto LABEL_58;
          LOBYTE(v66) = (v56 == 1) | v66;
          if ( (_BYTE)v66 )
            goto LABEL_58;
          sub_183F100((__int64)&src, v56 & 0xFFFFFFFFFFFFFFFELL);
        }
        v50 -= 8;
        if ( v50 == v48 )
          goto LABEL_12;
      }
    }
    goto LABEL_12;
  }
  v32 = 0;
LABEL_40:
  v41 = sub_1C46CA0(*a1, *((unsigned int *)a1 + 44), v32 & 0xFFFFFFFFFFFFFFFELL, 0);
  if ( v41 == 1 )
    goto LABEL_27;
  sub_183F100((__int64)&src, v41 & 0xFFFFFFFFFFFFFFFELL);
  v33 = sub_1C36480(*a1, *((unsigned int *)a1 + 44), *((unsigned int *)a1 + 44), src, (unsigned int)v68, 0);
LABEL_28:
  if ( src != v69 )
    free(src);
  sub_1C36470(v4);
  return v33;
}
