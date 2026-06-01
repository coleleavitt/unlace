unsigned __int64 __fastcall sub_3D6460(__int64 *a1, double a2, __m128 a3, double a4)
{
  _QWORD *exception; // rdi
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 *v9; // rbp
  __int64 *v11; // r15
  __int64 v12; // r12
  unsigned __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rdx
  __m128i *func; // rax
  __int64 v17; // rdx
  __m128i v18; // xmm0
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  const __m128i *v24; // r11
  __int64 v25; // rax
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // rbp
  __int64 v28; // r13
  __int64 *v29; // rdi
  __int64 *v30; // rdi
  __int64 v31; // r13
  __int64 *v32; // rdi
  __int64 *v33; // rdi
  volatile signed __int32 *v34; // rdi
  char v36; // si
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  char v40; // si
  unsigned __int64 v41; // rdi
  __int64 v42; // rsi
  __m128i *v43; // r11
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  __m128i v46; // xmm0
  volatile signed __int32 *v47; // rdi
  _BYTE *v48; // rax
  __int64 v49; // rax
  volatile signed __int32 *v50; // rdi
  __int64 v51; // rcx
  volatile signed __int32 *v52; // rdi
  unsigned __int64 v53; // [rsp+0h] [rbp-B8h]
  __m128i *v54; // [rsp+0h] [rbp-B8h]
  signed int v55; // [rsp+8h] [rbp-B0h]
  __int64 v56; // [rsp+8h] [rbp-B0h]
  __m128i v57; // [rsp+10h] [rbp-A8h] BYREF
  __m128i *v58; // [rsp+20h] [rbp-98h]
  __int64 v59; // [rsp+28h] [rbp-90h]
  _QWORD v60[2]; // [rsp+30h] [rbp-88h] BYREF
  __m128i v61; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v62[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v63; // [rsp+60h] [rbp-58h]
  __int128 v64; // [rsp+68h] [rbp-50h]
  unsigned __int64 v65; // [rsp+78h] [rbp-40h]

  v7 = a1[110];
  v65 = __readfsqword(0x28u);
  v8 = a1[109];
  v9 = (__int64 *)(v8 + 8 * v7);
  if ( (__int64 *)v8 == v9 )
    return v65 - __readfsqword(0x28u);
  v11 = (__int64 *)a1[109];
  v12 = 0;
  v13 = 0;
  do
  {
    v14 = *v11;
    if ( !*v11 )
      goto LABEL_19;
    v15 = *(_QWORD *)(v14 + 64);
    if ( !v15 )
      goto LABEL_19;
    if ( (unsigned int)(*(_DWORD *)(v15 + 60) - 1) > 1 )
      goto LABEL_19;
    func = (__m128i *)get_func();
    v17 = (__int64)func;
    if ( !func )
      goto LABEL_19;
    v62[0] = 0;
    v62[1] = -1;
    v63 = 0;
    v64 = 0;
    v53 = func->m128i_i64[0];
    v55 = *(_DWORD *)(v14 + 56);
    if ( !v13 )
    {
      v58 = func;
      v49 = qalloc();
      v13 = v49;
      v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v49, (__m128i)(unsigned __int64)v49);
      if ( !v49 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v49 + 48) = 0;
      v17 = (__int64)v58;
      *(_OWORD *)(v49 + 16) = 0;
      *(_OWORD *)(v49 + 32) = 0;
      *(__m128i *)(v49 + 8) = v18;
      *(_QWORD *)v49 = v49 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_9:
      v58 = (__m128i *)v17;
      v57 = v18;
      v19 = qalloc();
      v20 = v19;
      a3 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)v19);
      if ( !v19 )
      {
        v6 = __cxa_allocate_exception(8u);
        *v6 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v6,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      a4 = 0.0;
      v18 = _mm_load_si128(&v57);
      *(_OWORD *)(v19 + 32) = 0;
      *(_OWORD *)(v19 + 40) = 0;
      v17 = (__int64)v58;
      ++v12;
      *(_QWORD *)(v19 + 24) = v53;
      *(__m128i *)(v19 + 8) = v18;
      *(_DWORD *)(v19 + 32) = v55;
      *(_QWORD *)v19 = v13 & 0xFFFFFFFFFFFFFFFCLL | 1;
      v21 = *(_QWORD *)v13;
      *(__m128 *)(v13 + 8) = a3;
      *(_QWORD *)v13 = v20 & 0xFFFFFFFFFFFFFFFCLL | v21 & 3;
      *(_QWORD *)v20 = v13 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v20 & 2LL;
      v22 = v20 + 24;
LABEL_11:
      v23 = *(_QWORD *)(v22 + 16);
      v24 = &v61;
      if ( !v23 )
        goto LABEL_54;
LABEL_12:
      v25 = *(_QWORD *)(v22 + 24);
      v61.m128i_i64[0] = v23;
      if ( v25 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v25 + 8), 1u);
        else
          ++*(_DWORD *)(v25 + 8);
      }
      v61.m128i_i64[1] = v25;
      sub_3CB8E0(v14, v24);
      if ( v61.m128i_i64[1] )
        sub_3CB2E0((volatile signed __int32 *)v61.m128i_i64[1]);
      goto LABEL_17;
    }
    v18 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
    if ( !v12 )
      goto LABEL_9;
    v36 = 1;
    v37 = *(_QWORD *)v13 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v37 & 2) != 0 )
    {
      v37 = v13;
      v36 = 1;
      goto LABEL_47;
    }
    while ( 1 )
    {
      v22 = v37 + 24;
      if ( v53 < *(_QWORD *)(v37 + 24) )
      {
LABEL_60:
        v48 = *(_BYTE **)(v37 + 8);
        v36 = 1;
        goto LABEL_61;
      }
      if ( v53 == *(_QWORD *)(v37 + 24) )
      {
        if ( *(_DWORD *)(v37 + 32) > v55 )
          goto LABEL_60;
        if ( *(_DWORD *)(v37 + 32) >= v55 )
          break;
      }
      v48 = *(_BYTE **)(v37 + 16);
      v36 = 0;
LABEL_61:
      if ( (*v48 & 2) != 0 )
        goto LABEL_47;
      v37 = (unsigned __int64)v48;
    }
    if ( v37 )
      goto LABEL_11;
