unsigned __int64 __fastcall sub_15A0640(
        __int64 a1,
        _WORD *a2,
        unsigned int a3,
        unsigned __int8 (__fastcall *a4)(__int64, __int64, __int64, _QWORD),
        __int64 a5)
{
  _WORD *v5; // r12
  unsigned int v7; // eax
  unsigned __int16 v8; // ax
  __int64 v9; // r15
  __m128 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  __m128i *v16; // rcx
  const __m128i *p_ptr; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  char *v21; // rcx
  __int64 v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rdx
  char v25; // al
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __m128i *v31; // rcx
  const __m128i *v32; // rax
  unsigned __int64 result; // rax
  __int64 v34; // rax
  __int64 i; // rdx
  __int64 v36; // rdx
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // r12
  unsigned __int8 v44; // al
  char v45; // cl
  unsigned __int8 v46; // dl
  __int64 v47; // rdx
  unsigned __int64 v48; // rdi
  int v49; // eax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // r13
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rsi
  __int64 v55; // rbp
  __int64 v56; // rax
  __int64 j; // rdx
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // rax
  unsigned __int16 *v62; // rsi
  unsigned __int64 v63; // rdi
  unsigned __int8 v64; // cl
  unsigned __int64 v65; // rsi
  unsigned __int64 v66; // rdx
  const __m128i *v67; // r14
  __m128i *v68; // rax
  unsigned __int64 v69; // rax
  __int64 v70; // rsi
  char *v71; // r14
  unsigned __int64 v72; // [rsp+0h] [rbp-188h] BYREF
  void **v73; // [rsp+8h] [rbp-180h]
  unsigned __int8 (__fastcall *v74)(__int64, __int64, __int64, _QWORD); // [rsp+10h] [rbp-178h]
  __int64 v75; // [rsp+18h] [rbp-170h]
  __int64 v76; // [rsp+20h] [rbp-168h]
  unsigned int v77; // [rsp+28h] [rbp-160h]
  unsigned int v78; // [rsp+2Ch] [rbp-15Ch]
  void *v79[2]; // [rsp+30h] [rbp-158h] BYREF
  _BYTE v80[64]; // [rsp+40h] [rbp-148h] BYREF
  void *ptr; // [rsp+80h] [rbp-108h] BYREF
  __m128 v82; // [rsp+88h] [rbp-100h] BYREF

  v5 = a2;
  v7 = *(_DWORD *)(a1 + 8);
  v74 = a4;
  v77 = v7;
  LOWORD(v7) = *a2;
  v78 = a3;
  v75 = a5;
  v8 = v7 & 0x1FF;
  v73 = v79;
  v76 = a1 + 16;
  while ( 1 )
  {
    v9 = (__int64)v5;
    if ( ((v8 + 452) & 0x1FFu) <= 1 )
    {
      v9 = *((_QWORD *)v5 + 2);
      v8 = *(_WORD *)v9 & 0x1FF;
    }
    if ( v8 == 53 && sub_BFAFB0(v9) )
      v9 = **(_QWORD **)(v9 + 16);
    v10.m128_u64[0] = sub_BFB840(v9);
    if ( (*(_WORD *)v10.m128_u64[0] & 0x1FF) == 0x2E )
    {
      v10.m128_u64[1] = *(_QWORD *)(v10.m128_u64[0] + 24);
      v12 = *(_QWORD *)a1;
      v82 = v10;
      v13 = *(unsigned int *)(a1 + 8);
      v14 = *(unsigned int *)(a1 + 12);
      LODWORD(ptr) = 7;
      v15 = v13 + 1;
      v16 = (__m128i *)(v12 + 24 * v13);
      p_ptr = (const __m128i *)&ptr;
      if ( v15 > v14 )
      {
        if ( v12 > (unsigned __int64)&ptr || v16 <= (__m128i *)&ptr )
        {
          sub_2237220(a1, v76, v15, 24);
          v16 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
          p_ptr = (const __m128i *)&ptr;
        }
        else
        {
          v72 = v12;
          sub_2237220(a1, v76, v15, 24);
          p_ptr = (const __m128i *)((char *)&ptr + *(_QWORD *)a1 - v72);
          v16 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
        }
      }
      *v16 = _mm_loadu_si128(p_ptr);
      v16[1].m128i_i64[0] = p_ptr[1].m128i_i64[0];
      ++*(_DWORD *)(a1 + 8);
    }
    ptr = &v82.m128_u16[4];
    v72 = (unsigned __int64)&v82.m128_u64[1];
    v79[0] = v80;
    v79[1] = (void *)0x800000000LL;
    v82.m128_u64[0] = 0x800000000LL;
    v18 = sub_BF71E0(v9, (unsigned __int64)v73, (__int64)&ptr, (unsigned __int64)&v82.m128_u64[1], v11);
    v21 = &v82.m128_i8[8];
    v22 = v18;
    if ( ptr != &v82.m128_u16[4] )
      free(ptr);
    if ( v79[0] != v80 )
      free(v79[0]);
    v8 = *(_WORD *)v22 & 0x1FF;
    if ( ((v8 + 433) & 0x1FFu) <= 9 )
    {
      v36 = *(_QWORD *)(v22 + 16);
      if ( (*(_BYTE *)(v36 + 1) & 6) == 0 )
        goto LABEL_24;
      v22 = *(_QWORD *)(v22 + 16);
      v8 = *(_WORD *)v36 & 0x1FF;
    }
    if ( v8 == 123 )
    {
      v23 = *(_QWORD *)(v22 + 24);
      v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      v25 = *(_BYTE *)(v24 + 16);
      switch ( v25 )
      {
        case 13:
          if ( (((*(_WORD *)(v24 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
            break;
LABEL_28:
          v23 = *(_QWORD *)(v22 + 16);
          if ( (*(_WORD *)v23 & 0x1FF) != 0x4F )
          {
LABEL_29:
            sub_159F540(a1, (unsigned __int16 *)v23, (__int64)v74, v75, 1);
            goto LABEL_30;
          }
          goto LABEL_19;
        case 47:
          v72 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          v37 = sub_F60F10(v72, v23, v24, (__int64)v21, v19, v20);
          if ( ((*((_BYTE *)v37 + 74) & 1) != 0 || (v37[16] & 0xFFFFFFFFFFFFFFF8LL) != 0)
            && *((char *)sub_F60F10(v72, v23, v72, v38, v39, v40) + 76) >= 0 )
          {
            goto LABEL_28;
          }
          v23 = *(_QWORD *)(v22 + 24);
          break;
        case 10:
          goto LABEL_28;
      }
      if ( (*(_WORD *)v23 & 0x1FF) != 0x4F )
        goto LABEL_29;
LABEL_19:
      if ( ((*(_WORD *)(v23 + 2) >> 3) & 0x7F) != 0xB )
        goto LABEL_29;
      v22 = *(_QWORD *)(v23 + 16);
      v8 = *(_WORD *)v22 & 0x1FF;
    }
    if ( v8 == 111 )
    {
      v26 = *(_QWORD *)(v22 + 16);
      v27 = *(_QWORD *)a1;
      LODWORD(ptr) = 0;
      v28 = *(unsigned int *)(a1 + 12);
      v82.m128_u64[0] = v22;
      v82.m128_u64[1] = v26;
      v29 = *(unsigned int *)(a1 + 8);
      v30 = v29 + 1;
      v31 = (__m128i *)(v27 + 24 * v29);
      v32 = (const __m128i *)&ptr;
      if ( v30 > v28 )
      {
        v72 = v27;
        if ( v27 > (unsigned __int64)&ptr || v31 <= (__m128i *)&ptr )
        {
          sub_2237220(a1, v76, v30, 24);
          v31 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
          v32 = (const __m128i *)&ptr;
        }
        else
        {
          sub_2237220(a1, v76, v30, 24);
          v32 = (const __m128i *)((char *)&ptr + *(_QWORD *)a1 - v72);
          v31 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
        }
      }
      *v31 = _mm_loadu_si128(v32);
      v31[1].m128i_i64[0] = v32[1].m128i_i64[0];
      ++*(_DWORD *)(a1 + 8);
      v22 = sub_C94CC0((_QWORD *)v22);
      v8 = *(_WORD *)v22 & 0x1FF;
    }
LABEL_24:
    if ( v5 == (_WORD *)v22 )
      break;
    v5 = (_WORD *)v22;
  }
  if ( v8 == 48 )
  {
    if ( v74(v75, a1, v22, v78) )
    {
      v41 = *(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v22 + 16) & 4) != 0 )
        v41 = *(_QWORD *)(v41 + 40);
      sub_159F540(a1, (unsigned __int16 *)v41, (__int64)v74, v75, 1);
    }
    v8 = *(_WORD *)v22 & 0x1FF;
  }
  if ( v8 == 46 )
  {
    v42 = *(_QWORD *)(v22 + 24);
    if ( (*(_BYTE *)(v42 + 28) & 0x7Fu) - 49 <= 2
      && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v42 + 48)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 43 > 1 )
    {
      sub_159F540(a1, *(unsigned __int16 **)(v22 + 16), (__int64)v74, v75, 1);
      v8 = *(_WORD *)v22 & 0x1FF;
      goto LABEL_62;
    }
LABEL_95:
    result = *(unsigned int *)(a1 + 8);
    goto LABEL_96;
  }
LABEL_62:
  if ( ((v8 + 423) & 0x1FFu) <= 4 )
  {
    sub_159D3D0(a1, (unsigned __int16 *)v22, (__int64)v74, v75);
LABEL_30:
    result = *(unsigned int *)(a1 + 8);
    if ( v77 == result )
      return result;
    if ( v77 >= result )
    {
      if ( v77 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        sub_2237220(a1, a1 + 16, v77, 24);
        result = *(unsigned int *)(a1 + 8);
      }
      v34 = *(_QWORD *)a1 + 24 * result;
      for ( i = *(_QWORD *)a1 + 24LL * v77; i != v34; v34 += 24 )
        *(_QWORD *)(v34 + 16) = 0;
    }
LABEL_36:
    result = v77;
    *(_DWORD *)(a1 + 8) = v77;
    return result;
  }
  if ( v8 == 76 )
  {
    if ( (*(_BYTE *)(v22 + 24) & 4) != 0 )
      goto LABEL_95;
    goto LABEL_94;
  }
  if ( v8 > 0x4Cu )
  {
    if ( v8 != 124 )
    {
      if ( v8 < 0x7Cu || ((v8 + 384) & 0x1FFu) > 1 )
        goto LABEL_95;
      if ( v8 == 128 )
        v58 = *(_QWORD *)(v22 + 32);
      else
        v58 = *(_QWORD *)(v22 + 40);
      v59 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v58 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v59 + 16) != 13 || ((*(_WORD *)(v59 + 18) >> 3) & 0x1FF) != 0x1B3 )
      {
        sub_15A0640(a1, v58, v78, v74, v75);
        v8 = *(_WORD *)v22 & 0x1FF;
      }
      v60 = v8 == 128 ? *(_QWORD *)(v22 + 40) : *(_QWORD *)(v22 + 48);
      v61 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v60 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v61 + 16) == 13 && ((*(_WORD *)(v61 + 18) >> 3) & 0x1FF) == 0x1B3 )
        goto LABEL_95;
      sub_15A0640(a1, v60, v78, v74, v75);
      result = *(unsigned int *)(a1 + 8);
      goto LABEL_96;
    }
    v62 = *(unsigned __int16 **)(v22 + 24);
