__int64 __fastcall sub_3E6600(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _QWORD *a5, __int64 a6)
{
  char **exception; // r14
  char **v7; // r14
  char **v8; // r14
  __int64 v10; // r13
  __int64 v13; // r15
  _QWORD *v14; // rax
  _DWORD *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned int v19; // edx
  __int64 v20; // rax
  unsigned int v21; // edx
  _QWORD *v22; // r13
  _DWORD *v23; // rcx
  _QWORD *v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rsi
  int v27; // eax
  _QWORD *v28; // rsi
  __int64 v29; // rdx
  unsigned int v30; // eax
  unsigned int v31; // ecx
  size_t v32; // rsi
  unsigned int *v33; // rax
  unsigned int v34; // r8d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rsi
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // r12
  __int64 v41; // rsi
  __int64 v42; // rdi
  _QWORD *v45; // rax
  unsigned int v46; // r9d
  size_t v47; // rsi
  void *v48; // rdi
  unsigned int *v49; // rax
  _DWORD *ptr; // [rsp+0h] [rbp-78h]
  void *ptra; // [rsp+0h] [rbp-78h]
  void *ptrb; // [rsp+0h] [rbp-78h]
  unsigned int ptrc; // [rsp+0h] [rbp-78h]
  _DWORD *ptrd; // [rsp+0h] [rbp-78h]
  void *ptre; // [rsp+0h] [rbp-78h]
  unsigned int v56; // [rsp+Ch] [rbp-6Ch]
  unsigned int v57; // [rsp+Ch] [rbp-6Ch]
  unsigned int v58; // [rsp+Ch] [rbp-6Ch]
  __int64 v59[11]; // [rsp+20h] [rbp-58h] BYREF

  v10 = a4;
  *(_QWORD *)a1 = a6;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a6;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 24) = a3;
  *(_QWORD *)(a1 + 32) = a6;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  *(_DWORD *)(a1 + 40) = a4;
  *(_QWORD *)(a1 + 48) = a6;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = a6;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = a6;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = a6;
  sub_1684300(a1 + 112, a6);
  v13 = sub_15D1F10(*(_QWORD *)(a1 + 8));
  v14 = (_QWORD *)sub_186B270(0x18u);
  v14[1] = v13;
  v15 = v14 + 1;
  v16 = *(_QWORD *)(a1 + 24);
  ptr = v14;
  *v14 = 0x100000002LL;
  v17 = sub_15D1F10(v16);
  v18 = v17;
  v19 = ptr[1];
  if ( v19 == *ptr )
  {
    v46 = (3 * v19 + 1) >> 1;
    v47 = 8 * v46 + 8;
    if ( 8 * v19 + 8 >= (unsigned int)v47 || v19 >= v46 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v59, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v59);
      sub_233E40((__int64)v59);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v48 = ptr;
    v58 = (3 * v19 + 1) >> 1;
    ptre = (void *)v17;
    v49 = (unsigned int *)sub_186B300(v48, v47);
    v19 = v49[1];
    v15 = v49 + 2;
    v18 = (__int64)ptre;
    *v49 = v58;
  }
  v20 = v19;
  v21 = v19 + 1;
  *(_QWORD *)&v15[2 * v20] = v18;
  *(v15 - 1) = v21;
  if ( (_DWORD)v10 )
  {
    v22 = &a5[v10];
    while ( 1 )
    {
      v29 = sub_15D1F10(*a5);
      v30 = *(v15 - 1);
      if ( v30 == *(v15 - 2) )
      {
        v31 = (3 * v30 + 1) >> 1;
        v32 = 8 * v31 + 8;
        if ( 8 * v30 + 8 >= (unsigned int)v32 || v30 >= v31 )
        {
          v8 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v59, "Overflow encountered when expanding vector");
          *v8 = (char *)off_1C63128;
          sub_2333C0(v8 + 1, v59);
          sub_233E40((__int64)v59);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v56 = (3 * v30 + 1) >> 1;
        ptra = (void *)v29;
        v33 = (unsigned int *)sub_186B300(v15 - 2, v32);
        v15 = v33 + 2;
        v29 = (__int64)ptra;
        *v33 = v56;
        v30 = v33[1];
      }
      *(_QWORD *)&v15[2 * v30] = v29;
      v23 = (_DWORD *)*a5;
      *(v15 - 1) = v30 + 1;
      if ( v23 )
        ++v23[2];
      v24 = *(_QWORD **)(a1 + 56);
      if ( !v24 )
        break;
      v25 = *((_DWORD *)v24 - 1);
      if ( v25 == *((_DWORD *)v24 - 2) )
      {
        v34 = (3 * v25 + 1) >> 1;
        v35 = 8 * v34 + 8;
        if ( 8 * v25 + 8 >= (unsigned int)v35 || v25 >= v34 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v59, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, v59);
          sub_233E40((__int64)v59);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v57 = (3 * v25 + 1) >> 1;
        ptrb = v23;
        v36 = (unsigned int *)sub_186B300(v24 - 1, v35);
        v37 = v36[1];
        ++a5;
        *(_QWORD *)(a1 + 56) = v36 + 2;
        *v36 = v57;
        *(_QWORD *)&v36[2 * v37 + 2] = ptrb;
        v36[1] = v37 + 1;
        if ( v22 == a5 )
        {
LABEL_21:
          v21 = *(v15 - 1);
          goto LABEL_22;
        }
      }
      else
      {
        v26 = v25;
        v27 = v25 + 1;
        v28 = &v24[v26];
LABEL_13:
        ++a5;
        *v28 = v23;
        *((_DWORD *)v24 - 1) = v27;
        if ( v22 == a5 )
          goto LABEL_21;
      }
    }
    ptrd = v23;
    v45 = (_QWORD *)sub_186B270(0x18u);
    v24 = v45 + 1;
    *v45 = 2;
    v23 = ptrd;
    v27 = 1;
    *(_QWORD *)(a1 + 56) = v24;
    v28 = v24;
    goto LABEL_13;
  }
LABEL_22:
  ptrc = v21;
  v38 = *(_QWORD *)(a6 + 840);
  sub_180C5A0(v59, s);
  v39 = sub_15E3510(a6, v59, ptrc, v15, v38, 0);
  v40 = v39;
  if ( v39 )
    ++*(_DWORD *)(v39 + 8);
  v41 = *(_QWORD *)(a1 + 64);
  if ( v41 )
  {
    v42 = *(_QWORD *)(a1 + 72);
    if ( (*(_DWORD *)(v41 + 8))-- == 1 )
      sub_15D7BC0(v42, v41);
  }
  *(_QWORD *)(a1 + 64) = v40;
  return sub_186B220(v15 - 2);
}

