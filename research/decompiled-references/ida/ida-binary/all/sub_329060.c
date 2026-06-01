_BOOL8 __fastcall sub_329060(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  const char *v12; // r8
  _BOOL8 result; // rax
  const char *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  double v17; // xmm4_8
  double v18; // xmm5_8
  char v19; // dl
  const char *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  char v27; // [rsp+0h] [rbp-18h]

  sub_312330((__int64)qword_8CD748, 0);
  v8 = sub_1F4200();
  if ( !v8 )
    return 0;
  v11 = v8;
  if ( !(unsigned int)sub_1F3560(v8, 0, v9, v10, *(double *)a1.m128_u64) )
    return 0;
  if ( qword_8CD7E8 == v11 )
  {
    v20 = &s1;
    if ( (_QWORD)xmmword_8D0AA8 )
      v20 = (const char *)qword_8D0AA0;
    if ( get_name_ea(-1, v20) != -1 )
      sub_16B9E0(
        (int)"IDA has detected that you want to find a label in the program.\n"
             "While the text search can find labels, it is hundreds times faster\n"
             "to use specialized commands to find labels: to find a label definition,\n"
             "use Jump to Address (G) and enter the label name\n"
             "or use Jump to Name (Ctrl-L) and select the label.\n"
             "To find all places where the label is used, position the cursor\n"
             "on the label and use Jump to Cross-References (X) command",
        (__int64)v20,
        v21,
        v22,
        v23,
        v24,
        a1,
        a2,
        a3,
        a4,
        v25,
        v26,
        a7,
        a8,
        v27);
  }
  if ( (_WORD)xmmword_8BCDB0 )
  {
    v12 = &s1;
    if ( (_QWORD)xmmword_8D0AA8 )
      v12 = (const char *)qword_8D0AA0;
    return sub_328DA0(v11, 2, 0xFFFFFFFFLL, (__int64)"Occurrences of: %s", v12);
  }
  sub_312330((__int64)qword_8CD748, 2);
  v14 = &s1;
  if ( (_QWORD)xmmword_8D0AA8 )
    v14 = (const char *)qword_8D0AA0;
  sub_1E9310(v11 + 576, (__int64)v14, 0);
  v19 = sub_1F3610(v11, 2, v15, v16, a1, a2, a3, a4, v17, v18, a7, a8);
  result = 1;
  if ( !v19 )
  {
    sub_312110((__int64)qword_8CD748, 0);
    return 0;
  }
  return result;
}
