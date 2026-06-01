char **__fastcall sub_AA7380(char **a1, __int64 a2)
{
  char *v2; // rbp
  __m128i *v4; // rax
  char *v5; // rdi
  __m128i *v6; // r12
  __m128i v7; // xmm0
  const char *v9; // r13
  size_t v10; // rax
  size_t v11; // r12
  __int64 v12; // rax
  char *v13; // rdi
  __int64 v14; // r13
  __m128i v15; // xmm0
  __int64 *v16; // r12
  __int64 v17; // rdx
  char *v18; // r8
  const char *v19; // r13
  size_t v20; // rax
  char *v21; // rdx
  size_t v22; // rcx
  size_t v23; // r9
  __int64 v24; // r15
  unsigned __int64 v25; // rax
  char *v26; // rdi
  __int64 v27; // r15
  __int64 v28; // rcx
  unsigned __int64 v29; // r13
  __int64 v30; // r13
  __int64 v31; // rax
  char *v32; // rdi
  __int64 v33; // r12
  __m128i si128; // xmm0
  __int64 v35; // rax
  char *v36; // rdi
  __int64 v37; // r12
  __m128i v38; // xmm0
  __int64 v39; // rax
  __m128i v40; // xmm0
  char *v41; // rdi
  __int64 v42; // r12
  __m128i v43; // xmm0
  __int64 v44; // rax
  unsigned __int64 v45; // rdi
  __int64 v46; // rax
  size_t v47; // rdx
  size_t v48; // rcx
  char *v49; // rsi
  _BYTE *v50; // rax
  unsigned __int64 v51; // rdi
  char *v52; // rax
  size_t v53; // rdx
  char *v54; // r10
  __int64 v55; // rax
  char *v56; // rax
  __int64 v57; // rax
  char *v58; // rdi
  char *v59; // rax
  unsigned __int64 v60; // r14
  unsigned __int64 v61; // r13
  char *v62; // r12
  unsigned __int64 v63; // rdi
  __int64 v64; // r15
  char *v65; // r14
  __int64 v66; // rax
  char *v67; // rsi
  size_t v68; // rdx
  __int64 v69; // r13
  char *v70; // rdi
  unsigned __int64 v71; // rdi
  char *v72; // rax
  size_t v73; // [rsp+0h] [rbp-58h]
  size_t v74; // [rsp+0h] [rbp-58h]
  size_t v75; // [rsp+0h] [rbp-58h]
  size_t v76; // [rsp+0h] [rbp-58h]
  __int64 v77; // [rsp+8h] [rbp-50h]
  __int64 v78; // [rsp+8h] [rbp-50h]
  __int64 v79; // [rsp+8h] [rbp-50h]
  char *v80; // [rsp+8h] [rbp-50h]
  size_t v81; // [rsp+8h] [rbp-50h]
  size_t na; // [rsp+10h] [rbp-48h]
  size_t nb; // [rsp+10h] [rbp-48h]
  size_t nc; // [rsp+10h] [rbp-48h]
  size_t n; // [rsp+10h] [rbp-48h]
  size_t nd; // [rsp+10h] [rbp-48h]
  size_t ne; // [rsp+10h] [rbp-48h]
  size_t nf; // [rsp+10h] [rbp-48h]
  size_t ng; // [rsp+10h] [rbp-48h]
  size_t v90; // [rsp+18h] [rbp-40h]
  size_t v91; // [rsp+18h] [rbp-40h]
  size_t v92; // [rsp+18h] [rbp-40h]

  v2 = (char *)(a1 + 2);
  *((_BYTE *)a1 + 16) = 0;
  *a1 = (char *)(a1 + 2);
  a1[1] = nullptr;
  switch ( *(_DWORD *)(a2 + 10308) )
  {
    case 0:
    case 1:
      v9 = *(const char **)(a2 + 9328);
      v10 = strlen(v9);
      v11 = v10;
      if ( v10 > 0xF )
      {
        if ( v10 <= 0x1D )
        {
          v64 = 30;
          v63 = 31;
        }
        else
        {
          v63 = v10 + 1;
          v64 = v10;
        }
        v65 = (char *)operator new(v63);
        memcpy(v65, v9, v11);
        if ( v2 != *a1 )
          operator delete(*a1, (unsigned __int64)(a1[2] + 1));
        *a1 = v65;
        v2 = v65;
        a1[2] = (char *)v64;
      }
      else if ( v9 == v2 )
      {
        std::string::_M_replace_cold();
        v2 = *a1;
      }
      else if ( v10 )
      {
        if ( v10 == 1 )
          *((_BYTE *)a1 + 16) = *v9;
        else
          memcpy(v2, v9, v10);
      }
      a1[1] = (char *)v11;
      v2[v11] = 0;
      return a1;
    case 2:
      if ( v2 == "memout" )
      {
        std::string::_M_replace_cold();
        v2 = *a1;
      }
      else
      {
        *((_DWORD *)a1 + 4) = 1869440365;
        *((_WORD *)a1 + 10) = 29813;
      }
      a1[1] = &byte_6;
      v2[6] = 0;
      return a1;
    case 3:
      if ( v2 == "canceled" )
      {
        std::string::_M_replace_cold();
        v2 = *a1;
      }
      else
      {
        a1[2] = (char *)0x64656C65636E6163LL;
      }
      a1[1] = &byte_8;
      v2[8] = 0;
      return a1;
    case 4:
      v31 = operator new(0x1Fu);
      v32 = *a1;
      v33 = v31;
      *(__m128i *)v31 = _mm_load_si128((const __m128i *)&xmmword_18B6780);
      *(_QWORD *)(v31 + 13) = 0x646568636165722DLL;
      if ( v2 != v32 )
        operator delete(v32, (unsigned __int64)(a1[2] + 1));
      si128 = _mm_load_si128((const __m128i *)&xmmword_18B6730);
      *a1 = (char *)v33;
      *(_BYTE *)(v33 + 21) = 0;
      *(__m128i *)(a1 + 1) = si128;
      return a1;
    case 5:
      v12 = operator new(0x1Fu);
      v13 = *a1;
      v14 = v12;
      *(__m128i *)v12 = _mm_load_si128((const __m128i *)&xmmword_18B6790);
      *(_DWORD *)(v12 + 15) = 2037542757;
      if ( v2 != v13 )
        operator delete(v13, (unsigned __int64)(a1[2] + 1));
      v15 = _mm_load_si128((const __m128i *)&xmmword_18B6740);
      *a1 = (char *)v14;
      *(_BYTE *)(v14 + 19) = 0;
      *(__m128i *)(a1 + 1) = v15;
      v16 = *(__int64 **)(a2 + 10312);
      if ( !v16 || (v73 = (size_t)&v16[*((unsigned int *)v16 - 1)], (__int64 *)v73 == v16) )
      {
        v61 = (unsigned __int64)a1[2];
        if ( v61 <= 0x14 )
        {
          v60 = 21;
          v17 = 19;
          goto LABEL_102;
        }
        v59 = *a1;
        v17 = 19;
        v60 = 21;
        goto LABEL_80;
      }
      v17 = 19;
      break;
    case 6:
      v35 = operator new(0x1Fu);
      v36 = *a1;
      v37 = v35;
      *(__m128i *)v35 = _mm_load_si128((const __m128i *)&xmmword_18B67A0);
      *(__m128i *)(v35 + 9) = _mm_load_si128((const __m128i *)&xmmword_18B67B0);
      if ( v2 != v36 )
        operator delete(v36, (unsigned __int64)(a1[2] + 1));
      v38 = _mm_load_si128((const __m128i *)&xmmword_18B6750);
      *a1 = (char *)v37;
      *(_BYTE *)(v37 + 25) = 0;
      *(__m128i *)(a1 + 1) = v38;
      return a1;
    case 7:
      v39 = operator new(0x1Fu);
      v40 = _mm_load_si128((const __m128i *)&xmmword_18B67D0);
      v41 = *a1;
      *(_DWORD *)(v39 + 16) = 695427428;
      v42 = v39;
      *(__m128i *)v39 = v40;
      if ( v2 != v41 )
        operator delete(v41, (unsigned __int64)(a1[2] + 1));
      v43 = _mm_load_si128((const __m128i *)&xmmword_18B6770);
      *a1 = (char *)v42;
      *(_BYTE *)(v42 + 20) = 0;
      *(__m128i *)(a1 + 1) = v43;
      return a1;
    case 8:
      v4 = (__m128i *)operator new(0x1Fu);
      v5 = *a1;
      v6 = v4;
      *v4 = _mm_load_si128((const __m128i *)&xmmword_18B67C0);
      v4[1].m128i_i64[0] = 0x2973726569666974LL;
      if ( v2 != v5 )
        operator delete(v5, (unsigned __int64)(a1[2] + 1));
      v7 = _mm_load_si128((const __m128i *)&xmmword_18B6760);
      *a1 = (char *)v6;
      v6[1].m128i_i8[8] = 0;
      *(__m128i *)(a1 + 1) = v7;
      return a1;
    default:
      return a1;
  }
  do
  {
    v27 = *v16;
    if ( v17 == 0x7FFFFFFFFFFFFFFFLL )
      std::__throw_length_error("basic_string::append");
    v28 = v17 + 1;
    if ( v2 == *a1 )
    {
      if ( v17 != 15 )
      {
LABEL_23:
        (*a1)[v17] = 32;
        v18 = *a1;
        goto LABEL_24;
      }
      v55 = operator new(0x1Fu);
      v54 = *a1;
      v28 = 16;
      v18 = (char *)v55;
      v30 = 30;
      v53 = 15;
LABEL_69:
      v92 = v28;
      ne = v53;
      v80 = v54;
      v56 = (char *)memcpy(v18, v54, v53);
      v28 = v92;
      v53 = ne;
      v54 = v80;
      v18 = v56;
      goto LABEL_64;
    }
    v29 = (unsigned __int64)a1[2];
    if ( v29 >= v28 )
      goto LABEL_23;
    if ( v28 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v30 = 2 * v29;
    if ( v28 >= (unsigned __int64)v30 )
    {
      v51 = v17 + 2;
      if ( v17 + 2 < 0 )
LABEL_38:
        std::__throw_bad_alloc();
      v30 = v17 + 1;
    }
    else
    {
      if ( v30 < 0 )
        goto LABEL_38;
      v51 = v30 + 1;
    }
    n = v17;
    v78 = v17 + 1;
    v52 = (char *)operator new(v51);
    v53 = n;
    v54 = *a1;
    v18 = v52;
    v28 = v78;
    if ( n )
    {
      if ( n == 1 )
      {
        *v52 = *v54;
        goto LABEL_64;
      }
      goto LABEL_69;
    }
LABEL_64:
    v18[v53] = 32;
    if ( v2 != v54 )
    {
      nd = (size_t)v18;
      v79 = v28;
      operator delete(v54, (unsigned __int64)(a1[2] + 1));
      v18 = (char *)nd;
      v28 = v79;
    }
    *a1 = v18;
    a1[2] = (char *)v30;
LABEL_24:
    a1[1] = (char *)v28;
    v18[v28] = 0;
    v19 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 360LL))(v27);
    v20 = strlen(v19);
    v21 = a1[1];
    v22 = v20;
    if ( 0x7FFFFFFFFFFFFFFFLL - (__int64)v21 < v20 )
      std::__throw_length_error("basic_string::append");
    v23 = (size_t)*a1;
    v24 = (__int64)&v21[v20];
    if ( v2 != *a1 )
    {
      v25 = (unsigned __int64)a1[2];
      if ( v25 >= v24 )
        goto LABEL_27;
      if ( v24 < 0 )
        goto LABEL_113;
      v44 = 2 * v25;
      v77 = v44;
      if ( v24 >= (unsigned __int64)v44 )
      {
LABEL_52:
        v45 = v24 + 1;
        if ( v24 + 1 < 0 )
LABEL_51:
          std::__throw_bad_alloc();
        v77 = (__int64)&v21[v22];
      }
      else
      {
        if ( v44 < 0 )
          goto LABEL_51;
        v45 = v44 + 1;
      }
      v90 = v22;
      na = (size_t)a1[1];
      v46 = operator new(v45);
      v47 = na;
      v48 = v90;
      v23 = v46;
      if ( !na )
        goto LABEL_57;
      goto LABEL_55;
    }
    if ( (unsigned __int64)v24 <= 0xF )
    {
LABEL_27:
      if ( v22 )
      {
        v26 = &v21[v23];
        if ( v22 == 1 )
          *v26 = *v19;
        else
          memcpy(v26, v19, v22);
        v23 = (size_t)*a1;
      }
      goto LABEL_31;
    }
    if ( v24 < 0 )
LABEL_113:
      std::__throw_length_error("basic_string::_M_create");
    if ( (unsigned __int64)v24 > 0x1D )
      goto LABEL_52;
    nf = v20;
    v81 = (size_t)a1[1];
    v57 = operator new(0x1Fu);
    v47 = v81;
    v48 = nf;
    v23 = v57;
    v77 = 30;
    if ( !v47 )
    {
LABEL_74:
      v58 = (char *)(v23 + v47);
      if ( v48 == 1 )
      {
        *v58 = *v19;
      }
      else
      {
        ng = v23;
        memcpy(v58, v19, v48);
        v23 = ng;
      }
      goto LABEL_58;
    }
LABEL_55:
    v49 = *a1;
    if ( v47 == 1 )
    {
      *(_BYTE *)v23 = *v49;
    }
    else
    {
      v91 = v48;
      nb = v47;
      v50 = memcpy((void *)v23, v49, v47);
      v48 = v91;
      v47 = nb;
      v23 = (size_t)v50;
    }
LABEL_57:
    if ( v48 )
      goto LABEL_74;
LABEL_58:
    if ( v2 != *a1 )
    {
      nc = v23;
      operator delete(*a1, (unsigned __int64)(a1[2] + 1));
      v23 = nc;
    }
    *a1 = (char *)v23;
    a1[2] = (char *)v77;
LABEL_31:
    a1[1] = (char *)v24;
    ++v16;
    *(_BYTE *)(v23 + v24) = 0;
    v17 = (__int64)a1[1];
  }
  while ( (__int64 *)v73 != v16 );
  if ( v17 == 0x7FFFFFFFFFFFFFFFLL || v17 == 9223372036854775806LL )
    std::__throw_length_error("basic_string::append");
  v59 = *a1;
  v60 = v17 + 2;
  if ( v2 == *a1 )
  {
    if ( v60 > 0xF )
    {
      v74 = (size_t)a1[1];
      v66 = operator new(0x1Fu);
      v67 = *a1;
      v68 = v74;
      v62 = (char *)v66;
      v69 = 30;
      goto LABEL_96;
    }
LABEL_80:
    *(_WORD *)&v59[v17] = 10537;
    v62 = *a1;
    goto LABEL_81;
  }
  v61 = (unsigned __int64)a1[2];
  if ( v61 >= v60 )
    goto LABEL_80;
  if ( (v60 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_create");
LABEL_102:
  v69 = 2 * v61;
  if ( v60 >= v69 )
  {
    v69 = v60;
    v71 = v17 + 3;
    if ( v17 + 3 < 0 )
LABEL_104:
      std::__throw_bad_alloc();
  }
  else
  {
    v71 = v69 + 1;
    if ( v69 < 0 )
      goto LABEL_104;
  }
  v76 = v17;
  v72 = (char *)operator new(v71);
  v68 = v76;
  v70 = *a1;
  v62 = v72;
  if ( !v76 )
    goto LABEL_97;
  v67 = *a1;
  if ( v76 == 1 )
  {
    *v72 = *v70;
    goto LABEL_97;
  }
LABEL_96:
  v75 = v68;
  memcpy(v62, v67, v68);
  v70 = *a1;
  v68 = v75;
LABEL_97:
  *(_WORD *)&v62[v68] = 10537;
  if ( v2 != v70 )
    operator delete(v70, (unsigned __int64)(a1[2] + 1));
  *a1 = v62;
  a1[2] = (char *)v69;
LABEL_81:
  a1[1] = (char *)v60;
  v62[v60] = 0;
  return a1;
}

