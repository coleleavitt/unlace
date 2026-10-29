__int64 __fastcall sub_D9D900(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rdx
  _QWORD *v9; // rdi
  _QWORD **v10; // rdi
  unsigned __int8 **v12; // [rsp+8h] [rbp-20h] BYREF

  v4 = sub_DFB220(*(_QWORD *)(a1 + 400));
  v12 = (unsigned __int8 **)sub_E0FF50(a1, v4, 2464, 0);
  if ( v12 )
  {
    sub_D9D880(&v12, a3);
    if ( v12 )
      sub_AC60B0(v12, *(_QWORD *)(v4 + 8), 8u);
  }
  v5 = *(_QWORD **)(a1 + 24);
  v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 32LL);
  if ( v6 == sub_CCC520 )
  {
    v7 = (_QWORD *)v5[3];
    v8 = *(__int64 (**)(void))(*v7 + 32LL);
    if ( (char *)v8 != (char *)v6 )
      return v8();
    v9 = (_QWORD *)v7[3];
    v6 = *(__int64 (__fastcall **)(__int64))(*v9 + 32LL);
    if ( (char *)v6 == (char *)v8 )
    {
      v10 = (_QWORD **)v9[3];
      v8 = (__int64 (*)(void))(*v10)[4];
      if ( (char *)v8 == (char *)v6 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v10[3] + 32LL))(v10[3]);
      return v8();
    }
  }
  return ((__int64 (*)(void))v6)();
}

