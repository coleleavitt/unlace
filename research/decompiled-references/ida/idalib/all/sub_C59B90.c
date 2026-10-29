__int64 __fastcall sub_C59B90(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD *v5; // r15
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64); // rax
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  unsigned __int8 v18; // al
  __int64 *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r9
  __m128i v22; // xmm0
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 (__fastcall *v25)(__int64); // rax
  _WORD *v26; // r9
  char v27; // al
  __m128i *v28; // rdx
  unsigned int v29; // [rsp+Ch] [rbp-4ECh]
  _WORD *v30; // [rsp+10h] [rbp-4E8h]
  _QWORD *v31; // [rsp+18h] [rbp-4E0h] BYREF
  __int64 v32; // [rsp+28h] [rbp-4D0h] BYREF
  __int16 v33; // [rsp+30h] [rbp-4C8h] BYREF
  __int64 v34; // [rsp+38h] [rbp-4C0h]
  _BYTE v35[3]; // [rsp+40h] [rbp-4B8h] BYREF
  unsigned __int64 v36; // [rsp+48h] [rbp-4B0h]
  __int64 v37[8]; // [rsp+50h] [rbp-4A8h] BYREF
  __m128i v38; // [rsp+90h] [rbp-468h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-458h]
  char v40; // [rsp+A8h] [rbp-450h]
  __int64 v41; // [rsp+B8h] [rbp-440h]
  void *ptr; // [rsp+C0h] [rbp-438h]
  __int64 v43; // [rsp+C8h] [rbp-430h]
  _BYTE v44[80]; // [rsp+D0h] [rbp-428h] BYREF
  __m128 v45; // [rsp+120h] [rbp-3D8h] BYREF
  __int64 v46; // [rsp+130h] [rbp-3C8h]
  __int64 v47; // [rsp+140h] [rbp-3B8h]
  char v48; // [rsp+154h] [rbp-3A4h]
  __m128i v49; // [rsp+438h] [rbp-C0h]
  int v50; // [rsp+448h] [rbp-B0h]
  __int64 *v51; // [rsp+450h] [rbp-A8h]
  char v52; // [rsp+4B2h] [rbp-46h]

  v31 = a1;
  LODWORD(v5) = sub_B8E180((unsigned __int64)(a1 + 9));
  if ( !(_BYTE)v5 )
  {
    v45.m128_u64[0] = (unsigned __int64)&v31;
    v7 = sub_224AF30("isPotentialConstantExpr", 23, sub_C11260, &v45, v3, v4);
    v34 = a2;
    v33 = 0;
    v8 = v7;
    v9 = sub_B8C330((__int64)v31);
    sub_C12870(&v45, v9, (__int64)&v33, 0);
    v45.m128_i8[8] = 1;
    v52 = 1;
    if ( v48 )
    {
      v24 = sub_A5F520(v46);
      sub_CEB030(v24, &v45, v31);
      v23 = *(unsigned int *)(a2 + 8);
      LOBYTE(v5) = (_DWORD)v23 == 0;
    }
    else
    {
      v5 = v31;
      if ( (*((_BYTE *)v31 + 28) & 0x7Fu) - 35 > 3 )
      {
        v5 = nullptr;
        v16 = 0;
      }
      else
      {
        v12 = *(_QWORD *)(sub_B8C1B0((__int64)(v31 + 9)) + 16);
        if ( (v12 & 4) != 0 )
          v13 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v13 )
          BUG();
        v14 = v13 - 64;
        v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v13 - 64) + 32LL);
        if ( v15 == sub_A01140 )
          v16 = sub_B70A60(v14);
        else
          v16 = v15(v14);
      }
      v38 = 0u;
      v40 |= 1u;
      v39 = 0;
      v41 = 0;
      ptr = v44;
      v43 = 0x800000000LL;
      v44[65] = 0;
      if ( v16 )
        v17 = sub_A7A9D0(v46, v16, (__int64)v44, 0x800000000LL, v10, v11);
      else
        v17 = *(_QWORD *)(v46 + 18720);
      *(_WORD *)v35 = *(_WORD *)v35 & 0xFE00 | 0x36;
      if ( unk_2CD7484 )
        sub_EE9B50(54);
      v36 = v17;
      *(_WORD *)&v35[1] &= 0xF801u;
      v18 = sub_B63130((__int64)v35);
      v35[1] = (v18 << 6) | v35[1] & 0x3F;
      v35[2] = v35[2] & 0xF8 | (v18 >> 2) & 7;
      sub_A4F2D0((__int64)v37, (__int64)v35, *(_DWORD *)(v47 + 128), 0);
      v19 = (__int64 *)v37[0];
      sub_C24210((__int64)&v38, v37[0], (__int64 *)v37[1], 0);
      BYTE4(v37[0]) &= ~1u;
      LODWORD(v37[0]) = 0;
      if ( (*((_BYTE *)v31 + 28) & 0x7F) == 0x26 )
      {
        v22 = _mm_load_si128(&v38);
        v51 = v37;
        v23 = (__int64)&v38;
        v49 = v22;
        v50 = 1;
        sub_C59A30((unsigned __int64)v35, &v38, 0, 0, (__int64)v31, (__m128i *)&v45, (__int64)v37);
      }
      else
      {
        v29 = *((_DWORD *)v31 + 6);
        v25 = *(__int64 (__fastcall **)(__int64))(*v31 + 64LL);
        if ( v25 == sub_6EF210 )
        {
          v19 = &v32;
          v26 = (_WORD *)sub_B7F750(v31, &v32, (__int64)sub_6EF210, v20, (__int64)v31, v21);
        }
        else
        {
          v26 = (_WORD *)v25((__int64)v31);
        }
        if ( v5 && (v30 = v26, v27 = sub_B98200(v5, (__int64)v19), v26 = v30, v27) )
          v28 = &v38;
        else
          v28 = nullptr;
        v23 = (__int64)v31;
        sub_C57060(v29, (__int64)v31, v28, (__int64)v35, nullptr, v26, 0, (__int64)&v45, (__int64)v37, 0);
      }
      LOBYTE(v5) = *(_DWORD *)(a2 + 8) == 0;
      if ( LODWORD(v37[0]) > 1 )
        sub_A4F8E0((int *)v37);
      if ( ptr != v44 )
        free(ptr);
    }
    sub_C23D80((__int64)&v45, v23);
    if ( v8 )
      sub_224D6D0(v8);
  }
  return (unsigned int)v5;
}
