__int64 __fastcall sub_2108570(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  char v7; // bl
  __int64 v8; // rcx
  __int64 v9; // rax
  __m128i v11; // [rsp+0h] [rbp-78h] BYREF
  __int16 v12; // [rsp+20h] [rbp-58h]
  __m128i v13[4]; // [rsp+30h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(a1 + 152);
  v7 = *(_BYTE *)(a1 + 1883);
  v12 = 261;
  v8 = *(_QWORD *)(v6 + 88);
  v9 = *(_QWORD *)(v6 + 96);
  v11.m128i_i64[0] = v8;
  v11.m128i_i64[1] = v9;
  sub_A41580(v13, &v11, a2, v8, a5, a6);
  return sub_21083D0((_DWORD *)a1, (__int64)v13, 1, v7 ^ 1u);
}
