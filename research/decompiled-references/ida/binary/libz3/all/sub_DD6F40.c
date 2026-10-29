__int64 *__fastcall sub_DD6F40(_QWORD **a1)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  _QWORD *v4; // rbp
  unsigned __int64 v5; // r13
  _QWORD *v6; // r12
  _QWORD *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // r12
  void *v13; // rdi
  __int64 *result; // rax
  __int64 v15; // rax
  __int64 *v16; // r13
  __int64 *v17; // r12
  __int64 *v18; // rbx
  __int64 *v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rdi
  bool v22; // zf
  __int64 *v23; // rbx
  unsigned __int64 v24; // r12
  __int64 v25; // rsi
  unsigned int v26; // ecx
  int v27; // esi
  _QWORD *v28; // r12
  __int64 v29; // r14
  __int64 **v30; // r15
  __int64 v31; // r12
  _QWORD *exception; // r12
  __int64 *v33; // [rsp+8h] [rbp-70h]
  __int64 v34; // [rsp+10h] [rbp-68h]
  __int64 *v35; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v36; // [rsp+28h] [rbp-50h] BYREF
  __int64 v37; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v38; // [rsp+38h] [rbp-40h]

  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
  v2 = (__int64)*a1;
  sub_DFBCB0(*a1);
  v3 = *(_QWORD *)(v2 + 296);
  v38 = nullptr;
  v37 = v3;
  v35 = nullptr;
  v36 = 0;
  sub_DD0F40((__int64)a1, (__int64)&v37, &v35, &v36);
  v4 = v38;
  v5 = v36;
  v34 = v37;
  v33 = v35;
  if ( v38 )
  {
    v6 = &v38[*((unsigned int *)v38 - 1)];
    if ( v38 != v6 )
    {
      v7 = v38;
      do
      {
        sub_E06850(*a1, *v7 + 16LL, *v7);
        ++v7;
      }
      while ( v6 != v7 );
    }
  }
  if ( *((_DWORD *)a1 + 356) != 1 )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid recursive function definition, '(' expected");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  sub_DC0980(a1);
  v8 = *((unsigned int *)a1 + 356);
  if ( (_DWORD)v8 == 2 )
  {
    if ( !v4 )
      goto LABEL_10;
    v26 = *((_DWORD *)v4 - 1);
    v27 = 0;
  }
  else
  {
    if ( !v4 || !*((_DWORD *)v4 - 1) )
      goto LABEL_10;
    v29 = (__int64)v33;
    v30 = (__int64 **)v5;
    v31 = 0;
    do
    {
      sub_DD6780(a1, v4[v31], v29, v30);
      v8 = *((unsigned int *)a1 + 356);
      v26 = *((_DWORD *)v4 - 1);
      v27 = v31 + 1;
      if ( (_DWORD)v8 == 2 )
        break;
      ++v31;
      v29 += 16;
      ++v30;
    }
    while ( (unsigned int)v31 < v26 );
  }
  if ( v26 != v27 )
  {
    v28 = __cxa_allocate_exception(0x30u);
    sub_305660(v28, "the number of declarations does not match number of supplied definitions");
    __cxa_throw(v28, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
LABEL_10:
  sub_DBF590(v8, (__int64)"invalid recursive function definition, ')' expected");
  v9 = *((unsigned int *)a1 + 356);
  if ( (_DWORD)v9 != 9 )
  {
    sub_DC0980(a1);
    v9 = *((unsigned int *)a1 + 356);
  }
  sub_DBF590(v9, (__int64)"invalid function/constant definition, ')' expected");
  if ( *((_BYTE *)*a1 + 258) )
    sub_DBF4C0(*a1);
  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
  if ( v5 )
  {
    v10 = *(unsigned int *)(v5 - 4);
    v11 = (_QWORD *)v5;
    v12 = (_QWORD *)(v5 + 8 * v10);
    if ( (_DWORD)v10 )
    {
      do
      {
        while ( *v11 )
        {
          v13 = (void *)(*v11++ - 8LL);
          sub_186B220(v13);
          if ( v11 == v12 )
            goto LABEL_20;
        }
        ++v11;
      }
      while ( v11 != v12 );
    }
LABEL_20:
    sub_186B220((void *)(v5 - 8));
  }
  result = v33;
  if ( v33 )
  {
    v15 = *((unsigned int *)v33 - 1);
    if ( (_DWORD)v15 )
    {
      v16 = v33;
      v17 = &v33[2 * v15];
      do
      {
        v18 = (__int64 *)v16[1];
        if ( v18 )
        {
          v19 = &v18[*((unsigned int *)v18 - 1)];
          if ( v18 >= v19 )
            goto LABEL_32;
          do
          {
            while ( 1 )
            {
              v20 = *v18;
              if ( *v18 )
              {
                v21 = *v16;
                v22 = (*(_DWORD *)(v20 + 8))-- == 1;
                if ( v22 )
                  break;
              }
              if ( ++v18 >= v19 )
                goto LABEL_31;
            }
            sub_15D7BC0(v21, v20);
            ++v18;
          }
          while ( v18 < v19 );
LABEL_31:
          v18 = (__int64 *)v16[1];
          if ( v18 )
LABEL_32:
            sub_186B220(v18 - 1);
        }
        v16 += 2;
      }
      while ( v16 != v17 );
    }
    result = (__int64 *)sub_186B220(v33 - 1);
  }
  if ( v4 )
  {
    v23 = v4;
    v24 = (unsigned __int64)&v4[*((unsigned int *)v4 - 1)];
    if ( (unsigned __int64)v4 < v24 )
    {
      do
      {
        while ( 1 )
        {
          v25 = *v23;
          if ( *v23 )
          {
            v22 = (*(_DWORD *)(v25 + 8))-- == 1;
            if ( v22 )
              break;
          }
          if ( (unsigned __int64)++v23 >= v24 )
            return (__int64 *)sub_186B220(v4 - 1);
        }
        ++v23;
        sub_15D7BC0(v34, v25);
      }
      while ( (unsigned __int64)v23 < v24 );
    }
    return (__int64 *)sub_186B220(v4 - 1);
  }
  return result;
}