LABEL_47:
    LOBYTE(v59) = v36;
    v57.m128i_i64[0] = v37;
    v58 = (__m128i *)v17;
    v38 = qalloc();
    if ( !v38 )
    {
      v5 = __cxa_allocate_exception(8u);
      *v5 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v39 = v57.m128i_i64[0];
    *(_OWORD *)(v38 + 32) = 0;
    v17 = (__int64)v58;
    v40 = v59;
    *(_QWORD *)(v38 + 24) = v53;
    *(_OWORD *)(v38 + 40) = 0;
    *(_DWORD *)(v38 + 32) = v55;
    v18 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
    v41 = v39 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(v38 + 8) = v18;
    *(_QWORD *)v38 = v39 & 0xFFFFFFFFFFFFFFFCLL | 1;
    if ( v13 == v39 )
    {
      v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v38, (__m128i)(unsigned __int64)v38);
      v51 = *(_QWORD *)v13 & 3LL;
      *(__m128i *)(v13 + 8) = v18;
      *(_QWORD *)v13 = v38 & 0xFFFFFFFFFFFFFFFCLL | v51;
      *(_QWORD *)v38 = v41 | *(_QWORD *)v38 & 2LL;
    }
    else
    {
      if ( v40 )
      {
        *(_QWORD *)(v39 + 8) = v38;
        if ( *(_QWORD *)(v13 + 8) == v39 )
          *(_QWORD *)(v13 + 8) = v38;
      }
      else
      {
        *(_QWORD *)(v39 + 16) = v38;
        if ( *(_QWORD *)(v13 + 16) == v39 )
          *(_QWORD *)(v13 + 16) = v38;
      }
      v57.m128i_i64[0] = v17;
      v58 = (__m128i *)v38;
      v60[0] = v13;
      v60[1] = v12;
      sub_3D6220(v60, (__int64 *)v38);
      v17 = v57.m128i_i64[0];
      v38 = (__int64)v58;
    }
    v23 = *(_QWORD *)(v38 + 40);
    v22 = v38 + 24;
    ++v12;
    v24 = &v61;
    if ( v23 )
      goto LABEL_12;
