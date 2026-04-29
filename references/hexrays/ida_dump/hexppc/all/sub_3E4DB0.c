__int64 __fastcall sub_3E4DB0(__m128i *a1, __int64 *a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rax
  _DWORD *exception; // rax
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  __int64 v11; // rax
  __m128 v12; // xmm0
  __int16 v13; // ax
  unsigned int v14; // r12d
  __int16 v15; // ax
  int v16; // ebx
  __int16 v17; // ax
  __int64 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rbx
  void *v21; // r13
  unsigned __int64 v22; // rdx
  __m128i v23; // xmm0
  __int64 v24; // rdi
  int v25; // ecx
  __m128i v27; // xmm0
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 *v32; // rsi
  __int64 v33; // rax
  _DWORD *v34; // rsi
  _DWORD *v35; // rdi
  __int64 v36; // rbx
  __int16 v37; // ax
  _QWORD *v38; // r12
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  size_t v48; // rbp
  int v49; // ebx
  __int16 v50; // ax
  __int64 v51; // rax
  __m128i v52; // [rsp+0h] [rbp-128h] BYREF
  unsigned __int8 *v53; // [rsp+18h] [rbp-110h]
  __int64 *v54; // [rsp+20h] [rbp-108h]
  _DWORD *v55; // [rsp+28h] [rbp-100h]
  __int64 v56; // [rsp+30h] [rbp-F8h]
  int v57; // [rsp+3Ch] [rbp-ECh]
  _QWORD v58[2]; // [rsp+40h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v60; // [rsp+60h] [rbp-C8h]
  __m128i v61; // [rsp+68h] [rbp-C0h] BYREF
  _QWORD v62[2]; // [rsp+78h] [rbp-B0h] BYREF
  int v63; // [rsp+88h] [rbp-A0h]
  __int64 v64[2]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v65; // [rsp+A0h] [rbp-88h]
  __int64 v66; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v67; // [rsp+B0h] [rbp-78h]
  __m128i v68; // [rsp+B8h] [rbp-70h] BYREF
  _DWORD v69[4]; // [rsp+C8h] [rbp-60h] BYREF
  int v70; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v71; // [rsp+E8h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  v11 = j__qalloc_or_throw(312);
  v12 = 0;
  *(_QWORD *)v11 = -1;
  *(_QWORD *)(v11 + 8) = 0;
  *(_QWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 24) = 0;
  *(_QWORD *)(v11 + 48) = 0;
  *(_QWORD *)(v11 + 72) = 0;
  *(_QWORD *)(v11 + 80) = 0;
  *(_QWORD *)(v11 + 88) = 0;
  *(_QWORD *)(v11 + 96) = 0;
  *(_QWORD *)(v11 + 104) = 0;
  *(_QWORD *)(v11 + 112) = 0;
  *(_QWORD *)(v11 + 136) = 0;
  *(_QWORD *)(v11 + 144) = 0;
  *(_QWORD *)(v11 + 152) = 0;
  *(_QWORD *)(v11 + 176) = 0;
  *(_QWORD *)(v11 + 184) = 0;
  *(_QWORD *)(v11 + 192) = 0;
  *(_QWORD *)(v11 + 216) = 0;
  *(_QWORD *)(v11 + 240) = 0;
  *(_QWORD *)(v11 + 248) = 0;
  *(_QWORD *)(v11 + 256) = 0;
  *(_QWORD *)(v11 + 280) = 0;
  *(_QWORD *)(v11 + 288) = 0;
  *(_OWORD *)(v11 + 32) = 0;
  *(_OWORD *)(v11 + 56) = 0;
  *(_OWORD *)(v11 + 120) = 0;
  *(_OWORD *)(v11 + 160) = 0;
  *(_OWORD *)(v11 + 200) = 0;
  *(_OWORD *)(v11 + 224) = 0;
  *(_OWORD *)(v11 + 264) = 0;
  *(_OWORD *)(v11 + 296) = 0;
  *a2 = v11;
  v13 = a1[67].m128i_i16[2];
  if ( (unsigned __int16)v13 <= 0xD6u )
  {
    if ( (unsigned __int16)v13 > 0xC8u )
    {
      switch ( a1[67].m128i_i16[2] )
      {
        case 0xC9:
          v57 = 48;
          goto LABEL_23;
        case 0xCA:
          v57 = 80;
          goto LABEL_23;
        case 0xCB:
          v57 = 96;
          goto LABEL_23;
        case 0xCC:
          v57 = 112;
          goto LABEL_23;
        case 0xCD:
          v57 = 128;
          goto LABEL_23;
        case 0xCE:
          v57 = 240;
          goto LABEL_23;
        case 0xD5:
          v57 = 224;
          goto LABEL_23;
        case 0xD6:
          v57 = 208;
          goto LABEL_23;
        default:
          break;
      }
    }
    if ( v13 == 62 )
    {
      v57 = 32;
      goto LABEL_6;
    }
LABEL_63:
    exception = __cxa_allocate_exception(4u);
    *exception = 47;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  v57 = 64;
  if ( v13 != 1031 )
    goto LABEL_63;
LABEL_23:
  sub_3E2460(a1);
  if ( a1[67].m128i_i16[2] != 58 )
  {
    v8 = __cxa_allocate_exception(4u);
    *v8 = 47;
    __cxa_throw(v8, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  while ( 1 )
  {
    sub_3E2460(a1);
    if ( a1[67].m128i_i16[2] == 62 )
      break;
    v38 = (_QWORD *)*a2;
    v62[0] = 0;
    v62[1] = 0;
    v63 = 0;
    v61 = 0;
    v39 = v38[5];
    v60 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_411BF0);
    v40 = v38[3];
    v58[0] = 0xFFFFFFFF00000000LL;
    v58[1] = 0;
    if ( (unsigned __int64)v58 < v40 || (unsigned __int64)v58 >= v40 + 80 * v39 )
    {
      v41 = v38[4];
      if ( v39 < v41 + 1 )
      {
        v45 = qvector_reserve(v38 + 3, v40, v41 + 1, 80);
        v38[3] = v45;
        v40 = v45;
        v41 = v38[4];
      }
      v42 = v40 + 80 * v41;
      sub_120000(v42, (unsigned __int8 *)v58);
      v43 = si128.m128i_i64[0];
      *(_QWORD *)(v42 + 24) = 0;
      v53 = (unsigned __int8 *)(v42 + 24);
      *(_QWORD *)(v42 + 16) = v43;
      v52.m128i_i64[0] = (__int64)&si128.m128i_i64[1];
      copy_tinfo_t(v42 + 24, &si128.m128i_u64[1]);
      v44 = v60;
      v12 = (__m128)_mm_loadu_si128(&v61);
      *(_DWORD *)(v42 + 56) = 0;
      v60 = 0;
      *(_QWORD *)(v42 + 32) = v44;
      *(__m128 *)(v42 + 40) = v12;
      v61 = 0;
      copy_argloc(v42 + 56, v62);
      *(_DWORD *)(v42 + 72) = v63;
    }
    else
    {
      v53 = (unsigned __int8 *)v64;
      sub_120000((__int64)v64, (unsigned __int8 *)v58);
      v66 = 0;
      v52.m128i_i64[0] = (__int64)&si128.m128i_i64[1];
      v65 = si128.m128i_i64[0];
      v54 = &v66;
      copy_tinfo_t(&v66, &si128.m128i_u64[1]);
      v27 = _mm_loadu_si128(&v61);
      v61 = 0;
      v67 = v60;
      v55 = v69;
      v60 = 0;
      v69[0] = 0;
      v68 = v27;
      copy_argloc(v69, v62);
      v70 = v63;
      v28 = v38[4];
      v29 = v38[3];
      if ( v38[5] < (unsigned __int64)(v28 + 1) )
      {
        v46 = qvector_reserve(v38 + 3, v29, v28 + 1, 80);
        v38[3] = v46;
        v28 = v38[4];
        v29 = v46;
      }
      v30 = v29 + 80 * v28;
      sub_120000(v30, v53);
      v31 = v65;
      *(_QWORD *)(v30 + 24) = 0;
      v32 = v54;
      *(_QWORD *)(v30 + 16) = v31;
      v56 = v30 + 24;
      copy_tinfo_t(v30 + 24, v32);
      v33 = v67;
      v34 = v55;
      v67 = 0;
      v12 = (__m128)_mm_loadu_si128(&v68);
      v68 = 0;
      *(_QWORD *)(v30 + 32) = v33;
      *(_DWORD *)(v30 + 56) = 0;
      *(__m128 *)(v30 + 40) = v12;
      copy_argloc(v30 + 56, v34);
      v35 = v55;
      *(_DWORD *)(v30 + 72) = v70;
      cleanup_argloc(v35);
      if ( v67 )
      {
        v68.m128i_i64[0] = 0;
        qfree(v67);
      }
      clear_tinfo_t(v54);
      sub_119360((__int64)v53);
    }
    ++v38[4];
    cleanup_argloc(v62);
    if ( v60 )
    {
      v61.m128i_i64[0] = 0;
      qfree(v60);
    }
    clear_tinfo_t(v52.m128i_i64[0]);
    sub_119360((__int64)v58);
    v36 = *(_QWORD *)(*a2 + 24) + 80LL * *(_QWORD *)(*a2 + 32) - 80;
    if ( a1[67].m128i_i16[2] != 2 )
    {
      v7 = __cxa_allocate_exception(4u);
      *v7 = 47;
      __cxa_throw(v7, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    sub_3E24A0((__int64)a1, (__int64 *)(v36 + 24), v36 + 32);
    sub_3E2460(a1);
    sub_3E3CD0(a1, v36, 1, v12);
    *(_DWORD *)(v36 + 4) = get_tinfo_size(0, *(_QWORD *)(v36 + 24), 0);
    v37 = a1[67].m128i_i16[2];
    if ( v37 == 62 )
      break;
    if ( v37 != 44 )
    {
      v6 = __cxa_allocate_exception(4u);
      *v6 = 47;
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'int, nullptr);
    }
  }
LABEL_6:
  v14 = sub_3E1FC0(a1);
  if ( v14 )
  {
    v3 = __cxa_allocate_exception(4u);
    *v3 = v14;
    __cxa_throw(v3, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  v15 = a1[67].m128i_i16[2];
  if ( v15 == 4 )
  {
    a1[67].m128i_i16[2] = 2;
    goto LABEL_49;
  }
  if ( v15 == 15933 )
  {
    v49 = sub_3E1FC0(a1);
    if ( v49 )
    {
      v5 = __cxa_allocate_exception(4u);
      *v5 = v49;
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v50 = a1[67].m128i_i16[2];
    if ( v50 == 4 )
    {
      a1[67].m128i_i16[2] = 2;
    }
    else if ( v50 != 2 )
    {
      goto LABEL_62;
    }
    sub_3E24A0((__int64)a1, (__int64 *)(*a2 + 72), 0);
    v14 = sub_3E4B50(a1, (_QWORD *)*a2, v12);
    goto LABEL_17;
  }
  if ( v15 != 46 )
  {
LABEL_49:
    v47 = *a2;
    v64[0] = 1;
    v53 = (unsigned __int8 *)v64;
    copy_tinfo_t(v47 + 72, v64);
    clear_tinfo_t(v64);
    goto LABEL_17;
  }
  v16 = sub_3E1FC0(a1);
  if ( v16 )
  {
    v2 = __cxa_allocate_exception(4u);
    *v2 = v16;
    __cxa_throw(v2, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  v17 = a1[67].m128i_i16[2];
  if ( v17 == 4 )
  {
    a1[67].m128i_i16[2] = 2;
LABEL_62:
    sub_5AE3A(*(double *)v12.m128_u64);
  }
  if ( v17 != 3 )
    goto LABEL_62;
  v18 = a1[66].m128i_i64[0];
  if ( v18 != (int)v18 )
    sub_5AE5C();
  sub_3E2460(a1);
  if ( (_DWORD)v18 )
  {
    v51 = a1->m128i_i64[0];
    v53 = (unsigned __int8 *)v64;
    sub_328100(v64, *(_QWORD *)(v51 + 112), v18, 0);
    copy_tinfo_t(*a2 + 72, v64);
    v14 = v18;
  }
  else
  {
    v19 = *a2;
    v64[0] = 1;
    v53 = (unsigned __int8 *)v64;
    copy_tinfo_t(v19 + 72, v64);
  }
  clear_tinfo_t(v64);
LABEL_17:
  v20 = *a2;
  v21 = nullptr;
  sub_60E90((__int64 *)(*a2 + 136), (__int64 *)(*a2 + 96));
  v22 = *(_QWORD *)(v20 + 120);
  v23 = _mm_unpacklo_epi64((__m128i)v22, (__m128i)v22);
  if ( v22 )
  {
    v52 = v23;
    v48 = 16 * v22;
    v21 = (void *)qalloc_or_throw(16 * v22);
    memcpy(v21, *(const void **)(v20 + 112), v48);
    v23 = _mm_load_si128(&v52);
  }
  v24 = *(_QWORD *)(v20 + 152);
  if ( v24 )
  {
    *(_QWORD *)(v20 + 160) = 0;
    v52 = v23;
    qfree(v24);
    v23 = _mm_load_si128(&v52);
  }
  *(_QWORD *)(v20 + 152) = v21;
  v25 = v57;
  *(__m128i *)(v20 + 160) = v23;
  *(_DWORD *)(*a2 + 280) |= 1u;
  *(_DWORD *)(*a2 + 8) = *(_QWORD *)(*a2 + 32);
  *(_DWORD *)(*a2 + 20) = v25;
  return v14;
}
