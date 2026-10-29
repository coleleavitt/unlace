__int64 __fastcall sub_3057F0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  void *v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  std::ostream *v7; // r12
  _BYTE *v8; // r15
  char v9; // si
  std::ostream *v10; // rax
  void (__fastcall *v11)(__int64); // rax
  void *v12; // rbx
  const void *v14; // rax
  __int64 (__fastcall *v15)(__int64, unsigned int); // rax
  __int64 v16; // r12
  _QWORD *exception; // rbx
  char v18[8]; // [rsp+8h] [rbp-70h] BYREF
  __int64 v19; // [rsp+10h] [rbp-68h] BYREF
  char v20[8]; // [rsp+18h] [rbp-60h] BYREF
  int v21[4]; // [rsp+20h] [rbp-58h] BYREF
  char v22[72]; // [rsp+30h] [rbp-48h] BYREF

  if ( !*(_QWORD *)(a1 + 64) )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "assert-soft requires a formulas as argument.");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  sub_180C5A0(v18, "weight");
  sub_180C5A0(v20, "weight");
  sub_18588D0(v21, a1 + 40, v20, &qword_1C7F280);
  sub_180C5A0(v20, "id");
  v4 = sub_1858A00(a1 + 40, v20, &qword_18D6CD0);
  v5 = *(void **)(a1 + 72);
  v19 = v4;
  if ( !v5 )
  {
    if ( !sub_DF79D0(a2) )
    {
      v16 = sub_186B270(0x328u);
      sub_DFBCB0(a2);
      sub_2F7E40(v16, *(_QWORD *)(a2 + 296));
      sub_DF79E0(a2, v16);
    }
    v14 = (const void *)sub_DF79D0(a2);
    v5 = __dynamic_cast(
           v14,
           (const struct __class_type_info *)&`typeinfo for'opt_wrapper,
           (const struct __class_type_info *)&`typeinfo for'opt::context,
           0);
    if ( !v5 )
      __cxa_bad_cast();
  }
  sub_2FBD30((__int64)v5, *(_QWORD *)(a1 + 64), v21, (unsigned __int64 *)&v19);
  if ( *(_BYTE *)(a2 + 258) )
  {
    v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
    if ( v6 == sub_305010 )
      v7 = *(std::ostream **)(a2 + 408);
    else
      v7 = (std::ostream *)v6(a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    v8 = *(_BYTE **)((char *)v7 + *(_QWORD *)(*(_QWORD *)v7 - 24LL) + 240);
    if ( !v8 )
      std::__throw_bad_cast();
    if ( v8[56] )
    {
      v9 = v8[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v9 = 10;
      v15 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v8 + 48LL);
      if ( v15 != sub_26BE90 )
        v9 = v15((__int64)v8, 10u);
    }
    v10 = (std::ostream *)std::ostream::put(v7, v9);
    std::ostream::flush(v10);
  }
  v11 = *(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL);
  if ( v11 == sub_305040 )
  {
    *(_DWORD *)(a1 + 56) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  else
  {
    ((void (__fastcall *)(__int64, __int64))v11)(a1, a2);
  }
  sub_1858C20(a1 + 40);
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v21);
  return sub_182CBA0(v12, v22);
}

