__int64 __fastcall sub_2470A0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **exception; // rbx
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  bool v10; // zf
  _QWORD *v11; // rax
  _DWORD *v12; // rbp
  __int64 v13; // rax
  _DWORD *v14; // r8
  __int64 v15; // r12
  unsigned int v16; // eax
  unsigned int v18; // r13d
  size_t v19; // rsi
  unsigned int *v20; // rax
  _QWORD *v21; // [rsp+0h] [rbp-78h]
  __int64 v22; // [rsp+8h] [rbp-70h]
  char v23; // [rsp+1Fh] [rbp-59h] BYREF
  _QWORD v24[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = *a1;
  v8 = sub_186B270(0x30u);
  *(_QWORD *)(v8 + 8) = a2;
  v9 = v8;
  v10 = *(_QWORD *)(v7 + 16) == 0;
  *(_QWORD *)(v8 + 16) = a4;
  *(_QWORD *)(v8 + 24) = a4 + 104;
  *(_QWORD *)v8 = &off_1C4C960;
  *(_QWORD *)(v8 + 32) = 0;
  *(_BYTE *)(v8 + 40) = 0;
  if ( v10
    || (v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v7 + 24))(v7, a2, a3, a4),
        v11 = (_QWORD *)sub_186B270(0x18u),
        v10 = *(_QWORD *)(v7 + 48) == 0,
        v12 = v11,
        v11[1] = v22,
        *(_QWORD *)(v9 + 32) = v11 + 1,
        v21 = v11 + 1,
        *v11 = 0x100000002LL,
        v10) )
  {
    std::__throw_bad_function_call();
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v7 + 56))(v7 + 32, a2, a3, a4);
  v14 = v21;
  v15 = v13;
  v16 = v12[1];
  if ( v16 == *v12 )
  {
    v18 = (3 * v16 + 1) >> 1;
    v19 = 8 * v18 + 8;
    if ( 8 * v16 + 8 >= (unsigned int)v19 || v16 >= v18 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v24, "Overflow encountered when expanding vector", &v23);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v24);
      sub_233E40((__int64)v24);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v20 = (unsigned int *)sub_186B300(v12, v19);
    v14 = v20 + 2;
    *v20 = v18;
    v16 = v20[1];
    *(_QWORD *)(v9 + 32) = v14;
  }
  *(_QWORD *)&v14[2 * v16] = v15;
  *(v14 - 1) = v16 + 1;
  return v9;
}

