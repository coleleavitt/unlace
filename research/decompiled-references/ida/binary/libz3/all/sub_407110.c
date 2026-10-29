__int64 __fastcall sub_407110(__int64 a1, __int64 a2, double a3)
{
  char **v3; // r15
  char **exception; // rbp
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbp
  _DWORD *v9; // rsi
  _DWORD *v10; // rbx
  unsigned int v11; // r13d
  _DWORD *v12; // r12
  unsigned int v13; // edx
  __int64 v14; // rax
  int v15; // edx
  _QWORD *v16; // rax
  unsigned int v17; // r15d
  unsigned int v18; // r13d
  unsigned int v20; // r15d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 *v27; // r12
  __int64 v28; // r13
  _QWORD *v29; // rax
  _QWORD *v30; // rbp
  unsigned int v31; // eax
  unsigned int v32; // edx
  _QWORD *v33; // rax
  __int64 v34; // rsi
  unsigned int v35; // r9d
  _QWORD *v36; // rax
  unsigned int v37; // r9d
  __int64 v38; // rsi
  int v39; // eax
  unsigned int v40; // r9d
  unsigned int v41; // edx
  unsigned int *v42; // rax
  __int64 v43; // [rsp+8h] [rbp-A0h]
  __int64 v44; // [rsp+8h] [rbp-A0h]
  unsigned int v45; // [rsp+8h] [rbp-A0h]
  unsigned int v46; // [rsp+8h] [rbp-A0h]
  __int64 *v47; // [rsp+38h] [rbp-70h] BYREF
  _QWORD *v48; // [rsp+40h] [rbp-68h] BYREF
  _DWORD *v49; // [rsp+48h] [rbp-60h] BYREF
  __int64 v50[11]; // [rsp+50h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 360) != 1 )
  {
    if ( (unsigned int)sub_180B130(a1) )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        v26 = sub_180B150(a1, a2);
        std::operator<<<std::char_traits<char>>();
        sub_186A500(v26, "Trace unavailable when result is false\n");
      }
      else
      {
        sub_180B150(a1, a2);
        std::operator<<<std::char_traits<char>>();
      }
    }
    return 0;
  }
  v5 = a1;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 304) + 216LL);
  v7 = 0x7FFFFFFF8LL;
  if ( v6 )
    v7 = 8LL * (unsigned int)(*(_DWORD *)(v6 - 4) - 1);
  v8 = *(_QWORD *)(v6 + v7);
  v9 = *(_DWORD **)(v8 + 40);
  v10 = v9;
  if ( !v9 )
  {
LABEL_14:
    if ( (unsigned int)sub_180B130(a1) )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        v25 = sub_180B150(a1, v9);
        std::operator<<<std::char_traits<char>>();
        sub_186A500(v25, "Warning: counterexample is trivial or non-existent\n");
      }
      else
      {
        sub_180B150(a1, v9);
        std::operator<<<std::char_traits<char>>();
      }
    }
    v49 = v10;
    sub_41D1C0(&v49);
    return 0;
  }
  v10 = nullptr;
  v11 = 0;
  v43 = *(_QWORD *)(v8 + 32);
  do
  {
    if ( v11 >= *(v9 - 1) )
    {
      if ( v10 )
      {
        v17 = *(v10 - 1);
        if ( v17 == 1 )
          goto LABEL_27;
      }
      goto LABEL_14;
    }
    v12 = *(_DWORD **)&v9[2 * v11];
    if ( v12 )
      ++*v12;
    if ( v10 )
    {
      v13 = *(v10 - 1);
      if ( v13 == *(v10 - 2) )
      {
        v20 = (3 * v13 + 1) >> 1;
        v21 = 8 * v20 + 8;
        if ( 8 * v13 + 8 >= (unsigned int)v21 || v13 >= v20 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_3FCFD0(v50, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v50);
          sub_233E40((__int64)v50);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        a1 = (__int64)(v10 - 2);
        v22 = (unsigned int *)sub_186B300(v10 - 2, v21);
        v10 = v22 + 2;
        *v22 = v20;
        v23 = v22[1];
        v9 = *(_DWORD **)(v8 + 40);
        v24 = v23;
        v16 = &v10[2 * v23];
        v15 = v24 + 1;
      }
      else
      {
        v14 = v13;
        v15 = v13 + 1;
        v16 = &v10[2 * v14];
      }
    }
    else
    {
      a1 = 24;
      v33 = (_QWORD *)sub_186B270(0x18u);
      *v33 = 2;
      v16 = v33 + 1;
      v9 = *(_DWORD **)(v8 + 40);
      v15 = 1;
      v10 = v16;
    }
    *v16 = v12;
    ++v11;
    *(v10 - 1) = v15;
  }
  while ( v9 );
  v17 = *(v10 - 1);
  if ( v17 != 1 )
    goto LABEL_14;
LABEL_27:
  v47 = nullptr;
  sub_403090(v43, &v47);
  v27 = v47;
  v28 = sub_3FCD00(*(_QWORD **)(v5 + 264), *(_DWORD *)(v5 + 272), *v47)[1];
  v29 = (_QWORD *)sub_186B270(0x18u);
  v29[1] = v28;
  v30 = v29 + 1;
  v18 = 0;
  v29[2] = 0;
  *v29 = 0x200000002LL;
  v31 = 2;
  v32 = v17 - 1;
  while ( 2 )
  {
    if ( v30[v32] )
    {
      v49 = v10;
      v34 = *(_QWORD *)&v10[2 * (v32 - v18)];
      v44 = *(_QWORD *)(v34 + 32);
      sub_41DF90(&v49, v34 + 40);
      v47 = v27;
      v10 = v49;
      sub_403090(v44, &v47);
      v27 = v47;
      if ( v47 )
      {
        v35 = 0;
        while ( v35 < *((_DWORD *)v27 - 1) )
        {
          v45 = v35;
          v36 = sub_3FCD00(*(_QWORD **)(v5 + 264), *(_DWORD *)(v5 + 272), v27[v35]);
          v37 = v45;
          v38 = v36[1];
          v39 = *((_DWORD *)v30 - 1);
          if ( v39 == *((_DWORD *)v30 - 2) )
          {
            v48 = v30;
            sub_41EE80(&v48);
            v30 = v48;
            v37 = v45;
            v39 = *((_DWORD *)v48 - 1);
          }
          v35 = v37 + 1;
          v30[v39] = v38;
          *((_DWORD *)v30 - 1) = v39 + 1;
        }
      }
LABEL_30:
      ++v17;
    }
    else
    {
      ++v18;
      if ( v17 >= v31 )
        goto LABEL_30;
      if ( v31 == *((_DWORD *)v30 - 2) )
      {
        v40 = (3 * v31 + 1) >> 1;
        v41 = 8 * v40 + 8;
        if ( 8 * v31 + 8 >= v41 || v31 >= v40 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_3FCFD0(v50, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v50);
          sub_233E40((__int64)v50);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v46 = (3 * v31 + 1) >> 1;
        v42 = (unsigned int *)sub_186B300(v30 - 1, v41);
        v30 = v42 + 2;
        *v42 = v46;
        v31 = v42[1];
      }
      ++v17;
      v30[v31] = 0;
      *((_DWORD *)v30 - 1) = v31 + 1;
    }
    v31 = *((_DWORD *)v30 - 1);
    v32 = v17 - 1;
    if ( v17 - 1 < v31 )
      continue;
    break;
  }
  v49 = v10;
  sub_41D1C0(&v49);
  sub_186B220(v30 - 1);
  if ( v27 )
    sub_186B220(v27 - 1);
  return v18;
}

