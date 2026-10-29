char __fastcall Z3_fixedpoint_set_predicate_representation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5)
{
  char **exception; // r12
  char v7; // r13
  __int64 v8; // r13
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _DWORD *v11; // rbx
  __int64 *v12; // r15
  unsigned int i; // edx
  __int64 v14; // rax
  char result; // al
  unsigned int v16; // r10d
  size_t v17; // rsi
  unsigned int v18; // r12d
  unsigned int *v19; // rax
  __int64 v20; // rax
  int v21; // edx
  char v25; // [rsp+17h] [rbp-71h]
  __int64 v26[11]; // [rsp+30h] [rbp-58h] BYREF

  v7 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v25 = v7;
  if ( v7 )
  {
    sub_2A0110(a1, a2, a3, a4);
    if ( a4 )
      goto LABEL_3;
LABEL_13:
    result = sub_6542D0(*(_QWORD *)(a2 + 24) + 48LL, a3, 0, 0);
    if ( !v7 )
      return result;
LABEL_14:
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
    return result;
  }
  if ( !a4 )
    goto LABEL_13;
LABEL_3:
  v8 = *a5;
  v9 = (_QWORD *)sub_186B270(0x18u);
  *v9 = 2;
  v10 = v9 + 1;
  v11 = v10;
  v12 = &a5[a4];
  for ( i = 1; ; i = v21 + 1 )
  {
    ++a5;
    *v10 = v8;
    *(v11 - 1) = i;
    if ( a5 == v12 )
      break;
    while ( 1 )
    {
      v8 = *a5;
      if ( *(v11 - 2) == i )
        break;
      v14 = i;
      ++a5;
      ++i;
      *(_QWORD *)&v11[2 * v14] = v8;
      *(v11 - 1) = i;
      if ( a5 == v12 )
        goto LABEL_7;
    }
    v16 = (3 * i + 1) >> 1;
    v17 = 8 * v16 + 8;
    v18 = v16;
    if ( 8 * i + 8 >= (unsigned int)v17 || i >= v16 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v26, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v26);
      sub_233E40((__int64)v26);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v19 = (unsigned int *)sub_186B300(v11 - 2, v17);
    v11 = v19 + 2;
    *v19 = v18;
    v20 = v19[1];
    v21 = v20;
    v10 = &v11[2 * v20];
  }
LABEL_7:
  sub_6542D0(*(_QWORD *)(a2 + 24) + 48LL, a3, a4, v11);
  result = sub_186B220(v11 - 2);
  if ( v25 )
    goto LABEL_14;
  return result;
}

