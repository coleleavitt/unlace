__int64 __fastcall sub_564EA0(__int64 a1, __int64 a2)
{
  char v3; // al
  __int64 v4; // rdi
  __int64 v5; // rbp
  void (__fastcall *v6)(__int64, __int64); // r12
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rbp
  void (__fastcall *v11)(__int64, __int64); // r12
  __int64 v12; // rsi

  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48));
  v4 = *(_QWORD *)(a1 + 40);
  if ( v3 != (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4) )
  {
    v5 = *(_QWORD *)(a1 + 48);
    v6 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 120LL);
    v7 = sub_180B150(v4, a2);
    v8 = v5;
    v9 = v7;
    v6(v5, v7);
    v10 = *(_QWORD *)(a1 + 40);
    v11 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 120LL);
    v12 = sub_180B150(v8, v9);
    v11(v10, v12);
    sub_180B150(v10, v12);
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_180B160(0, "\n");
  }
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48));
}

