__int64 __fastcall sub_1D774E0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        double a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 *a11,
        __int64 a12,
        char a13,
        int a14,
        int a15,
        __int64 a16)
{
  __int64 *v20; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r15
  __int64 v25; // rdi
  unsigned __int64 v26; // rbx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int8 v29; // al
  bool v30; // al
  __int64 v31; // rsi
  unsigned int v32; // r13d
  int v33; // r15d
  int v34; // ecx
  char v35; // al
  unsigned __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdi
  _QWORD *v41; // r14
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  __int64 result; // rax
  const __m128i *v45; // r14
  unsigned __int64 v46; // r15
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __m128i *v50; // rax
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  _QWORD *v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rbp
  __int64 *v60; // r14
  __int64 *v61; // rdx
  __int64 *i; // rbx
  __int64 *v63; // rax
  __int64 *v64; // rbp
  __int64 v65; // r15
  int v66; // eax
  __int64 v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rbp
  __int64 v71; // r8
  __int64 *v72; // rdi
  __int64 *v73; // rax
  __int64 j; // rsi
  unsigned int v75; // eax
  void *v76; // rdx
  __int64 v77; // rsi
  unsigned int v79; // [rsp+0h] [rbp-A8h]
  unsigned int v80; // [rsp+0h] [rbp-A8h]
  unsigned int v81; // [rsp+0h] [rbp-A8h]
  __int64 v82; // [rsp+8h] [rbp-A0h]
  __int64 v83; // [rsp+18h] [rbp-90h] BYREF
  unsigned __int64 v84; // [rsp+28h] [rbp-80h] BYREF
  void *v85; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v86; // [rsp+38h] [rbp-70h]
  void *v87; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v88; // [rsp+48h] [rbp-60h]
  void *v89; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v90; // [rsp+58h] [rbp-50h]
  int v91; // [rsp+5Ch] [rbp-4Ch]
  __int64 v92; // [rsp+60h] [rbp-48h]

  v83 = a5;
  v20 = (__int64 *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  if ( a4 & 7 | (a4 >> 3) & 1
    || (v21 = a4,
        v22 = *(_QWORD *)&byte_8[a4 & 0xFFFFFFFFFFFFFFF0LL] & 7LL,
        v23 = v22 | (*(__int64 *)&byte_8[a4 & 0xFFFFFFFFFFFFFFF0LL] >> 3) & 1,
        v22 | (v20[1] >> 3) & 1) )
  {
    v22 = *(_QWORD *)(*v20 + 8) & 7LL;
    v23 = v22 | (*(__int64 *)(*v20 + 8) >> 3) & 1;
    if ( v23 )
    {
      v43 = sub_F64F00(a4, a2, v22, v23, a5) & 0xFFFFFFFFFFFFFFF0LL;
      v21 = v43;
    }
    else
    {
      v21 = *v20 & 0xFFFFFFFFFFFFFFF0LL;
      v43 = v21;
    }
    v24 = *(_QWORD *)v43;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v43 + 16LL) - 43 <= 1 )
      goto LABEL_4;
  }
  else
  {
    v24 = *v20;
    if ( (unsigned int)*(unsigned __int8 *)(*v20 + 16) - 43 <= 1 )
      goto LABEL_4;
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
  {
    v24 = 0;
    goto LABEL_8;
  }
  v24 = sub_F63050(v24, a2, v22, v23);
  if ( !v24 )
    goto LABEL_8;
LABEL_4:
  v25 = v24;
  while ( 1 )
  {
    v21 = *(_QWORD *)(v25 + 32);
    if ( (*(_BYTE *)(v25 + 18) & 0x10) == 0 )
      break;
    while ( 1 )
    {
      v26 = v21 & 0xFFFFFFFFFFFFFFF0LL;
      v25 = *(_QWORD *)v26;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v26 + 16LL) - 43 <= 1 )
        break;
      v27 = sub_F63050(v25, a2, v22, v23);
      v21 = *(_QWORD *)(v27 + 32);
      if ( (*(_BYTE *)(v27 + 18) & 0x10) == 0 )
        goto LABEL_8;
    }
  }
