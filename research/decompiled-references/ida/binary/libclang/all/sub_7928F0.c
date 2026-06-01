__int64 __fastcall sub_7928F0(__int64 a1, __int64 a2, _QWORD a3, _QWORD a4, __int64 a5, __int64 a6)
{
  __m128i v6; // xmm0
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 (__fastcall **v12)(); // [rsp+20h] [rbp-68h] BYREF
  int v13; // [rsp+28h] [rbp-60h]
  __int128 v14; // [rsp+30h] [rbp-58h]
  __int64 v15; // [rsp+40h] [rbp-48h]
  char v16; // [rsp+48h] [rbp-40h]
  int v17; // [rsp+4Ch] [rbp-3Ch]
  __int64 v18; // [rsp+50h] [rbp-38h]

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v18 = a1;
  v12 = &off_49DA2C8;
  v14 = 0;
  v13 = 0;
  v16 = 0;
  v17 = 1;
  v15 = 0;
  sub_2623850(&v12, 0, 0, 0, a5, a6);
  v6 = _mm_loadu_si128((const __m128i *)a2);
  sub_792640((__int64)&v12, 0, v7, v8, v9, v10, v6.m128i_u64[0], v6.m128i_i32[2], *(__int64 **)(a2 + 16));
  v12 = &off_49DA2C8;
  sub_2623770(&v12);
  return a1;
}

