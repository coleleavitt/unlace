__int64 __fastcall sub_3ADDF0(__int64 *a1)
{
  __int64 v2; // r12
  _QWORD *v3; // rbp
  _QWORD *v4; // r13
  __int64 v5; // r12
  const char *v6; // rsi
  std::ios_base **v7; // rax
  std::ios_base *v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // r15
  int v12; // eax
  bool v13; // zf
  __int64 v14; // rdi
  __int64 v16; // [rsp+10h] [rbp-68h]
  int v17; // [rsp+1Ch] [rbp-5Ch]
  __int64 v18; // [rsp+28h] [rbp-50h] BYREF
  __m128i v19[4]; // [rsp+30h] [rbp-48h] BYREF

  v19[0].m128i_i64[0] = 0;
  sub_1862370(v19, "smt.relevancy", 0);
  sub_1862300(v19, "smt.mbqi", 0);
  (*(void (__fastcall **)(_QWORD, __m128i *))(**(_QWORD **)(*a1 + 64) + 88LL))(*(_QWORD *)(*a1 + 64), v19);
  v2 = *a1;
  v3 = *(_QWORD **)(*a1 + 360);
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 >= v4 )
      goto LABEL_5;
    do
      sub_62A410(*(_QWORD *)(v2 + 352), *v3++);
    while ( v3 < v4 );
    v3 = *(_QWORD **)(v2 + 360);
    if ( v3 )
LABEL_5:
      *((_DWORD *)v3 - 1) = 0;
  }
  v5 = 0;
  sub_18572D0(v19);
  v6 = "bmc.linear_unrolling_depth";
  v7 = *(std::ios_base ***)(*(_QWORD *)(*a1 + 48) + 32LL);
  v8 = *v7;
  v9 = sub_1859980(*v7, "bmc.linear_unrolling_depth", v7 + 1, 0xFFFFFFFFLL);
  v16 = v9;
  if ( !v9 )
    return 0;
  while ( 1 )
  {
    if ( (unsigned int)sub_180B130(v8) )
    {
      if ( (unsigned __int8)sub_186A530() )
      {
        sub_186A4C0();
        sub_180B150(v8, v6);
        std::__ostream_insert<char,std::char_traits<char>>();
        v14 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v14, "\n");
      }
      else
      {
        sub_180B150(v8, v6);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    sub_EE4F40(*(_QWORD *)(*a1 + 56));
    sub_39D180(a1, v5);
    sub_39B6D0(v19, (__int64)a1, (const char **)(*(_QWORD *)(*a1 + 320) + 16LL));
    v10 = v19[0].m128i_i64[0];
    v6 = (_BYTE *)(&dword_0 + 1);
    v11 = v19[0].m128i_i64[1];
    v8 = *(std::ios_base **)(*a1 + 64);
    v18 = v19[0].m128i_i64[0];
    v12 = sub_E60CB0(v8, 1, (int)&v18);
    if ( v10 && (v13 = *(_DWORD *)(v10 + 8) == 1, --*(_DWORD *)(v10 + 8), v13) )
    {
      v6 = (const char *)v10;
      v8 = (std::ios_base *)v11;
      v17 = v12;
      sub_15D7BC0(v11, v10);
      v12 = v17;
      if ( !v17 )
        return 0;
    }
    else if ( !v12 )
    {
      return 0;
    }
    if ( v12 == 1 )
      break;
    if ( ++v5 == v16 )
      return 0;
  }
  sub_3ACD00(a1, v5);
  return 1;
}

