__int64 __fastcall sub_DE4A10(__int64 a1, __int64 a2)
{
  char **v2; // r12
  char **exception; // r12
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r14
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned int v14; // edx
  unsigned int v15; // ecx
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rsi
  _QWORD *v22; // rcx
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rsi
  int v26; // eax
  unsigned int v27; // eax
  _QWORD *v28; // rdx
  unsigned int v29; // r14d
  unsigned int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  unsigned int *v33; // rsi
  __int64 *v34; // r13
  __int64 *v35; // rbp
  __int64 v36; // rsi
  unsigned __int64 v37; // rdi
  bool v38; // zf
  __int64 *v39; // rbp
  unsigned __int64 v40; // r12
  __int64 v41; // rsi
  _QWORD *v43; // rax
  __int64 v44; // rdi
  unsigned int v45; // ecx
  size_t v46; // rsi
  unsigned int v47; // r13d
  unsigned int *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r13
  _QWORD *v51; // rax
  char *v52; // rdi
  unsigned __int64 v53; // rax
  __int64 v54; // r8
  _QWORD *v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // r9
  int v58; // [rsp+0h] [rbp-138h]
  unsigned int v59; // [rsp+8h] [rbp-130h]
  __int64 v60; // [rsp+8h] [rbp-130h]
  unsigned __int64 v61; // [rsp+10h] [rbp-128h]
  _QWORD *v62; // [rsp+18h] [rbp-120h]
  _QWORD v63[2]; // [rsp+28h] [rbp-110h] BYREF
  unsigned __int64 v64; // [rsp+40h] [rbp-F8h] BYREF
  __int64 *v65; // [rsp+48h] [rbp-F0h]
  __int64 v66[4]; // [rsp+50h] [rbp-E8h] BYREF
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v68; // [rsp+78h] [rbp-C0h]
  _BYTE v69[184]; // [rsp+80h] [rbp-B8h] BYREF

  v6 = *(_QWORD *)a2;
  v7 = *(unsigned int *)(a1 + 12);
  v61 = *(_QWORD *)a2;
  v63[1] = *(_QWORD *)a2;
  if ( (_DWORD)v7 )
  {
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      v66[0] = 8 * v8 + 1;
      v12 = sub_15D4E60(v6, v66, 0, 0);
      v13 = v12;
      if ( v12 )
        ++*(_DWORD *)(v12 + 8);
      if ( !v9 )
        break;
      v14 = *(_DWORD *)(v9 - 4);
      if ( v14 != *(_DWORD *)(v9 - 8) )
      {
        v10 = v14;
        v7 = v14 + 1;
        v11 = (__int64 *)(v9 + 8 * v10);
        goto LABEL_4;
      }
      v15 = (3 * v14 + 1) >> 1;
      v16 = 8 * v15 + 8;
      if ( 8 * v14 + 8 >= (unsigned int)v16 || v14 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&ptr, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &ptr);
        sub_233E40((__int64)&ptr);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v59 = (3 * v14 + 1) >> 1;
      v17 = (unsigned int *)sub_186B300((void *)(v9 - 8), v16);
      v9 = (unsigned __int64)(v17 + 2);
      ++v8;
      *v17 = v59;
      v18 = v17[1];
      v7 = (unsigned int)(v18 + 1);
      *(_QWORD *)(v9 + 8 * v18) = v13;
      *(_DWORD *)(v9 - 4) = v7;
      if ( (unsigned int)v8 >= *(_DWORD *)(a1 + 12) )
      {
LABEL_13:
        ptr = v69;
        v68 = 0x1000000000LL;
        goto LABEL_14;
      }
LABEL_5:
      v6 = *(_QWORD *)a2;
    }
    v43 = (_QWORD *)sub_186B270(0x18u);
    v9 = (unsigned __int64)(v43 + 1);
    *v43 = 2;
    v7 = 1;
    v11 = v43 + 1;
LABEL_4:
    *v11 = v13;
    ++v8;
    *(_DWORD *)(v9 - 4) = v7;
    if ( (unsigned int)v8 >= *(_DWORD *)(a1 + 12) )
      goto LABEL_13;
    goto LABEL_5;
  }
  v9 = 0;
  ptr = v69;
  v68 = 0x1000000000LL;
