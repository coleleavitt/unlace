__int64 __fastcall sub_9A26E0(_QWORD *a1, __int64 *a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rbx
  __int64 v4; // r15
  int v5; // r13d
  unsigned int v7; // ecx
  __int64 v8; // rax
  unsigned __int8 v9; // al
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rax
  __m128 v15; // xmm0
  __m128i v16; // xmm3
  __int64 v17; // r12
  const char *v18; // rsi
  const char *v19; // rdi
  __int64 v21; // rdi
  __m128i v22; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+18h] [rbp-90h] BYREF
  const char *v24; // [rsp+20h] [rbp-88h]
  __m128 *v25; // [rsp+28h] [rbp-80h]
  __int64 v26; // [rsp+38h] [rbp-70h] BYREF
  __m128 v27; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v28[2]; // [rsp+50h] [rbp-58h] BYREF
  __m128i v29; // [rsp+60h] [rbp-48h]

  v3 = *a2;
  v22 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C56508), (__m128i)(unsigned __int64)sub_9912B0);
  if ( !v3 )
    return 0;
  v4 = v3 + 40LL * *(unsigned int *)(v3 - 4);
  if ( v3 == v4 )
  {
    return 0;
  }
  else
  {
    v5 = *((_DWORD *)a2 + 3);
    v7 = 0;
    do
    {
      while ( 1 )
      {
        v8 = *(unsigned int *)(v3 + 32);
        LOBYTE(v2) = (_DWORD)v8 != v5 && (_DWORD)v8 != -1;
        if ( (_BYTE)v2 )
        {
          if ( !*(_QWORD *)(a1[93] + 8 * v8) && !*(_QWORD *)(a1[94] + 8 * v8) )
            break;
        }
        v3 += 40;
        if ( v4 == v3 )
          return v7;
      }
      v9 = sub_98B380(**(_QWORD **)(a1[4] + 8 * v8));
      v12 = a1[3];
      v13 = a1[60];
      v23 = v12;
      if ( !v13 )
      {
        LOBYTE(v24) = v9;
        sub_16669E0(a1 + 59);
        v13 = a1[60];
        v9 = (unsigned __int8)v24;
      }
      sub_166A700(v13, (unsigned int)&qword_1C7F2A0, v9, v12, v10, v11);
      v14 = sub_15E1B70(a1[59]);
      v15 = _mm_loadh_ps((const double *)&v23);
      v27 = v15;
      if ( v14 )
        ++*(_DWORD *)(v14 + 8);
      v16 = _mm_load_si128(&v22);
      v25 = &v27;
      v17 = a1[2];
      v28[0] = &v27;
      v24 = (const char *)v28;
      v28[1] = 0;
      v26 = 0;
      v29 = v16;
      sub_9935A0(&v26, (__int64)a1, (__int64)v28);
      v18 = (const char *)v27.m128_u64[0];
      v23 = v26;
      sub_B6F780(v17);
      v19 = *(const char **)(v23 + 912);
      if ( v19 )
      {
        v19 += 16;
        v18 = "[end-of-instance]\n";
        std::operator<<<std::char_traits<char>>();
      }
      if ( v29.m128i_i64[0] )
      {
        v18 = v24;
        v19 = v24;
        ((void (__fastcall *)(const char *, const char *, __int64))v29.m128i_i64[0])(v24, v24, 3);
      }
      if ( (unsigned int)sub_180B130(v19) > 9 )
      {
        if ( (unsigned __int8)sub_186A530(*(double *)v15.m128_u64) )
        {
          sub_186A4C0(*(double *)v15.m128_u64);
          v23 = sub_180B150(v19, v18);
          std::__ostream_insert<char,std::char_traits<char>>();
          v21 = sub_160EBE0(v23, v25);
          std::operator<<<std::char_traits<char>>();
          sub_186A500(v21, "\n");
        }
        else
        {
          v23 = sub_180B150(v19, v18);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_160EBE0(v23, v25);
          std::operator<<<std::char_traits<char>>();
        }
      }
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(v17 + 7488) + 48LL))(
        *(_QWORD *)(v17 + 7488),
        v27.m128_u64[0]);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v17 + 7488) + 64LL))(*(_QWORD *)(v17 + 7488));
      v3 += 40;
      sub_98B270(v27.m128_i64[0], v27.m128_i64[1]);
      v7 = v2;
    }
    while ( v4 != v3 );
  }
  return v7;
}

