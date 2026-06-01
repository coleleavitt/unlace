__int64 __fastcall sub_862FF0(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // r15
  char **v4; // r15
  char **exception; // r15
  char **v6; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // r13
  _QWORD *v13; // rax
  _QWORD *v14; // r12
  __int64 v15; // r14
  _QWORD *v16; // rbx
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  _QWORD *v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // rsi
  int v27; // eax
  __int64 *v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // eax
  unsigned int v33; // ecx
  size_t v34; // rsi
  unsigned int *v35; // rax
  unsigned int v36; // ecx
  size_t v37; // rsi
  unsigned int *v38; // rax
  unsigned int v39; // r8d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rsi
  _DWORD *v43; // rdx
  unsigned int v44; // ecx
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // r14
  __int64 v49; // rax
  unsigned int v50; // r14d
  int v51; // eax
  unsigned __int8 v52; // al
  __int64 v53; // rsi
  __int64 v54; // rdi
  bool v55; // zf
  __int64 *v56; // r15
  unsigned __int64 v57; // r14
  __int64 v58; // rsi
  __int64 *v59; // rbx
  unsigned __int64 v60; // r14
  __int64 v61; // rsi
  __int64 *v62; // rbx
  unsigned __int64 v63; // r15
  __int64 v64; // rsi
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // [rsp+0h] [rbp-E0h]
  __int64 v70; // [rsp+10h] [rbp-D0h]
  int v71; // [rsp+1Ch] [rbp-C4h]
  unsigned int v73; // [rsp+28h] [rbp-B8h]
  unsigned int v74; // [rsp+2Ch] [rbp-B4h]
  unsigned int v75; // [rsp+30h] [rbp-B0h]
  unsigned int v76; // [rsp+30h] [rbp-B0h]
  unsigned int v77; // [rsp+30h] [rbp-B0h]
  __int64 v78; // [rsp+38h] [rbp-A8h]
  __int64 v79; // [rsp+38h] [rbp-A8h]
  __int64 v80; // [rsp+38h] [rbp-A8h]
  __int64 v81; // [rsp+38h] [rbp-A8h]
  __int64 v82; // [rsp+38h] [rbp-A8h]
  __int64 v83; // [rsp+38h] [rbp-A8h]
  __int64 v84; // [rsp+48h] [rbp-98h]
  unsigned int v85; // [rsp+50h] [rbp-90h]
  unsigned __int8 v86; // [rsp+50h] [rbp-90h]
  _QWORD *v87; // [rsp+58h] [rbp-88h]
  __m128i v88; // [rsp+90h] [rbp-50h] BYREF

  ++*(_DWORD *)(a1 + 140);
  v84 = sub_15D1F10(a2);
  v8 = *(_QWORD *)(v84 + 24);
  if ( v8 && (v9 = *(_QWORD *)(v8 + 8)) != 0 )
  {
    v71 = *(_DWORD *)(v9 - 4);
    v73 = v71 - 1;
  }
  else
  {
    v73 = -1;
    v71 = 0;
  }
  v10 = *(_QWORD *)(a1 + 72);
  ++*(_DWORD *)(a2 + 8);
  v70 = v10;
  v11 = (_QWORD *)sub_186B270(0x18u);
  v11[1] = a2;
  v12 = v11 + 1;
  *v11 = 0x100000002LL;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v13 = (_QWORD *)sub_186B270(0x18u);
  *v13 = 0x100000002LL;
  v14 = v13 + 1;
  v13[1] = a3;
  v68 = *(_QWORD *)(a1 + 72);
  if ( v73 )
  {
    v15 = 0;
    v16 = nullptr;
    v87 = nullptr;
    v85 = v71 - 2;
    do
    {
      v18 = *(_QWORD *)(*(_QWORD *)(v84 + 24) + 8LL) + 2 * v15;
      if ( *(_BYTE *)(v18 + 8) != 1 )
        sub_A8ADA((__int64)"std::get: wrong index for variant");
      v19 = *(_QWORD *)v18;
      if ( *(_QWORD *)v18 )
        ++*(_DWORD *)(v19 + 8);
      if ( v16 )
      {
        v20 = *((_DWORD *)v16 - 1);
        if ( v20 == *((_DWORD *)v16 - 2) )
        {
          v44 = (3 * v20 + 1) >> 1;
          v45 = 8 * v44 + 8;
          if ( 8 * v20 + 8 >= (unsigned int)v45 || v20 >= v44 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v88.m128i_i64, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v88);
            sub_233E40((__int64)&v88);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v77 = (3 * v20 + 1) >> 1;
          v81 = v19;
          v46 = (unsigned int *)sub_186B300(v16 - 1, v45);
          v16 = v46 + 2;
          v19 = v81;
          *v46 = v77;
          LODWORD(v46) = v46[1];
          v23 = &v16[(unsigned int)v46];
          v22 = (_DWORD)v46 + 1;
        }
        else
        {
          v21 = v20;
          v22 = v20 + 1;
          v23 = &v16[v21];
        }
      }
      else
      {
        v82 = v19;
        v66 = (_QWORD *)sub_186B270(0x18u);
        v16 = v66 + 1;
        *v66 = 2;
        v19 = v82;
        v22 = 1;
        v23 = v16;
      }
      *v23 = v19;
      *((_DWORD *)v16 - 1) = v22;
      v24 = v15 | 1;
      if ( v87 )
      {
        v25 = *((_DWORD *)v87 - 1);
        if ( v25 == *((_DWORD *)v87 - 2) )
        {
          v39 = (3 * v25 + 1) >> 1;
          v40 = 8 * v39 + 8;
          if ( 8 * v25 + 8 >= (unsigned int)v40 || v25 >= v39 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v88.m128i_i64, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, &v88);
            sub_233E40((__int64)&v88);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v74 = (3 * v25 + 1) >> 1;
          v80 = v19;
          v41 = (unsigned int *)sub_186B300(v87 - 1, v40);
          v42 = v41[1];
          v43 = v41 + 2;
          v87 = v41 + 2;
          v24 = v15 | 1;
          *v41 = v74;
          LODWORD(v41) = v42;
          v28 = (__int64 *)&v43[2 * v42];
          v19 = v80;
          v27 = (_DWORD)v41 + 1;
        }
        else
        {
          v26 = v25;
          v27 = v25 + 1;
          v28 = &v87[v26];
        }
      }
      else
      {
        v83 = v19;
        v67 = (_QWORD *)sub_186B270(0x18u);
        *v67 = 2;
        v19 = v83;
        v87 = v67 + 1;
        v28 = v67 + 1;
        v24 = v15 | 1;
        v27 = 1;
      }
      *v28 = v24;
      v29 = *(_QWORD *)(a1 + 72);
      *((_DWORD *)v87 - 1) = v27;
      v30 = sub_15DB5C0(v29, v85, v19);
      v31 = v30;
      if ( v30 )
        ++*(_DWORD *)(v30 + 8);
      v32 = *((_DWORD *)v12 - 1);
      if ( v32 == *((_DWORD *)v12 - 2) )
      {
        v33 = (3 * v32 + 1) >> 1;
        v34 = 8 * v33 + 8;
        if ( 8 * v32 + 8 >= (unsigned int)v34 || v32 >= v33 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v88.m128i_i64, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, &v88);
          sub_233E40((__int64)&v88);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v75 = (3 * v32 + 1) >> 1;
        v78 = v31;
        v35 = (unsigned int *)sub_186B300(v12 - 1, v34);
        v12 = v35 + 2;
        v31 = v78;
        *v35 = v75;
        v32 = v35[1];
      }
      v12[v32] = v31;
      *((_DWORD *)v12 - 1) = v32 + 1;
      if ( v31 )
        ++*(_DWORD *)(v31 + 8);
      v17 = *((_DWORD *)v14 - 1);
      if ( v17 == *((_DWORD *)v14 - 2) )
      {
        v36 = (3 * v17 + 1) >> 1;
        v37 = 8 * v36 + 8;
        if ( 8 * v17 + 8 >= (unsigned int)v37 || v17 >= v36 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v88.m128i_i64, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, &v88);
          sub_233E40((__int64)&v88);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v76 = (3 * v17 + 1) >> 1;
        v79 = v31;
        v38 = (unsigned int *)sub_186B300(v14 - 1, v37);
        v14 = v38 + 2;
        v31 = v79;
        *v38 = v76;
        v17 = v38[1];
      }
      v15 += 8;
      --v85;
      v14[v17] = v31;
      *((_DWORD *)v14 - 1) = v17 + 1;
    }
    while ( v15 != 8LL * v73 );
  }
  else
  {
    v87 = nullptr;
    v16 = nullptr;
  }
  sub_15DCAD0(*(_QWORD *)(a1 + 120), (int)v12, 0);
  sub_15DCAD0(*(_QWORD *)(a1 + 120), (int)v14, 0);
  v47 = sub_15E1B70(*(_QWORD *)(a1 + 72));
  v48 = *(_QWORD *)(a1 + 72);
  v49 = sub_15DB6A0(v48, 0, v73, v16, v87, v47, 0, &qword_18D6CD0, &qword_18D6CD0, 0, 0, 0, 0);
  v88 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v49, (__m128i)v48);
  if ( v49 )
    ++*(_DWORD *)(v49 + 8);
  sub_7E5890(a1, (__int64)&v88);
  v50 = sub_7E58C0(a1, v88.m128i_i64[0]);
  v51 = sub_7E58D0(a1, a2, a3);
  v52 = sub_7E5400(a1, v51 ^ 1u, v50, nullptr);
  v53 = v88.m128i_i64[0];
  v86 = v52;
  if ( v88.m128i_i64[0] )
  {
    v54 = v88.m128i_i64[1];
    v55 = (*(_DWORD *)(v88.m128i_i64[0] + 8))-- == 1;
    if ( v55 )
      sub_15D7BC0(v54, v53);
  }
  if ( v16 )
  {
    v56 = v16;
    v57 = (unsigned __int64)&v16[*((unsigned int *)v16 - 1)];
    if ( (unsigned __int64)v16 < v57 )
    {
      do
      {
        while ( 1 )
        {
          v58 = *v56;
          if ( *v56 )
          {
            v55 = (*(_DWORD *)(v58 + 8))-- == 1;
            if ( v55 )
              break;
          }
          if ( (unsigned __int64)++v56 >= v57 )
            goto LABEL_49;
        }
        ++v56;
        sub_15D7BC0(v68, v58);
      }
      while ( (unsigned __int64)v56 < v57 );
    }
LABEL_49:
    sub_186B220(v16 - 1);
  }
  if ( v87 )
    sub_186B220(v87 - 1);
  v59 = v14;
  v60 = (unsigned __int64)&v14[*((unsigned int *)v14 - 1)];
  if ( (unsigned __int64)v14 < v60 )
  {
    do
    {
      while ( 1 )
      {
        v61 = *v59;
        if ( *v59 )
        {
          v55 = (*(_DWORD *)(v61 + 8))-- == 1;
          if ( v55 )
            break;
        }
        if ( (unsigned __int64)++v59 >= v60 )
          goto LABEL_58;
      }
      ++v59;
      sub_15D7BC0(v70, v61);
    }
    while ( (unsigned __int64)v59 < v60 );
  }
LABEL_58:
  v62 = v12;
  sub_186B220(v14 - 1);
  if ( v12 < &v12[*((unsigned int *)v12 - 1)] )
  {
    v63 = (unsigned __int64)&v12[*((unsigned int *)v12 - 1)];
    do
    {
      while ( 1 )
      {
        v64 = *v62;
        if ( *v62 )
        {
          v55 = (*(_DWORD *)(v64 + 8))-- == 1;
          if ( v55 )
            break;
        }
        if ( (unsigned __int64)++v62 >= v63 )
          goto LABEL_64;
      }
      ++v62;
      sub_15D7BC0(v70, v64);
    }
    while ( (unsigned __int64)v62 < v63 );
  }
LABEL_64:
  sub_186B220(v12 - 1);
  return v86;
}

