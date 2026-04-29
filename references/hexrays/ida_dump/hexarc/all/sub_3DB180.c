unsigned __int64 __fastcall sub_3DB180(__int64 *a1, double a2, __m128 a3, double a4)
{
  _QWORD *exception; // rdi
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // r13
  unsigned __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rdx
  unsigned __int64 *func; // rax
  __int64 v15; // rdx
  signed int v16; // r14d
  __m128i v17; // xmm0
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // r10
  unsigned __int64 v21; // rax
  __m128i v22; // rax
  const __m128i *v23; // r11
  volatile signed __int32 *v24; // rax
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // rbx
  __int64 v27; // r13
  __int64 *v28; // rdi
  __int64 *v29; // rdi
  __int64 v30; // r13
  __int64 *v31; // rdi
  __int64 *v32; // rdi
  volatile signed __int32 *v33; // rdi
  char v35; // r8
  unsigned __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rsi
  char v39; // r8
  unsigned __int64 v40; // rdi
  __int64 v41; // r10
  __int64 *v42; // rax
  __int64 *v43; // rdx
  volatile signed __int32 *v44; // rdi
  _BYTE *v45; // rax
  __int64 v46; // rax
  volatile signed __int32 *v47; // rdi
  __int64 v48; // rsi
  volatile signed __int32 *v49; // rdi
  unsigned __int64 v50; // [rsp+0h] [rbp-C8h]
  const __m128i *v51; // [rsp+0h] [rbp-C8h]
  const __m128i *v52; // [rsp+0h] [rbp-C8h]
  __int64 v53; // [rsp+8h] [rbp-C0h]
  __int64 v54; // [rsp+8h] [rbp-C0h]
  __int64 v55; // [rsp+8h] [rbp-C0h]
  __int64 v56; // [rsp+8h] [rbp-C0h]
  __int64 v57; // [rsp+8h] [rbp-C0h]
  __int64 v58; // [rsp+8h] [rbp-C0h]
  unsigned __int64 *v59; // [rsp+8h] [rbp-C0h]
  __m128i v60; // [rsp+10h] [rbp-B8h] BYREF
  __int64 *v61; // [rsp+20h] [rbp-A8h]
  __int64 v62; // [rsp+28h] [rbp-A0h]
  _QWORD v63[2]; // [rsp+30h] [rbp-98h] BYREF
  __m128i v64; // [rsp+40h] [rbp-88h] BYREF
  __int64 v65; // [rsp+50h] [rbp-78h] BYREF
  volatile signed __int32 *v66; // [rsp+58h] [rbp-70h]
  _QWORD v67[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v68; // [rsp+70h] [rbp-58h]
  __int128 v69; // [rsp+78h] [rbp-50h]
  unsigned __int64 v70; // [rsp+88h] [rbp-40h]

  v7 = a1[262];
  v61 = a1;
  v70 = __readfsqword(0x28u);
  v8 = (__int64 *)a1[261];
  v9 = &v8[v7];
  if ( v8 == v9 )
    return v70 - __readfsqword(0x28u);
  v10 = 0;
  v11 = 0;
  do
  {
    v12 = *v8;
    if ( !*v8 )
      goto LABEL_19;
    v13 = *(_QWORD *)(v12 + 64);
    if ( !v13 )
      goto LABEL_19;
    if ( (unsigned int)(*(_DWORD *)(v13 + 60) - 1) > 1 )
      goto LABEL_19;
    func = (unsigned __int64 *)get_func(*(_QWORD *)(v13 + 8));
    v15 = (__int64)func;
    if ( !func )
      goto LABEL_19;
    v16 = *(_DWORD *)(v12 + 56);
    v67[0] = 0;
    v67[1] = -1;
    v68 = 0;
    v69 = 0;
    v50 = *func;
    if ( !v11 )
    {
      v59 = func;
      v46 = qalloc(56);
      v11 = v46;
      v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v46, (__m128i)(unsigned __int64)v46);
      if ( !v46 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v46 + 48) = 0;
      v15 = (__int64)v59;
      *(_OWORD *)(v46 + 16) = 0;
      *(_OWORD *)(v46 + 32) = 0;
      *(__m128i *)(v46 + 8) = v17;
      *(_QWORD *)v46 = v46 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_9:
      v53 = v15;
      v60 = v17;
      v18 = qalloc(56);
      v19 = v18;
      a3 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, (__m128i)(unsigned __int64)v18);
      if ( !v18 )
      {
        v5 = __cxa_allocate_exception(8u);
        *v5 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v5,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      a4 = 0.0;
      v17 = _mm_load_si128(&v60);
      *(_OWORD *)(v18 + 32) = 0;
      *(_DWORD *)(v18 + 32) = v16;
      ++v10;
      v20 = v18 + 24;
      *(_QWORD *)(v18 + 24) = v50;
      v15 = v53;
      *(_OWORD *)(v18 + 40) = 0;
      *(_QWORD *)v18 = v11 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v18 + 8) = v17;
      v21 = *(_QWORD *)v11;
      *(__m128 *)(v11 + 8) = a3;
      *(_QWORD *)v11 = v19 & 0xFFFFFFFFFFFFFFFCLL | v21 & 3;
      *(_QWORD *)v19 = v11 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v19 & 2LL;
LABEL_11:
      v22.m128i_i64[0] = *(_QWORD *)(v20 + 16);
      v23 = (const __m128i *)&v65;
      if ( !v22.m128i_i64[0] )
        goto LABEL_54;
      goto LABEL_12;
    }
    v17 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
    if ( !v10 )
      goto LABEL_9;
    v35 = 1;
    v36 = *(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v36 & 2) != 0 )
    {
      v36 = v11;
      v35 = 1;
      goto LABEL_47;
    }
    while ( 1 )
    {
      v20 = v36 + 24;
      if ( v50 < *(_QWORD *)(v36 + 24) )
      {
LABEL_64:
        v45 = *(_BYTE **)(v36 + 8);
        v35 = 1;
        goto LABEL_65;
      }
      if ( v50 == *(_QWORD *)(v36 + 24) )
      {
        if ( *(_DWORD *)(v36 + 32) > v16 )
          goto LABEL_64;
        if ( *(_DWORD *)(v36 + 32) >= v16 )
          break;
      }
      v45 = *(_BYTE **)(v36 + 16);
      v35 = 0;
LABEL_65:
      if ( (*v45 & 2) != 0 )
        goto LABEL_47;
      v36 = (unsigned __int64)v45;
    }
    if ( v36 )
      goto LABEL_11;
