__int64 __fastcall sub_7B2AC0(_QWORD *a1, unsigned int a2, double a3)
{
  __int64 (*v5)(void); // rax
  __int64 v6; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // edx
  __int64 v15; // rdi
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // [rsp+28h] [rbp-40h]
  __int64 v23; // [rsp+28h] [rbp-40h]
  __m128i v24; // [rsp+30h] [rbp-38h] BYREF
  __int64 v25; // [rsp+40h] [rbp-28h]

  v5 = *(__int64 (**)(void))(*a1 + 536LL);
  if ( (char *)v5 != (char *)sub_7C55E0 )
  {
    v8 = v5();
LABEL_6:
    if ( v8 )
      return 0;
    goto LABEL_7;
  }
  v6 = a1[20];
  if ( !v6 )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * a2);
    goto LABEL_6;
  }
  if ( *(_DWORD *)(*(_QWORD *)(v6 + 880) + 4LL * (a2 >> 1)) >= *(_DWORD *)(v6 + 888) )
    return 0;
LABEL_7:
  v9 = a1[117];
  v10 = *(_QWORD *)(v9 + 8LL * a2);
  if ( !v10 || !*(_DWORD *)(v10 - 4) )
    return 0;
  v11 = a2 ^ 1;
  v12 = a2 ^ 1;
  v13 = *(_QWORD *)(v9 + 8 * v12);
  v14 = v13 ? *(_DWORD *)(v13 - 4) : 0;
  if ( *(_DWORD *)(a1[118] + 16 * v12 + 8) + v14 )
    return 0;
  v15 = a1[3] + 2440LL;
  if ( (unsigned int)sub_1177010(v15) )
    return 0;
  if ( (unsigned int)sub_180B130(v15) > 0x63 )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v22 = sub_180B150(v15, v11);
      std::__ostream_insert<char,std::char_traits<char>>();
      v21 = sub_7C5DC0(v22, a2);
      std::operator<<<std::char_traits<char>>();
      sub_186A500(v21, "\n");
    }
    else
    {
      v23 = sub_180B150(v15, v11);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_7C5DC0(v23, a2);
      std::operator<<<std::char_traits<char>>();
    }
  }
  v20 = a1[3];
  LODWORD(v25) = 0;
  v24.m128i_i64[1] = 0;
  v24.m128i_i32[0] = *(_DWORD *)(v20 + 3612);
  sub_7C5F00(v20, a2, v16, v17, v18, v19, (__int128)_mm_load_si128(&v24), v25);
  return 1;
}

