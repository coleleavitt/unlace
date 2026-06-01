__int64 __fastcall sub_648530(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **v3; // rbp
  char **exception; // rbp
  char **v5; // rbp
  __int64 v7; // rbp
  _QWORD *v8; // rdx
  __int64 v9; // r12
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rax
  _DWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  _DWORD *v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // r12
  unsigned int v23; // eax
  unsigned int v24; // r14d
  size_t v25; // rsi
  unsigned int *v26; // rax
  unsigned __int64 *v27; // rcx
  __int64 v28; // rsi
  unsigned __int64 *v29; // rsi
  int v30; // eax
  _QWORD *v31; // rax
  unsigned int v32; // r12d
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rax
  _QWORD *v37; // rax
  unsigned int v38; // ebx
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rcx
  unsigned int v42; // ebx
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  char v48; // [rsp+Eh] [rbp-4Ah] BYREF
  __int64 v49[9]; // [rsp+10h] [rbp-48h] BYREF

  v7 = a2;
  v8 = *(_QWORD **)(a1 + 208);
  v9 = *(_QWORD *)(a2 + 40);
  if ( v8 )
  {
    v10 = *((_DWORD *)v8 - 1);
    if ( v10 == *((_DWORD *)v8 - 2) )
    {
      v38 = (3 * v10 + 1) >> 1;
      v39 = 8 * v38 + 8;
      if ( 8 * v10 + 8 >= (unsigned int)v39 || v10 >= v38 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v49, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v49);
        sub_233E40((__int64)v49);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v40 = (unsigned int *)sub_186B300(v8 - 1, v39);
      v41 = v40[1];
      v8 = v40 + 2;
      *v40 = v38;
      *(_QWORD *)(a1 + 208) = v40 + 2;
      LODWORD(v40) = v41;
      v13 = &v8[v41];
      v12 = (_DWORD)v40 + 1;
    }
    else
    {
      v11 = v10;
      v12 = v10 + 1;
      v13 = &v8[v11];
    }
  }
  else
  {
    v46 = (_QWORD *)sub_186B270(0x18u);
    v8 = v46 + 1;
    *v46 = 2;
    v12 = 1;
    *(_QWORD *)(a1 + 208) = v8;
    v13 = v8;
  }
  *v13 = v9;
  *((_DWORD *)v8 - 1) = v12;
  v14 = *(_QWORD **)(a1 + 216);
  if ( v14 )
  {
    v15 = *((unsigned int *)v14 - 1);
    if ( (_DWORD)v15 == *((_DWORD *)v14 - 2) )
    {
      v42 = (unsigned int)(3 * v15 + 1) >> 1;
      v43 = 4 * v42 + 8;
      if ( 4 * (int)v15 + 8 >= (unsigned int)v43 || (unsigned int)v15 >= v42 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v49, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v49);
        sub_233E40((__int64)v49);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v44 = (unsigned int *)sub_186B300(v14 - 1, v43);
      v14 = v44 + 2;
      *v44 = v42;
      v45 = v44[1];
      *(_QWORD *)(a1 + 216) = v14;
      v16 = (_DWORD *)v14 + v45;
    }
    else
    {
      v16 = (_DWORD *)v14 + v15;
    }
  }
  else
  {
    v47 = (_QWORD *)sub_186B270(0x10u);
    v14 = v47 + 1;
    *v47 = 2;
    *(_QWORD *)(a1 + 216) = v47 + 1;
    v16 = v47 + 1;
  }
  *v16 = 0;
  ++*((_DWORD *)v14 - 1);
  v17 = *(unsigned int *)(v7 + 56);
  v48 = 0;
  if ( (_DWORD)v17 )
  {
    v18 = v7 + 8 * v17;
    do
    {
      v21 = *(_QWORD *)(a1 + 208);
      v22 = *(_QWORD *)(v7 + 80) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v21 )
      {
        v23 = *(_DWORD *)(v21 - 4);
        if ( v23 != *(_DWORD *)(v21 - 8) )
        {
          *(_QWORD *)(v21 + 8LL * v23) = v22;
          *(_DWORD *)(v21 - 4) = v23 + 1;
LABEL_10:
          v19 = *((unsigned int *)v14 - 1);
          if ( (_DWORD)v19 == *((_DWORD *)v14 - 2) )
          {
            v32 = (unsigned int)(3 * v19 + 1) >> 1;
            v33 = 4 * v32 + 8;
            if ( 4 * (int)v19 + 8 >= (unsigned int)v33 || (unsigned int)v19 >= v32 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v49, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, v49);
              sub_233E40((__int64)v49);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v34 = (unsigned int *)sub_186B300(v14 - 1, v33);
            v14 = v34 + 2;
            *v34 = v32;
            v35 = v34[1];
            *(_QWORD *)(a1 + 216) = v14;
            v20 = (_DWORD *)v14 + v35;
          }
          else
          {
            v20 = (_DWORD *)v14 + v19;
          }
          goto LABEL_12;
        }
        v24 = (3 * v23 + 1) >> 1;
        v25 = 8 * v24 + 8;
        if ( 8 * v23 + 8 >= (unsigned int)v25 || v23 >= v24 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v49, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v49);
          sub_233E40((__int64)v49);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v26 = (unsigned int *)sub_186B300((void *)(v21 - 8), v25);
        v14 = *(_QWORD **)(a1 + 216);
        v27 = (unsigned __int64 *)(v26 + 2);
        v28 = v26[1];
        *v26 = v24;
        *(_QWORD *)(a1 + 208) = v26 + 2;
        LODWORD(v26) = v28;
        v29 = &v27[v28];
        v30 = (_DWORD)v26 + 1;
      }
      else
      {
        v37 = (_QWORD *)sub_186B270(0x18u);
        v14 = *(_QWORD **)(a1 + 216);
        v27 = v37 + 1;
        *v37 = 2;
        v30 = 1;
        *(_QWORD *)(a1 + 208) = v27;
        v29 = v27;
      }
      *v29 = v22;
      *((_DWORD *)v27 - 1) = v30;
      if ( v14 )
        goto LABEL_10;
      v31 = (_QWORD *)sub_186B270(0x10u);
      v14 = v31 + 1;
      *v31 = 2;
      *(_QWORD *)(a1 + 216) = v31 + 1;
      v20 = v31 + 1;
LABEL_12:
      v7 += 8;
      *v20 = 0;
      ++*((_DWORD *)v14 - 1);
    }
    while ( v7 != v18 );
  }
  return sub_148C160(a1, &v48);
}