LABEL_47:
    LOBYTE(v62) = v35;
    v60.m128i_i64[0] = v36;
    v54 = v15;
    v37 = qalloc(56);
    if ( !v37 )
    {
      v6 = __cxa_allocate_exception(8u);
      *v6 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v38 = v60.m128i_i64[0];
    *(_OWORD *)(v37 + 32) = 0;
    v15 = v54;
    v39 = v62;
    *(_OWORD *)(v37 + 40) = 0;
    v40 = v38 & 0xFFFFFFFFFFFFFFFCLL;
    v17 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
    *(_QWORD *)(v37 + 24) = v50;
    *(_DWORD *)(v37 + 32) = v16;
    *(__m128i *)(v37 + 8) = v17;
    *(_QWORD *)v37 = v38 & 0xFFFFFFFFFFFFFFFCLL | 1;
    if ( v11 == v38 )
    {
      v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v37, (__m128i)(unsigned __int64)v37);
      v48 = *(_QWORD *)v11 & 3LL;
      *(__m128i *)(v11 + 8) = v17;
      *(_QWORD *)v11 = v37 & 0xFFFFFFFFFFFFFFFCLL | v48;
      *(_QWORD *)v37 = v40 | *(_QWORD *)v37 & 2LL;
    }
    else
    {
      if ( v39 )
      {
        *(_QWORD *)(v38 + 8) = v37;
        if ( v38 == *(_QWORD *)(v11 + 8) )
          *(_QWORD *)(v11 + 8) = v37;
      }
      else
      {
        *(_QWORD *)(v38 + 16) = v37;
        if ( v38 == *(_QWORD *)(v11 + 16) )
          *(_QWORD *)(v11 + 16) = v37;
      }
      v60.m128i_i64[0] = v54;
      v55 = v37;
      v63[0] = v11;
      v63[1] = v10;
      sub_3DAEB0(v63, (__int64 *)v37);
      v15 = v60.m128i_i64[0];
      v37 = v55;
    }
    v20 = v37 + 24;
    ++v10;
    v23 = (const __m128i *)&v65;
    v22.m128i_i64[0] = *(_QWORD *)(v37 + 40);
    if ( v22.m128i_i64[0] )
      goto LABEL_12;
