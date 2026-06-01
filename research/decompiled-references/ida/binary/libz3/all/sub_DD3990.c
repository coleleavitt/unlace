void __fastcall sub_DD3990(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rdi
  _QWORD *v9; // r12
  __int64 *v10; // rax
  _QWORD *v11; // r13
  const char *v12; // r12
  size_t v13; // rax
  char *v14; // r14
  size_t v15; // rbp
  size_t v16; // rax
  __int64 *v17; // r14
  signed __int64 v18; // rbp
  _BYTE *v19; // rdi
  _BYTE *v20; // r13
  __int64 v21; // rax
  char *v22; // r15
  __int64 v23; // r13
  __int64 v24; // rax
  bool v25; // cf
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // rdi
  __int64 v28; // rax
  _BYTE *v29; // rsi
  __int64 *v30; // r13
  signed __int64 v31; // rbp
  void *v32; // rdi
  char **v33; // r13
  __int64 *v34; // rbp
  char **v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // r15
  unsigned __int64 v38; // rdi
  _QWORD *v39; // rdi
  __int64 v40; // rax
  _QWORD *exception; // rbx
  unsigned __int64 v42; // [rsp+8h] [rbp-50h]
  char **v43; // [rsp+10h] [rbp-48h]

  a1[257] = 0;
  a1[256] = 0;
  if ( *(_BYTE *)(*a1 + 256LL) )
  {
    v2 = a1[176];
    *((_BYTE *)a1 + 1400) = 1;
    if ( v2 )
      *(_DWORD *)(v2 - 4) = 0;
    *((_DWORD *)a1 + 517) = 0;
  }
  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
  sub_DD2CA0(a1);
  if ( *(_BYTE *)(*a1 + 256LL) )
  {
    v11 = a1 + 270;
    v12 = (const char *)sub_DD9950(a1 + 2, 0, *((unsigned int *)a1 + 517));
    v13 = strlen(v12);
    v14 = (char *)a1[268];
    v15 = v13;
    if ( v14 == (char *)(a1 + 270) )
    {
      if ( v13 <= 0xF )
        goto LABEL_24;
      if ( v13 > 0x1D )
      {
        v37 = v13;
        v14 = (char *)operator new(v13 + 1);
      }
      else
      {
        v37 = 30;
        v14 = (char *)operator new(0x1Fu);
      }
    }
    else
    {
      v16 = a1[270];
      if ( v16 >= v15 )
      {
LABEL_24:
        if ( v12 < v14 || &v14[a1[269]] < v12 )
        {
          if ( v15 )
          {
            if ( v15 == 1 )
              *v14 = *v12;
            else
              memcpy((void *)a1[268], v12, v15);
            v14 = (char *)a1[268];
          }
        }
        else
        {
          std::string::_M_replace_cold();
          v14 = (char *)a1[268];
        }
LABEL_29:
        a1[269] = v15;
        v14[v15] = 0;
        *((_BYTE *)a1 + 1400) = 0;
        goto LABEL_8;
      }
      v37 = 2 * v16;
      if ( v15 < 2 * v16 )
      {
        v38 = v37 + 1;
        if ( (v16 & 0x4000000000000000LL) != 0 )
          goto LABEL_76;
      }
      else
      {
        v38 = v15 + 1;
        v37 = v15;
      }
      v14 = (char *)operator new(v38);
      if ( v15 == 1 )
      {
        *v14 = *v12;
        goto LABEL_66;
      }
    }
    memcpy(v14, v12, v15);
LABEL_66:
    v39 = (_QWORD *)a1[268];
    if ( v11 != v39 )
      operator delete(v39, a1[270] + 1LL);
    a1[268] = v14;
    a1[270] = v37;
    goto LABEL_29;
  }
LABEL_8:
  v3 = sub_DC2710(a1)[1];
  if ( !v3 || !*(_DWORD *)(v3 - 4) )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid assert command, expression required as argument");
    goto LABEL_84;
  }
  v4 = sub_DC2710(a1)[1];
  v5 = 0x7FFFFFFF8LL;
  if ( v4 )
    v5 = 8LL * (unsigned int)(*(_DWORD *)(v4 - 4) - 1);
  v6 = *(_QWORD *)(v4 + v5);
  if ( !v6 || (v7 = *a1, sub_DFBCB0(*a1), !(unsigned __int8)sub_15D2CB0(*(_QWORD *)(v7 + 296), v6)) )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid assert command, term is not Boolean");
