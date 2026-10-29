__int64 __fastcall sub_237E20(_QWORD *a1, unsigned int *a2, __int64 a3)
{
  __int64 v6; // r12
  _QWORD *v7; // rcx
  unsigned int v8; // r13d
  __int64 v9; // r12
  __int64 *v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  _QWORD *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  _QWORD *v18; // rcx
  _QWORD *v19; // r12
  _QWORD *v20; // rax
  _QWORD *v21; // r12
  int v22; // ebp
  __int64 v23; // rax
  __int64 result; // rax
  unsigned int v25; // edx
  size_t v26; // rsi
  unsigned int v27; // r15d
  unsigned int *v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r15
  _QWORD *v32; // rax
  unsigned int v33; // r12d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  char **exception; // rbp
  __int64 v39; // rdx
  _QWORD *v40; // [rsp+0h] [rbp-68h]
  unsigned int v41; // [rsp+8h] [rbp-60h]
  _QWORD *v42; // [rsp+8h] [rbp-60h]
  __int64 v43[11]; // [rsp+10h] [rbp-58h] BYREF

  v6 = *a2;
  v7 = (_QWORD *)a1[11];
  v40 = a1 + 10;
  v8 = v6 + 1;
  if ( v7 )
  {
    v41 = *((_DWORD *)v7 - 1);
    if ( v41 < v8 )
      goto LABEL_14;
  }
  else if ( (_DWORD)v6 != -1 )
  {
    v37 = (_QWORD *)sub_186B270(0x18u);
    v41 = 0;
    v7 = v37 + 1;
    *v37 = 2;
    a1[11] = v37 + 1;
LABEL_14:
    while ( 1 )
    {
      v29 = *((_DWORD *)v7 - 2);
      if ( v29 >= v8 )
        break;
      v25 = (3 * v29 + 1) >> 1;
      v26 = 8 * v25 + 8;
      v27 = v25;
      if ( 8 * v29 + 8 >= (unsigned int)v26 || v29 >= v25 )
        goto LABEL_24;
      v28 = (unsigned int *)sub_186B300(v7 - 1, v26);
      v7 = v28 + 2;
      *v28 = v27;
      a1[11] = v28 + 2;
    }
    *((_DWORD *)v7 - 1) = v8;
    v30 = 8LL * v8;
    v31 = 8LL * v41;
    if ( v31 != v30 )
    {
      v42 = v7;
      memset(&v7[(unsigned __int64)v31 / 8], 0, v30 - v31);
      v7 = v42;
    }
  }
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v9 = v6;
  v10 = &v7[v9];
  v11 = *v10;
  if ( !*v10 || (v12 = a1[10], v13 = *(_DWORD *)(v11 + 8) == 1, --*(_DWORD *)(v11 + 8), !v13) )
  {
    v14 = (_QWORD *)a1[9];
    *v10 = a3;
    ++a2[2];
    if ( v14 )
      goto LABEL_8;
LABEL_18:
    v32 = (_QWORD *)sub_186B270(0x18u);
    v14 = v32 + 1;
    *v32 = 2;
    v17 = 1;
    a1[9] = v14;
    v18 = v14;
    goto LABEL_10;
  }
  sub_15D7BC0(v12, v11);
  v14 = (_QWORD *)a1[9];
  *(_QWORD *)(v9 * 8 + a1[11]) = a3;
  ++a2[2];
  if ( !v14 )
    goto LABEL_18;
LABEL_8:
  v15 = *((_DWORD *)v14 - 1);
  if ( v15 == *((_DWORD *)v14 - 2) )
  {
    v33 = (3 * v15 + 1) >> 1;
    v34 = 8 * v33 + 8;
    if ( 8 * v15 + 8 >= (unsigned int)v34 || v15 >= v33 )
    {
LABEL_24:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_A3E10(v43, "Overflow encountered when expanding vector", v39);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v43);
      sub_233E40((__int64)v43);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v35 = (unsigned int *)sub_186B300(v14 - 1, v34);
    v36 = v35[1];
    v14 = v35 + 2;
    *v35 = v33;
    a1[9] = v35 + 2;
    LODWORD(v35) = v36;
    v18 = &v14[v36];
    v17 = (_DWORD)v35 + 1;
  }
  else
  {
    v16 = v15;
    v17 = v15 + 1;
    v18 = &v14[v16];
  }
LABEL_10:
  v19 = (_QWORD *)a1[3];
  *v18 = a2;
  *((_DWORD *)v14 - 1) = v17;
  v20 = (_QWORD *)sub_180C100(v19 + 2, 16);
  v20[1] = a1 + 8;
  *v20 = off_1C4C490;
  v43[0] = (__int64)v20;
  sub_22FEE0(v19, v43);
  v21 = (_QWORD *)a1[3];
  v22 = *a2;
  v23 = sub_180C100(v21 + 2, 24);
  *(_DWORD *)(v23 + 16) = v22;
  *(_QWORD *)v23 = off_1C4C4E0;
  *(_QWORD *)(v23 + 8) = v40;
  v43[0] = v23;
  sub_22FEE0(v21, v43);
  result = a1[12];
  --*(_DWORD *)(result - 4);
  return result;
}

