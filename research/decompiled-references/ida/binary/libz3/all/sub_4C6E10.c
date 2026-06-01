__int64 __fastcall sub_4C6E10(__int64 a1, __int64 *a2, _QWORD *a3)
{
  char **exception; // rbp
  __int64 v4; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rax
  _DWORD *v10; // rcx
  unsigned int v11; // r14d
  size_t v12; // rsi
  unsigned int *v13; // rax
  unsigned int v14; // eax
  size_t v15; // rbx
  __int64 v16; // r14
  char *j; // rcx
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  unsigned __int8 v22; // [rsp+Fh] [rbp-59h]
  char *i; // [rsp+10h] [rbp-58h] BYREF
  int v24; // [rsp+18h] [rbp-50h]
  __int64 v25[9]; // [rsp+20h] [rbp-48h] BYREF

  v7 = *a2;
  i = nullptr;
  v24 = 0;
  if ( v7 && (v8 = *(unsigned int *)(v7 - 4), (_DWORD)v8) )
  {
    v9 = (_QWORD *)sub_186B270(0x18u);
    v10 = v9 + 1;
    *v9 = 2;
    for ( i = (char *)(v9 + 1); ; i = (char *)(v13 + 2) )
    {
      v14 = *(v10 - 2);
      if ( v14 >= (unsigned int)v8 )
        break;
      v11 = (3 * v14 + 1) >> 1;
      v12 = 8 * v11 + 8;
      if ( 8 * v14 + 8 >= (unsigned int)v12 || v14 >= v11 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_DFB18(v25, "Overflow encountered when expanding vector", v4);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v25);
        sub_233E40((__int64)v25);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v13 = (unsigned int *)sub_186B300(v10 - 2, v12);
      v10 = v13 + 2;
      *v13 = v11;
    }
    *(v10 - 1) = v8;
    v15 = 8 * v8;
    v16 = 0;
    for ( j = (char *)memset(v10, 0, v15); ; j = i )
    {
      result = sub_16256D0(*(_QWORD *)(a1 + 8) + 56LL, *(_QWORD *)(*a2 + v16), &j[v16]);
      if ( !(_BYTE)result )
        break;
      v16 += 8;
      if ( v15 == v16 )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    v19 = sub_4C50F0(a1, (__int64)&i);
    v20 = (*(__int64 (__fastcall **)(__int64, char **))(*(_QWORD *)v19 + 40LL))(v19, &i);
    v21 = sub_4C3EF0(a1, *(_QWORD *)(v20 + 8));
    *a3 = sub_4FC950(v21, a2, v20);
    result = 1;
  }
  if ( i )
  {
    v22 = result;
    sub_186B220(i - 8);
    return v22;
  }
  return result;
}

