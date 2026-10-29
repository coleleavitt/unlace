void __fastcall sub_1672CF0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int32 v8; // ecx
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __m128i v13; // xmm0
  bool v14; // al
  __int32 v15; // [rsp+20h] [rbp-138h]
  __int64 *v16; // [rsp+20h] [rbp-138h]
  __int64 *v17; // [rsp+28h] [rbp-130h]
  char v18; // [rsp+3Eh] [rbp-11Ah] BYREF
  char v19; // [rsp+3Fh] [rbp-119h] BYREF
  __m128i v20; // [rsp+40h] [rbp-118h] BYREF
  int v21; // [rsp+50h] [rbp-108h]
  _QWORD v22[2]; // [rsp+80h] [rbp-D8h] BYREF
  char v23; // [rsp+90h] [rbp-C8h] BYREF
  char v24; // [rsp+A0h] [rbp-B8h]
  char *v25; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-A8h]
  char v27; // [rsp+B8h] [rbp-A0h] BYREF
  _BYTE v28[40]; // [rsp+C8h] [rbp-90h] BYREF
  _BYTE v29[40]; // [rsp+F0h] [rbp-68h] BYREF
  char v30; // [rsp+118h] [rbp-40h]

  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 || (v16 = a3, v14 = sub_1671280(a2, a2, (__int64)a3, a4, a5, a6), a3 = v16, !v14) )
  {
    v6 = a3[24];
    if ( BYTE4(v6) )
    {
      v17 = a3;
      v24 &= 0xF0u;
      v22[0] = &v23;
      v25 = &v27;
      v22[1] = 0;
      v7 = *a3 + 176LL * (unsigned int)v6;
      v23 = 0;
      v8 = *(_DWORD *)v7;
      v9 = *(_QWORD *)(v7 + 8);
      v26 = 0;
      v10 = *(_QWORD *)v7;
      v27 = 0;
      v15 = v8;
      v28[32] = 0;
      v29[32] = 0;
      v30 = 0;
      sub_9EE8A0((__int64)v22, v7 + 16);
      v24 = *(_BYTE *)(v7 + 48) & 0xF | v24 & 0xF0;
      sub_9EE8A0((__int64)&v25, v7 + 56);
      sub_A21AD0((__int64)v28, v7 + 88);
      sub_A21AD0((__int64)v29, v7 + 128);
      v30 = *(_BYTE *)(v7 + 168);
      if ( !(v15 | (HIDWORD(v9) | (unsigned int)v9 | HIDWORD(v10)) & 0x7FFFFFFF) || !v26 )
      {
LABEL_4:
        sub_A09C70((__int64)v22);
        return;
      }
      v11 = *v17;
      v12 = *v17 + 176LL * *((unsigned int *)v17 + 2);
      if ( v12 != *v17 )
      {
        while ( *(_DWORD *)v11
             || (*(_DWORD *)(v11 + 4) & 0x7FFFFFFF) != 0
             || (*(_DWORD *)(v11 + 8) & 0x7FFFFFFF) != 0
             || (*(_DWORD *)(v11 + 12) & 0x7FFFFFFF) != 0
             || !*(_QWORD *)(v11 + 64) )
        {
          v11 += 176;
          if ( v12 == v11 )
            goto LABEL_13;
        }
        goto LABEL_4;
      }
LABEL_13:
      v20.m128i_i64[1] = v9;
      v20.m128i_i32[1] = (v10 & 0xFFFFFFFF00000000LL) >> 32;
      v20.m128i_i32[0] = v15;
      LOBYTE(v21) = v21 & 0xFC | 2;
      v13 = _mm_load_si128(&v20);
      sub_1672C20(
        a1,
        a2,
        (__int64)&loc_2E926E,
        (__int64)&v18,
        (__int64)sub_16716D0,
        (__int64)&v19,
        v13.m128i_i64[0],
        v13.m128i_i64[1],
        v21);
      sub_A09C70((__int64)v22);
    }
  }
}
