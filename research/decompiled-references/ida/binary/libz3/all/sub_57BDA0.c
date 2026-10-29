__int64 __fastcall sub_57BDA0(__int64 a1)
{
  char **exception; // r12
  __int64 *v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // r12d
  __int64 v5; // r13
  unsigned int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  __int64 *v9; // rdx
  void *v10; // r13
  __int64 v11; // rax
  __int64 v12; // r12
  unsigned int v14; // r14d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19[11]; // [rsp+10h] [rbp-58h] BYREF

  v2 = nullptr;
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    v4 = 0;
    do
    {
      if ( v4 >= *(_DWORD *)(v3 - 4) )
        break;
      v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 8LL * v4) + 72LL))(*(_QWORD *)(v3 + 8LL * v4));
      if ( v2 )
      {
        v6 = *((_DWORD *)v2 - 1);
        if ( v6 == *((_DWORD *)v2 - 2) )
        {
          v14 = (3 * v6 + 1) >> 1;
          v15 = 8 * v14 + 8;
          if ( 8 * v6 + 8 >= (unsigned int)v15 || v6 >= v14 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v19, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v19);
            sub_233E40((__int64)v19);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v16 = (unsigned int *)sub_186B300(v2 - 1, v15);
          v17 = v16[1];
          v2 = (__int64 *)(v16 + 2);
          *v16 = v14;
          LODWORD(v16) = v17;
          v9 = &v2[v17];
          v8 = (_DWORD)v16 + 1;
        }
        else
        {
          v7 = v6;
          v8 = v6 + 1;
          v9 = &v2[v7];
        }
      }
      else
      {
        v18 = (_QWORD *)sub_186B270(0x18u);
        v9 = v18 + 1;
        *v18 = 2;
        v8 = 1;
        v2 = v9;
      }
      *v9 = v5;
      ++v4;
      *((_DWORD *)v2 - 1) = v8;
      v3 = *(_QWORD *)(a1 + 32);
    }
    while ( v3 );
  }
  v10 = __dynamic_cast(
          *(const void **)(a1 + 8),
          (const struct __class_type_info *)&`typeinfo for'datalog::relation_plugin,
          (const struct __class_type_info *)&`typeinfo for'datalog::product_relation_plugin,
          0);
  if ( !v10 )
    __cxa_bad_cast();
  v11 = sub_186B270(0x30u);
  v12 = v11;
  if ( v2 )
  {
    sub_57BC10(v11, (__int64)v10, (_QWORD *)(a1 + 16), *((_DWORD *)v2 - 1), v2);
    sub_186B220(v2 - 1);
  }
  else
  {
    sub_57BC10(v11, (__int64)v10, (_QWORD *)(a1 + 16), 0, nullptr);
  }
  return v12;
}

