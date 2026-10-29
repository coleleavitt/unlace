__int64 __fastcall same_value_jpt_0(__int64 a1, const __m128i *a2, int a3)
{
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64, __int64); // rax
  __int64 v8; // rbx
  __int8 v9; // al
  __m128i *v10; // rbx
  __int64 v11; // r14
  __m128i *v12; // rdi
  __int64 v13; // rax
  __m128i *v14; // rdx
  __m128i v15; // xmm0
  __int64 i; // rax
  __int64 *v18; // rbx
  _QWORD *v19; // rax
  const __m128i *v20; // roff
  __int64 v21; // rax
  __int64 v22; // rdi
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // ebx
  _QWORD *v31; // rbp
  __m128i v32; // xmm0
  _QWORD *v33; // r12
  void *v34; // rdi
  _QWORD **v35; // rbp
  void *v36; // rdi
  unsigned __int8 v37; // bl
  unsigned __int8 v38; // al
  bool v39; // r12
  __int64 (__fastcall *v40)(__int64, __int64); // rax
  unsigned __int8 v41; // al
  bool v42; // dl
  bool v43; // cc
  bool v44; // al
  char v46; // al
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 (*v49)(); // rdx
  __int64 (*v50)(); // rax
  __int64 (__fastcall *v51)(__int64, __int64, __int64); // rax
  _BYTE *v52; // rsi
  char v53; // al
  unsigned __int8 v54; // dl
  unsigned __int8 v55; // al
  __int64 (__fastcall *v56)(__int64, __int64); // rax
  unsigned __int8 v57; // al
  bool v58; // dl
  unsigned __int8 v59; // [rsp+10h] [rbp-1F8h]
  bool v60; // [rsp+1Fh] [rbp-1E9h]
  void *ptr; // [rsp+20h] [rbp-1E8h] BYREF
  __int128 v62; // [rsp+28h] [rbp-1E0h]
  unsigned int v63; // [rsp+40h] [rbp-1C8h] BYREF
  void **p_ptr; // [rsp+48h] [rbp-1C0h]
  __int64 v65; // [rsp+50h] [rbp-1B8h]
  char v66; // [rsp+58h] [rbp-1B0h]
  int v67; // [rsp+5Ch] [rbp-1ACh]
  __int128 v68; // [rsp+60h] [rbp-1A8h]
  unsigned int v69; // [rsp+70h] [rbp-198h]
  __int64 v70; // [rsp+74h] [rbp-194h]
  int v71; // [rsp+88h] [rbp-180h] BYREF
  void *v72; // [rsp+90h] [rbp-178h]
  int *v73; // [rsp+98h] [rbp-170h]
  int *v74; // [rsp+A0h] [rbp-168h]
  __int64 v75; // [rsp+A8h] [rbp-160h]
  int v76; // [rsp+B8h] [rbp-150h] BYREF
  void *v77; // [rsp+C0h] [rbp-148h]
  int *v78; // [rsp+C8h] [rbp-140h]
  int *v79; // [rsp+D0h] [rbp-138h]
  __int64 v80; // [rsp+D8h] [rbp-130h]
  _BYTE *v81; // [rsp+E0h] [rbp-128h]
  unsigned int *v82; // [rsp+E8h] [rbp-120h]
  __m128i v83; // [rsp+F0h] [rbp-118h] BYREF
  __m128i v84; // [rsp+100h] [rbp-108h] BYREF
  __m128i v85; // [rsp+110h] [rbp-F8h] BYREF
  __m128i v86; // [rsp+120h] [rbp-E8h] BYREF
  __m128i v87; // [rsp+130h] [rbp-D8h] BYREF
  __m128i v88; // [rsp+140h] [rbp-C8h] BYREF
  __m128i v89; // [rsp+150h] [rbp-B8h] BYREF
  __m128i v90; // [rsp+160h] [rbp-A8h] BYREF
  __m128i v91; // [rsp+170h] [rbp-98h] BYREF
  __m128i v92; // [rsp+180h] [rbp-88h] BYREF
  __m128i v93; // [rsp+190h] [rbp-78h] BYREF
  __m128i v94; // [rsp+1A0h] [rbp-68h] BYREF
  __m128i v95; // [rsp+1B0h] [rbp-58h] BYREF
  __int64 v96; // [rsp+1C0h] [rbp-48h]
  unsigned __int64 v97; // [rsp+1C8h] [rbp-40h]

  v4 = 24LL * a3;
  v5 = *(_QWORD *)a1;
  v6 = *(_QWORD *)(a1 + 648);
  v97 = __readfsqword(0x28u);
  v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v5 + 8);
  v8 = v4 + v6;
  if ( v7 != sub_4362C0 )
  {
    v46 = v7(a1, (__int64)a2, v8);
    goto LABEL_46;
  }
  v9 = a2->m128i_i8[1];
  if ( v9 == *(_BYTE *)(v8 + 1) )
  {
    if ( v9 == 99 )
      goto LABEL_31;
    if ( v9 != 100 )
    {
      if ( v9 != 1 || a2->m128i_i16[3] != *(_WORD *)(v8 + 6) )
        goto LABEL_3;
      goto LABEL_31;
    }
    v46 = a2->m128i_i32[2] == *(_DWORD *)(v8 + 8);
LABEL_46:
    if ( !v46 )
      goto LABEL_3;
LABEL_31:
    v37 = *(_BYTE *)(v8 + 5);
    v38 = a2->m128i_u8[5];
    v39 = v37 <= 0xF9u;
    if ( v38 > 0xF9u )
    {
      if ( v38 >= v37 && v37 > 0xF9u )
        return 1;
    }
    else if ( v38 >= v37 || v37 > 0xF9u || v38 == 2 && *(_BYTE *)(a1 + 8) )
    {
      return 1;
    }
    v40 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
    if ( v40 == sub_436320 )
      goto LABEL_3;
    v41 = v40(a1, (__int64)a2);
    v42 = v39 || v41 < v37;
    v43 = v41 <= 0xF9u;
    v44 = v41 < v37 && v39;
    if ( !v43 )
      v44 = v42;
    if ( v44 )
      goto LABEL_3;
    return 1;
  }
