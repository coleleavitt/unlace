_QWORD **__fastcall sub_1FEBB80(__int64 a1, unsigned __int8 a2, unsigned int a3, __int64 a4)
{
  _QWORD *v4; // rbp
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD **v10; // r12
  _QWORD *v11; // r10
  unsigned __int64 v12; // rdi
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  __m128i *v16; // rax
  unsigned __int64 v17; // r15
  __m128i *v18; // r12
  __int64 v19; // rax
  __m128i *v20; // r11
  __m128i *v21; // rax
  __int64 v22; // rax
  __m128i *v23; // r9
  __m128i *v24; // rax
  __int64 v25; // rax
  __m128i *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  __int64 **v30; // rax
  __int64 *v31; // rbp
  char v32; // al
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rbp
  _QWORD *v35; // r8
  __m128i ***v36; // rcx
  __int64 *v37; // rax
  __m128i *v38; // rdi
  __m128i *v39; // rdi
  void *v40; // rdi
  void *v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // r10
  _QWORD *v44; // rcx
  unsigned __int64 v45; // rdi
  _QWORD *v46; // rsi
  unsigned __int64 v47; // rdx
  _QWORD **v48; // rax
  __int64 v49; // rax
  size_t n; // [rsp+0h] [rbp-1B8h]
  __int64 na; // [rsp+0h] [rbp-1B8h]
  size_t nb; // [rsp+0h] [rbp-1B8h]
  __int64 v53; // [rsp+8h] [rbp-1B0h]
  __m128i *v54; // [rsp+8h] [rbp-1B0h]
  __int64 v55; // [rsp+18h] [rbp-1A0h] BYREF
  unsigned __int64 v56; // [rsp+28h] [rbp-190h] BYREF
  __int16 v57[2]; // [rsp+30h] [rbp-188h] BYREF
  __int32 v58; // [rsp+34h] [rbp-184h]
  __int16 v59; // [rsp+38h] [rbp-180h]
  __int8 v60; // [rsp+3Ah] [rbp-17Eh]
  __int32 v61; // [rsp+3Ch] [rbp-17Ch]
  __int64 v62; // [rsp+40h] [rbp-178h]
  char v63; // [rsp+48h] [rbp-170h]
  char v64; // [rsp+49h] [rbp-16Fh]
  __int32 v65; // [rsp+4Ch] [rbp-16Ch]
  void *v66; // [rsp+50h] [rbp-168h]
  __int64 v67; // [rsp+58h] [rbp-160h]
  __int64 v68; // [rsp+60h] [rbp-158h] BYREF
  void *v69; // [rsp+70h] [rbp-148h]
  __int64 v70; // [rsp+78h] [rbp-140h]
  __int64 v71; // [rsp+80h] [rbp-138h] BYREF
  void *v72; // [rsp+90h] [rbp-128h]
  __int64 v73; // [rsp+98h] [rbp-120h]
  __int64 v74; // [rsp+A0h] [rbp-118h] BYREF
  void *v75; // [rsp+B0h] [rbp-108h]
  __int64 v76; // [rsp+B8h] [rbp-100h]
  __int64 v77; // [rsp+C0h] [rbp-F8h] BYREF
  unsigned __int64 v78; // [rsp+D0h] [rbp-E8h]
  __int16 v79; // [rsp+D8h] [rbp-E0h]
  __int32 v80; // [rsp+DCh] [rbp-DCh]
  __int16 v81; // [rsp+E0h] [rbp-D8h]
  __int8 v82; // [rsp+E2h] [rbp-D6h]
  __int32 v83; // [rsp+E4h] [rbp-D4h]
  __int64 v84; // [rsp+E8h] [rbp-D0h]
  __int16 v85; // [rsp+F0h] [rbp-C8h]
  __int32 v86; // [rsp+F4h] [rbp-C4h]
  void *v87; // [rsp+F8h] [rbp-C0h] BYREF
  __int64 v88; // [rsp+100h] [rbp-B8h]
  __m128i v89; // [rsp+108h] [rbp-B0h] BYREF
  void *v90; // [rsp+118h] [rbp-A0h] BYREF
  __int64 v91; // [rsp+120h] [rbp-98h]
  __m128i v92; // [rsp+128h] [rbp-90h] BYREF
  void *v93; // [rsp+138h] [rbp-80h] BYREF
  __int64 v94; // [rsp+140h] [rbp-78h]
  __m128i v95; // [rsp+148h] [rbp-70h] BYREF
  void *v96; // [rsp+158h] [rbp-60h] BYREF
  __int64 v97; // [rsp+160h] [rbp-58h]
  __m128i v98[5]; // [rsp+168h] [rbp-50h] BYREF

  v7 = *(_QWORD *)(a1 + 8);
  v55 = a4;
  v8 = ((unsigned __int64)a2 << 8)
     | (int)(a3 + 3)
     | ((unsigned __int64)BYTE1(a4) << 32)
     | ((unsigned __int64)BYTE2(a4) << 24)
     | ((unsigned __int64)(unsigned __int8)a4 << 16);
  v56 = v8;
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 8 * (v8 % v7));
  if ( v9 )
  {
    v10 = *(_QWORD ***)v9;
    if ( v8 == *(_QWORD *)(*(_QWORD *)v9 + 8LL) )
      return v10 + 2;
    v11 = *v10;
    if ( *v10 )
    {
      v12 = v11[1];
      if ( v8 % v7 == v12 % v7 )
      {
        while ( v8 != v12 )
        {
          if ( !*v11 )
            goto LABEL_13;
          v12 = *(_QWORD *)(*v11 + 8LL);
          v10 = (_QWORD **)v11;
          if ( v8 % v7 != v12 % v7 )
            goto LABEL_13;
          v11 = (_QWORD *)*v11;
        }
        v10 = (_QWORD **)*v10;
        if ( v10 )
          return v10 + 2;
      }
    }
  }
