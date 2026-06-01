__int64 __fastcall sub_1213E90(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rbx
  __int64 v7; // rax
  unsigned int (__fastcall *v8)(__int64 *, __m128i *); // r13
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __m128i v13; // [rsp+0h] [rbp-118h] BYREF
  __int16 v14; // [rsp+20h] [rbp-F8h]
  __m128i v15[2]; // [rsp+30h] [rbp-E8h] BYREF
  __int16 v16; // [rsp+50h] [rbp-C8h]
  __m128i v17[3]; // [rsp+60h] [rbp-B8h] BYREF
  __m128i v18; // [rsp+90h] [rbp-88h] BYREF
  __int16 v19; // [rsp+B0h] [rbp-68h]
  __m128i v20[5]; // [rsp+C0h] [rbp-58h] BYREF

  v6 = (__int64 *)a1[2].m128i_i64[0];
  v7 = *v6;
  v16 = 260;
  v15[0].m128i_i64[0] = a2;
  v8 = *(unsigned int (__fastcall **)(__int64 *, __m128i *))(v7 + 96);
  v14 = 261;
  v19 = 261;
  v18 = a1[1];
  v13 = *a1;
  sub_A41580(v17, &v13, v15, 261, a5, a6);
  sub_A41580(v20, v17, &v18, v9, v10, v11);
  return v8(v6, v20) ^ 1;
}
