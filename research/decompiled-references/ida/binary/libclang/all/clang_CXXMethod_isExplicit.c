_BOOL8 __fastcall clang_CXXMethod_isExplicit(int a1, int a2, __int64 a3, int a4, int a5, int a6, __int128 a7)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  char v11; // al
  __int64 v12; // rax
  unsigned __int8 v13; // dl
  __int64 v14; // rdx
  __int64 (*v15)(void); // rax
  __int64 v16; // rax
  __m128i v17; // [rsp+0h] [rbp-28h]

  if ( (unsigned int)(a7 - 600) > 4 && (unsigned int)(a7 - 1) > 0x26 )
    return 0;
  v17 = _mm_loadu_si128((const __m128i *)&a7);
  v8 = sub_63A250(a1, a2, (int)a7 - 600, a4, a5, a6, v17.m128i_i32[0], v17.m128i_i64[1]);
  v9 = sub_7984D0(v8);
  v10 = v9;
  if ( !v9 )
    return 0;
  v11 = *(_BYTE *)(v9 + 28) & 0x7F;
  if ( v11 == 36 )
  {
    v12 = sub_777D70(v10);
    v13 = *(_BYTE *)(v12 + 87);
    if ( (v13 & 0x40) != 0 )
      v14 = *(_QWORD *)(v12 + 16LL * ((v13 & 0x20) != 0) + 176) & 3LL;
    else
      v14 = v13 >> 7;
    return v14 == 1;
  }
  if ( v11 != 35 )
    return 0;
  v15 = *(__int64 (**)(void))(*(_QWORD *)v10 + 32LL);
  if ( v15 == sub_6287A0 )
    v16 = ((__int64 (*)(void))sub_777D70)();
  else
    v16 = v15();
  return (*(_QWORD *)(v16 + 168) & 3LL) == 1;
}

