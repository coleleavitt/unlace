void __fastcall sub_182B400(__int64 *a1, unsigned int *a2, const __m128i *a3)
{
  __int16 v6; // ax
  __int64 v7; // rdx
  __int64 *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __m128i *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int32 v18; // [rsp+4h] [rbp-C4h] BYREF
  __int64 v19; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v20[184]; // [rsp+10h] [rbp-B8h] BYREF

  v6 = a3[3].m128i_i16[4];
  v7 = a1[29];
  v18 = 0xFFFF;
  if ( (*(_BYTE *)(v7 + 89) & 1) != 0 )
  {
    v8 = a1 + 1;
    if ( v6 )
    {
      sub_168B9F0((__int64)v20, v8, a3[1].m128i_u32[2], 0xF3Bu, 0);
      sub_15F7200(v20);
      return;
    }
  }
  else
  {
    if ( v6 && !(unsigned __int8)sub_16211A0(a1, a3, a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, &v18, 0xFFFFFFFFLL, 0) )
      return;
    v8 = a1 + 1;
  }
  sub_168B9F0((__int64)v20, v8, a2[6], 0x1B2Eu, 0);
  v19 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a2 + 16LL))(a2);
  sub_1587DB0((__int64)v20, &v19);
  sub_15F7200(v20);
  v11 = (_QWORD *)a1[31];
  v12 = v11[294];
  v11[304] += 48LL;
  v13 = (__m128i *)((v12 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v11[295] >= (unsigned __int64)&v13[3] && v12 )
    v11[294] = v13 + 3;
  else
    v13 = (__m128i *)sub_986170((__int64)(v11 + 294), 48, 48, 3, v9, v10);
  sub_B103F0(v13, a1[31], a3, v18);
  sub_B8CC60((__int64)a2, (__int64)v13, v14, v15, v16, v17);
}