LABEL_3:
  v62 = 0;
  ptr = nullptr;
  v10 = (__m128i *)qvector_reserve(&ptr, 0, 2, 24);
  v11 = *((_QWORD *)&v62 + 1);
  *((_QWORD *)&v62 + 1) = 0;
  v12 = (__m128i *)ptr;
  v13 = v62 - 1;
  if ( (__int64)v62 - 1 >= 0 )
  {
    v14 = v10;
    do
    {
      v15 = _mm_loadu_si128(v12);
      v14 = (__m128i *)((char *)v14 + 24);
      v12 = (__m128i *)((char *)v12 + 24);
      *(__m128i *)((char *)v14 - 24) = v15;
      v14[-1].m128i_i64[1] = v12[-1].m128i_i64[1];
    }
    while ( v13-- != 0 );
    v12 = (__m128i *)ptr;
  }
  qfree(v12);
  ptr = v10;
  *((_QWORD *)&v62 + 1) = v11;
  if ( (unsigned __int64)v62 <= 1 )
  {
    for ( i = 3 * v62; ; i = 3 )
    {
      v18 = &v10->m128i_i64[i];
      *v18 = 0;
      v18[1] = 0;
      v18[2] = 0;
      v10 = (__m128i *)ptr;
      if ( i * 8 )
        break;
    }
  }
  *(_QWORD *)&v62 = 2;
  *v10 = _mm_loadu_si128(a2);
  v10[1].m128i_i64[0] = a2[1].m128i_i64[0];
  v19 = ptr;
  v20 = (const __m128i *)(*(_QWORD *)(a1 + 648) + v4);
  *(__m128i *)((char *)ptr + 24) = _mm_loadu_si128(v20);
  v19[5] = v20[1].m128i_i64[0];
  v83 = _mm_loadu_si128((const __m128i *)(a1 + 12));
  v84 = _mm_loadu_si128((const __m128i *)(a1 + 28));
  v85 = _mm_loadu_si128((const __m128i *)(a1 + 44));
  v86 = _mm_loadu_si128((const __m128i *)(a1 + 60));
  v87 = _mm_loadu_si128((const __m128i *)(a1 + 76));
  v88 = _mm_loadu_si128((const __m128i *)(a1 + 92));
  v89 = _mm_loadu_si128((const __m128i *)(a1 + 108));
  v90 = _mm_loadu_si128((const __m128i *)(a1 + 124));
  v91 = _mm_loadu_si128((const __m128i *)(a1 + 140));
  v92 = _mm_loadu_si128((const __m128i *)(a1 + 156));
  v93 = _mm_loadu_si128((const __m128i *)(a1 + 172));
  v21 = *(_QWORD *)(a1 + 220);
  v22 = *(unsigned int *)(a1 + 20);
  v23 = _mm_loadu_si128((const __m128i *)(a1 + 188));
  p_ptr = &ptr;
  v96 = v21;
  v94 = v23;
  v24 = _mm_loadu_si128((const __m128i *)(a1 + 204));
  v70 = 0xFFFFFFFFLL;
  v73 = &v71;
  v74 = &v71;
  v95 = v24;
  v63 = v22;
  v65 = a1;
  v66 = 0;
  v67 = 200;
  v69 = v22;
  v71 = 0;
  v72 = nullptr;
  v75 = 0;
  v76 = 0;
  v77 = nullptr;
  v78 = &v76;
  v79 = &v76;
  v80 = 0;
  v68 = 0;
  *(_QWORD *)&v68 = get_func(v22);
  if ( !(_QWORD)v68 )
  {
    *((_QWORD *)&v68 + 1) = getseg(v69);
    if ( !*((_QWORD *)&v68 + 1) )
    {
      if ( !under_debugger )
        interr(10183);
      BUG();
    }
  }
  v82 = (unsigned int *)(a1 + 588);
  v81 = (_BYTE *)(a1 + 585);
  do
  {
    while ( 1 )
    {
      v25 = sub_43D520(&v63);
      if ( *v81 )
      {
        if ( v25 == 21 )
          goto LABEL_17;
        *v81 = 0;
      }
      if ( !v25 )
        goto LABEL_18;
LABEL_17:
      if ( (~((unsigned __int16)get_flags_ex(v63, 4) >> 8) & 6) != 0
        || !(unsigned int)decode_insn(a1 + 12, v63, v26, v27, v28, v29) )
      {
        goto LABEL_18;
      }
      v47 = v70;
      if ( (_DWORD)v70 == -1 )
        v47 = v63;
      *v82 = v47;
      v48 = *(_QWORD *)a1;
      v49 = *(__int64 (**)())(*(_QWORD *)a1 + 16LL);
      if ( v49 == sub_436310 )
        break;
      v30 = ((__int64 (__fastcall *)(__int64, void **))v49)(a1, &ptr);
      v48 = *(_QWORD *)a1;
      if ( !(_BYTE)v30 )
        break;
      v51 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v48 + 8);
      v52 = ptr;
      if ( v51 == sub_4362C0 )
      {
        v53 = *((_BYTE *)ptr + 1);
        if ( v53 == *((_BYTE *)ptr + 25) )
        {
          if ( v53 == 99 )
          {
LABEL_65:
            v54 = v52[29];
            v55 = v52[5];
            if ( v55 > 0xF9u )
            {
              if ( v55 >= v54 && v54 > 0xF9u )
                goto LABEL_19;
            }
            else if ( v55 >= v54 || v54 > 0xF9u || *(_BYTE *)(a1 + 8) && v55 == 2 )
            {
              goto LABEL_19;
            }
            v56 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
            if ( v56 != sub_436320 )
            {
              v60 = v54 <= 0xF9u;
              v59 = v52[29];
              v57 = ((__int64 (__fastcall *)(__int64))v56)(a1);
              v58 = v60 || v57 < v59;
              if ( v57 <= 0xF9u )
                v58 = v57 < v59 && v60;
              if ( !v58 )
                goto LABEL_19;
            }
          }
          else if ( v53 == 100 )
          {
            if ( *((_DWORD *)ptr + 2) == *((_DWORD *)ptr + 8) )
              goto LABEL_65;
          }
          else if ( v53 == 1 && *((_WORD *)ptr + 3) == *((_WORD *)ptr + 15) )
          {
            goto LABEL_65;
          }
        }
      }
      else
      {
        v52 = ptr;
        if ( (unsigned __int8)v51(a1, (__int64)ptr, (__int64)ptr + 24) )
          goto LABEL_65;
      }
    }
    v50 = *(__int64 (**)())(v48 + 24);
    if ( v50 == j__check_spoiled_jpt )
      check_spoiled_jpt(a1, &ptr);
    else
      ((void (__fastcall *)(__int64, void **))v50)(a1, &ptr);
  }
  while ( *((_BYTE *)ptr + 1) && *((_BYTE *)ptr + 25) );
