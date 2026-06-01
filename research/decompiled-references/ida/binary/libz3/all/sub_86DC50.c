__int64 __fastcall sub_86DC50(__int64 a1, unsigned int a2, unsigned int a3)
{
  char **v3; // rbp
  char **exception; // rbp
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // r13
  unsigned int v11; // r12d
  __int64 v12; // r15
  __int64 v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // r12
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 *v19; // rcx
  unsigned int v21; // edx
  size_t v22; // rsi
  unsigned int v23; // r15d
  unsigned int *v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r15
  _QWORD *v28; // rax
  unsigned int v29; // r14d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  unsigned int v35; // [rsp+8h] [rbp-70h]
  _QWORD *v36; // [rsp+8h] [rbp-70h]
  __int64 v37[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = a3 >> 1;
  v7 = sub_7E4EC0(a1);
  v8 = sub_180C100(v7, 40);
  *(_OWORD *)(v8 + 8) = 0;
  v9 = *(_QWORD **)(a1 + 624);
  v10 = v8;
  *(_DWORD *)v8 = v6;
  *(_QWORD *)(v8 + 24) = 0;
  *(_DWORD *)(v8 + 32) = a3;
  *(_DWORD *)(v8 + 36) = a2;
  if ( v9 )
  {
    v11 = v6 + 1;
    v35 = *((_DWORD *)v9 - 1);
    if ( v6 < v35 )
      goto LABEL_3;
  }
  else
  {
    v11 = v6 + 1;
    v28 = (_QWORD *)sub_186B270(0x18u);
    v35 = 0;
    v9 = v28 + 1;
    *v28 = 2;
    *(_QWORD *)(a1 + 624) = v28 + 1;
  }
  while ( 1 )
  {
    v25 = *((_DWORD *)v9 - 2);
    if ( v25 >= v11 )
      break;
    v21 = (3 * v25 + 1) >> 1;
    v22 = 8 * v21 + 8;
    v23 = v21;
    if ( 8 * v25 + 8 >= (unsigned int)v22 || v25 >= v21 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v37, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v37);
      sub_233E40((__int64)v37);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v24 = (unsigned int *)sub_186B300(v9 - 1, v22);
    v9 = v24 + 2;
    *v24 = v23;
    *(_QWORD *)(a1 + 624) = v24 + 2;
  }
  *((_DWORD *)v9 - 1) = v11;
  v26 = 8LL * v11;
  v27 = 8LL * v35;
  if ( v27 != v26 )
  {
    v36 = v9;
    memset(&v9[(unsigned __int64)v27 / 8], 0, v26 - v27);
    v9 = v36;
  }
LABEL_3:
  v12 = *(_QWORD *)(a1 + 80);
  v9[v6] = v10;
  v13 = sub_180C100(v12 + 2144, 24);
  v14 = *(_QWORD **)(v12 + 2128);
  v15 = v13;
  *(_QWORD *)v13 = off_1C556D8;
  *(_QWORD *)(v13 + 8) = a1;
  *(_DWORD *)(v13 + 16) = v6;
  if ( v14 )
  {
    v16 = *((_DWORD *)v14 - 1);
    if ( v16 == *((_DWORD *)v14 - 2) )
    {
      v29 = (3 * v16 + 1) >> 1;
      v30 = 8 * v29 + 8;
      if ( 8 * v16 + 8 >= (unsigned int)v30 || v16 >= v29 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v37, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v37);
        sub_233E40((__int64)v37);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v31 = (unsigned int *)sub_186B300(v14 - 1, v30);
      v32 = v31[1];
      v14 = v31 + 2;
      *(_QWORD *)(v12 + 2128) = v31 + 2;
      *v31 = v29;
      LODWORD(v31) = v32;
      v19 = &v14[v32];
      v18 = (_DWORD)v31 + 1;
    }
    else
    {
      v17 = v16;
      v18 = v16 + 1;
      v19 = &v14[v17];
    }
  }
  else
  {
    v33 = (_QWORD *)sub_186B270(0x18u);
    v14 = v33 + 1;
    *v33 = 2;
    v18 = 1;
    *(_QWORD *)(v12 + 2128) = v14;
    v19 = v14;
  }
  *v19 = v15;
  *((_DWORD *)v14 - 1) = v18;
  sub_7E5400(a1, a3, a2 ^ 1, nullptr);
  return sub_7E5400(a1, a2, a3 ^ 1, nullptr);
}

