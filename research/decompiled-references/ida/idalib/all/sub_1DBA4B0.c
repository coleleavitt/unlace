__int64 __fastcall sub_1DBA4B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        unsigned __int8 a5,
        char a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10,
        char a11,
        char a12,
        char a13)
{
  __int64 v13; // r15
  char v17; // dl
  char v18; // al
  char v19; // dh
  char v20; // dl
  unsigned __int8 v21; // al
  char v23; // dl
  char v24; // dh
  char v25; // dl
  char v26; // dh
  __int64 v27; // rax
  __int64 v28; // rsi
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdx
  const __m128i *v32; // r8
  __m128i *v33; // rsi
  _QWORD *v34; // rdi
  char v35; // dl
  char v36; // dh
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int64 (__fastcall *v40)(__int64); // rdx
  __int64 v41; // rax
  unsigned __int64 v42; // rsi
  __int64 v43; // rax
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // rdx
  __m128i *v46; // rcx
  const __m128i *v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // rdi
  char v50; // dl
  char v51; // dh
  __int64 v52; // rax
  char v53; // dl
  char v54; // dl
  char v55; // dh
  char v56; // dl
  char v57; // dh
  __int64 v59; // [rsp+10h] [rbp-78h]
  unsigned __int64 v60; // [rsp+20h] [rbp-68h]
  unsigned __int64 v62; // [rsp+30h] [rbp-58h] BYREF
  __int64 v63; // [rsp+38h] [rbp-50h]
  __int64 v64; // [rsp+40h] [rbp-48h]

  v13 = a3;
  *(_DWORD *)(a1 + 112) = 0;
  *(_BYTE *)(a1 + 116) = 0;
  v59 = a1 + 16;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x400000000LL;
  if ( a9 )
  {
    if ( a3 )
    {
      v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3);
      v28 = *(unsigned int *)(a1 + 8);
      v29 = *(_QWORD *)a1;
      v30 = *(unsigned int *)(a1 + 12);
      v31 = v28 + 1;
      v63 = a7;
      v32 = (const __m128i *)&v62;
      v33 = (__m128i *)(v29 + 24 * v28);
      v62 = (4LL * a5) | v27 & 0xFFFFFFFFFFFFFFFBLL;
      v64 = a8;
      if ( v30 < v31 )
      {
        if ( v29 > (unsigned __int64)&v62 || v33 <= (__m128i *)&v62 )
        {
          sub_2237220(a1, v59, v31, 24);
          v32 = (const __m128i *)&v62;
          v33 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
        }
        else
        {
          v60 = v29;
          sub_2237220(a1, v59, v31, 24);
          v32 = (const __m128i *)((char *)&v62 + *(_QWORD *)a1 - v60);
          v33 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
        }
      }
    }
    else
    {
      v37 = a5;
      v63 = a7;
      v33 = (__m128i *)(a1 + 16);
      v32 = (const __m128i *)&v62;
      v64 = a8;
      v62 = 4 * v37;
    }
    *v33 = _mm_loadu_si128(v32);
    v33[1].m128i_i64[0] = v32[1].m128i_i64[0];
    ++*(_DWORD *)(a1 + 8);
    if ( (*(_BYTE *)(v13 + 28) & 0x7F) == 0x44 )
      sub_1DB8320(v13, a1);
    if ( !a4 )
    {
      v34 = (_QWORD *)(*(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
        v34 = (_QWORD *)*v34;
      goto LABEL_27;
    }
LABEL_26:
    v34 = a4;
LABEL_27:
    v13 = sub_B8C1B0((__int64)v34);
    goto LABEL_8;
  }
  if ( !a3 )
    goto LABEL_26;
LABEL_8:
  while ( !(unsigned __int8)sub_B8D560(v13) )
  {
    v21 = *(_BYTE *)(v13 + 28) & 0x7F;
    if ( (unsigned int)v21 - 41 <= 1 )
    {
      v13 = sub_1DB96D0(v13, a1, a12);
      v18 = v17;
      v20 = v19;
      goto LABEL_5;
    }
    if ( v21 == 61 )
    {
      if ( !a12 )
        *(_DWORD *)(a1 + 112) += sub_B8D390(v13);
      return a1;
    }
    if ( (unsigned int)v21 - 60 <= 1 )
    {
      v13 = sub_1DB8D80(v13, (__int64 *)a1, a12);
      v18 = v23;
      v20 = v24;
      goto LABEL_5;
    }
    if ( (unsigned int)v21 - 34 <= 5 )
    {
      v13 = sub_1DB9A10(a2, v13, a1, a10, a6, a11, a13);
      v18 = v25;
      v20 = v26;
      goto LABEL_5;
    }
    if ( (unsigned int)v21 - 59 <= 2 )
    {
      v13 = sub_1DBA190(a2, v13, a1, a11);
      v18 = v35;
      v20 = v36;
      goto LABEL_5;
    }
    switch ( v21 )
    {
      case 'T':
        v38 = *(unsigned int *)(v13 + 36);
        v39 = v13 + 40;
        v40 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL);
        v41 = v13;
        if ( v40 != sub_A4F000 )
        {
          v41 = v40(v13);
          v39 = v13 + 40;
        }
        v64 = v38;
        v42 = *(unsigned int *)(a1 + 12);
        v62 = v41 & 0xFFFFFFFFFFFFFFFBLL;
        v43 = *(unsigned int *)(a1 + 8);
        v44 = *(_QWORD *)a1;
        v63 = v39;
        v45 = v43 + 1;
        v46 = (__m128i *)(v44 + 24 * v43);
        v47 = (const __m128i *)&v62;
        if ( v45 > v42 )
        {
          if ( v44 > (unsigned __int64)&v62 || v46 <= (__m128i *)&v62 )
          {
            sub_2237220(a1, v59, v45, 24);
            v46 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
            v47 = (const __m128i *)&v62;
          }
          else
          {
            sub_2237220(a1, v59, v45, 24);
            v47 = (const __m128i *)((char *)&v62 + *(_QWORD *)a1 - v44);
            v46 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
          }
        }
        *v46 = _mm_loadu_si128(v47);
        v46[1].m128i_i64[0] = v47[1].m128i_i64[0];
        ++*(_DWORD *)(a1 + 8);
        v48 = *(_QWORD *)(v13 + 16);
        if ( (v48 & 4) != 0 )
          v49 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v49 = v48 & 0xFFFFFFFFFFFFFFF8LL;
        goto LABEL_39;
      case 'G':
        v13 = sub_1DB9EB0((__int64 *)(a2 + 248), (_QWORD *)v13, a1);
        v18 = v50;
        v20 = v51;
        goto LABEL_5;
      case 'H':
        v49 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
          v49 = *(_QWORD *)(v49 + 8);
LABEL_39:
        a6 = 0;
        v13 = sub_B8C1B0(v49);
        break;
      default:
        if ( sub_B8E0B0(v13) )
        {
          v13 = sub_1DB76E0(v13);
          v18 = v56;
          v20 = v57;
LABEL_5:
          if ( v18 )
            return a1;
          if ( v20 )
            a6 = 0;
        }
        else
        {
          v52 = sub_1DB76E0(v13);
          if ( (*(_BYTE *)(v13 + 28) & 0x7F) == 0x44 )
          {
            v13 = sub_1DB8320(v13, a1);
            v18 = v54;
            v20 = v55;
            goto LABEL_5;
          }
          if ( v53 )
            return a1;
          v13 = v52;
        }
        break;
    }
  }
  return a1;
}
