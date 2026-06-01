__int64 __fastcall sub_1965170(__int64 *a1, const __m128i *a2, __m128 a3, __m128 a4)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  int v13; // [rsp+8h] [rbp-30h]
  __int64 v14; // [rsp+10h] [rbp-28h]

  v6 = *a1;
  v7 = a2->m128i_u32[3];
  v8 = a2->m128i_u32[2];
  v12 = 0;
  v9 = *(_QWORD *)(v6 + 760);
  v13 = 0;
  v14 = 0;
  sub_1B5B570(v9, v8, &v12, 0, v7);
  v10 = sub_1964150(a1, a2, a3, a4);
  sub_1B335B0(*(_QWORD *)(*a1 + 760), v10 & 0xFFFFFFFFFFFFFFFELL);
  return v10;
}
