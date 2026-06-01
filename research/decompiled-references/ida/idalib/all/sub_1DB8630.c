void __fastcall sub_1DB8630(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  char *v6; // rbx
  __m128i v7; // rax
  __m128i v8; // [rsp+0h] [rbp-38h] BYREF

  v6 = *(char **)*a1;
  v7.m128i_i64[0] = sub_16043A0(
                      *(_QWORD **)(*(_QWORD *)a1[1] + 248LL),
                      *(_QWORD **)(*(_QWORD *)a1[1] + 240LL),
                      *a1,
                      a4,
                      a5,
                      a6);
  v8 = v7;
  sub_F07C00(v6, a2, 0, &v8, 0, 0, "\n", 1);
}
