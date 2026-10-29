__int64 __fastcall sub_7C03E0(__int64 a1, unsigned int a2, unsigned int a3, double a4)
{
  __int64 v6; // rsi
  __int64 (*v8)(void); // rax
  int v9; // eax
  __int64 v10; // rdx
  _BYTE *v11; // rcx
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // r13

  v6 = a2 >> 1;
  v8 = *(__int64 (**)(void))(*(_QWORD *)a1 + 560LL);
  if ( v8 == sub_7C56E0 )
  {
    v9 = 0;
    v10 = *(_QWORD *)(a1 + 24);
    if ( !*(_QWORD *)(a1 + 160) )
      v9 = *(_DWORD *)(*(_QWORD *)(v10 + 3296) + 24LL * (unsigned int)v6);
  }
  else
  {
    v9 = v8();
    v10 = *(_QWORD *)(a1 + 24);
  }
  v11 = (_BYTE *)((unsigned int)v6 + *(_QWORD *)(v10 + 3312));
  if ( !*v11 && *(_DWORD *)(a1 + 788) == v9 )
  {
    *v11 = 1;
    ++*(_DWORD *)(a1 + 784);
    if ( byte_1C7EBD0 )
    {
      if ( dword_1C7DF70 != -2
        && *(_DWORD *)(qword_1C7EBC8 + 4LL * ((unsigned int)dword_1C7DF70 >> 1)) < *(_DWORD *)(qword_1C7EBC8
                                                                                             + 4LL * (unsigned int)v6) )
      {
        sub_180B130(a1);
        if ( (unsigned __int8)sub_186A530(a4) )
        {
          sub_186A4C0(a4);
          v13 = sub_180B150(a1, v6);
          std::__ostream_insert<char,std::char_traits<char>>();
          v14 = sub_7C5DC0(v13, a2);
          std::operator<<<std::char_traits<char>>();
          sub_186A500(v14, " is above consequent in stack\n");
        }
        else
        {
          v15 = sub_180B150(a1, v6);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_7C5DC0(v15, a2);
          std::operator<<<std::char_traits<char>>();
        }
      }
    }
  }
  return sub_7C00D0(a1, a2, a3);
}

