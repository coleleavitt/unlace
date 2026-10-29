__m128i *__fastcall sub_7C9370(__m128i *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char **exception; // r12
  unsigned int *v6; // rbp
  __int64 v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rdx
  void *v14; // r13
  char v15; // dl
  __int64 v16; // rax
  char v17; // di
  int v18; // r8d
  _QWORD *v19; // rax
  int v20; // ecx
  char v21; // si
  void *v22; // r13
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // edx
  __int64 v26; // r15
  __int64 v27; // r12
  char *v28; // rax
  char *v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  size_t v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rsi
  unsigned int *v36; // r8
  __int64 v37; // rdx
  _QWORD *v38; // rax
  _QWORD *v39; // rdi
  int v40; // ecx
  char v41; // r9
  __int64 v42; // rcx
  char v43; // r9
  __int64 v44; // rcx
  __int64 v45; // r13
  _QWORD *v46; // rax
  _QWORD *v47; // r13
  _QWORD *v48; // rbx
  _QWORD *v49; // rbp
  void *v50; // r13
  _QWORD *v51; // rsi
  void *v52; // rdi
  int v53; // eax
  __int64 v54; // rsi
  unsigned __int64 v55; // r15
  __int64 v56; // r8
  __int64 v57; // r15
  __int64 v58; // rax
  __int64 v59; // r14
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // rsi
  __int64 v63; // rdi
  void *v64; // r14
  __int64 v65; // rax
  _QWORD *v66; // rbp
  _QWORD *v67; // r13
  void *v68; // r14
  _QWORD *v69; // rsi
  _QWORD *v71; // rax
  unsigned __int64 v72; // rax
  __int64 v73; // rsi
  unsigned int *v74; // [rsp+8h] [rbp-170h]
  unsigned int v75; // [rsp+1Ch] [rbp-15Ch]
  unsigned int *v77; // [rsp+30h] [rbp-148h]
  unsigned int *v78; // [rsp+30h] [rbp-148h]
  __int64 v79; // [rsp+38h] [rbp-140h]
  _QWORD *v80; // [rsp+40h] [rbp-138h]
  unsigned int *v81; // [rsp+48h] [rbp-130h]
  int v84; // [rsp+6Ch] [rbp-10Ch] BYREF
  __int64 v85; // [rsp+70h] [rbp-108h] BYREF
  __int64 v86; // [rsp+78h] [rbp-100h]
  __int64 v87; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v88; // [rsp+88h] [rbp-F0h]
  __int64 v89; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v90; // [rsp+98h] [rbp-E0h]
  _QWORD v91[2]; // [rsp+A0h] [rbp-D8h] BYREF
  void *v92; // [rsp+B0h] [rbp-C8h]
  __int64 v93; // [rsp+B8h] [rbp-C0h]
  _BYTE v94[184]; // [rsp+C0h] [rbp-B8h] BYREF

  v6 = a4 + 19;
  v92 = v94;
  v93 = 0x1000000000LL;
  v7 = 2LL * (unsigned int)a4[8];
  v74 = &a4[v7 + 19];
  v8 = nullptr;
  if ( v7 * 4 )
  {
    do
    {
      v12 = *(_QWORD *)(a3 + 16) == 0;
      LODWORD(v85) = v6[1];
      if ( v12 )
        std::__throw_bad_function_call();
      (*(void (__fastcall **)(__int64 *, __int64, __int64 *))(a3 + 24))(&v89, a3, &v85);
      v25 = v93;
      v26 = v89;
      if ( (unsigned int)v93 < HIDWORD(v93) )
      {
        v9 = v92;
      }
      else
      {
        v27 = (unsigned int)(2 * HIDWORD(v93));
        v28 = (char *)sub_186B270(8 * v27);
        v25 = v93;
        v29 = (char *)v92;
        v9 = v28;
        if ( (_DWORD)v93 )
        {
          if ( (unsigned int)(v93 - 1) <= 2 || v28 == (char *)v92 + 8 )
          {
            v72 = 0;
            v73 = 8LL * (unsigned int)v93;
            do
            {
              v9[v72 / 8] = *(_QWORD *)&v29[v72];
              v72 += 8LL;
            }
            while ( v72 != v73 );
          }
          else
          {
            v30 = 0;
            v31 = 16LL * ((unsigned int)v93 >> 1);
            do
            {
              *(__m128i *)&v9[v30 / 8] = _mm_loadu_si128((const __m128i *)&v29[v30]);
              v30 += 16LL;
            }
            while ( v31 != v30 );
            if ( (v25 & 1) != 0 )
              v9[v25 & 0xFFFFFFFE] = *(_QWORD *)&v29[8 * (v25 & 0xFFFFFFFE)];
          }
        }
        if ( v29 != v94 && v29 )
        {
          sub_186B220(v29);
          v25 = v93;
        }
        v92 = v9;
        HIDWORD(v93) = v27;
      }
      v9[v25] = v26;
      v10 = v89;
      LODWORD(v93) = v25 + 1;
      if ( v89 )
      {
        v11 = v90;
        v12 = (*(_DWORD *)(v89 + 8))-- == 1;
        if ( v12 )
          sub_15D7BC0(v11, v10);
      }
      v13 = *v6;
      v85 = 0;
      v86 = 0;
      v87 = 1;
      v14 = qword_1C7F2C0;
      v88 = 0;
      if ( (int)v13 < 0 )
        sub_1830C40(qword_1C7F2C0, &v85, v13);
      else
        LODWORD(v85) = v13;
      sub_182CBA0(v14, &v87);
      LODWORD(v87) = 1;
      v15 = BYTE4(v87) & 0xFE;
      BYTE4(v87) &= ~1u;
      if ( v8 )
      {
        v16 = *((unsigned int *)v8 - 1);
        if ( (_DWORD)v16 == *((_DWORD *)v8 - 2) )
        {
          v75 = (unsigned int)(3 * v16 + 1) >> 1;
          v32 = 32 * v75 + 8;
          if ( 32 * (int)v16 + 8 >= (unsigned int)v32 || (unsigned int)v16 >= (unsigned int)(3 * v16 + 1) >> 1 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v89, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v89);
            sub_233E40((__int64)&v89);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v33 = sub_186B270(v32);
          v34 = *((unsigned int *)v8 - 1);
          v35 = v33 + 8;
          v36 = (unsigned int *)v33;
          v37 = v33 + 8;
          *(_DWORD *)(v33 + 4) = v34;
          v38 = v8;
          v39 = &v8[4 * v34];
          if ( v39 != v8 )
          {
            do
            {
              v40 = *(_DWORD *)v38;
              v41 = *((_BYTE *)v38 + 4);
              v38 += 4;
              v37 += 32;
              *(_DWORD *)(v37 - 32) = v40;
              *(_BYTE *)(v37 - 28) = v41 & 3 | *(_BYTE *)(v37 - 28) & 0xFC;
              v42 = *(v38 - 3);
              *(v38 - 3) = 0;
              *(_QWORD *)(v37 - 24) = v42;
              v43 = *((_BYTE *)v38 - 12);
              *(_DWORD *)(v37 - 16) = *((_DWORD *)v38 - 4);
              *(_BYTE *)(v37 - 12) = v43 & 3 | *(_BYTE *)(v37 - 12) & 0xFC;
              v44 = *(v38 - 1);
              *(v38 - 1) = 0;
              *(_QWORD *)(v37 - 8) = v44;
            }
            while ( v39 != v38 );
          }
          v45 = *((unsigned int *)v8 - 1);
          if ( (_DWORD)v45 )
          {
            v77 = v36;
            v79 = v35;
            v46 = &v8[4 * v45];
            v47 = v8;
            v80 = v8;
            v48 = v46;
            v81 = v6;
            v49 = v47;
            do
            {
              v50 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v49);
              v51 = v49 + 2;
              v49 += 4;
              sub_182CBA0(v50, v51);
            }
            while ( v48 != v49 );
            v36 = v77;
            v35 = v79;
            v8 = v80;
            v6 = v81;
          }
          v78 = v36;
          sub_186B220(v8 - 1);
          v15 = BYTE4(v87);
          *v78 = v75;
          v18 = v87;
          v8 = (_QWORD *)v35;
          v17 = v15 & 1;
          v19 = (_QWORD *)(v35 + 32LL * v78[1]);
        }
        else
        {
          v17 = 0;
          v18 = 1;
          v19 = &v8[4 * v16];
        }
      }
      else
      {
        v71 = (_QWORD *)sub_186B270(0x48u);
        v15 = BYTE4(v87);
        v8 = v71 + 1;
        *v71 = 2;
        v18 = v87;
        v19 = v71 + 1;
        v17 = v15 & 1;
      }
      v20 = v85;
      v21 = BYTE4(v85);
      *((_DWORD *)v19 + 4) = v18;
      v22 = qword_1C7F2C0;
      v6 += 2;
      *(_DWORD *)v19 = v20;
      *((_BYTE *)v19 + 4) = v21 & 3 | *((_BYTE *)v19 + 4) & 0xFC;
      v23 = v86;
      v86 = 0;
      v19[1] = v23;
      *((_BYTE *)v19 + 20) = *((_BYTE *)v19 + 20) & 0xFC | v17 | v15 & 2;
      v24 = v88;
      v88 = 0;
      v19[3] = v24;
      ++*((_DWORD *)v8 - 1);
      sub_182CBA0(v22, &v85);
      sub_182CBA0(v22, &v87);
    }
    while ( v74 != v6 );
  }
  v52 = qword_1C7F2C0;
  v89 = 0;
  v90 = 0;
  v91[0] = 1;
  v53 = a4[15];
  v91[1] = 0;
  if ( v53 < 0 )
    sub_1830C40(qword_1C7F2C0, &v89, (unsigned int)v53);
  else
    LODWORD(v89) = v53;
  sub_182CBA0(v52, v91);
  BYTE4(v91[0]) &= ~1u;
  v54 = (unsigned int)a4[8];
  v55 = *(_QWORD *)(a2 + 72);
  LODWORD(v91[0]) = 1;
  v56 = sub_1690D20(a2 + 96, v54, v8, v92, &v89);
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v56, (__m128i)v55);
  if ( v56 )
    ++*(_DWORD *)(v56 + 8);
  if ( a4[4] != -2 )
  {
    v12 = *(_QWORD *)(a3 + 16) == 0;
    v84 = a4[4];
    v57 = *(_QWORD *)(a2 + 72);
    if ( v12 )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64 *, __int64, int *))(a3 + 24))(&v85, a3, &v84);
    v58 = sub_15E1B70(v57);
    v59 = v58;
    if ( v58 )
      ++*(_DWORD *)(v58 + 8);
    v60 = a1->m128i_i64[0];
    if ( a1->m128i_i64[0] )
    {
      v61 = a1->m128i_i64[1];
      v12 = (*(_DWORD *)(v60 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v61, v60);
    }
    v62 = v85;
    a1->m128i_i64[0] = v59;
    if ( v62 )
    {
      v63 = v86;
      v12 = (*(_DWORD *)(v62 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v63, v62);
    }
  }
  v64 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v89);
  sub_182CBA0(v64, v91);
  if ( v8 )
  {
    v65 = *((unsigned int *)v8 - 1);
    if ( (_DWORD)v65 )
    {
      v66 = v8;
      v67 = &v8[4 * v65];
      do
      {
        v68 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v66);
        v69 = v66 + 2;
        v66 += 4;
        sub_182CBA0(v68, v69);
      }
      while ( v67 != v66 );
    }
    sub_186B220(v8 - 1);
  }
  if ( v92 != v94 && v92 )
    sub_186B220(v92);
  return a1;
}

