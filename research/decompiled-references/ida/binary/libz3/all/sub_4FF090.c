__int64 __fastcall sub_4FF090(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v11; // rdi

  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_QWORD *)(a2 + 32);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v5 + 16LL))(v5, v7, *(_QWORD *)(a3 + 32));
  if ( *(_QWORD *)(v6 + 40) == *(_QWORD *)(v8 + 8) )
    return sub_4FC950(v6, (_QWORD *)(a1 + 8), v8);
  if ( (unsigned int)sub_180B130(v5) )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v11 = sub_180B150(v5, v7);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v11, "new type returned\n");
    }
    else
    {
      sub_180B150(v5, v7);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v9 = sub_4C3EF0(*(_QWORD *)(v6 + 24), *(_QWORD *)(v8 + 8));
  return sub_4FC950(v9, (_QWORD *)(a1 + 8), v8);
}

