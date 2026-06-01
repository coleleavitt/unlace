/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: print_idcv
// Address: 0x0000000000071EF0

//----- (0000000000071EF0) ----------------------------------------------------
char __fastcall print_idcv(__int64 a1, unsigned __int64 a2, const char *a3, int a4, double a5, __m128 a6)
{
  __int128 *v7; // [rsp+0h] [rbp-28h] BYREF
  __int128 v8; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v8 = 0;
  v7 = &v8;
  sub_71F60(a1, a2, a3, a4, (__int64 **)&v7, 0.0, a6);
  sub_802C0((__int64)&v7, (_QWORD *)v8);
  return 1;
}