LABEL_13:
  v14 = *(_QWORD **)(a1 + 72);
  if ( !v14 )
    goto LABEL_20;
  v15 = (_QWORD *)(a1 + 64);
  do
  {
    while ( v8 <= v14[4] )
    {
      v15 = v14;
      v14 = (_QWORD *)v14[2];
      if ( !v14 )
        goto LABEL_18;
    }
    v14 = (_QWORD *)v14[3];
  }
  while ( v14 );
LABEL_18:
  if ( (_QWORD *)(a1 + 64) == v15 || v8 < v15[4] )
  {
LABEL_20:
    sub_1FEB8B0((__int64)v57, a2, a3, (unsigned __int8 *)&v55);
    if ( !v63 )
    {
      sub_4F97C0((_QWORD *)(a1 + 56), &v56);
LABEL_51:
      if ( v75 != &v77 )
        operator delete(v75);
      if ( v72 != &v74 )
        operator delete(v72);
      if ( v69 != &v71 )
        operator delete(v69);
      if ( v66 != &v68 )
        operator delete(v66);
      return (_QWORD **)v4;
    }
    LOBYTE(v85) = 1;
    v78 = v56;
    v87 = &v89;
    v79 = v57[0];
    v80 = v58;
    v81 = v59;
    v82 = v60;
    v83 = v61;
    v84 = v62;
    HIBYTE(v85) = v64;
    v86 = v65;
    sub_1FE43F0(&v87, v66, (__int64)v66 + v67);
    v90 = &v92;
    sub_1FE43F0(&v90, v69, (__int64)v69 + v70);
    v93 = &v95;
    sub_1FE43F0(&v93, v72, (__int64)v72 + v73);
    v96 = v98;
    sub_1FE43F0(&v96, v75, (__int64)v75 + v76);
    v16 = (__m128i *)operator new(0xB0u);
    v17 = v78;
    v18 = v16;
    v16->m128i_i64[0] = 0;
    v16->m128i_i64[1] = v17;
    v16[1].m128i_i16[0] = v79;
    v16[1].m128i_i32[1] = v80;
    v16[1].m128i_i16[4] = v81;
    v16[1].m128i_i8[10] = v82;
    v16[1].m128i_i32[3] = v83;
    v16[2].m128i_i64[0] = v84;
    v16[2].m128i_i16[4] = v85;
    v16[2].m128i_i32[3] = v86;
    n = (size_t)&v16[4];
    v16[3].m128i_i64[0] = (__int64)v16[4].m128i_i64;
    if ( v87 == &v89 )
    {
      v16[4] = _mm_loadu_si128(&v89);
    }
    else
    {
      v16[3].m128i_i64[0] = (__int64)v87;
      v16[4].m128i_i64[0] = v89.m128i_i64[0];
    }
    v19 = v88;
    v20 = v18 + 6;
    v88 = 0;
    v89.m128i_i8[0] = 0;
    v18[3].m128i_i64[1] = v19;
    v87 = &v89;
    v21 = (__m128i *)v90;
    v18[5].m128i_i64[0] = (__int64)v18[6].m128i_i64;
    if ( v21 == &v92 )
    {
      v18[6] = _mm_loadu_si128(&v92);
    }
    else
    {
      v18[5].m128i_i64[0] = (__int64)v21;
      v18[6].m128i_i64[0] = v92.m128i_i64[0];
    }
    v22 = v91;
    v23 = v18 + 8;
    v91 = 0;
    v92.m128i_i8[0] = 0;
    v18[5].m128i_i64[1] = v22;
    v90 = &v92;
    v24 = (__m128i *)v93;
    v18[7].m128i_i64[0] = (__int64)v18[8].m128i_i64;
    if ( v24 == &v95 )
    {
      v18[8] = _mm_loadu_si128(&v95);
    }
    else
    {
      v18[7].m128i_i64[0] = (__int64)v24;
      v18[8].m128i_i64[0] = v95.m128i_i64[0];
    }
    v25 = v94;
    v26 = (__m128i *)v96;
    v94 = 0;
    v95.m128i_i8[0] = 0;
    v18[7].m128i_i64[1] = v25;
    v93 = &v95;
    v18[9].m128i_i64[0] = (__int64)v18[10].m128i_i64;
    if ( v26 == v98 )
    {
      v26 = v18 + 10;
      v18[10] = _mm_loadu_si128(v98);
    }
    else
    {
      v27 = v98[0].m128i_i64[0];
      v18[9].m128i_i64[0] = (__int64)v26;
      v18[10].m128i_i64[0] = v27;
    }
    v28 = v97;
    v29 = *(_QWORD *)(a1 + 8);
    v98[0].m128i_i8[0] = 0;
    v97 = 0;
    v18[9].m128i_i64[1] = v28;
    v96 = v98;
    v53 = v17 % v29;
    v30 = *(__int64 ***)(*(_QWORD *)a1 + v53 * 8);
    if ( v30 )
    {
      v31 = *v30;
      if ( (*v30)[1] == v17 )
      {
LABEL_59:
        if ( v26 != &v18[10] )
        {
          operator delete(v26);
          v23 = v18 + 8;
          v20 = v18 + 6;
        }
        v38 = (__m128i *)v18[7].m128i_i64[0];
        if ( v23 != v38 )
        {
          v54 = v20;
          operator delete(v38);
          v20 = v54;
        }
        v39 = (__m128i *)v18[5].m128i_i64[0];
        if ( v20 != v39 )
          operator delete(v39);
        v40 = (void *)v18[3].m128i_i64[0];
        if ( (void *)n != v40 )
          operator delete(v40);
        operator delete(v18);
LABEL_40:
        if ( v96 != v98 )
          operator delete(v96);
        if ( v93 != &v95 )
          operator delete(v93);
        if ( v90 != &v92 )
          operator delete(v90);
        if ( v87 != &v89 )
          operator delete(v87);
        v4 = v31 + 2;
        goto LABEL_51;
      }
      while ( 1 )
      {
        v31 = (__int64 *)*v31;
        if ( !v31 || v17 % v29 != v31[1] % v29 )
          break;
        if ( v17 == v31[1] )
          goto LABEL_59;
      }
    }
    v32 = std::__detail::_Prime_rehash_policy::_M_need_rehash(
            (std::__detail::_Prime_rehash_policy *)(a1 + 32),
            v29,
            *(_QWORD *)(a1 + 24),
            1u);
    v34 = v33;
    if ( v32 )
    {
      if ( v33 == 1 )
      {
        v43 = a1 + 48;
        *(_QWORD *)(a1 + 48) = 0;
        v35 = (_QWORD *)(a1 + 48);
      }
      else
      {
        if ( v33 > 0x1FFFFFFFFFFFFFFFLL )
          std::__throw_bad_alloc();
        na = 8 * v33;
        v41 = (void *)operator new(8 * v33);
        v42 = memset(v41, 0, na);
        v43 = a1 + 48;
        v35 = v42;
      }
      v44 = *(_QWORD **)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0;
      if ( v44 )
      {
        v45 = 0;
        do
        {
          v46 = (_QWORD *)*v44;
          v47 = v44[1] % v34;
          v48 = (_QWORD **)&v35[v47];
          if ( *v48 )
          {
            *v44 = **v48;
            **v48 = v44;
          }
          else
          {
            *v44 = *(_QWORD *)(a1 + 16);
            *(_QWORD *)(a1 + 16) = v44;
            *v48 = (_QWORD *)(a1 + 16);
            if ( *v44 )
              v35[v45] = v44;
            v45 = v47;
          }
          v44 = v46;
        }
        while ( v46 );
      }
      if ( *(_QWORD *)a1 != v43 )
      {
        nb = (size_t)v35;
        operator delete(*(void **)a1);
        v35 = (_QWORD *)nb;
      }
      *(_QWORD *)(a1 + 8) = v34;
      *(_QWORD *)a1 = v35;
      v53 = v17 % v34;
    }
    else
    {
      v35 = *(_QWORD **)a1;
    }
    v36 = (__m128i ***)&v35[v53];
    v37 = (__int64 *)v35[v53];
    if ( v37 )
    {
      v18->m128i_i64[0] = *v37;
      **v36 = v18;
    }
    else
    {
      v49 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = v18;
      v18->m128i_i64[0] = v49;
      if ( v49 )
        v35[*(_QWORD *)(v49 + 8) % *(_QWORD *)(a1 + 8)] = v18;
      *v36 = (__m128i **)(a1 + 16);
    }
    ++*(_QWORD *)(a1 + 24);
    v31 = (__int64 *)v18;
    goto LABEL_40;
  }
  return (_QWORD **)v4;
}
