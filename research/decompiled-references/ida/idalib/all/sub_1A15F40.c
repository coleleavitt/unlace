__m128i *__fastcall sub_1A15F40(__int64 a1, __int64 a2, char *a3, _DWORD *a4, __int64 a5, __m128i a6, double a7)
{
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r12
  __int64 *v16; // rax
  _QWORD *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 (__fastcall *v23)(__int64); // rax
  __int64 v24; // rax
  __m128i *result; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v33; // [rsp+8h] [rbp-70h]
  __m128i v34[6]; // [rsp+10h] [rbp-68h] BYREF

  v10 = *(_QWORD *)(a2 + 16);
  v15 = sub_A71450(*(_QWORD *)(a1 + 248), v10);
  v16 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v16 + 16) == 48
    && (v17 = sub_F60F10(*v16, v10, v11, v12, v13, v14), (*((_BYTE *)v17 + 28) & 0x7Fu) - 59 <= 2) )
  {
    v18 = sub_1A69F50(a1, v17);
    if ( v18 )
    {
      v33 = v18;
      if ( (*(_BYTE *)(sub_B709C0(v18) + 83) & 2) != 0 )
      {
        v23 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 32LL);
        v24 = v23 == sub_B94CC0 ? sub_B709C0(v33) : v23(v33);
        if ( (*(_BYTE *)(v24 + 82) & 0x40) == 0 )
        {
          v31 = *(_QWORD *)(a2 + 16);
          v34[0].m128i_i32[0] = 21;
          v34[0].m128i_i64[1] = v31;
          sub_1A0C040((__int64)(a4 + 2), v34);
        }
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) != 0
      || *((_BYTE *)v17 + 73) >> 5 == 2
      || (sub_7052B0((__int64 *)(v17[13] + 96LL), v17[13], v19, v20, v21, v22), (*(_BYTE *)v17[16] & 1) != 0)
      || (sub_7052B0((__int64 *)(v17[13] + 96LL), v17[13], v27, v28, v29, v30),
          result = (__m128i *)v17[16],
          (result->m128i_i8[3] & 1) == 0) )
    {
      v34[0].m128i_i64[0] = a5;
      return (__m128i *)sub_1A155A0(
                          a1,
                          a2,
                          a3,
                          v34[0].m128i_i64,
                          a5 != 0,
                          v15,
                          a6,
                          a7,
                          *(_QWORD *)(a2 + 16),
                          (__int64)a4,
                          a5 != 0,
                          0);
    }
    else
    {
      *a4 = 0;
      a4[46] = 0;
    }
  }
  else
  {
    v26 = *(_QWORD *)(a2 + 16);
    v34[0].m128i_i32[0] = 21;
    v34[0].m128i_i64[1] = v26;
    return sub_1A0C040((__int64)(a4 + 2), v34);
  }
  return result;
}
