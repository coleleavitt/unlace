__int64 __fastcall sub_E1D0E0(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **exception; // r12
  __int64 v5; // rdx
  __int64 *v8; // r14
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rsi
  int v14; // eax
  __int64 *v15; // rsi
  __int64 v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // r13
  unsigned int v19; // eax
  unsigned int v20; // r8d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rsi
  _QWORD *v25; // rax
  unsigned int v27; // [rsp+Ch] [rbp-5Ch]
  __int64 v28[11]; // [rsp+10h] [rbp-58h] BYREF

  v8 = *a1;
  v9 = sub_186B270(0x30u);
  v10 = *v8;
  v11 = v8[1];
  *(_QWORD *)(v9 + 8) = a2;
  v12 = v9;
  *(_QWORD *)(v9 + 16) = a4;
  *(_QWORD *)(v9 + 24) = a4 + 104;
  *(_QWORD *)v9 = &off_1C4C960;
  *(_QWORD *)(v9 + 32) = 0;
  *(_BYTE *)(v9 + 40) = 0;
  if ( v10 != v11 )
  {
    while ( 1 )
    {
      if ( !*(_QWORD *)(v10 + 16) )
        std::__throw_bad_function_call();
      v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v10 + 24))(v10, a2, a3, a4);
      v17 = *(_QWORD **)(v12 + 32);
      v18 = v16;
      if ( !v17 )
        break;
      v19 = *((_DWORD *)v17 - 1);
      if ( v19 == *((_DWORD *)v17 - 2) )
      {
        v20 = (3 * v19 + 1) >> 1;
        v21 = 8 * v20 + 8;
        if ( 8 * v19 + 8 >= (unsigned int)v21 || v19 >= v20 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_17FDF6(v28, "Overflow encountered when expanding vector", v5);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v28);
          sub_233E40((__int64)v28);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v27 = (3 * v19 + 1) >> 1;
        v22 = (unsigned int *)sub_186B300(v17 - 1, v21);
        v23 = v22[1];
        v10 += 32;
        *(_QWORD *)(v12 + 32) = v22 + 2;
        *v22 = v27;
        *(_QWORD *)&v22[2 * v23 + 2] = v18;
        v22[1] = v23 + 1;
        if ( v11 == v10 )
          return v12;
      }
      else
      {
        v13 = v19;
        v14 = v19 + 1;
        v15 = &v17[v13];
LABEL_4:
        v10 += 32;
        *v15 = v18;
        *((_DWORD *)v17 - 1) = v14;
        if ( v11 == v10 )
          return v12;
      }
    }
    v25 = (_QWORD *)sub_186B270(0x18u);
    v17 = v25 + 1;
    *v25 = 2;
    v14 = 1;
    *(_QWORD *)(v12 + 32) = v17;
    v15 = v17;
    goto LABEL_4;
  }
  return v12;
}

