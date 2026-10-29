_QWORD *__fastcall sub_588350(__int64 a1, const void *a2, unsigned int a3, int *a4)
{
  char **exception; // rbx
  __int64 v5; // rbp
  __int64 v7; // r12
  __int64 (__fastcall *v8)(__int64, _QWORD, _QWORD, int *); // r13
  _QWORD *v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // r13
  __int64 v12; // r12
  int *v13; // rbp
  _QWORD *v14; // rax
  _DWORD *v15; // rax
  _DWORD *v16; // rdx
  int v17; // ecx
  int v18; // edi
  __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // r14d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rax
  __int64 v26[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = a3;
  v7 = *(_QWORD *)(a1 + 48);
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v7 + 136LL);
  v9 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
         0);
  if ( !v9 )
    __cxa_bad_cast();
  v10 = v8(v7, v9[5], (unsigned int)v5, a4);
  v11 = nullptr;
  v12 = v10;
  if ( v10 )
  {
    v11 = (_QWORD *)sub_186B270(0x18u);
    *v11 = &off_1C51940;
    v11[1] = 0;
    if ( (_DWORD)v5 )
    {
      v13 = &a4[v5];
      v14 = (_QWORD *)sub_186B270(0x10u);
      *v14 = 2;
      v15 = v14 + 1;
      v11[1] = v15;
      v16 = v15;
      while ( 1 )
      {
        v17 = *a4++;
        *v15 = v17;
        v18 = *(v16 - 1);
        v19 = (unsigned int)(v18 + 1);
        *(v16 - 1) = v19;
        if ( v13 == a4 )
          break;
        v20 = *(v16 - 2);
        if ( v20 == (_DWORD)v19 )
        {
          v21 = (3 * v20 + 1) >> 1;
          v22 = 4 * v21 + 8;
          if ( 4 * v18 + 12 >= (unsigned int)v22 || v20 >= v21 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v26, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v26);
            sub_233E40((__int64)v26);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v23 = (unsigned int *)sub_186B300(v16 - 2, v22);
          v16 = v23 + 2;
          *v23 = v21;
          v24 = v23[1];
          v11[1] = v16;
          v15 = &v16[v24];
        }
        else
        {
          v15 = &v16[v19];
        }
      }
    }
    v11[2] = v12;
  }
  return v11;
}

