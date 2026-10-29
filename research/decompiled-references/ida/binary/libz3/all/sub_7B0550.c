__int64 __fastcall sub_7B0550(_QWORD *a1, unsigned int a2, double a3)
{
  __int64 (*v3)(void); // rax
  int v5; // eax
  __int64 (__fastcall *v6)(); // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 **v9; // rax
  __int64 *v10; // rbx
  __int64 v11; // rdx
  __int64 *v12; // r13
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 (__fastcall *v16)(); // rax
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 (__fastcall *v20)(); // rax
  __int64 v21; // rbx
  __int64 v22; // rbx
  unsigned int v23; // [rsp+8h] [rbp-40h]

  v3 = *(__int64 (**)(void))(*a1 + 552LL);
  if ( v3 == sub_7C5680 )
  {
    if ( a1[20] )
      return 1;
    v5 = *(_DWORD *)(*(_QWORD *)(a1[3] + 3296LL) + 24LL * (a2 >> 1));
  }
  else
  {
    v5 = v3();
  }
  if ( v5 )
  {
    v6 = *(__int64 (__fastcall **)())(*a1 + 584LL);
    if ( v6 == sub_7C5800 )
    {
      v7 = a1[20];
      v8 = 8LL * a2;
      v9 = (__int64 **)(v7 ? *(_QWORD *)(v7 + 896) + v8 : *(_QWORD *)(a1[3] + 3280LL) + v8);
    }
    else
    {
      v9 = (__int64 **)((__int64 (__fastcall *)(_QWORD *, _QWORD))v6)(a1, a2);
    }
    v10 = *v9;
    if ( *v9 )
    {
      v11 = 2LL * *((unsigned int *)v10 - 1);
      v12 = &v10[v11];
      if ( v10 != &v10[v11] )
      {
        v23 = a2 ^ 1;
        do
        {
          if ( (v10[1] & 3) == 2 )
          {
            v13 = *v10;
            v14 = *v10 + 8;
            if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 64LL))(v14, v23)
              && *(_DWORD *)(v13 + 24) >> 1 != a2 >> 1 )
            {
              sub_180B130(v14);
              if ( (unsigned __int8)sub_186A530(a3) )
              {
                sub_186A4C0(a3);
                v19 = sub_180B150(v14, v23);
                sub_7C5DC0(v19, a2);
                std::__ostream_insert<char,std::char_traits<char>>();
                v20 = *(__int64 (__fastcall **)())(*a1 + 552LL);
                if ( v20 != sub_7C5680 )
                  ((void (__fastcall *)(_QWORD *, _QWORD))v20)(a1, a2);
                v21 = std::ostream::_M_insert<unsigned long>();
                std::__ostream_insert<char,std::char_traits<char>>();
                v22 = sub_7E42B0(v21, v14);
                std::__ostream_insert<char,std::char_traits<char>>();
                (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64))(*(_QWORD *)(v13 + 8) + 136LL))(
                  v14,
                  v22,
                  a1 + 10,
                  1);
                sub_186A500(v14, v22);
              }
              else
              {
                v15 = sub_180B150(v14, v23);
                sub_7C5DC0(v15, a2);
                std::__ostream_insert<char,std::char_traits<char>>();
                v16 = *(__int64 (__fastcall **)())(*a1 + 552LL);
                if ( v16 != sub_7C5680 )
                  ((void (__fastcall *)(_QWORD *, _QWORD))v16)(a1, a2);
                v17 = std::ostream::_M_insert<unsigned long>();
                std::__ostream_insert<char,std::char_traits<char>>();
                v18 = sub_7E42B0(v17, v14);
                std::__ostream_insert<char,std::char_traits<char>>();
                (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64))(*(_QWORD *)(v13 + 8) + 136LL))(
                  v14,
                  v18,
                  a1 + 10,
                  1);
              }
              sub_1872CE0("");
              sub_1873130(114, 1763);
            }
          }
          v10 += 2;
        }
        while ( v12 != v10 );
      }
    }
  }
  return 1;
}

