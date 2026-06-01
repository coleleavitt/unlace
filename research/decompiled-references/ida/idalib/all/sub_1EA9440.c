unsigned __int64 __fastcall sub_1EA9440(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  char v3; // cl
  char v4; // r9
  bool v5; // r13
  bool v6; // r12
  char v7; // bp
  bool v8; // r11
  char v9; // r10
  bool v10; // r8
  bool v11; // di
  bool v12; // si
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v17; // [rsp+0h] [rbp-68h]
  __int64 v18; // [rsp+20h] [rbp-48h] BYREF
  __m128i v19; // [rsp+28h] [rbp-40h] BYREF
  char v20; // [rsp+38h] [rbp-30h]

  v18 = a2;
  v20 = 0;
  sub_1FDD8F0(a1 + 144, sub_1EE1020, &v18, 0);
  v3 = v20;
  v17 = _mm_loadu_si128(&v19).m128i_u64[0];
  if ( v20 )
  {
    v2 = v17;
    v3 = v17 & 1;
    v4 = BYTE1(v17) & 1;
    v5 = (v17 & 2) != 0;
    v6 = (v17 & 4) != 0;
    v7 = ((unsigned __int8)v17 >> 3) & 7;
    v8 = (v17 & 0x40) != 0;
    v9 = (unsigned __int8)v17 >> 7;
    v10 = (v17 & 0x200) != 0;
    v11 = (v17 & 0x400) != 0;
    v12 = (v17 & 0x800) != 0;
  }
  else
  {
    v12 = 0;
    v11 = 0;
    v10 = 0;
    v4 = 0;
    v9 = 0;
    v8 = 0;
    v6 = 0;
    v5 = 0;
    v7 = 0;
  }
  v13 = (8LL * (v7 & 7)) | (4LL * v6) | (unsigned __int8)(2 * v5) & 0xC3 | v3 & 1 | v2 & 0xFFFFFFFFFFFFFFC0LL;
  LOBYTE(v13) = v13 & 0x3F;
  v14 = ((unsigned __int64)(v9 & 1) << 7) | v13 | ((unsigned __int64)v8 << 6);
  BYTE1(v14) &= 0xFCu;
  v15 = ((unsigned __int64)v10 << 9) | ((unsigned __int64)(v4 & 1) << 8) | v14;
  BYTE1(v15) &= 0xF3u;
  return ((unsigned __int64)v12 << 11) | ((unsigned __int64)v11 << 10) | v15;
}