LABEL_54:
    v42 = *a1;
    v57.m128i_i64[0] = v22;
    v58 = &v61;
    sub_3C6C10(&v61, v42, v17, v55, v62);
    v43 = v58;
    v44 = v57.m128i_i64[0];
    if ( v61.m128i_i64[0] )
    {
      v59 = v57.m128i_i64[0];
      v57.m128i_i64[0] = (__int64)v58;
      v58 = (__m128i *)v61.m128i_i64[0];
      sub_83510(v61.m128i_i64[0]);
      j__qfree();
      v44 = v59;
      v43 = (__m128i *)v57.m128i_i64[0];
    }
    v45 = v53;
    v58 = (__m128i *)v44;
    v54 = v43;
    sub_3D3940(v43, a1, v45, *(double *)v18.m128i_i64, *(double *)a3.m128_u64, a4, (__m128)0LL);
    v22 = (__int64)v58;
    v46 = _mm_load_si128(&v61);
    v24 = v54;
    v47 = (volatile signed __int32 *)v58[1].m128i_i64[1];
    v23 = v46.m128i_i64[0];
    v58[1] = v46;
    if ( v47 )
    {
      v56 = v22;
      sub_3CB2E0(v47);
      v22 = v56;
      v24 = v54;
      v23 = *(_QWORD *)(v56 + 16);
    }
    if ( v23 )
      goto LABEL_12;
LABEL_17:
    if ( v63 )
    {
      *(_QWORD *)&v64 = 0;
      qfree();
    }
LABEL_19:
    ++v11;
  }
  while ( v9 != v11 );
  if ( !v13 )
    return v65 - __readfsqword(0x28u);
  if ( !v12 )
    goto LABEL_43;
  v26 = *(_QWORD *)v13;
  v27 = *(_QWORD *)v13 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v27 & 2) != 0 )
    goto LABEL_43;
  v28 = *(_QWORD *)(v27 + 8);
  if ( (*(_BYTE *)v28 & 2) != 0 )
  {
    v31 = *(_QWORD *)(v27 + 16);
    if ( (*(_BYTE *)v31 & 2) == 0 )
      goto LABEL_31;
    goto LABEL_38;
  }
  v29 = *(__int64 **)(v28 + 8);
  if ( (*(_BYTE *)v29 & 2) != 0 )
  {
    v30 = *(__int64 **)(v28 + 16);
    if ( (*(_BYTE *)v30 & 2) == 0 )
    {
LABEL_26:
      sub_3CBA90(v30);
      goto LABEL_27;
    }
    goto LABEL_78;
  }
  sub_3CBA90(v29);
  v30 = *(__int64 **)(v28 + 16);
  if ( (*(_BYTE *)v30 & 2) == 0 )
    goto LABEL_26;
LABEL_27:
  if ( (*(_BYTE *)v28 & 2) == 0 )
  {
LABEL_78:
    v50 = *(volatile signed __int32 **)(v28 + 48);
    if ( v50 )
      sub_3CB2E0(v50);
    *(_QWORD *)v28 |= 2uLL;
  }
  if ( v28 )
    qfree();
  v31 = *(_QWORD *)(v27 + 16);
  if ( (*(_BYTE *)v31 & 2) == 0 )
  {
LABEL_31:
    v32 = *(__int64 **)(v31 + 8);
    if ( (*(_BYTE *)v32 & 2) != 0 )
    {
      v33 = *(__int64 **)(v31 + 16);
      if ( (*(_BYTE *)v33 & 2) == 0 )
      {
LABEL_33:
        sub_3CBA90(v33);
        goto LABEL_34;
      }
    }
    else
    {
      sub_3CBA90(v32);
      v33 = *(__int64 **)(v31 + 16);
      if ( (*(_BYTE *)v33 & 2) == 0 )
        goto LABEL_33;
LABEL_34:
      if ( (*(_BYTE *)v31 & 2) != 0 )
      {
LABEL_35:
        if ( v31 )
          qfree();
        goto LABEL_37;
      }
    }
    v52 = *(volatile signed __int32 **)(v31 + 48);
    if ( v52 )
      sub_3CB2E0(v52);
    *(_QWORD *)v31 |= 2uLL;
    goto LABEL_35;
  }
LABEL_37:
  if ( (*(_BYTE *)v27 & 2) == 0 )
  {
LABEL_38:
    v34 = *(volatile signed __int32 **)(v27 + 48);
    if ( v34 )
      sub_3CB2E0(v34);
    *(_QWORD *)v27 |= 2uLL;
  }
  if ( v26 > 3 )
    qfree();
LABEL_43:
  qfree();
  return v65 - __readfsqword(0x28u);
}