LABEL_54:
    v60.m128i_i64[0] = v20;
    sub_3C9830(&v65, *v61, v15, v16, v67);
    v41 = v60.m128i_i64[0];
    if ( v65 )
    {
      v62 = v60.m128i_i64[0];
      v60.m128i_i64[0] = (__int64)&v65;
      v56 = v65;
      sub_7DBD0(v65);
      j__qfree(v56);
      v41 = v62;
    }
    v57 = v41;
    v42 = (__int64 *)sub_3CCB40((__int64)v61, v50);
    v20 = v57;
    if ( v42 == v43 )
    {
LABEL_76:
      v44 = *(volatile signed __int32 **)(v57 + 24);
      *(_QWORD *)(v57 + 16) = 0;
      *(_QWORD *)(v57 + 24) = 0;
      if ( !v44 )
        goto LABEL_17;
LABEL_61:
      v58 = v20;
      v52 = v23;
      sub_3CDDE0(v44);
      v20 = v58;
      v23 = v52;
      v22.m128i_i64[0] = *(_QWORD *)(v58 + 16);
    }
    else
    {
      while ( v16 != *(_DWORD *)(*v42 + 56) )
      {
        if ( v43 == ++v42 )
          goto LABEL_76;
      }
      v51 = v23;
      sub_3D7530(&v64, *v42, *v61, *(double *)v17.m128i_i64, *(double *)a3.m128_u64, a4, (__m128)0LL);
      v20 = v57;
      v22 = v64;
      v23 = v51;
      v44 = *(volatile signed __int32 **)(v57 + 24);
      *(__m128i *)(v57 + 16) = v64;
      if ( v44 )
        goto LABEL_61;
    }
    if ( v22.m128i_i64[0] )
    {
LABEL_12:
      v65 = v22.m128i_i64[0];
      v24 = *(volatile signed __int32 **)(v20 + 24);
      if ( v24 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd(v24 + 2, 1u);
        else
          ++*((_DWORD *)v24 + 2);
      }
      v66 = v24;
      sub_3CE190(v12, v23);
      if ( v66 )
        sub_3CDDE0(v66);
    }
LABEL_17:
    if ( v68 )
    {
      *(_QWORD *)&v69 = 0;
      qfree(v68);
    }
LABEL_19:
    ++v8;
  }
  while ( v9 != v8 );
  if ( !v11 )
    return v70 - __readfsqword(0x28u);
  if ( !v10 )
    goto LABEL_43;
  v25 = *(_QWORD *)v11;
  v26 = *(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v26 & 2) != 0 )
    goto LABEL_43;
  v27 = *(_QWORD *)(v26 + 8);
  if ( (*(_BYTE *)v27 & 2) != 0 )
  {
    v30 = *(_QWORD *)(v26 + 16);
    if ( (*(_BYTE *)v30 & 2) == 0 )
      goto LABEL_31;
    goto LABEL_38;
  }
  v28 = *(__int64 **)(v27 + 8);
  if ( (*(_BYTE *)v28 & 2) != 0 )
  {
    v29 = *(__int64 **)(v27 + 16);
    if ( (*(_BYTE *)v29 & 2) == 0 )
    {
LABEL_26:
      sub_3CE470(v29);
      goto LABEL_27;
    }
    goto LABEL_84;
  }
  sub_3CE470(v28);
  v29 = *(__int64 **)(v27 + 16);
  if ( (*(_BYTE *)v29 & 2) == 0 )
    goto LABEL_26;
LABEL_27:
  if ( (*(_BYTE *)v27 & 2) == 0 )
  {
LABEL_84:
    v47 = *(volatile signed __int32 **)(v27 + 48);
    if ( v47 )
      sub_3CDDE0(v47);
    *(_QWORD *)v27 |= 2uLL;
  }
  if ( v27 )
    qfree(v27);
  v30 = *(_QWORD *)(v26 + 16);
  if ( (*(_BYTE *)v30 & 2) == 0 )
  {
LABEL_31:
    v31 = *(__int64 **)(v30 + 8);
    if ( (*(_BYTE *)v31 & 2) != 0 )
    {
      v32 = *(__int64 **)(v30 + 16);
      if ( (*(_BYTE *)v32 & 2) == 0 )
      {
LABEL_33:
        sub_3CE470(v32);
        goto LABEL_34;
      }
    }
    else
    {
      sub_3CE470(v31);
      v32 = *(__int64 **)(v30 + 16);
      if ( (*(_BYTE *)v32 & 2) == 0 )
        goto LABEL_33;
LABEL_34:
      if ( (*(_BYTE *)v30 & 2) != 0 )
      {
LABEL_35:
        if ( v30 )
          qfree(v30);
        goto LABEL_37;
      }
    }
    v49 = *(volatile signed __int32 **)(v30 + 48);
    if ( v49 )
      sub_3CDDE0(v49);
    *(_QWORD *)v30 |= 2uLL;
    goto LABEL_35;
  }
LABEL_37:
  if ( (*(_BYTE *)v26 & 2) == 0 )
  {
LABEL_38:
    v33 = *(volatile signed __int32 **)(v26 + 48);
    if ( v33 )
      sub_3CDDE0(v33);
    *(_QWORD *)v26 |= 2uLL;
  }
  if ( v25 > 3 )
    qfree(v26);
LABEL_43:
  qfree(v11);
  return v70 - __readfsqword(0x28u);
}
