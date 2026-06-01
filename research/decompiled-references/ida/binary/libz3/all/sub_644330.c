__int64 __fastcall sub_644330(__int64 a1, const __m128i *a2, double a3)
{
  __m128i *v4; // rbx
  std::chrono::_V2::steady_clock **v5; // rbp
  std::chrono::_V2::steady_clock **v6; // r13
  std::chrono::_V2::steady_clock *v7; // rdi
  unsigned __int8 v8; // r15
  std::chrono::_V2::steady_clock *v10; // r14
  __int64 v11; // r13
  _BYTE *v12; // rsi
  __int64 v13; // rax
  std::chrono::_V2::steady_clock *v14; // rdi
  __m128i *v15; // r13
  __m128d v16; // xmm0
  __m128d v17; // rt1
  __int64 v18; // rdi
  __int64 v19; // r13
  _BYTE *v20; // rsi
  __int64 v21; // rdi
  unsigned __int8 v22; // [rsp+0h] [rbp-58h]
  __m128i *v23; // [rsp+8h] [rbp-50h]
  __int64 v24; // [rsp+10h] [rbp-48h]
  std::chrono::_V2::steady_clock **v25; // [rsp+18h] [rbp-40h]

  v23 = (__m128i *)a2;
  if ( *(_BYTE *)(a1 + 16) )
    sub_643EC0(a1);
  v4 = (__m128i *)sub_186B270(0xF8u);
  sub_643420((__int64)v4, a2);
  v5 = *(std::chrono::_V2::steady_clock ***)(a1 + 24);
  if ( !v5 )
  {
    v22 = 0;
    goto LABEL_10;
  }
  v22 = 0;
  v25 = &v5[*((unsigned int *)v5 - 1)];
  if ( v5 == v25 )
    goto LABEL_10;
  while ( 1 )
  {
    v6 = *(std::chrono::_V2::steady_clock ***)a1;
    v7 = **(std::chrono::_V2::steady_clock ***)a1;
    v8 = sub_18290A0(v7);
    if ( !v8 )
      break;
    v10 = *v5;
    if ( (unsigned int)sub_180B130(v7) )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        v11 = sub_180B150(v7, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        v12 = *(_BYTE **)(*(_QWORD *)(*(_QWORD *)v10 - 8LL) + 8LL);
        strlen(&v12[*v12 == 42]);
        std::__ostream_insert<char,std::char_traits<char>>();
        v7 = (std::chrono::_V2::steady_clock *)v11;
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v11, "...");
      }
      else
      {
        v19 = sub_180B150(v7, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        v20 = *(_BYTE **)(*(_QWORD *)(*(_QWORD *)v10 - 8LL) + 8LL);
        strlen(&v20[*v20 == 42]);
        std::__ostream_insert<char,std::char_traits<char>>();
        v7 = (std::chrono::_V2::steady_clock *)v19;
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v13 = std::chrono::_V2::steady_clock::now(v7);
    a2 = v4;
    v14 = v10;
    v24 = v13;
    v15 = (__m128i *)(*(__int64 (__fastcall **)(std::chrono::_V2::steady_clock *, __m128i *))(*(_QWORD *)v10 + 24LL))(
                       v10,
                       v4);
    v16 = 0;
    v16.m128d_f64[0] = (double)(int)((std::chrono::_V2::steady_clock::now(v10) - v24) / 1000000) / 1000.0;
    v17.m128d_f64[0] = 0.001;
    *(_QWORD *)&a3 = *(_QWORD *)&v16.m128d_f64[0] & *(_QWORD *)&_mm_cmpge_sd(v16, v17).m128d_f64[0];
    if ( v15 )
    {
      if ( !*((_BYTE *)v10 + 12) || v15[9].m128i_i64[0] || (unsigned __int8)sub_6430A0((__int64)v15) )
      {
        if ( v4 != v15 && v4 )
        {
          sub_63D960((__int64)v4);
          sub_186B220(v4);
        }
        sub_6433D0((__int64)v15);
        if ( (unsigned int)sub_180B130(v15) )
        {
          if ( (unsigned __int8)sub_186A530(a3) )
          {
            sub_186A4C0(a3);
            sub_180B150(v15, v4);
            std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
            v18 = std::ostream::_M_insert<double>();
            a2 = (const __m128i *)"s)\n";
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_186A500(v18, "s)\n");
          }
          else
          {
            sub_180B150(v15, v4);
            std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<double>();
            a2 = (const __m128i *)"s)\n";
            std::__ostream_insert<char,std::char_traits<char>>();
          }
        }
        v22 = v8;
        v4 = v15;
        goto LABEL_25;
      }
      sub_1875640("a rule transformation skipped because it destratified negation", v22);
      sub_63D960((__int64)v15);
      v14 = (std::chrono::_V2::steady_clock *)v15;
      sub_186B220(v15);
    }
    if ( (unsigned int)sub_180B130(v14) )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        sub_180B150(v14, v4);
        std::__ostream_insert<char,std::char_traits<char>>();
        v21 = std::ostream::_M_insert<double>();
        a2 = (const __m128i *)"s)\n";
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v21, "s)\n");
      }
      else
      {
        sub_180B150(v14, v4);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<double>();
        a2 = (const __m128i *)"s)\n";
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
LABEL_25:
    if ( ++v5 == v25 )
      goto LABEL_7;
  }
  *((_DWORD *)v6 + 747) = 6;
LABEL_7:
  if ( v22 )
    sub_63ECD0(v23, (__int64)v4, a3);
  if ( v4 )
  {
LABEL_10:
    sub_63D960((__int64)v4);
    sub_186B220(v4);
  }
  return v22;
}

