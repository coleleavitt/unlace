__int64 __fastcall sub_3E8F30(__m128i *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rax
  _DWORD *exception; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  __int64 *v11; // r14
  __int64 v12; // rax
  __m128 v13; // xmm0
  __int16 v14; // ax
  unsigned int v15; // r12d
  __int16 v16; // ax
  int v17; // ebx
  __int16 v18; // ax
  __int64 v19; // r13
  __int64 v20; // rbx
  void *v21; // r13
  __int64 *v22; // rsi
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __m128i v25; // xmm0
  __int64 v26; // rdi
  int v27; // ecx
  __m128i v29; // xmm0
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __m128i *v37; // rbx
  __int64 v38; // rcx
  __int16 v39; // ax
  __int64 v40; // rcx
  _QWORD *v41; // r12
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rbp
  int v51; // ebx
  __int16 v52; // ax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  __m128i v56; // [rsp+0h] [rbp-128h] BYREF
  unsigned __int8 *v57; // [rsp+18h] [rbp-110h]
  __int64 *v58; // [rsp+20h] [rbp-108h]
  int *v59; // [rsp+28h] [rbp-100h]
  __int64 v60; // [rsp+30h] [rbp-F8h]
  int v61; // [rsp+3Ch] [rbp-ECh]
  _QWORD v62[2]; // [rsp+40h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v64; // [rsp+60h] [rbp-C8h]
  __m128i v65; // [rsp+68h] [rbp-C0h] BYREF
  __int64 v66; // [rsp+78h] [rbp-B0h]
  __int64 v67; // [rsp+80h] [rbp-A8h]
  int v68; // [rsp+88h] [rbp-A0h]
  __int64 v69[2]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v70; // [rsp+A0h] [rbp-88h]
  __int64 v71; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v72; // [rsp+B0h] [rbp-78h]
  __m128i v73; // [rsp+B8h] [rbp-70h] BYREF
  int v74; // [rsp+C8h] [rbp-60h] BYREF
  int v75; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v76; // [rsp+E8h] [rbp-40h]

  v76 = __readfsqword(0x28u);
  v11 = a2;
  v12 = j__qalloc_or_throw(312, (__int64)a2, a3, a4);
  v13 = 0;
  *(_QWORD *)v12 = -1;
  *(_QWORD *)(v12 + 8) = 0;
  *(_QWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 24) = 0;
  *(_QWORD *)(v12 + 48) = 0;
  *(_QWORD *)(v12 + 72) = 0;
  *(_QWORD *)(v12 + 80) = 0;
  *(_QWORD *)(v12 + 88) = 0;
  *(_QWORD *)(v12 + 96) = 0;
  *(_QWORD *)(v12 + 104) = 0;
  *(_QWORD *)(v12 + 112) = 0;
  *(_QWORD *)(v12 + 136) = 0;
  *(_QWORD *)(v12 + 144) = 0;
  *(_QWORD *)(v12 + 152) = 0;
  *(_QWORD *)(v12 + 176) = 0;
  *(_QWORD *)(v12 + 184) = 0;
  *(_QWORD *)(v12 + 192) = 0;
  *(_QWORD *)(v12 + 216) = 0;
  *(_QWORD *)(v12 + 240) = 0;
  *(_QWORD *)(v12 + 248) = 0;
  *(_QWORD *)(v12 + 256) = 0;
  *(_QWORD *)(v12 + 280) = 0;
  *(_QWORD *)(v12 + 288) = 0;
  *(_OWORD *)(v12 + 32) = 0;
  *(_OWORD *)(v12 + 56) = 0;
  *(_OWORD *)(v12 + 120) = 0;
  *(_OWORD *)(v12 + 160) = 0;
  *(_OWORD *)(v12 + 200) = 0;
  *(_OWORD *)(v12 + 224) = 0;
  *(_OWORD *)(v12 + 264) = 0;
  *(_OWORD *)(v12 + 296) = 0;
  *a2 = v12;
  v14 = a1[67].m128i_i16[2];
  if ( (unsigned __int16)v14 <= 0xD6u )
  {
    if ( (unsigned __int16)v14 > 0xC8u )
    {
      switch ( a1[67].m128i_i16[2] )
      {
        case 0xC9:
          v61 = 48;
          goto LABEL_23;
        case 0xCA:
          v61 = 80;
          goto LABEL_23;
        case 0xCB:
          v61 = 96;
          goto LABEL_23;
        case 0xCC:
          v61 = 112;
          goto LABEL_23;
        case 0xCD:
          v61 = 128;
          goto LABEL_23;
        case 0xCE:
          v61 = 240;
          goto LABEL_23;
        case 0xD5:
          v61 = 224;
          goto LABEL_23;
        case 0xD6:
          v61 = 208;
          goto LABEL_23;
        default:
          break;
      }
    }
    if ( v14 == 62 )
    {
      v61 = 32;
      goto LABEL_6;
    }
LABEL_63:
    exception = __cxa_allocate_exception(4u);
    *exception = 47;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  v61 = 64;
  if ( v14 != 1031 )
    goto LABEL_63;
LABEL_23:
  sub_3E65E0(a1);
  if ( a1[67].m128i_i16[2] != 58 )
  {
    v10 = __cxa_allocate_exception(4u);
    *v10 = 47;
    __cxa_throw(v10, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  while ( 1 )
  {
    sub_3E65E0(a1);
    if ( a1[67].m128i_i16[2] == 62 )
      break;
    v41 = (_QWORD *)*v11;
    v66 = 0;
    v67 = 0;
    v68 = 0;
    v65 = 0;
    v42 = v41[5];
    v64 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v43 = v41[3];
    v62[0] = 0xFFFFFFFF00000000LL;
    v62[1] = 0;
    if ( (unsigned __int64)v62 < v43 || (unsigned __int64)v62 >= v43 + 80 * v42 )
    {
      v44 = v41[4];
      if ( v42 < v44 + 1 )
      {
        v48 = qvector_reserve((__int64)(v41 + 3), v43, v44 + 1, 80);
        v41[3] = v48;
        v43 = v48;
        v44 = v41[4];
      }
      v45 = v43 + 80 * v44;
      sub_123A40(v45, (unsigned __int8 *)v62, v42, v40);
      v46 = si128.m128i_i64[0];
      *(_QWORD *)(v45 + 24) = 0;
      v57 = (unsigned __int8 *)(v45 + 24);
      *(_QWORD *)(v45 + 16) = v46;
      v56.m128i_i64[0] = (__int64)&si128.m128i_i64[1];
      copy_tinfo_t();
      v47 = v64;
      v13 = (__m128)_mm_loadu_si128(&v65);
      *(_DWORD *)(v45 + 56) = 0;
      v64 = 0;
      *(_QWORD *)(v45 + 32) = v47;
      *(__m128 *)(v45 + 40) = v13;
      v65 = 0;
      copy_argloc();
      *(_DWORD *)(v45 + 72) = v68;
    }
    else
    {
      v57 = (unsigned __int8 *)v69;
      sub_123A40((__int64)v69, (unsigned __int8 *)v62, v42, v40);
      v71 = 0;
      v56.m128i_i64[0] = (__int64)&si128.m128i_i64[1];
      v70 = si128.m128i_i64[0];
      v58 = &v71;
      copy_tinfo_t();
      v29 = _mm_loadu_si128(&v65);
      v65 = 0;
      v72 = v64;
      v59 = &v74;
      v64 = 0;
      v74 = 0;
      v73 = v29;
      copy_argloc();
      v75 = v68;
      v31 = v41[4];
      v32 = v41[3];
      if ( v41[5] < (unsigned __int64)(v31 + 1) )
      {
        v49 = qvector_reserve((__int64)(v41 + 3), v32, v31 + 1, 80);
        v41[3] = v49;
        v31 = v41[4];
        v32 = v49;
      }
      v33 = 80 * v31;
      v34 = v32 + v33;
      sub_123A40(v32 + v33, v57, v33, v30);
      v35 = v70;
      *(_QWORD *)(v34 + 24) = 0;
      *(_QWORD *)(v34 + 16) = v35;
      v60 = v34 + 24;
      copy_tinfo_t();
      v36 = v72;
      v72 = 0;
      v13 = (__m128)_mm_loadu_si128(&v73);
      v73 = 0;
      *(_QWORD *)(v34 + 32) = v36;
      *(_DWORD *)(v34 + 56) = 0;
      *(__m128 *)(v34 + 40) = v13;
      copy_argloc();
      *(_DWORD *)(v34 + 72) = v75;
      cleanup_argloc();
      if ( v72 )
      {
        v73.m128i_i64[0] = 0;
        qfree(v72);
      }
      clear_tinfo_t();
      sub_11CDA0((__int64)v57);
    }
    ++v41[4];
    cleanup_argloc();
    if ( v64 )
    {
      v65.m128i_i64[0] = 0;
      qfree(v64);
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v62);
    v37 = (__m128i *)(*(_QWORD *)(*v11 + 24) + 80LL * *(_QWORD *)(*v11 + 32) - 80);
    if ( a1[67].m128i_i16[2] != 2 )
    {
      v9 = __cxa_allocate_exception(4u);
      *v9 = 47;
      __cxa_throw(v9, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    sub_3E6620((__int64)a1, &v37[1].m128i_i64[1]);
    sub_3E65E0(a1);
    sub_3E7E50(a1, v37, 1, v38, v13);
    a2 = (__int64 *)v37[1].m128i_i64[1];
    v37->m128i_i32[1] = get_tinfo_size();
    v39 = a1[67].m128i_i16[2];
    if ( v39 == 62 )
      break;
    if ( v39 != 44 )
    {
      v8 = __cxa_allocate_exception(4u);
      *v8 = 47;
      __cxa_throw(v8, (struct type_info *)&`typeinfo for'int, nullptr);
    }
  }
LABEL_6:
  v15 = sub_3E6140(a1);
  if ( v15 )
  {
    v5 = __cxa_allocate_exception(4u);
    *v5 = v15;
    __cxa_throw(v5, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  v16 = a1[67].m128i_i16[2];
  if ( v16 == 4 )
  {
    a1[67].m128i_i16[2] = 2;
    goto LABEL_49;
  }
  if ( v16 == 15933 )
  {
    v51 = sub_3E6140(a1);
    if ( v51 )
    {
      v7 = __cxa_allocate_exception(4u);
      *v7 = v51;
      __cxa_throw(v7, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v52 = a1[67].m128i_i16[2];
    if ( v52 == 4 )
    {
      a1[67].m128i_i16[2] = 2;
    }
    else if ( v52 != 2 )
    {
      goto LABEL_62;
    }
    sub_3E6620((__int64)a1, (_QWORD *)(*v11 + 72));
    v15 = sub_3E8CD0(a1, (_QWORD *)*v11, v13, v53, v54);
    goto LABEL_17;
  }
  if ( v16 != 46 )
  {
LABEL_49:
    v69[0] = 1;
    v57 = (unsigned __int8 *)v69;
    copy_tinfo_t();
    clear_tinfo_t();
    goto LABEL_17;
  }
  v17 = sub_3E6140(a1);
  if ( v17 )
  {
    v4 = __cxa_allocate_exception(4u);
    *v4 = v17;
    __cxa_throw(v4, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  v18 = a1[67].m128i_i16[2];
  if ( v18 == 4 )
  {
    a1[67].m128i_i16[2] = 2;
LABEL_62:
    sub_5C092(a1, a2, *(double *)v13.m128_u64);
  }
  if ( v18 != 3 )
    goto LABEL_62;
  v19 = a1[66].m128i_i64[0];
  if ( v19 != (int)v19 )
    sub_5C0B4(a1);
  sub_3E65E0(a1);
  if ( (_DWORD)v19 )
  {
    v55 = a1->m128i_i64[0];
    v57 = (unsigned __int8 *)v69;
    sub_32C430(v69, *(_QWORD *)(v55 + 112), v19, 0);
    copy_tinfo_t();
    v15 = v19;
  }
  else
  {
    v69[0] = 1;
    v57 = (unsigned __int8 *)v69;
    copy_tinfo_t();
  }
  clear_tinfo_t();
LABEL_17:
  v20 = *v11;
  v21 = nullptr;
  v22 = (__int64 *)(*v11 + 96);
  sub_648D0((__int64 *)(*v11 + 136), v22);
  v24 = *(_QWORD *)(v20 + 120);
  v25 = _mm_unpacklo_epi64((__m128i)v24, (__m128i)v24);
  if ( v24 )
  {
    v56 = v25;
    v50 = 16 * v24;
    v21 = (void *)qalloc_or_throw(v50, (__int64)v22, v50, v23);
    memcpy(v21, *(const void **)(v20 + 112), v50);
    v25 = _mm_load_si128(&v56);
  }
  v26 = *(_QWORD *)(v20 + 152);
  if ( v26 )
  {
    *(_QWORD *)(v20 + 160) = 0;
    v56 = v25;
    qfree(v26);
    v25 = _mm_load_si128(&v56);
  }
  *(_QWORD *)(v20 + 152) = v21;
  v27 = v61;
  *(__m128i *)(v20 + 160) = v25;
  *(_DWORD *)(*v11 + 280) |= 1u;
  *(_DWORD *)(*v11 + 8) = *(_QWORD *)(*v11 + 32);
  *(_DWORD *)(*v11 + 20) = v27;
  return v15;
}