LABEL_8:
  if ( v83 == *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19080LL) )
  {
    v83 = sub_1D76480(a1, a2, (_WORD *)a9, v21, v24 != 0, a16, a7, a8);
    result = 0;
    v28 = v83 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v83 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return result;
  }
  else
  {
    v28 = v83 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v29 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v28 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v24 )
  {
    if ( v29 == 5 )
      v83 = sub_1E5F5F0(a1);
    v30 = sub_1D38D30(v24 & 0xFFFFFFFFFFFFFFF0LL, a3, v28, v23);
    if ( !a6 && v30 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 47LL) & 0x20) != 0 )
      {
        v54 = *(_QWORD *)&byte_8[v83 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v54 & 8) == 0 || (*(__int64 *)((char *)&qword_18 + (v54 & 0xFFFFFFFFFFFFFFF0LL)) & 0xFFFFFE00) == 0 )
          v83 = sub_A70E70(
                  *(_QWORD *)(a1 + 248),
                  v83,
                  (unsigned int)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2320LL) + 60LL) & 1) != 0) + 4);
      }
      v83 = sub_A73030(*(_QWORD *)(a1 + 248), v83, 1u);
    }
    v31 = 13;
    v32 = 15;
    v33 = 11;
    v34 = 9;
  }
  else
  {
    if ( (unsigned int)v29 - 25 > 1 && ((unsigned __int8)(v29 - 2) > 4u || v29 == 3) )
      v51 = sub_6D5440(&v83);
    else
      v51 = sub_A75D20(*(_QWORD **)(a1 + 248), v83);
    v83 = v51;
    v31 = 12;
    v34 = 8;
    v32 = 14;
    v33 = 10;
  }
  v35 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v83 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned __int8)(v35 - 33) > 1u && v35 != 42 )
  {
    v32 = v31;
    v33 = v34;
  }
  v36 = v21 & 0xFFFFFFFFFFFFFFF0LL;
  v37 = sub_F6A860(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v37 )
  {
    v31 = 0;
    v89 = *(void **)(v37 + 32);
    if ( sub_F22BD0((__int64 *)&v89, 0) )
      goto LABEL_35;
    v40 = *(_QWORD *)v36;
  }
  else
  {
    v40 = *(_QWORD *)v36;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v36 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 29 )
      goto LABEL_35;
  }
  if ( *(_BYTE *)(v40 + 16) != 42 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42
      || !sub_F63050(v40, v31, v38, v39) )
    {
      v32 = v33;
      goto LABEL_35;
    }
    v40 = *(_QWORD *)v36;
    if ( *(_BYTE *)(*(_QWORD *)v36 + 16LL) != 42 )
      v40 = sub_F63050(v40, v31, v52, v53);
  }
  v41 = (_QWORD *)(*(_QWORD *)(v40 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v42 = sub_F6A860(*v41);
  if ( v42 )
  {
    v89 = *(void **)(v42 + 32);
    if ( !sub_F22BD0((__int64 *)&v89, 0) )
      v32 = v33;
  }
  else if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v41 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 29 )
  {
    v32 = v33;
  }
LABEL_35:
  if ( !a9 )
    return sub_1D6C080(a1, a2, v21, v83, a10, a11, v32, 0, 0, nullptr);
  if ( (*(_WORD *)a9 & 0x1FF) != 0x35 )
  {
    v89 = (void *)a4;
    v45 = (const __m128i *)&v89;
    LOBYTE(v90) = a13;
    v46 = *(_QWORD *)a12;
    v47 = *(unsigned int *)(a12 + 12);
    v91 = a14;
    v92 = v83;
    v48 = *(unsigned int *)(a12 + 8);
    v49 = v48 + 1;
    v50 = (__m128i *)(v46 + 24 * v48);
    if ( v49 > v47 )
    {
      v77 = a12 + 16;
      if ( v46 > (unsigned __int64)&v89 || v50 <= (__m128i *)&v89 )
      {
        sub_2237220(a12, v77, v49, 24);
        v50 = (__m128i *)(*(_QWORD *)a12 + 24LL * *(unsigned int *)(a12 + 8));
      }
      else
      {
        sub_2237220(a12, v77, v49, 24);
        v45 = (const __m128i *)((char *)&v89 + *(_QWORD *)a12 - v46);
        v50 = (__m128i *)(*(_QWORD *)a12 + 24LL * *(unsigned int *)(a12 + 8));
      }
    }
    *v50 = _mm_loadu_si128(v45);
    v50[1].m128i_i64[0] = v45[1].m128i_i64[0];
    ++*(_DWORD *)(a12 + 8);
    return sub_1D6C080(a1, a2, v21, v83, a10, a11, v32, 0, 0, nullptr);
  }
  if ( !(unsigned int)((__int64)(*(_QWORD *)(a9 + 24) - *(_QWORD *)(a9 + 16)) >> 3) )
    return 0;
  v55 = *(_QWORD **)(a1 + 248);
  v84 = 0;
  v56 = sub_A72040(v55, v21);
  v59 = v56;
  if ( v56 )
  {
    v84 = *(_QWORD *)(v56 + 32);
    v60 = *(__int64 **)(a9 + 16);
    v61 = (__int64 *)((char *)v60 + ((*(_QWORD *)(a9 + 24) - (_QWORD)v60) & 0x7FFFFFFF8LL));
    if ( v61 == v60 )
      goto LABEL_68;
  }
  else
  {
    if ( !(unsigned __int8)sub_1844E60(a1, v21, &v84) )
      return 0;
    v60 = *(__int64 **)(a9 + 16);
    v61 = (__int64 *)((char *)v60 + ((*(_QWORD *)(a9 + 24) - (_QWORD)v60) & 0x7FFFFFFF8LL));
    if ( v61 == v60 )
      return 0;
  }
  if ( (*(_WORD *)*v60 & 0x1FF) == 0x44 )
    return 0;
  for ( i = v60 + 1; ; ++i )
  {
    v63 = i;
    if ( v61 == i )
      break;
    if ( (*(_WORD *)*v63 & 0x1FF) == 0x44 )
      return 0;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v84 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
  {
LABEL_67:
    if ( !v59 )
      return 0;
LABEL_68:
    if ( *(_BYTE *)(v59 + 16) != 4 )
      return 0;
    v67 = sub_1D365B0(*(_QWORD *)(v59 + 40), *(_DWORD *)(a10 + 24));
    if ( !v67 )
      return 0;
    v70 = sub_A63CE0(*(_QWORD **)(a1 + 248));
    v72 = *(__int64 **)(a9 + 24);
    v73 = *(__int64 **)(a9 + 16);
    for ( j = v72 - v73; v72 != v73; ++v73 )
    {
      v69 = *v73;
      v68 = *(unsigned __int16 *)*v73;
      LOWORD(v68) = v68 & 0x1FF;
      if ( (_WORD)v68 == 66 )
      {
        v68 = *(unsigned int *)(v69 + 52);
        LODWORD(j) = j + v68 - 1;
      }
    }
    v75 = sub_AAC1F0(*(_QWORD *)(a1 + 248), v70, v68, v69, v71);
    v86 = v75;
    if ( v75 > 0x40 )
    {
      sub_2205470(&v85, (unsigned int)j, 0);
      v75 = v86;
      v88 = v86;
      if ( v86 > 0x40 )
      {
        sub_2205510(&v87);
        v75 = v88;
        v76 = v87;
LABEL_77:
        v89 = v76;
        v90 = v75;
        v88 = 0;
        LOBYTE(v91) = 1;
        result = sub_1D6FEE0(a1, a2, v67, (void ***)&v89, v70, a10, 0, a11, nullptr);
        if ( v90 > 0x40 && v89 )
        {
          v79 = result;
          operator delete[](v89);
          result = v79;
        }
        if ( v88 > 0x40 && v87 )
        {
          v80 = result;
          operator delete[](v87);
          result = v80;
        }
        if ( v86 > 0x40 )
        {
          if ( v85 )
          {
            v81 = result;
            operator delete[](v85);
            return v81;
          }
        }
        return result;
      }
    }
    else
    {
      v85 = (void *)(unsigned int)j;
    }
    v76 = v85;
    v87 = v85;
    goto LABEL_77;
  }
  v82 = v59;
  v64 = v60;
  while ( 1 )
  {
    v65 = *v64;
    v66 = sub_C0EB40(*v64, *(_QWORD *)(a1 + 248), nullptr, v57, v58);
    result = sub_1D774E0(a1, a2, 0, v84, *(_QWORD *)(v65 + 8), v66, v65, a10, (__int64)a11, a12, 1, a14, v32, 0);
    if ( (_DWORD)result )
      return result;
    if ( i == ++v64 )
    {
      v59 = v82;
      goto LABEL_67;
    }
  }
}