LABEL_14:
  v19 = sub_DE2960(a1, (unsigned __int64 *)a2, v7, v9);
  v20 = v68;
  v21 = v19;
  if ( (unsigned int)v68 >= HIDWORD(v68) )
  {
    v60 = v19;
    v50 = (unsigned int)(2 * HIDWORD(v68));
    v51 = (_QWORD *)sub_186B270(8 * v50);
    v20 = v68;
    v52 = (char *)ptr;
    v22 = v51;
    v21 = v60;
    if ( (_DWORD)v68 )
    {
      if ( (unsigned int)(v68 - 1) <= 2 || v51 == (_QWORD *)((char *)ptr + 8) )
      {
        v56 = 0;
        v57 = 8LL * (unsigned int)v68;
        do
        {
          v22[v56 / 8] = *(_QWORD *)&v52[v56];
          v56 += 8LL;
        }
        while ( v57 != v56 );
      }
      else
      {
        v53 = 0;
        v54 = 16LL * ((unsigned int)v68 >> 1);
        do
        {
          *(__m128i *)&v22[v53 / 8] = _mm_loadu_si128((const __m128i *)&v52[v53]);
          v53 += 16LL;
        }
        while ( v53 != v54 );
        if ( (v20 & 1) != 0 )
          v22[v20 & 0xFFFFFFFE] = *(_QWORD *)&v52[8 * (v20 & 0xFFFFFFFE)];
      }
    }
    if ( v52 && v52 != v69 )
    {
      v62 = v22;
      sub_186B220(v52);
      v20 = v68;
      v22 = v62;
    }
    ptr = v22;
    HIDWORD(v68) = v50;
  }
  else
  {
    v22 = ptr;
  }
  v23 = *(_QWORD *)a2;
  v22[v20] = v21;
  v24 = *v22;
  v25 = *(unsigned int *)(a2 + 96);
  LODWORD(v68) = v20 + 1;
  v63[0] = v24;
  v64 = v23;
  v65 = nullptr;
  v26 = sub_15D2690(v23, v25);
  v27 = sub_15FA930(v26, 1, (unsigned int)v63, *(_DWORD *)(a1 + 12), v9, (unsigned int)&v64, v58, (unsigned int)&v64);
  v28 = *(_QWORD **)(a2 + 176);
  v29 = v27;
  if ( v28 )
  {
    v30 = *((_DWORD *)v28 - 1);
    if ( v30 == *((_DWORD *)v28 - 2) )
    {
      v45 = (3 * v30 + 1) >> 1;
      v46 = 8 * v45 + 8;
      v47 = v45;
      if ( 8 * v30 + 8 >= (unsigned int)v46 || v30 >= v45 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v66, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v66);
        sub_233E40((__int64)v66);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v48 = (unsigned int *)sub_186B300(v28 - 1, v46);
      v49 = v48[1];
      v28 = v48 + 2;
      *v48 = v47;
      *(_QWORD *)(a2 + 176) = v48 + 2;
      v33 = &v48[2 * v49 + 2];
      v32 = v49 + 1;
    }
    else
    {
      v31 = v30;
      v32 = v30 + 1;
      v33 = (unsigned int *)&v28[v31];
    }
  }
  else
  {
    v55 = (_QWORD *)sub_186B270(0x18u);
    v28 = v55 + 1;
    *v55 = 2;
    v32 = 1;
    *(_QWORD *)(a2 + 176) = v28;
    v33 = (unsigned int *)v28;
  }
  *(_QWORD *)v33 = *(_QWORD *)(a1 + 24);
  *((_DWORD *)v28 - 1) = v32;
  if ( !(_BYTE)v29 || *(_DWORD *)(a1 + 12) )
  {
LABEL_21:
    v34 = v65;
    if ( !v65 )
      goto LABEL_30;
    goto LABEL_22;
  }
  v44 = *(_QWORD *)(a2 + 104);
  v34 = v65;
  if ( v44 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v44 + 16LL))(v44, *v65, a1);
    goto LABEL_21;
  }
LABEL_22:
  v35 = &v34[*((unsigned int *)v34 - 1)];
  if ( v34 >= v35 )
    goto LABEL_29;
  do
  {
    while ( 1 )
    {
      v36 = *v34;
      if ( *v34 )
      {
        v37 = v64;
        v38 = (*(_DWORD *)(v36 + 8))-- == 1;
        if ( v38 )
          break;
      }
      if ( ++v34 >= v35 )
        goto LABEL_28;
    }
    sub_15D7BC0(v37, v36);
    ++v34;
  }
  while ( v34 < v35 );
LABEL_28:
  v34 = v65;
  if ( v65 )
LABEL_29:
    sub_186B220(v34 - 1);
LABEL_30:
  if ( ptr != v69 && ptr )
    sub_186B220(ptr);
  if ( v9 )
  {
    v39 = (__int64 *)v9;
    v40 = v9 + 8LL * *(unsigned int *)(v9 - 4);
    if ( v9 < v40 )
    {
      do
      {
        while ( 1 )
        {
          v41 = *v39;
          if ( *v39 )
          {
            v38 = (*(_DWORD *)(v41 + 8))-- == 1;
            if ( v38 )
              break;
          }
          if ( (unsigned __int64)++v39 >= v40 )
            goto LABEL_40;
        }
        ++v39;
        sub_15D7BC0(v61, v41);
      }
      while ( (unsigned __int64)v39 < v40 );
    }
LABEL_40:
    sub_186B220((void *)(v9 - 8));
  }
  return v29;
}

