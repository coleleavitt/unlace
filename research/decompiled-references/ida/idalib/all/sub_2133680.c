__int64 __fastcall sub_2133680(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  bool v5; // zf
  __int64 v6; // r13
  unsigned int v7; // r15d
  char v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  __int64 (*v28)(); // rax
  __int64 v29; // rsi
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // r12
  unsigned int v35; // ebp
  void (__fastcall *v36)(__int64, __int64, __int64, _QWORD); // r13
  __int64 v37; // rax
  __int64 v38; // rsi
  unsigned __int64 v39; // rdi
  int v40; // eax
  unsigned __int64 v41; // rcx
  unsigned __int8 v42; // [rsp+8h] [rbp-1C0h]
  signed __int64 v43; // [rsp+18h] [rbp-1B0h] BYREF
  __int64 v44; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v45; // [rsp+28h] [rbp-1A0h] BYREF
  __int64 v46; // [rsp+30h] [rbp-198h] BYREF
  __int64 v47; // [rsp+38h] [rbp-190h] BYREF
  __m128i v48; // [rsp+40h] [rbp-188h] BYREF
  __int64 v49; // [rsp+50h] [rbp-178h]
  __int64 v50; // [rsp+58h] [rbp-170h]
  __int16 v51; // [rsp+60h] [rbp-168h]
  __m128i v52[2]; // [rsp+70h] [rbp-158h] BYREF
  __int16 v53; // [rsp+90h] [rbp-138h]
  __m128i v54[3]; // [rsp+A0h] [rbp-128h] BYREF
  __m128i v55; // [rsp+D0h] [rbp-F8h] BYREF
  __int16 v56; // [rsp+F0h] [rbp-D8h]
  __m128i v57[3]; // [rsp+100h] [rbp-C8h] BYREF
  __m128i v58[2]; // [rsp+130h] [rbp-98h] BYREF
  __int16 v59; // [rsp+150h] [rbp-78h]
  __m128i v60[2]; // [rsp+160h] [rbp-68h] BYREF
  __int16 v61; // [rsp+180h] [rbp-48h]

  v5 = *(_BYTE *)(a1 + 861) == 0;
  v6 = *(_QWORD *)(a1 + 184);
  v42 = a2;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  if ( v5 && (unsigned __int8)sub_2129170(a1) )
    return 1;
  if ( a3 == 1 && a2 && *(_DWORD *)sub_2153C00(a1) == 9 )
  {
    v60[0].m128i_i64[0] = (__int64)"p2align directive with no operand(s) is ignored";
    v61 = 259;
    sub_212CE20(a1, v6, (__int64)v60, nullptr, 0);
    return (unsigned int)sub_21544B0(a1);
  }
  if ( (unsigned __int8)sub_21335C0(a1, &v43) )
    return 1;
  v9 = sub_2154640(a1, 26);
  if ( v9 )
  {
    if ( *(_DWORD *)sub_2153C00(a1) == 26 )
    {
      v9 = 0;
    }
    else if ( (unsigned __int8)sub_2153C10(a1, &v47) || (unsigned __int8)sub_21335C0(a1, &v45) )
    {
      return 1;
    }
    if ( (unsigned __int8)sub_2154640(a1, 26)
      && ((unsigned __int8)sub_2153C10(a1, &v44) || (unsigned __int8)sub_21335C0(a1, &v46)) )
    {
      return 1;
    }
  }
  v7 = sub_21544B0(a1);
  if ( (_BYTE)v7 )
    return 1;
  v10 = v43;
  if ( a2 )
  {
    if ( v43 > 31 )
    {
      v60[0].m128i_i64[0] = (__int64)"invalid alignment value";
      v61 = 259;
      v33 = sub_2153E90(a1, v6, v60, 0, 0);
      v10 = 0x80000000LL;
      v7 = v33;
    }
    else
    {
      v10 = 1LL << v43;
    }
    v43 = v10;
  }
  else if ( v43 )
  {
    v31 = v43;
    if ( (v43 & (v43 - 1)) != 0 )
    {
      v60[0].m128i_i64[0] = (__int64)"alignment must be a power of 2";
      v61 = 259;
      v42 = sub_2153E90(a1, v6, v60, 0, 0);
      v31 = v43;
      if ( v43 )
      {
        _BitScanReverse64(&v41, v43);
        v31 = 0x8000000000000000LL >> ((unsigned __int8)v41 ^ 0x3Fu);
        v10 = v31;
        v32 = (unsigned int)v31;
      }
      else
      {
        v32 = 0;
        v10 = 0;
      }
      v43 = v10;
    }
    else
    {
      v32 = (unsigned int)v43;
    }
    if ( v31 == v32 )
    {
      v7 = v42;
    }
    else
    {
      v60[0].m128i_i64[0] = (__int64)"alignment must be smaller than 2**32";
      v61 = 259;
      v7 = sub_2153E90(a1, v6, v60, 0, 0) | v42;
      v43 = 0x80000000LL;
      v10 = 0x80000000LL;
    }
  }
  else
  {
    v43 = 1;
    v10 = 1;
  }
  if ( v44 )
  {
    v11 = v46;
    if ( v46 <= 0 )
    {
      v61 = 259;
      v60[0].m128i_i64[0] = (__int64)"alignment directive can never be satisfied in this many bytes, ignoring maximum bytes expression";
      v40 = sub_2153E90(a1, v44, v60, 0, 0);
      v10 = v43;
      v46 = 0;
      v7 |= v40;
      v11 = 0;
    }
    if ( v11 >= v10 )
    {
      v61 = 259;
      v60[0].m128i_i64[0] = (__int64)"maximum bytes expression exceeds alignment and has no effect";
      sub_212CE20(a1, v44, (__int64)v60, nullptr, 0);
      v46 = 0;
    }
  }
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 288LL);
  v13 = *(_QWORD *)(v12 + 8);
  if ( v9 && v45 && (*(_BYTE *)(v13 + 48) & 0x10) != 0 )
  {
    v14 = *(_QWORD *)(v13 + 152);
    v15 = *(_QWORD *)(v12 + 8);
    v58[0].m128i_i64[0] = (__int64)"'";
    v59 = 259;
    v16 = *(_QWORD *)(v13 + 160);
    v56 = 261;
    v55.m128i_i64[1] = v16;
    v53 = 259;
    v55.m128i_i64[0] = v14;
    v52[0].m128i_i64[0] = (__int64)" section '";
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v15);
    v51 = 1283;
    v50 = v18;
    v48.m128i_i64[0] = (__int64)"ignoring non-zero fill value in ";
    v49 = v17;
    sub_A41580(v54, &v48, v52, (__int64)"ignoring non-zero fill value in ", v19, v20);
    sub_A41580(v57, v54, &v55, v21, v22, v23);
    sub_A41580(v60, v57, v58, v24, v25, v26);
    v27 = sub_212CE20(a1, v47, (__int64)v60, nullptr, 0);
    v45 = 0;
    v7 |= v27;
  }
  v28 = *(__int64 (**)())(*(_QWORD *)v13 + 8LL);
  if ( v28 == sub_20FE640 || ((unsigned __int8 (__fastcall *)(__int64))v28)(v13) != 1 || v9 )
  {
    v29 = 0xFFFFFFFFLL;
    if ( v43 )
    {
      _BitScanReverse64(&v30, v43);
      v29 = 63 - ((unsigned int)v30 ^ 0x3F);
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 24) + 608LL))(
      *(_QWORD *)(a1 + 24),
      v29,
      v45,
      a3,
      v46);
  }
  else
  {
    v34 = *(_QWORD *)(a1 + 24);
    v35 = v46;
    v36 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v34 + 616LL);
    v37 = sub_2154A60(*(_QWORD *)(a1 + 8));
    v38 = 0xFFFFFFFFLL;
    if ( v43 )
    {
      _BitScanReverse64(&v39, v43);
      v38 = 63 - ((unsigned int)v39 ^ 0x3F);
    }
    v36(v34, v38, v37, v35);
  }
  return v7;
}
