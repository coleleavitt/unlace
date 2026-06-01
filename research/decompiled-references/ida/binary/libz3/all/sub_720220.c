__int64 __fastcall sub_720220(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4, __int64 *a5)
{
  __int64 v5; // r15
  int v6; // r8d
  int v7; // r9d
  __int64 *v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rbx
  unsigned __int64 v11; // r14
  _QWORD *v12; // rbp
  __int64 v13; // r13
  __int64 v14; // r12
  int v15; // eax
  _DWORD *v16; // rsi
  int v17; // eax
  _DWORD *v18; // rsi
  __int64 *v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 *v23; // rax
  __int64 *v24; // rcx
  __int64 v25; // rdx
  _QWORD *v26; // rax
  _DWORD *v27; // rdx
  unsigned int v29; // eax
  __int64 v30; // rsi
  int v31; // eax
  _QWORD *v32; // rsi
  unsigned int v33; // r12d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rsi
  _QWORD *v37; // rax
  char **exception; // r12
  __int64 v39; // [rsp+8h] [rbp-C0h]
  __int64 v40; // [rsp+8h] [rbp-C0h]
  __int64 v45; // [rsp+30h] [rbp-98h]
  __m128i v47; // [rsp+50h] [rbp-78h] BYREF
  __int64 *v48; // [rsp+60h] [rbp-68h]
  __int64 v49[11]; // [rsp+70h] [rbp-58h] BYREF

  v5 = *a2;
  v45 = *(_QWORD *)(*(_QWORD *)(*a2 + 16) + 40LL);
  sub_6AA8D0(&v47, *(_QWORD *)(a1 + 8), *a4);
  v8 = v48;
  if ( !v48 )
    goto LABEL_40;
  v9 = *((unsigned int *)v48 - 1);
  if ( !(_DWORD)v9 )
  {
    sub_186B220(v48 - 1);
LABEL_40:
    v26 = (_QWORD *)sub_15F6BE0(a1 + 32, v45);
    goto LABEL_26;
  }
  v10 = 8 * v9;
  v11 = 0;
  v12 = nullptr;
  v39 = a1 + 32;
  do
  {
    while ( 1 )
    {
      v13 = v8[v11 / 8];
      if ( !*(_WORD *)(v13 + 4) )
        break;
      v11 += 8LL;
      if ( v10 == v11 )
        goto LABEL_11;
    }
    v14 = *(_QWORD *)(v13 + 16);
    v15 = sub_15F0200(v39);
    v16 = *(_DWORD **)(v14 + 24);
    if ( v16 && v15 == *v16 && v16[1] == 1 )
    {
      if ( !v12 )
        goto LABEL_38;
      goto LABEL_30;
    }
    v17 = sub_15F0200(v39);
    v18 = *(_DWORD **)(v14 + 24);
    if ( v18 && v17 == *v18 && v18[1] == 2 )
    {
      if ( !v12 )
      {
LABEL_38:
        v37 = (_QWORD *)sub_186B270(0x18u);
        v12 = v37 + 1;
        *v37 = 2;
        v31 = 1;
        v32 = v12;
LABEL_32:
        *v32 = v13;
        *((_DWORD *)v12 - 1) = v31;
        goto LABEL_10;
      }
LABEL_30:
      v29 = *((_DWORD *)v12 - 1);
      if ( v29 == *((_DWORD *)v12 - 2) )
      {
        v33 = (3 * v29 + 1) >> 1;
        v34 = 8 * v33 + 8;
        if ( 8 * v29 + 8 >= (unsigned int)v34 || v29 >= v33 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v49, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v49);
          sub_233E40((__int64)v49);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v35 = (unsigned int *)sub_186B300(v12 - 1, v34);
        v36 = v35[1];
        v12 = v35 + 2;
        *v35 = v33;
        LODWORD(v35) = v36;
        v32 = &v12[v36];
        v31 = (_DWORD)v35 + 1;
      }
      else
      {
        v30 = v29;
        v31 = v29 + 1;
        v32 = &v12[v30];
      }
      goto LABEL_32;
    }
LABEL_10:
    v11 += 8LL;
    v8 = v48;
  }
  while ( v10 != v11 );
LABEL_11:
  if ( v8 )
  {
    v19 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v19 )
      goto LABEL_19;
    do
    {
      while ( 1 )
      {
        v20 = *v8;
        if ( *v8 )
        {
          v21 = v47.m128i_i64[1];
          if ( (*(_DWORD *)(v20 + 8))-- == 1 )
            break;
        }
        if ( ++v8 >= v19 )
          goto LABEL_18;
      }
      sub_15D7BC0(v21, v20);
      ++v8;
    }
    while ( v8 < v19 );
LABEL_18:
    v8 = v48;
    if ( v48 )
LABEL_19:
      sub_186B220(v8 - 1);
  }
  if ( !v12 )
  {
LABEL_25:
    v26 = (_QWORD *)sub_15F6BE0(v39, v45);
LABEL_26:
    v27 = *(_DWORD **)(*v26 + 8LL * (unsigned int)sub_182D020(qword_1C7F2C0, a3));
    return sub_71F3C0(a1, a2, v27, (__int64)a4, a5);
  }
  v23 = v12;
  v24 = &v12[*((unsigned int *)v12 - 1)];
  do
  {
    if ( v23 == v24 )
    {
      sub_186B220(v12 - 1);
      goto LABEL_25;
    }
    v25 = *v23++;
  }
  while ( v5 != *(_QWORD *)(v25 + 32) );
  v40 = sub_15F0BB0(v39, *(_QWORD *)(v25 + 16), v25, (_DWORD)v24, v6, v7);
  sub_186B220(v12 - 1);
  v27 = (_DWORD *)v40;
  return sub_71F3C0(a1, a2, v27, (__int64)a4, a5);
}

