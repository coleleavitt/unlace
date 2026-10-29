__int64 __fastcall sub_38000(char *a1, __int64 a2, int a3, char a4, __m128d a5)
{
  int v5; // r8d
  char v6; // r13
  int v9; // ebx
  __int64 result; // rax
  int v12; // r14d
  int v15; // edx
  __int64 v16; // rax
  char v18; // cl
  int v19; // edi
  unsigned __int64 v20; // r8
  int v21; // r13d
  int v22; // r13d
  int v23; // r9d
  int v24; // eax
  __int64 v25; // r13
  __int64 v26; // r15
  char *v27; // rax
  char *v28; // r8
  int v29; // edx
  int v30; // ecx
  int v32; // eax
  unsigned __int64 v33; // rcx
  int v34; // ecx
  __int64 v36; // rsi
  unsigned int v37; // ecx
  __int8 *v38; // rdi
  char *v39; // r8
  __int64 v40; // rsi
  unsigned int v41; // edx
  unsigned int v42; // eax
  unsigned int v43; // r8d
  __int64 v44; // rax
  __int8 v45; // cl
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  unsigned int v49; // ebx
  unsigned int v50; // ebx
  unsigned int v51; // edx
  __int64 v52; // r9
  int v53; // [rsp+18h] [rbp-140h]
  __int64 v54; // [rsp+20h] [rbp-138h] BYREF
  char v55; // [rsp+30h] [rbp-128h]
  __m128i si128; // [rsp+40h] [rbp-118h]
  __m128i v57; // [rsp+50h] [rbp-108h]
  __m128i v58; // [rsp+60h] [rbp-F8h]
  __m128i v59; // [rsp+70h] [rbp-E8h]
  __m128i v60; // [rsp+80h] [rbp-D8h]
  __m128i v61; // [rsp+90h] [rbp-C8h]
  __m128i v62; // [rsp+A0h] [rbp-B8h]
  __m128i v63; // [rsp+B0h] [rbp-A8h]
  __m128i v64; // [rsp+C0h] [rbp-98h]
  __m128i v65; // [rsp+D0h] [rbp-88h]
  __m128i v66; // [rsp+E0h] [rbp-78h]
  __m128i v67[2]; // [rsp+F0h] [rbp-68h]
  unsigned __int64 v68; // [rsp+118h] [rbp-40h]

  v5 = 0;
  v6 = a4;
  v68 = __readfsqword(0x28u);
  v9 = a3;
  if ( a4 )
  {
    v5 = a3;
    if ( a3 < 0 )
    {
      v9 = v53;
      v6 = 0;
      v5 = 0;
    }
  }
  sub_36EB0((__int64)&v54, a1, a2, 4, v5, a5);
  if ( v55 )
    return v54;
  _RSI = *(_QWORD *)&a5.m128d_f64[0] & 0xFFFFFFFFFFFFFLL;
  if ( ((*(_QWORD *)&a5.m128d_f64[0] >> 52) & 0x7FF) != 0 )
  {
    v12 = ((*(_QWORD *)&a5.m128d_f64[0] >> 52) & 0x7FF) - 1023;
    _RDI = _RSI | 0x10000000000000LL;
    __asm { tzcnt   rax, rdi }
    v15 = 13 - ((int)_RAX >> 2);
    if ( !v6 )
    {
      v9 = 13 - ((int)_RAX >> 2);
      v18 = 49;
      v19 = 0;
      goto LABEL_14;
    }
    if ( v9 >= v15 )
    {
      v18 = 49;
      v19 = v9 - v15;
      v15 = v9;
      v9 = 13 - ((int)_RAX >> 2);
      goto LABEL_14;
    }
    goto LABEL_10;
  }
  if ( !v6 )
  {
    if ( _RSI )
    {
      _BitScanReverse64(&v33, _RSI);
      v34 = (v33 ^ 0x3F) - 11;
      _RSI = _RSI << v34;
      if ( _RSI )
      {
        __asm { tzcnt   rax, rsi }
        v9 = 13 - ((int)_RAX >> 2);
        if ( v9 >= 0 )
        {
          v12 = -1022 - v34;
LABEL_12:
          if ( _RSI >> 52 > 2 )
            sub_3A760(
              "../../../../../libstdc++-v3/src/nonshared17/../c++17/floating_to_chars.cc",
              958,
              "std::to_chars_result std::__floating_to_chars_hex(char*, char*, T, optional<int>) [with T = double]",
              "nibble <= 2");
          v18 = (_RSI >> 52) + 48;
          v15 = v9;
          v19 = 0;
          _RSI = _RSI & 0xFFCFFFFFFFFFFFFFLL;
LABEL_14:
          LOBYTE(v20) = a5.m128d_f64[0] < 0.0;
          v21 = (a5.m128d_f64[0] < 0.0) + 1;
          if ( v15 <= 0 )
            goto LABEL_16;
          goto LABEL_15;
        }
      }
    }
LABEL_37:
    sub_3A760(
      "../../../../../libstdc++-v3/src/nonshared17/../c++17/floating_to_chars.cc",
      896,
      "std::to_chars_result std::__floating_to_chars_hex(char*, char*, T, optional<int>) [with T = double]",
      "shortest_full_precision >= 0");
  }
  if ( !_RSI )
    goto LABEL_37;
  __asm { tzcnt   rdx, rsi }
  v32 = 13 - ((int)_RDX >> 2);
  if ( v32 > v9 )
  {
    _RDI = *(_QWORD *)&a5.m128d_f64[0] & 0xFFFFFFFFFFFFFLL;
    v12 = -1022;
LABEL_10:
    v16 = (2 * _RDI) & (_RDI | (2 * _RDI - 1));
    _RSI = _RDI >> (4 * (13 - (unsigned __int8)v9)) << (4 * (13 - (unsigned __int8)v9));
    if ( _bittest64(&v16, (unsigned int)(4 * (13 - v9))) )
      _RSI += 1LL << (4 * (13 - (unsigned __int8)v9));
    goto LABEL_12;
  }
  v15 = v9;
  v18 = 48;
  v19 = v9 - v32;
  v20 = *(_QWORD *)&a5.m128d_f64[0] >> 63;
  v9 = v32;
  v12 = -1022;
LABEL_15:
  v21 = (unsigned __int8)v20 + 2;
LABEL_16:
  v22 = v9 + v21;
  v23 = 6;
  v24 = -v12;
  if ( v12 > 0 )
    v24 = v12;
  if ( v24 <= 999 )
  {
    v23 = 5;
    if ( v24 <= 99 )
      v23 = (v24 > 9) + 3;
  }
  v25 = v23 + v22;
  if ( a2 - (__int64)a1 < v25 )
    return a2;
  v26 = v19;
  if ( a2 - (__int64)a1 - v25 < v19 )
    return a2;
  v27 = a1;
  if ( (_BYTE)v20 )
  {
    *a1 = 45;
    v27 = a1 + 1;
  }
  *v27 = v18;
  v28 = v27 + 1;
  if ( v15 > 0 )
  {
    v27[1] = 46;
    v28 = v27 + 2;
    if ( v9 > 0 )
    {
      if ( !_RSI )
        goto LABEL_46;
      v29 = 0;
      v30 = 52;
      do
      {
        v30 -= 4;
        if ( (unsigned int)(_RSI >> v30) > 0xF )
          sub_3A760(
            "../../../../../libstdc++-v3/src/nonshared17/../c++17/floating_to_chars.cc",
            1010,
            "std::to_chars_result std::__floating_to_chars_hex(char*, char*, T, optional<int>) [with T = double]",
            "nibble < 16");
        ++v28;
        ++v29;
        *(v28 - 1) = a0123456789abcd[(unsigned int)(_RSI >> v30)];
        _RSI &= ~(15LL << v30);
      }
      while ( _RSI );
      if ( v30 < 0 )
        sub_3A760(
          "../../../../../libstdc++-v3/src/nonshared17/../c++17/floating_to_chars.cc",
          1015,
          "std::to_chars_result std::__floating_to_chars_hex(char*, char*, T, optional<int>) [with T = double]",
          "nibble_offset >= 0");
      if ( v29 > v9 )
        sub_3A760(
          "../../../../../libstdc++-v3/src/nonshared17/../c++17/floating_to_chars.cc",
          1016,
          "std::to_chars_result std::__floating_to_chars_hex(char*, char*, T, optional<int>) [with T = double]",
          "written_hexits <= effective_precision");
      v9 -= v29;
      if ( v9 )
      {
LABEL_46:
        v36 = v9;
        if ( (unsigned int)v9 >= 8 )
        {
          *(_QWORD *)v28 = 0x3030303030303030LL;
          v48 = (unsigned __int64)(v28 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          *(_QWORD *)&v28[v9 - 8] = 0x3030303030303030LL;
          v49 = ((_DWORD)v28 - v48 + v9) & 0xFFFFFFF8;
          if ( v49 >= 8 )
          {
            v50 = v49 & 0xFFFFFFF8;
            v51 = 0;
            do
            {
              v52 = v51;
              v51 += 8;
              *(_QWORD *)(v48 + v52) = 0x3030303030303030LL;
            }
            while ( v51 < v50 );
          }
        }
        else if ( (v9 & 4) != 0 )
        {
          *(_DWORD *)v28 = 808464432;
          *(_DWORD *)&v28[v9 - 4] = 808464432;
        }
        else
        {
          *v28 = 48;
          if ( (v9 & 2) != 0 )
            *(_WORD *)&v28[v9 - 2] = 12336;
        }
        v28 += v36;
      }
    }
  }
  if ( v19 )
    v28 = (char *)memset(v28, 48, v19) + v19;
  *v28 = 112;
  v37 = v12;
  if ( v12 < 0 )
  {
    if ( (char *)a2 == v28 + 1 )
      goto LABEL_58;
    v28[1] = 45;
    v38 = v28 + 2;
    v37 = -v12;
  }
  else
  {
    v38 = v28 + 2;
    v28[1] = 43;
    if ( (char *)a2 == v28 + 2 )
      goto LABEL_58;
    if ( !v12 )
    {
      v28[2] = 48;
      v39 = v28 + 3;
      goto LABEL_57;
    }
  }
  if ( v37 <= 9 )
  {
    v41 = 1;
    if ( a2 - (__int64)v38 > 0 )
      goto LABEL_67;
    goto LABEL_58;
  }
  if ( v37 <= 0x63 )
  {
    if ( a2 - (__int64)v38 > 1 )
    {
      v41 = 2;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3E240);
      v57 = _mm_load_si128((const __m128i *)&xmmword_3E250);
      v58 = _mm_load_si128((const __m128i *)&xmmword_3E260);
      v59 = _mm_load_si128((const __m128i *)&xmmword_3E270);
      v60 = _mm_load_si128((const __m128i *)&xmmword_3E280);
      v61 = _mm_load_si128((const __m128i *)&xmmword_3E290);
      v62 = _mm_load_si128((const __m128i *)&xmmword_3E2A0);
      v63 = _mm_load_si128((const __m128i *)&xmmword_3E2B0);
      v64 = _mm_load_si128((const __m128i *)&xmmword_3E2C0);
      v65 = _mm_load_si128((const __m128i *)&xmmword_3E2D0);
      v66 = _mm_load_si128((const __m128i *)&xmmword_3E2E0);
      v67[0] = _mm_load_si128((const __m128i *)&xmmword_3E2F0);
      *(__m128i *)((char *)v67 + 9) = _mm_load_si128((const __m128i *)&xmmword_3E300);
      goto LABEL_72;
    }
LABEL_58:
    sub_3A760(
      "../../../../../libstdc++-v3/src/nonshared17/../c++17/floating_to_chars.cc",
      1036,
      "std::to_chars_result std::__floating_to_chars_hex(char*, char*, T, optional<int>) [with T = double]",
      "result.ec == errc{} && result.ptr == expected_output_end");
  }
  v40 = 4;
  v41 = 4;
  if ( v37 <= 0x3E7 )
  {
    v40 = 3;
    v41 = 3;
  }
  if ( v40 > a2 - (__int64)v38 )
    goto LABEL_58;
  v42 = v37;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E240);
  v57 = _mm_load_si128((const __m128i *)&xmmword_3E250);
  v43 = 100 * (v37 / 0x64);
  v37 /= 0x64u;
  v58 = _mm_load_si128((const __m128i *)&xmmword_3E260);
  v59 = _mm_load_si128((const __m128i *)&xmmword_3E270);
  v44 = 2 * (v42 - v43);
  v60 = _mm_load_si128((const __m128i *)&xmmword_3E280);
  v61 = _mm_load_si128((const __m128i *)&xmmword_3E290);
  v62 = _mm_load_si128((const __m128i *)&xmmword_3E2A0);
  v63 = _mm_load_si128((const __m128i *)&xmmword_3E2B0);
  v64 = _mm_load_si128((const __m128i *)&xmmword_3E2C0);
  v65 = _mm_load_si128((const __m128i *)&xmmword_3E2D0);
  v66 = _mm_load_si128((const __m128i *)&xmmword_3E2E0);
  v67[0] = _mm_load_si128((const __m128i *)&xmmword_3E2F0);
  *(__m128i *)((char *)v67 + 9) = _mm_load_si128((const __m128i *)&xmmword_3E300);
  LOBYTE(v43) = si128.m128i_i8[(unsigned int)(v44 + 1)];
  LOBYTE(v44) = si128.m128i_i8[v44];
  v38[v41 - 1] = v43;
  v38[v41 - 2] = v44;
  if ( v37 == 10 )
  {
LABEL_72:
    v46 = 2 * v37;
    v47 = (unsigned int)(v46 + 1);
    v45 = si128.m128i_i8[v46];
    v38[1] = si128.m128i_i8[v47];
    goto LABEL_68;
  }
LABEL_67:
  v45 = v37 + 48;
LABEL_68:
  *v38 = v45;
  v39 = &v38[v41];
LABEL_57:
  result = (__int64)v39;
  if ( v39 != &a1[v25 + v26] )
    goto LABEL_58;
  return result;
}