LABEL_117:
    sub_159F540(a1, v62, (__int64)v74, v75, 1);
    result = *(unsigned int *)(a1 + 8);
    goto LABEL_96;
  }
  if ( v8 == 4 )
  {
    if ( *(_BYTE *)(v22 + 2) >> 3 != 5 )
      goto LABEL_95;
    v62 = *(unsigned __int16 **)(v22 + 16);
    goto LABEL_117;
  }
  if ( v8 != 71 )
    goto LABEL_95;
  v43 = *(_QWORD *)(v22 + 16);
  v44 = *(_BYTE *)(v43 + 28) & 0x7F;
  if ( (unsigned int)v44 - 40 > 6 )
    goto LABEL_95;
  v45 = *(_BYTE *)(v43 + 96);
  v46 = v45 & 7;
  if ( (v45 & 7) != 0 )
  {
    if ( v46 != 5 )
      goto LABEL_124;
    if ( v44 != 46 && v44 != 40 )
      goto LABEL_137;
    v63 = *(_QWORD *)(v43 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v43 + 16) & 4) != 0 )
      v63 = *(_QWORD *)(v63 + 8);
    if ( !v63 )
    {
LABEL_137:
      if ( v44 != 43 )
        goto LABEL_95;
      goto LABEL_81;
    }
    v64 = *(_BYTE *)(sub_B8EAA0(v63) + 8) & 0x7F;
    if ( v64 > 0x12u )
    {
      if ( ((v64 + 94) & 0x7Fu) > 5 )
      {
LABEL_135:
        if ( (*(_BYTE *)(v43 + 28) & 0x7F) != 0x2B )
          goto LABEL_95;
      }
    }
    else if ( ((1LL << v64) & 0x40182) == 0 )
    {
      goto LABEL_135;
    }
    v46 = *(_BYTE *)(v43 + 96) & 7;
