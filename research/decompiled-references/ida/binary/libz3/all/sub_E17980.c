_BYTE *__fastcall sub_E17980(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // r14
  __int64 v5; // rax
  int v6; // r15d
  _QWORD *v7; // rcx
  __int64 v8; // r12
  unsigned int v9; // edx
  unsigned int v10; // ebx
  unsigned int v11; // r8d
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  _QWORD *v16; // rax
  int v17; // edx
  _QWORD *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 (__fastcall *v21)(__int64 *); // r12
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // edx
  _QWORD *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // r12
  char *v28; // rax
  char *v29; // rdi
  __int64 v30; // rax
  _QWORD *v31; // rcx
  __int64 v32; // rbx
  unsigned int v33; // edx
  __int64 v34; // rax
  int v35; // edx
  _QWORD *v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 (__fastcall *v39)(__int64 *); // rbx
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // r12
  void *v43; // r15
  int v44; // r9d
  int v45; // esi
  __int64 v46; // r12
  bool v47; // zf
  char *v48; // rbx
  char *v49; // r15
  __int64 v50; // rsi
  _BYTE *result; // rax
  __int64 v52; // rax
  unsigned int v53; // r12d
  unsigned int v54; // eax
  unsigned int *v55; // rax
  __int64 v56; // rax
  int v57; // edx
  _QWORD *v58; // rax
  _QWORD *exception; // rbx
  _QWORD *v60; // r12
  char **v61; // r15
  char **v62; // r15
  int v63; // [rsp+Ch] [rbp-134h]
  __int64 v64; // [rsp+18h] [rbp-128h]
  __int64 v65; // [rsp+20h] [rbp-120h]
  unsigned int v66; // [rsp+30h] [rbp-110h]
  __int64 v67; // [rsp+30h] [rbp-110h]
  __int64 v68; // [rsp+30h] [rbp-110h]
  _BYTE v70[8]; // [rsp+48h] [rbp-F8h] BYREF
  __int64 v71; // [rsp+50h] [rbp-F0h] BYREF
  char v72; // [rsp+58h] [rbp-E8h]
  __int64 v73; // [rsp+70h] [rbp-D0h]
  void *ptr; // [rsp+78h] [rbp-C8h]
  __int64 v75; // [rsp+80h] [rbp-C0h]
  _BYTE v76[184]; // [rsp+88h] [rbp-B8h] BYREF

  v3 = sub_DF89E0(a2, (unsigned __int64 *)(a1 + 24));
  if ( !v3 )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "Array sort is not available");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v4 = (__int64 *)v3;
  sub_DFBCB0(a2);
  v73 = *(_QWORD *)(a2 + 296);
  ptr = v76;
  v75 = 0x1000000000LL;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_DWORD *)(v5 + 32);
  if ( v6 )
  {
    v7 = *(_QWORD **)(a1 + 40);
    v8 = *(_QWORD *)(v5 + 48);
    if ( !v7 )
    {
      v18 = (_QWORD *)sub_186B270(0x18u);
      v7 = v18 + 1;
      *v18 = 2;
      v10 = 0;
      v17 = 1;
      *(_QWORD *)(a1 + 40) = v18 + 1;
      v16 = v18 + 1;
      goto LABEL_9;
    }
    v9 = *((_DWORD *)v7 - 1);
    v10 = 0;
    if ( v9 != *((_DWORD *)v7 - 2) )
      goto LABEL_17;
LABEL_5:
    v11 = (3 * v9 + 1) >> 1;
    v12 = 8 * v11 + 8;
    if ( 8 * v9 + 8 >= (unsigned int)v12 || v9 >= v11 )
    {
      v61 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(&v71, "Overflow encountered when expanding vector");
      *v61 = (char *)off_1C63128;
      sub_2333C0(v61 + 1, &v71);
      sub_233E40((__int64)&v71);
      __cxa_throw(v61, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v66 = (3 * v9 + 1) >> 1;
    v13 = (unsigned int *)sub_186B300(v7 - 1, v12);
    v7 = v13 + 2;
    *v13 = v66;
    v14 = v13[1];
    *(_QWORD *)(a1 + 40) = v7;
    v15 = v14;
    v16 = &v7[v14];
    v17 = v15 + 1;
    while ( 1 )
    {
LABEL_9:
      *v16 = v8;
      v19 = *(_QWORD *)(a2 + 312);
      v20 = *v4;
      *((_DWORD *)v7 - 1) = v17;
      v21 = *(__int64 (__fastcall **)(__int64 *))(v20 + 64);
      if ( !v19 )
        sub_DFBCB0(a2);
      v22 = v21(v4);
      v23 = v22;
      if ( v22 )
        ++*(_DWORD *)(v22 + 8);
      v24 = v75;
      if ( (unsigned int)v75 >= HIDWORD(v75) )
      {
        v67 = v22;
        v27 = (unsigned int)(2 * HIDWORD(v75));
        v28 = (char *)sub_186B270(8 * v27);
        v24 = v75;
        v29 = (char *)ptr;
        v25 = v28;
        v23 = v67;
        if ( (_DWORD)v75 )
        {
          if ( (unsigned int)(v75 - 1) <= 2 || v28 == (char *)ptr + 8 )
          {
            v52 = 0;
            do
            {
              v25[v52] = *(_QWORD *)&v29[v52 * 8];
              ++v52;
            }
            while ( v24 != v52 );
          }
          else
          {
            v30 = 0;
            do
            {
              *(__m128i *)&v25[v30] = _mm_loadu_si128((const __m128i *)&v29[v30 * 8]);
              v30 += 2;
            }
            while ( v30 != 2LL * (v24 >> 1) );
            if ( (v24 & 1) != 0 )
              v25[v24 & 0xFFFFFFFE] = *(_QWORD *)&v29[8 * (v24 & 0xFFFFFFFE)];
          }
        }
        if ( v29 && v29 != v76 )
        {
          sub_186B220(v29);
          v24 = v75;
          v23 = v67;
        }
        ptr = v25;
        HIDWORD(v75) = v27;
      }
      else
      {
        v25 = ptr;
      }
      ++v10;
      v25[v24] = v23;
      LODWORD(v75) = v24 + 1;
      v7 = *(_QWORD **)(a1 + 40);
      --*((_DWORD *)v7 - 1);
      if ( v6 == v10 )
        break;
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v10 + 48);
      v9 = *((_DWORD *)v7 - 1);
      if ( v9 == *((_DWORD *)v7 - 2) )
        goto LABEL_5;
LABEL_17:
      v26 = v9;
      v17 = v9 + 1;
      v16 = &v7[v26];
    }
  }
  sub_DFBCB0(a2);
  v68 = *(_QWORD *)(a2 + 296);
  v31 = *(_QWORD **)(a1 + 40);
  v32 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL);
  if ( v31 )
  {
    v33 = *((_DWORD *)v31 - 1);
    if ( v33 == *((_DWORD *)v31 - 2) )
    {
      v53 = (3 * v33 + 1) >> 1;
      v54 = 8 * v53 + 8;
      if ( 8 * v33 + 8 >= v54 || v33 >= v53 )
      {
        v62 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v71, "Overflow encountered when expanding vector");
        *v62 = (char *)off_1C63128;
        sub_2333C0(v62 + 1, &v71);
        sub_233E40((__int64)&v71);
        __cxa_throw(v62, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v55 = (unsigned int *)sub_186B300(v31 - 1, v54);
      v31 = v55 + 2;
      *v55 = v53;
      v56 = v55[1];
      v57 = v56;
      v36 = &v31[v56];
      *(_QWORD *)(a1 + 40) = v31;
      v35 = v57 + 1;
    }
    else
    {
      v34 = v33;
      v35 = v33 + 1;
      v36 = &v31[v34];
    }
  }
  else
  {
    v58 = (_QWORD *)sub_186B270(0x18u);
    *v58 = 2;
    v35 = 1;
    v31 = v58 + 1;
    *(_QWORD *)(a1 + 40) = v58 + 1;
    v36 = v58 + 1;
  }
  *v36 = v32;
  v37 = *(_QWORD *)(a2 + 312);
  v38 = *v4;
  *((_DWORD *)v31 - 1) = v35;
  v39 = *(__int64 (__fastcall **)(__int64 *))(v38 + 64);
  if ( !v37 )
    sub_DFBCB0(a2);
  v40 = v39(v4);
  v41 = v40;
  if ( v40 )
    ++*(_DWORD *)(v40 + 8);
  v72 = 1;
  v71 = *(_QWORD *)(a1 + 48);
  sub_DFBCB0(a2);
  v65 = *(_QWORD *)(a2 + 296);
  sub_DFBCB0(a2);
  v42 = *(_QWORD *)(a2 + 296);
  v43 = ptr;
  v44 = v75;
  v45 = *(_DWORD *)(a1 + 56);
  if ( v45 == -1 )
  {
    v63 = v75;
    sub_DFBCB0(a2);
    v64 = *(_QWORD *)(a2 + 296);
    sub_180C5A0(v70, "array");
    v45 = sub_15DA4C0(v64 + 560, v70);
    v44 = v63;
    *(_DWORD *)(a1 + 56) = v45;
  }
  v46 = sub_15D2D10(v42, v45, 5, 1, (unsigned int)&v71, v44, (__int64)v43, v41);
  if ( !v46 )
  {
    v60 = __cxa_allocate_exception(0x30u);
    sub_305660(v60, "invalid array map operator");
    __cxa_throw(v60, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  ++*(_DWORD *)(v46 + 8);
  sub_E06850(a2, a1 + 32, v46);
  v47 = (*(_DWORD *)(v46 + 8))-- == 1;
  if ( v47 )
    sub_15D7BC0(v65, v46);
  sub_15D0DF0(&v71);
  if ( v41 )
  {
    v47 = (*(_DWORD *)(v41 + 8))-- == 1;
    if ( v47 )
      sub_15D7BC0(v68, v41);
  }
  v48 = (char *)ptr;
  v49 = (char *)ptr + 8 * (unsigned int)v75;
  if ( ptr < v49 )
  {
    do
    {
      while ( 1 )
      {
        v50 = *(_QWORD *)v48;
        if ( *(_QWORD *)v48 )
        {
          v47 = (*(_DWORD *)(v50 + 8))-- == 1;
          if ( v47 )
            break;
        }
        v48 += 8;
        if ( v48 >= v49 )
          goto LABEL_50;
      }
      sub_15D7BC0(v73, v50);
      v48 += 8;
    }
    while ( v48 < v49 );
LABEL_50:
    v48 = (char *)ptr;
  }
  result = v76;
  if ( v48 != v76 )
  {
    if ( v48 )
      return (_BYTE *)sub_186B220(v48);
  }
  return result;
}