LABEL_84:
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v8 = *a1;
  if ( a1[257] == v6 )
    sub_E09680(v8, a1 + 256, v6);
  else
    sub_E094A0(v8, v6);
  v9 = (_QWORD *)*a1;
  if ( !*(_BYTE *)(*a1 + 256LL) )
    goto LABEL_17;
  v17 = (__int64 *)v9[97];
  if ( v17 != (__int64 *)v9[98] )
  {
    v18 = a1[269];
    v19 = v17 + 2;
    *v17 = (__int64)(v17 + 2);
    v20 = (_BYTE *)a1[268];
    if ( (unsigned __int64)v18 <= 0xF )
    {
      if ( v18 == 1 )
      {
        *((_BYTE *)v17 + 16) = *v20;
        goto LABEL_34;
      }
      if ( !v18 )
      {
LABEL_34:
        v17[1] = v18;
        v19[v18] = 0;
        v9[97] += 32LL;
        goto LABEL_17;
      }
LABEL_41:
      memcpy(v19, v20, v18);
      v19 = (_BYTE *)*v17;
      goto LABEL_34;
    }
    if ( v18 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    if ( v18 + 1 >= 0 )
    {
      v21 = operator new(v18 + 1);
      v17[2] = v18;
      *v17 = v21;
      v19 = (_BYTE *)v21;
      goto LABEL_41;
    }
LABEL_76:
    std::__throw_bad_alloc();
  }
  v22 = (char *)v9[96];
  v23 = ((char *)v17 - v22) >> 5;
  if ( v23 == 0x3FFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v24 = 1;
  if ( v23 )
    v24 = ((char *)v17 - v22) >> 5;
  v25 = __CFADD__(v24, v23);
  v26 = v24 + v23;
  if ( v25 )
  {
    v42 = 0xFFFFFFFFFFFFFFCLL;
    v27 = 0x7FFFFFFFFFFFFFE0LL;
  }
  else
  {
    if ( v26 > 0x3FFFFFFFFFFFFFFLL )
      v26 = 0x3FFFFFFFFFFFFFFLL;
    v42 = 4 * v26;
    v27 = 32 * v26;
  }
  v28 = operator new(v27);
  v29 = (_BYTE *)a1[268];
  v30 = (__int64 *)(v28 + (char *)v17 - v22);
  v31 = a1[269];
  v43 = (char **)v28;
  v32 = v30 + 2;
  *v30 = (__int64)(v30 + 2);
  if ( (unsigned __int64)v31 > 0xF )
  {
    if ( v31 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    if ( v31 + 1 < 0 )
      std::__throw_bad_alloc();
    v40 = operator new(v31 + 1);
    *v30 = v40;
    v32 = (void *)v40;
    v30[2] = v31;
    goto LABEL_74;
  }
  if ( v31 == 1 )
  {
    *((_BYTE *)v30 + 16) = *v29;
    goto LABEL_52;
  }
  if ( v31 )
  {
LABEL_74:
    memcpy(v32, v29, v31);
    v32 = (void *)*v30;
  }
LABEL_52:
  v30[1] = v31;
  *((_BYTE *)v32 + v31) = 0;
  if ( v17 == (__int64 *)v22 )
  {
    v33 = v43;
  }
  else
  {
    v33 = v43;
    v34 = (__int64 *)v22;
    do
    {
      v35 = v33;
      v33 += 4;
      sub_2333C0(v35, v34);
      v36 = (__int64)v34;
      v34 += 4;
      sub_233E40(v36);
    }
    while ( v17 != v34 );
  }
  if ( v22 )
    operator delete(v22, v9[98] - (_QWORD)v22);
  v9[97] = v33 + 4;
  v9[96] = v43;
  v9[98] = &v43[v42];
LABEL_17:
  v10 = sub_DC2710(a1);
  sub_39BF70(v10);
  sub_DBF590(*((unsigned int *)a1 + 356), (__int64)"invalid assert command, ')' expected");
  if ( !*(_BYTE *)(*a1 + 258LL) )
  {
    if ( *((_DWORD *)a1 + 356) == 9 )
      return;
LABEL_21:
    sub_DC0980(a1);
    return;
  }
  sub_DBF4C0((_QWORD *)*a1);
  if ( *((_DWORD *)a1 + 356) != 9 )
    goto LABEL_21;
}

