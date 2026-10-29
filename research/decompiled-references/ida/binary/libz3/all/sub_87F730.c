__int64 __fastcall sub_87F730(_DWORD *a1, __int64 a2, int a3)
{
  char **v3; // rbp
  char **exception; // rbp
  __int64 v5; // r13
  __int64 v8; // r14
  _QWORD *v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 *v13; // rcx
  int v14; // r14d
  __int64 v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // r13
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 *v21; // rcx
  int v22; // eax
  __int64 result; // rax
  unsigned int v24; // ecx
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // r14d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  int v34; // [rsp+Ch] [rbp-6Ch]
  unsigned int v35; // [rsp+Ch] [rbp-6Ch]
  __int64 v36[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = a2 + 2144;
  v34 = a1[8];
  v8 = sub_180C100(a2 + 2144, 24);
  *(_QWORD *)v8 = &off_1C4C070;
  *(_DWORD *)(v8 + 16) = v34;
  v9 = *(_QWORD **)(a2 + 2128);
  *(_QWORD *)(v8 + 8) = a1 + 8;
  if ( v9 )
  {
    v10 = *((_DWORD *)v9 - 1);
    if ( v10 == *((_DWORD *)v9 - 2) )
    {
      v24 = (3 * v10 + 1) >> 1;
      v25 = 8 * v24 + 8;
      if ( 8 * v10 + 8 >= (unsigned int)v25 || v10 >= v24 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v36, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v36);
        sub_233E40((__int64)v36);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v35 = (3 * v10 + 1) >> 1;
      v26 = (unsigned int *)sub_186B300(v9 - 1, v25);
      v9 = v26 + 2;
      *v26 = v35;
      v27 = v26[1];
      *(_QWORD *)(a2 + 2128) = v26 + 2;
      LODWORD(v26) = v27;
      v13 = &v9[v27];
      v12 = (_DWORD)v26 + 1;
    }
    else
    {
      v11 = v10;
      v12 = v10 + 1;
      v13 = &v9[v11];
    }
  }
  else
  {
    v32 = (_QWORD *)sub_186B270(0x18u);
    v9 = v32 + 1;
    *v32 = 2;
    v12 = 1;
    *(_QWORD *)(a2 + 2128) = v9;
    v13 = v9;
  }
  *v13 = v8;
  *((_DWORD *)v9 - 1) = v12;
  v14 = a1[6];
  v15 = sub_180C100(v5, 24);
  v16 = *(_QWORD **)(a2 + 2128);
  *(_QWORD *)v15 = &off_1C4C070;
  v17 = v15;
  *(_QWORD *)(v15 + 8) = a1 + 6;
  *(_DWORD *)(v15 + 16) = v14;
  if ( v16 )
  {
    v18 = *((_DWORD *)v16 - 1);
    if ( v18 == *((_DWORD *)v16 - 2) )
    {
      v28 = (3 * v18 + 1) >> 1;
      v29 = 8 * v28 + 8;
      if ( 8 * v18 + 8 >= (unsigned int)v29 || v18 >= v28 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v36, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v36);
        sub_233E40((__int64)v36);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v30 = (unsigned int *)sub_186B300(v16 - 1, v29);
      v31 = v30[1];
      v16 = v30 + 2;
      *v30 = v28;
      *(_QWORD *)(a2 + 2128) = v30 + 2;
      LODWORD(v30) = v31;
      v21 = &v16[v31];
      v20 = (_DWORD)v30 + 1;
    }
    else
    {
      v19 = v18;
      v20 = v18 + 1;
      v21 = &v16[v19];
    }
  }
  else
  {
    v33 = (_QWORD *)sub_186B270(0x18u);
    v16 = v33 + 1;
    *v33 = 2;
    v20 = 1;
    *(_QWORD *)(a2 + 2128) = v16;
    v21 = v16;
  }
  *v21 = v17;
  *((_DWORD *)v16 - 1) = v20;
  v22 = a1[6];
  a1[4] = a3;
  a1[5] = v22;
  result = (unsigned int)a1[8];
  a1[7] = result;
  return result;
}

