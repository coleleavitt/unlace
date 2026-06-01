__m128 *__fastcall sub_80BB20(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        __int32 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int32 a11,
        unsigned __int64 a12,
        __int64 a13,
        unsigned __int64 a14,
        __int16 a15,
        __int16 a16,
        char a17)
{
  __int64 v19; // rax
  __int64 v21; // rcx
  bool v22; // r12
  unsigned __int64 v23; // r8
  _BOOL8 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rax
  __m128 *v27; // rbx
  bool v28; // dl
  __int16 v29; // ax
  char v30; // dl
  int v31; // eax
  __int64 v32; // rdx
  __int8 v33; // cl
  __int64 v34; // rdi
  unsigned __int8 v35; // al
  __int64 v37; // rax
  __int64 v38; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v39; // [rsp+8h] [rbp-60h]
  bool v40; // [rsp+17h] [rbp-51h]
  unsigned __int64 v41; // [rsp+18h] [rbp-50h]
  char v42[57]; // [rsp+2Fh] [rbp-39h] BYREF
  __int64 v43; // [rsp+78h] [rbp+10h]

  v19 = 56;
  v21 = a8;
  v22 = a5 != 0;
  v38 = a6;
  v23 = a9 & 0xFFFFFFFFFFFFFFF8LL;
  if ( a8 == (a9 & 0xFFFFFFFFFFFFFFF8LL) )
    v19 = 8LL * ((a9 & 3) != ((*(_BYTE *)(a8 + 29) >> 5) & 3)) + 48;
  LOBYTE(a6) = a7 != 0;
  v24 = a7 != 0;
  if ( a13 )
  {
    v19 += 32LL * *(unsigned int *)(a13 + 8);
    v24 = 1;
  }
  v25 = v19 + 16 * (v24 + v22);
  v26 = a1[274];
  a1[284] += v25;
  v27 = (__m128 *)((v26 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[275] >= (unsigned __int64)v27 + v25 && v26 )
  {
    a1[274] = (char *)v27 + v25;
  }
  else
  {
    v41 = a2;
    v40 = a7 != 0;
    v39 = a9 & 0xFFFFFFFFFFFFFFF8LL;
    v37 = sub_804090((__int64)(a1 + 274), v25, 3);
    v21 = a8;
    a2 = v41;
    a6 = a7 != 0;
    v23 = a9 & 0xFFFFFFFFFFFFFFF8LL;
    v27 = (__m128 *)v37;
  }
  v27->m128_i16[0] = v27->m128_i16[0] & 0xFE00 | 0x2F;
  if ( byte_4AD234C )
  {
    v43 = v21;
    v41 = a2;
    v40 = a6;
    v39 = v23;
    sub_AC4570(47);
    v21 = v43;
    a2 = v41;
    a6 = v40;
    v23 = v39;
  }
  v27[1].m128_u64[0] = a2;
  v27[1].m128_u64[1] = v21;
  v27->m128_u64[1] = a14;
  v27[2].m128_u64[0] = a12;
  v27[2].m128_i32[2] = a11;
  v28 = 1;
  v27->m128_i32[0] = v27->m128_i32[0] & 0xFFE001FF
                   | (a15 << 9) & 0x600
                   | (a16 << 11) & 0x3800
                   | (a3 << 19) & 0x1FFE00
                   | (v22 << 20) & 0x1FFE00;
  if ( v21 == v23 )
    v28 = (a9 & 3) != ((*(_BYTE *)(v21 + 29) >> 5) & 3);
  v27->m128_i32[1] = a4;
  v29 = v27->m128_i16[1] & 0xFC1F | ((a17 & 3) << 8) | (32 * v28) | ((unsigned __int8)(a6 | (a13 != 0)) << 6);
  v27->m128_i16[1] = v29;
  v30 = v29;
  v31 = v29 & 0x10;
  if ( v31 )
    v27[3] = _mm_loadh_ps((const double *)&v38);
  v32 = v30 & 0x20;
  if ( (_DWORD)v32 )
  {
    v25 = a9;
    v27[((v31 & 0x10) != 0) + 3].m128_u64[0] = a9;
  }
  if ( a13 )
  {
    v33 = v27->m128_i8[2];
    v25 = a7;
    v42[0] = 0;
    v34 = 16LL * ((v33 & 0x10) != 0) + 8LL * ((v33 & 0x20) != 0) + 48;
    sub_B00050((char *)v27 + v34, a7, a13, (char *)&v27[(v33 & 0x40) != 0] + v34, v42);
  }
  else if ( a7 )
  {
    v25 = a7;
    sub_B00030((char *)&v27[((v27->m128_i8[2] & 0x10) != 0) + 3] + 8 * ((v27->m128_i8[2] & 0x20) != 0), a7);
  }
  v35 = sub_76C4C0((__int64)v27, v25, v32, v21, v23, a6);
  v27->m128_i8[1] = (v35 << 6) | v27->m128_i8[1] & 0x3F;
  v27->m128_i8[2] = v27->m128_i8[2] & 0xF8 | (v35 >> 2) & 7;
  return v27;
}

