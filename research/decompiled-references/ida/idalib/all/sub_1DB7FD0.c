void __fastcall sub_1DB7FD0(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v6; // rdx
  __m128i v7; // rax
  unsigned __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  __m128i v9; // [rsp+10h] [rbp-48h] BYREF
  const void **v10; // [rsp+20h] [rbp-38h] BYREF
  __int16 v11; // [rsp+40h] [rbp-18h]

  v6 = a1[1];
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 8LL) & 0xFFFFFFFFFFFFFFF8LL);
  v11 = 257;
  v7.m128i_i64[0] = sub_16043A0(
                      *(_QWORD **)(*(_QWORD *)v6 + 248LL),
                      *(_QWORD **)(*(_QWORD *)v6 + 240LL),
                      v6,
                      a4,
                      a5,
                      a6);
  v9 = v7;
  sub_F74830(&v8, a2, &v9, &v10, 0);
}
