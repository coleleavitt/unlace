__int64 __fastcall sub_7B09F0(unsigned int *a1, unsigned int *a2, int a3, __m128i a4)
{
  __int64 v5; // rsi
  unsigned int *v7; // r12
  __int64 (*v8)(void); // rax
  __int64 v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // edx
  __int64 v12; // rbx
  unsigned int v13; // r13d
  __int64 (__fastcall *v14)(); // rax
  int v15; // eax
  _QWORD *v16; // rsi
  __int64 v17; // rsi
  unsigned int v18; // ecx
  unsigned int *v19; // rax
  __m128i v20; // xmm1
  __m128 v21; // xmm0
  __m128 v22; // xmm2
  unsigned int v23; // edx
  __m128i v24; // xmm1
  int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v31; // eax
  __int64 v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // r12
  __int64 v38; // rdi
  _QWORD *v39; // [rsp+8h] [rbp-40h]

  v5 = a2[4];
  if ( (_DWORD)v5 == -2 )
    return 1;
  v7 = a1;
  v8 = *(__int64 (**)(void))(*(_QWORD *)a1 + 536LL);
  if ( v8 != sub_7C55E0 )
  {
    v31 = v8();
LABEL_29:
    if ( v31 != 1 )
      return 1;
    goto LABEL_6;
  }
  v9 = *((_QWORD *)a1 + 20);
  if ( !v9 )
  {
    v31 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 3288LL) + 4 * v5);
    goto LABEL_29;
  }
  v10 = *(_DWORD *)(*(_QWORD *)(v9 + 880) + 4LL * ((unsigned int)v5 >> 1));
  if ( v10 < *(_DWORD *)(v9 + 888) || (((unsigned __int8)v10 ^ (unsigned __int8)v5) & 1) != 0 )
    return 1;
LABEL_6:
  v11 = a2[8];
  v12 = 0;
  if ( v11 )
  {
    while ( 1 )
    {
      v13 = a2[2 * v12 + 20];
      if ( v13 == a3 )
        goto LABEL_8;
      v14 = *(__int64 (__fastcall **)())(*(_QWORD *)v7 + 552LL);
      if ( v14 == sub_7C5680 )
      {
        if ( !*((_QWORD *)v7 + 20) )
        {
          v15 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 3) + 3296LL) + 24LL * (v13 >> 1));
          goto LABEL_13;
        }
LABEL_8:
        if ( (unsigned int)++v12 >= v11 )
          break;
      }
      else
      {
        a1 = v7;
        v15 = ((__int64 (__fastcall *)(unsigned int *, _QWORD))v14)(v7, v13);
LABEL_13:
        if ( v15 )
        {
          a1 = a2;
          v16 = v7 + 20;
          v39 = v7 + 20;
          if ( (unsigned int)v12 < a2[17] != (unsigned __int8)sub_7E4330(a2, v7 + 20, v13) )
          {
            sub_180B130(a2);
            if ( (unsigned __int8)sub_186A530(*(double *)a4.m128i_i64) )
            {
              sub_186A4C0(*(double *)a4.m128i_i64);
              v36 = sub_180B150(a2, v16);
              (*(void (__fastcall **)(unsigned int *, __int64, _QWORD *, __int64))(*(_QWORD *)a2 + 136LL))(
                a2,
                v36,
                v39,
                1);
              v37 = sub_180B150(a2, v36);
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_7C5DC0(v37, v13);
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::_M_insert<unsigned long>();
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_7E4330(a2, v39, v13);
              v38 = std::ostream::_M_insert<bool>();
              std::operator<<<std::char_traits<char>>();
              sub_186A500(v38, "\n");
            }
            else
            {
              v33 = sub_180B150(a2, v16);
              (*(void (__fastcall **)(unsigned int *, __int64, _QWORD *, __int64))(*(_QWORD *)a2 + 136LL))(
                a2,
                v33,
                v39,
                1);
              v34 = sub_180B150(a2, v33);
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_7C5DC0(v34, v13);
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::_M_insert<unsigned long>();
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_7E4330(a2, v39, v13);
              std::ostream::_M_insert<bool>();
              std::operator<<<std::char_traits<char>>();
            }
            sub_1872CE0("");
            sub_1873130(114, 1812);
          }
        }
        v11 = a2[8];
        if ( (unsigned int)++v12 >= v11 )
          break;
      }
    }
  }
  v17 = a2[17];
  if ( (_DWORD)v17 )
  {
    v18 = v17 - 1;
    if ( (unsigned int)(v17 - 1) <= 3 )
    {
      v23 = 0;
      v25 = 0;
    }
    else
    {
      v19 = a2;
      v20 = 0;
      do
      {
        v21 = (__m128)_mm_loadu_si128((const __m128i *)(v19 + 19));
        v22 = (__m128)_mm_loadu_si128((const __m128i *)(v19 + 23));
        v19 += 8;
        v20 = _mm_add_epi32(v20, (__m128i)_mm_shuffle_ps(v21, v22, 136));
      }
      while ( &a2[8 * (v18 >> 2)] != v19 );
      v23 = v18 & 0xFFFFFFFC;
      v24 = _mm_add_epi32(v20, _mm_srli_si128(v20, 8));
      a4 = _mm_srli_si128(v24, 4);
      v25 = _mm_cvtsi128_si32(_mm_add_epi32(v24, a4));
    }
    v26 = a2[2 * v23 + 19] + v25;
    v27 = v23 + 1;
    if ( (unsigned int)v27 < (unsigned int)v17 )
    {
      v26 += a2[2 * v27 + 19];
      v28 = v23 + 2;
      if ( (unsigned int)v28 < (unsigned int)v17 )
      {
        v29 = v23 + 3;
        v26 += a2[2 * v28 + 19];
        if ( (unsigned int)v29 < (unsigned int)v17 )
          v26 += a2[2 * v29 + 19];
      }
    }
  }
  else
  {
    v26 = 0;
  }
  if ( a2[16] != v26 )
  {
    sub_180B130(a1);
    if ( (unsigned __int8)sub_186A530(*(double *)a4.m128i_i64) )
    {
      sub_186A4C0(*(double *)a4.m128i_i64);
      v32 = sub_180B150(a1, v17);
      (*(void (__fastcall **)(unsigned int *, __int64, _QWORD *, __int64))(*(_QWORD *)a2 + 136LL))(
        a2,
        v32,
        (_QWORD *)v7 + 10,
        1);
      sub_186A500(a2, v32);
    }
    else
    {
      v35 = sub_180B150(a1, v17);
      (*(void (__fastcall **)(unsigned int *, __int64, _QWORD *, __int64))(*(_QWORD *)a2 + 136LL))(
        a2,
        v35,
        (_QWORD *)v7 + 10,
        1);
    }
    sub_1872CE0("");
    sub_1873130(114, 1821);
  }
  return 1;
}

