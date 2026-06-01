__int64 __fastcall sub_7C1080(__int64 a1, _DWORD *a2, __m128i a3)
{
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _DWORD *v8; // r9
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r12

  if ( dword_1C7DF74 == a2[13] )
  {
    sub_180B130(a1);
    if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
    {
      sub_186A4C0(*(double *)a3.m128i_i64);
      v11 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      (*(void (__fastcall **)(_DWORD *, __int64, __int64, __int64))(*(_QWORD *)a2 + 136LL))(a2, v11, a1 + 80, 1);
      sub_186A500(a2, v11);
    }
    else
    {
      v12 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      (*(void (__fastcall **)(_DWORD *, __int64, __int64, __int64))(*(_QWORD *)a2 + 136LL))(a2, v12, a1 + 80, 1);
    }
  }
  v3 = a2[2];
  if ( v3 )
  {
    if ( v3 != 1 )
    {
      sub_1872CE0("");
      sub_1873130(114, 2233);
    }
    v4 = sub_81AF20(a2);
    return sub_7BD580(a1, v4, v5, v6, a3, v7, v8);
  }
  else
  {
    v10 = sub_828140(a2);
    return sub_7C0810(a1, v10, a3);
  }
}