LABEL_18:
  v30 = 0;
LABEL_19:
  v31 = v77;
  v32 = _mm_load_si128(&v83);
  *(_QWORD *)(a1 + 220) = v96;
  *(__m128i *)(a1 + 12) = v32;
  *(__m128i *)(a1 + 28) = _mm_load_si128(&v84);
  *(__m128i *)(a1 + 44) = _mm_load_si128(&v85);
  *(__m128i *)(a1 + 60) = _mm_load_si128(&v86);
  *(__m128i *)(a1 + 76) = _mm_load_si128(&v87);
  *(__m128i *)(a1 + 92) = _mm_load_si128(&v88);
  *(__m128i *)(a1 + 108) = _mm_load_si128(&v89);
  *(__m128i *)(a1 + 124) = _mm_load_si128(&v90);
  *(__m128i *)(a1 + 140) = _mm_load_si128(&v91);
  *(__m128i *)(a1 + 156) = _mm_load_si128(&v92);
  *(__m128i *)(a1 + 172) = _mm_load_si128(&v93);
  *(__m128i *)(a1 + 188) = _mm_load_si128(&v94);
  *(__m128i *)(a1 + 204) = _mm_load_si128(&v95);
  while ( v31 )
  {
    v33 = v31;
    sub_437100((_QWORD *)v31[3]);
    v34 = (void *)v31[5];
    v31 = (_QWORD *)v31[2];
    if ( v34 )
    {
      v33[6] = 0;
      qfree(v34);
    }
    operator delete(v33, 0x48u);
  }
  v35 = (_QWORD **)v72;
  if ( v72 )
  {
    do
    {
      sub_436830(v35[3]);
      v36 = v35;
      v35 = (_QWORD **)v35[2];
      operator delete(v36, 0x28u);
    }
    while ( v35 );
  }
  if ( ptr )
  {
    *(_QWORD *)&v62 = 0;
    qfree(ptr);
  }
  return v30;
}

