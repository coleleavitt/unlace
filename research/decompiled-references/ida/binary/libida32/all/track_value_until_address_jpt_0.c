__int64 __fastcall track_value_until_address_jpt_0(__int64 *a1, __m128i *a2, int a3)
{
  __m128i *v5; // r12
  __int64 v6; // r13
  __m128i *v7; // rdi
  __int64 v8; // rax
  __m128i *v9; // rdx
  __m128i v10; // xmm0
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebp
  __int64 v21; // rax
  __m128i v22; // xmm0
  _QWORD *v23; // rbx
  _QWORD *v24; // r12
  void *v25; // rdi
  _QWORD **v26; // rbx
  void *v27; // rdi
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 (*v31)(); // rax
  __int64 (*v32)(); // rax
  _QWORD *v33; // roff
  void *ptr; // [rsp+0h] [rbp-1E8h] BYREF
  __int128 v35; // [rsp+8h] [rbp-1E0h]
  unsigned int v36; // [rsp+20h] [rbp-1C8h] BYREF
  void **p_ptr; // [rsp+28h] [rbp-1C0h]
  __int64 *v38; // [rsp+30h] [rbp-1B8h]
  char v39; // [rsp+38h] [rbp-1B0h]
  int v40; // [rsp+3Ch] [rbp-1ACh]
  __int128 v41; // [rsp+40h] [rbp-1A8h]
  unsigned int v42; // [rsp+50h] [rbp-198h]
  __int64 v43; // [rsp+54h] [rbp-194h]
  int v44; // [rsp+68h] [rbp-180h] BYREF
  void *v45; // [rsp+70h] [rbp-178h]
  int *v46; // [rsp+78h] [rbp-170h]
  int *v47; // [rsp+80h] [rbp-168h]
  __int64 v48; // [rsp+88h] [rbp-160h]
  int v49; // [rsp+98h] [rbp-150h] BYREF
  void *v50; // [rsp+A0h] [rbp-148h]
  int *v51; // [rsp+A8h] [rbp-140h]
  int *v52; // [rsp+B0h] [rbp-138h]
  __int64 v53; // [rsp+B8h] [rbp-130h]
  _BYTE *v54; // [rsp+C0h] [rbp-128h]
  unsigned int *v55; // [rsp+C8h] [rbp-120h]
  __m128i v56; // [rsp+D0h] [rbp-118h] BYREF
  __m128i v57; // [rsp+E0h] [rbp-108h] BYREF
  __m128i v58; // [rsp+F0h] [rbp-F8h] BYREF
  __m128i v59; // [rsp+100h] [rbp-E8h] BYREF
  __m128i v60; // [rsp+110h] [rbp-D8h] BYREF
  __m128i v61; // [rsp+120h] [rbp-C8h] BYREF
  __m128i v62; // [rsp+130h] [rbp-B8h] BYREF
  __m128i v63; // [rsp+140h] [rbp-A8h] BYREF
  __m128i v64; // [rsp+150h] [rbp-98h] BYREF
  __m128i v65; // [rsp+160h] [rbp-88h] BYREF
  __m128i v66; // [rsp+170h] [rbp-78h] BYREF
  __m128i v67; // [rsp+180h] [rbp-68h] BYREF
  __m128i v68; // [rsp+190h] [rbp-58h] BYREF
  __int64 v69; // [rsp+1A0h] [rbp-48h]
  unsigned __int64 v70; // [rsp+1A8h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  if ( *((_DWORD *)a1 + 5) == a3 )
    return 1;
  ptr = nullptr;
  v35 = 0;
  v5 = (__m128i *)qvector_reserve(&ptr, 0, 1, 24);
  v6 = *((_QWORD *)&v35 + 1);
  *((_QWORD *)&v35 + 1) = 0;
  v7 = (__m128i *)ptr;
  v8 = v35 - 1;
  if ( (__int64)v35 - 1 >= 0 )
  {
    v9 = v5;
    do
    {
      v10 = _mm_loadu_si128(v7);
      v9 = (__m128i *)((char *)v9 + 24);
      v7 = (__m128i *)((char *)v7 + 24);
      *(__m128i *)((char *)v9 - 24) = v10;
      v9[-1].m128i_i64[1] = v7[-1].m128i_i64[1];
    }
    while ( v8-- != 0 );
    v7 = (__m128i *)ptr;
  }
  qfree(v7);
  ptr = v5;
  *((_QWORD *)&v35 + 1) = v6;
  if ( !(_QWORD)v35 )
  {
    v5->m128i_i64[0] = 0;
    v5->m128i_i64[1] = 0;
    v5[1].m128i_i64[0] = 0;
    v5 = (__m128i *)ptr;
  }
  v12 = _mm_loadu_si128(a2);
  *(_QWORD *)&v35 = 1;
  *v5 = v12;
  v5[1].m128i_i64[0] = a2[1].m128i_i64[0];
  v13 = *(__int64 *)((char *)a1 + 220);
  v56 = _mm_loadu_si128((const __m128i *)((char *)a1 + 12));
  v57 = _mm_loadu_si128((const __m128i *)((char *)a1 + 28));
  v58 = _mm_loadu_si128((const __m128i *)((char *)a1 + 44));
  v59 = _mm_loadu_si128((const __m128i *)((char *)a1 + 60));
  v60 = _mm_loadu_si128((const __m128i *)((char *)a1 + 76));
  v61 = _mm_loadu_si128((const __m128i *)((char *)a1 + 92));
  v62 = _mm_loadu_si128((const __m128i *)((char *)a1 + 108));
  v63 = _mm_loadu_si128((const __m128i *)((char *)a1 + 124));
  v64 = _mm_loadu_si128((const __m128i *)((char *)a1 + 140));
  v65 = _mm_loadu_si128((const __m128i *)((char *)a1 + 156));
  v66 = _mm_loadu_si128((const __m128i *)((char *)a1 + 172));
  v67 = _mm_loadu_si128((const __m128i *)((char *)a1 + 188));
  v68 = _mm_loadu_si128((const __m128i *)((char *)a1 + 204));
  v69 = v13;
  v14 = *((unsigned int *)a1 + 5);
  v43 = 0xFFFFFFFFLL;
  v46 = &v44;
  v47 = &v44;
  v36 = v14;
  p_ptr = &ptr;
  v38 = a1;
  v39 = 0;
  v40 = 200;
  v42 = v14;
  v44 = 0;
  v45 = nullptr;
  v48 = 0;
  v49 = 0;
  v50 = nullptr;
  v51 = &v49;
  v52 = &v49;
  v53 = 0;
  v41 = 0;
  *(_QWORD *)&v41 = get_func(v14);
  if ( !(_QWORD)v41 )
  {
    *((_QWORD *)&v41 + 1) = getseg(v42);
    if ( !*((_QWORD *)&v41 + 1) )
    {
      if ( !under_debugger )
        interr(10183);
      BUG();
    }
  }
  v54 = (char *)a1 + 585;
  v55 = (unsigned int *)a1 + 147;
  while ( 1 )
  {
    v15 = sub_43D520(&v36);
    if ( *v54 )
    {
      if ( v15 == 21 )
        goto LABEL_14;
      *v54 = 0;
    }
    if ( !v15 )
      goto LABEL_15;
LABEL_14:
    if ( (~((unsigned __int16)get_flags_ex(v36, 4) >> 8) & 6) != 0
      || !(unsigned int)decode_insn((char *)a1 + 12, v36, v16, v17, v18, v19) )
    {
      goto LABEL_15;
    }
    v29 = v43;
    if ( (_DWORD)v43 == -1 )
      v29 = v36;
    *v55 = v29;
    if ( *((_DWORD *)a1 + 5) == a3 )
      break;
    v30 = *a1;
    v31 = *(__int64 (**)())(*a1 + 16);
    if ( v31 == sub_436310 )
    {
LABEL_31:
      v32 = *(__int64 (**)())(v30 + 24);
      if ( v32 == j__check_spoiled_jpt )
        check_spoiled_jpt(a1, &ptr);
      else
        ((void (__fastcall *)(__int64 *, void **))v32)(a1, &ptr);
      if ( !*((_BYTE *)ptr + 1) )
      {
LABEL_15:
        v20 = 0;
        goto LABEL_16;
      }
    }
    else if ( !((unsigned __int8 (__fastcall *)(__int64 *, void **))v31)(a1, &ptr) )
    {
      v30 = *a1;
      goto LABEL_31;
    }
  }
  v20 = 1;
  v33 = ptr;
  *a2 = _mm_loadu_si128((const __m128i *)ptr);
  a2[1].m128i_i64[0] = v33[2];
LABEL_16:
  v21 = v69;
  *(__m128i *)((char *)a1 + 12) = _mm_load_si128(&v56);
  v22 = _mm_load_si128(&v57);
  *(__int64 *)((char *)a1 + 220) = v21;
  *(__m128i *)((char *)a1 + 28) = v22;
  *(__m128i *)((char *)a1 + 44) = _mm_load_si128(&v58);
  *(__m128i *)((char *)a1 + 60) = _mm_load_si128(&v59);
  *(__m128i *)((char *)a1 + 76) = _mm_load_si128(&v60);
  *(__m128i *)((char *)a1 + 92) = _mm_load_si128(&v61);
  *(__m128i *)((char *)a1 + 108) = _mm_load_si128(&v62);
  *(__m128i *)((char *)a1 + 124) = _mm_load_si128(&v63);
  *(__m128i *)((char *)a1 + 140) = _mm_load_si128(&v64);
  *(__m128i *)((char *)a1 + 156) = _mm_load_si128(&v65);
  *(__m128i *)((char *)a1 + 172) = _mm_load_si128(&v66);
  *(__m128i *)((char *)a1 + 188) = _mm_load_si128(&v67);
  *(__m128i *)((char *)a1 + 204) = _mm_load_si128(&v68);
  v23 = v50;
  if ( v50 )
  {
    do
    {
      v24 = v23;
      sub_437100((_QWORD *)v23[3]);
      v25 = (void *)v23[5];
      v23 = (_QWORD *)v23[2];
      if ( v25 )
      {
        v24[6] = 0;
        qfree(v25);
      }
      operator delete(v24, 0x48u);
    }
    while ( v23 );
  }
  v26 = (_QWORD **)v45;
  if ( v45 )
  {
    do
    {
      sub_436830(v26[3]);
      v27 = v26;
      v26 = (_QWORD **)v26[2];
      operator delete(v27, 0x28u);
    }
    while ( v26 );
  }
  if ( ptr )
  {
    *(_QWORD *)&v35 = 0;
    qfree(ptr);
  }
  return v20;
}

