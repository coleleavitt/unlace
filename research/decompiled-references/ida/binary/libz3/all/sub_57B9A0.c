__int64 __fastcall sub_57B9A0(__int64 a1)
{
  char **exception; // rbx
  __int64 v2; // rbp
  _QWORD *v3; // rbx
  unsigned int v4; // r14d
  __int64 v5; // r13
  unsigned int v6; // ebp
  size_t v7; // rsi
  unsigned int *v8; // rax
  unsigned int v9; // eax
  __int64 v10; // r13
  __int64 v11; // rdx
  char v12; // cl
  __int64 result; // rax
  int v14; // edx
  bool v15; // si
  char *v16; // rax
  _QWORD *v17; // rax
  __int64 v18[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD **)(a1 + 40);
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 - 4);
    if ( v3 )
    {
      v5 = *((unsigned int *)v3 - 1);
      if ( v4 != (_DWORD)v5 )
      {
        if ( (unsigned int)v5 >= v4 )
        {
          *((_DWORD *)v3 - 1) = v4;
          if ( !v4 )
            goto LABEL_22;
          goto LABEL_12;
        }
LABEL_9:
        while ( 1 )
        {
          v9 = *((_DWORD *)v3 - 2);
          if ( v9 >= v4 )
            break;
          v6 = (3 * v9 + 1) >> 1;
          v7 = 4 * v6 + 8;
          if ( 4 * v9 + 8 >= (unsigned int)v7 || v9 >= v6 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v18, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v18);
            sub_233E40((__int64)v18);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v8 = (unsigned int *)sub_186B300(v3 - 1, v7);
          v3 = v8 + 2;
          *v8 = v6;
          *(_QWORD *)(a1 + 40) = v8 + 2;
        }
        v10 = 4 * v5;
        *((_DWORD *)v3 - 1) = v4;
        v2 = *(_QWORD *)(a1 + 32);
        v11 = 4LL * v4;
        if ( v10 != v11 )
          memset((char *)v3 + v10, 0, v11 - v10);
LABEL_12:
        v12 = 1;
LABEL_13:
        result = 0;
        do
        {
          v14 = *(_DWORD *)(*(_QWORD *)(v2 + 8 * result) + 24LL);
          v15 = *((_DWORD *)v3 + result) != v14;
          *((_DWORD *)v3 + result++) = v14;
          v12 |= v15;
        }
        while ( (unsigned int)result < v4 );
        if ( !v12 )
          return result;
        goto LABEL_22;
      }
      v12 = 0;
      if ( v4 )
        goto LABEL_13;
      goto LABEL_21;
    }
    if ( v4 )
    {
      v5 = 0;
      v17 = (_QWORD *)sub_186B270(0x10u);
      v3 = v17 + 1;
      *v17 = 2;
      *(_QWORD *)(a1 + 40) = v17 + 1;
      goto LABEL_9;
    }
  }
  else if ( v3 && *((_DWORD *)v3 - 1) )
  {
LABEL_21:
    *((_DWORD *)v3 - 1) = 0;
  }
LABEL_22:
  v16 = (char *)__dynamic_cast(
                  *(const void **)(a1 + 8),
                  (const struct __class_type_info *)&`typeinfo for'datalog::relation_plugin,
                  (const struct __class_type_info *)&`typeinfo for'datalog::product_relation_plugin,
                  0);
  if ( !v16 )
    __cxa_bad_cast();
  result = sub_5840E0(v16 + 40);
  *(_DWORD *)(a1 + 24) = result;
  return result;
}

