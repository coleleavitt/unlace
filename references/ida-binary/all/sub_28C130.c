__int64 __fastcall sub_28C130(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 v8; // rdi
  __int64 first_fcref_to; // rbx
  __int64 v10; // rax
  const char *v11; // rsi
  __int64 v12; // rdi
  double v13; // xmm4_8
  double v14; // xmm5_8
  const char *v16; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v17[3]; // [rsp+10h] [rbp-18h] BYREF

  v17[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_1F09E0(0, (__int64 *)&v16, v17) )
  {
    v8 = (__int64)v16;
  }
  else
  {
    v17[0] = -1;
    v8 = xmmword_8CC810;
    v16 = (const char *)xmmword_8CC810;
  }
  first_fcref_to = get_first_fcref_to(v8);
  if ( first_fcref_to == -1 )
  {
LABEL_11:
    first_fcref_to = -1;
  }
  else
  {
    while ( !get_func(first_fcref_to) )
    {
      first_fcref_to = get_next_fcref_to(v16, first_fcref_to);
      if ( first_fcref_to == -1 )
        goto LABEL_11;
    }
  }
  v10 = sub_28BE60((__int64)"Please select the parent function", first_fcref_to);
  if ( !v10 )
    return 1;
  v11 = v16;
  v12 = v10;
  if ( (unsigned __int8)append_func_tail(v10, v16, v17[0]) )
  {
    sub_1FDB10(a1, a2, a3, a4, v13, v14, a7, a8, v12, v11);
    return 1;
  }
  sub_17CE30(155);
  return 0;
}
