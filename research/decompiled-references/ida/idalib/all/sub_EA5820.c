__int64 __fastcall sub_EA5820(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5, __int64 a6)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rax
  __m128i v9; // xmm0
  __m128i v11; // [rsp+0h] [rbp-48h] BYREF
  _QWORD *v12; // [rsp+10h] [rbp-38h] BYREF
  __m128i v13; // [rsp+20h] [rbp-28h]
  _QWORD *v14; // [rsp+30h] [rbp-18h]

  v6 = *(_QWORD *)(a2 + 40);
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 > 5 )
  {
    a2 = *(_QWORD *)(a2 + 40);
    v11.m128i_i64[0] = v6;
    v11.m128i_i32[2] = 0;
    sub_B85890(&v12, a2);
    v8 = v12;
    v13 = _mm_load_si128(&v11);
  }
  else
  {
    v7 = *(unsigned int *)(a2 + 24);
    v8 = *(_QWORD **)(a2 + 160);
    v11.m128i_i64[0] = *(_QWORD *)(a2 + 40);
    v11.m128i_i32[2] = v7;
    v9 = _mm_load_si128(&v11);
    v12 = v8;
    v13 = v9;
  }
  v14 = v8;
  return sub_EA4BE0(a1, a2, v6, v7, a5, a6, v13.m128i_u64[0], v13.m128i_i32[2], v8);
}
