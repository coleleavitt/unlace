__int64 __fastcall sub_AC3200(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  char **v6; // rbp
  __int64 v7; // rdx
  char **v8; // rbp
  __int64 v9; // rdx
  char **exception; // rbp
  __int64 v11; // rdx
  unsigned int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // r12
  _QWORD *i; // rbp
  __int64 v23; // rax
  unsigned int *v24; // rsi
  unsigned int *v25; // rdx
  __int64 v26; // rax
  unsigned int *v27; // rax
  int v28; // esi
  _QWORD *v29; // rdx
  __int64 v30; // rax
  unsigned int *v31; // rsi
  unsigned int v32; // r10d
  size_t v33; // rsi
  unsigned int *v34; // rax
  size_t v35; // rsi
  unsigned int *v36; // rax
  void *v37; // rbx
  size_t v39; // rsi
  unsigned int *v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // [rsp+0h] [rbp-B8h]
  unsigned int **v45; // [rsp+0h] [rbp-B8h]
  unsigned int v46; // [rsp+Ch] [rbp-ACh]
  unsigned int v47; // [rsp+2Ch] [rbp-8Ch] BYREF
  __int64 v48; // [rsp+30h] [rbp-88h] BYREF
  __int64 v49; // [rsp+38h] [rbp-80h]
  int v50[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v51; // [rsp+48h] [rbp-70h]
  _QWORD v52[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v53[11]; // [rsp+60h] [rbp-58h] BYREF

  *(_QWORD *)v50 = 0;
  v51 = 0;
  v52[0] = 1;
  v52[1] = 0;
  v47 = 0;
  if ( !(unsigned __int8)sub_1673B50((int)a1 + 80, (_DWORD)a2, (unsigned int)v50, (unsigned int)&v47, a5, a6) )
  {
    sub_1872CE0("");
    sub_1873130(114, 566);
  }
  v17 = sub_AB3F30(a1, a2, v13, v14, v15, v16);
  v18 = sub_B39350(v17, *(unsigned int *)(a1 + 8));
  v19 = *(_QWORD *)(a1 + 24);
  v49 = 0;
  v48 = v19;
  sub_FD9D80(a1 + 120, v50, v47, &v48);
  v20 = 0;
  v21 = 8LL * v18;
  for ( i = (_QWORD *)(v21 + *(_QWORD *)(a1 + 504)); (unsigned int)v20 < v47; ++*(v25 - 1) )
  {
    v29 = (_QWORD *)*i;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 856LL) == *(_QWORD *)(v49 + 8 * v20) )
    {
      if ( v29 )
      {
        v30 = *((unsigned int *)v29 - 1);
        v31 = (unsigned int *)v29 + v30;
        if ( (_DWORD)v30 == *((_DWORD *)v29 - 2) )
        {
          v12 = (unsigned int)(3 * v30 + 1) >> 1;
          v39 = 4 * v12 + 8;
          if ( 4 * (int)v30 + 8 >= (unsigned int)v39 || (unsigned int)v30 >= v12 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_139F3A(v53, "Overflow encountered when expanding vector", v11);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v53);
            sub_233E40((__int64)v53);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v40 = (unsigned int *)sub_186B300(v29 - 1, v39);
          v29 = v40 + 2;
          *i = v40 + 2;
          *v40 = v12;
          v31 = &v40[v40[1] + 2];
        }
      }
      else
      {
        v43 = (_QWORD *)sub_186B270(0x10u);
        v29 = v43 + 1;
        *v43 = 2;
        v31 = (unsigned int *)(v43 + 1);
        *i = v43 + 1;
      }
      *v31 = dword_1C7ECF4;
      ++*((_DWORD *)v29 - 1);
    }
    else
    {
      if ( v29 )
      {
        v23 = *((unsigned int *)v29 - 1);
        v24 = (unsigned int *)v29 + v23;
        if ( (_DWORD)v23 == *((_DWORD *)v29 - 2) )
        {
          v12 = (unsigned int)(3 * v23 + 1) >> 1;
          v35 = 4 * v12 + 8;
          if ( 4 * (int)v23 + 8 >= (unsigned int)v35 || (unsigned int)v23 >= v12 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_139F3A(v53, "Overflow encountered when expanding vector", v7);
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v53);
            sub_233E40((__int64)v53);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v36 = (unsigned int *)sub_186B300(v29 - 1, v35);
          v29 = v36 + 2;
          *i = v36 + 2;
          *v36 = v12;
          v24 = &v36[v36[1] + 2];
        }
      }
      else
      {
        v42 = (_QWORD *)sub_186B270(0x10u);
        v29 = v42 + 1;
        *v42 = 2;
        v24 = (unsigned int *)(v42 + 1);
        *i = v42 + 1;
      }
      *v24 = dword_1C7ECF0;
      ++*((_DWORD *)v29 - 1);
    }
    LOBYTE(v12) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 504) + 8LL * v18) + 4 * v20) == dword_1C7ECF4;
    v25 = *(unsigned int **)(v21 + *(_QWORD *)(a1 + 528));
    if ( v25 )
    {
      v26 = *(v25 - 1);
      if ( (_DWORD)v26 == *(v25 - 2) )
      {
        v32 = (unsigned int)(3 * v26 + 1) >> 1;
        v33 = 8 * v32 + 8;
        if ( 8 * (int)v26 + 8 >= (unsigned int)v33 || (unsigned int)v26 >= v32 )
        {
          v8 = (char **)__cxa_allocate_exception(0x28u);
          sub_139F3A(v53, "Overflow encountered when expanding vector", v9);
          *v8 = (char *)off_1C63128;
          sub_2333C0(v8 + 1, v53);
          sub_233E40((__int64)v53);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v46 = (unsigned int)(3 * v26 + 1) >> 1;
        v44 = (_QWORD *)(v21 + *(_QWORD *)(a1 + 528));
        v34 = (unsigned int *)sub_186B300(v25 - 2, v33);
        v25 = v34 + 2;
        *v44 = v34 + 2;
        *v34 = v46;
        v27 = &v34[2 * v34[1] + 2];
      }
      else
      {
        v27 = &v25[2 * v26];
      }
    }
    else
    {
      v45 = (unsigned int **)(v21 + *(_QWORD *)(a1 + 528));
      v41 = (_QWORD *)sub_186B270(0x18u);
      v25 = (unsigned int *)(v41 + 1);
      *v41 = 2;
      v27 = v25;
      *v45 = v25;
    }
    v28 = v20;
    *v27 = v18;
    ++v20;
    v12 = v28 & 0x7FFFFFFF | (v12 << 31);
    v27[1] = v12;
  }
  sub_ABCC10(a1, v18);
  sub_2334C0(&v48);
  v37 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v50);
  return sub_182CBA0(v37, v52);
}