LABEL_124:
    if ( v46 <= 3u )
      goto LABEL_95;
    goto LABEL_81;
  }
  v47 = *(_QWORD *)&byte_8[*(_QWORD *)(v43 + 48) & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v47 & 8) != 0
    && (*(_DWORD *)((char *)&qword_18 + (v47 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v47 & 7)) >> 9 == 3 )
  {
    goto LABEL_95;
  }
  if ( ((v44 + 85) & 0x7D) != 0 )
  {
    v48 = *(_QWORD *)(v43 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v43 + 16) & 4) != 0 )
      v48 = *(_QWORD *)(v48 + 8);
    v49 = *(_BYTE *)(sub_B8EAA0(v48) + 8) & 0x7F;
    if ( !v49 || v49 == 24 )
      goto LABEL_95;
    if ( (*(_BYTE *)(v43 + 28) & 0x7F) != 0x2B )
    {
      v50 = *(_QWORD *)(v43 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v43 + 16) & 4) != 0 )
        v50 = *(_QWORD *)v50;
      if ( ((*(_BYTE *)(v50 + 8) + 70) & 0x7Fu) <= 3 )
        goto LABEL_95;
    }
    v45 = *(_BYTE *)(v43 + 96);
  }
  if ( (v45 & 0x18) != 0 )
    goto LABEL_95;
LABEL_81:
  if ( *(char *)(v22 + 2) < 0 )
    goto LABEL_95;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v43 + 48)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 43 > 1 )
  {
LABEL_94:
    v74(v75, a1, v22, v78);
    goto LABEL_95;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v22 + 16) + 28LL) & 0x7F) == 0x2B || !sub_B73640(v43) )
    goto LABEL_95;
  result = *(unsigned int *)(a1 + 8);
  v51 = *(_QWORD *)a1;
  v52 = *(_QWORD *)a1 + 24 * result;
  if ( *(_QWORD *)a1 != v52 )
  {
    if ( *(_QWORD *)(v51 + 16) == v43 && *(_DWORD *)v51 == 2 )
      goto LABEL_96;
    v53 = v51 + 24;
    while ( 1 )
    {
      v54 = v53;
      if ( v52 == v53 )
        break;
      v53 += 24LL;
      if ( *(_QWORD *)(v54 + 16) == v43 && *(_DWORD *)v54 == 2 )
        goto LABEL_96;
    }
  }
  v72 = v22;
  v65 = *(unsigned int *)(a1 + 12);
  v66 = result + 1;
  v67 = (const __m128i *)&ptr;
  v72 = v43;
  LODWORD(ptr) = 2;
  v82 = _mm_loadh_ps((const double *)&v72);
  if ( result + 1 > v65 )
  {
    v70 = a1 + 16;
    if ( v51 > (unsigned __int64)&ptr || v52 <= (unsigned __int64)&ptr )
    {
      v67 = (const __m128i *)&ptr;
      sub_2237220(a1, v70, v66, 24);
      result = *(unsigned int *)(a1 + 8);
      v51 = *(_QWORD *)a1;
    }
    else
    {
      v71 = (char *)&ptr - v51;
      sub_2237220(a1, v70, v66, 24);
      v51 = *(_QWORD *)a1;
      result = *(unsigned int *)(a1 + 8);
      v67 = (const __m128i *)&v71[*(_QWORD *)a1];
    }
  }
  v68 = (__m128i *)(v51 + 24 * result);
  *v68 = _mm_loadu_si128(v67);
  v68[1].m128i_i64[0] = v67[1].m128i_i64[0];
  ++*(_DWORD *)(a1 + 8);
  v69 = sub_B73640(v43);
  sub_15A0640(a1, v69, 0, v74, v75);
  result = *(unsigned int *)(a1 + 8);
LABEL_96:
  v55 = v77;
  if ( v77 != result )
  {
    if ( v77 >= result )
    {
      if ( v77 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        sub_2237220(a1, a1 + 16, v77, 24);
        result = *(unsigned int *)(a1 + 8);
      }
      v56 = *(_QWORD *)a1 + 24 * result;
      for ( j = *(_QWORD *)a1 + 24 * v55; j != v56; v56 += 24 )
        *(_QWORD *)(v56 + 16) = 0;
    }
    goto LABEL_36;
  }
  return result;
}
