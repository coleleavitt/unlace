bool __fastcall define_stkvar(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4, const __m128i *a5)
{
  const __m128i *v5; // r15
  __int64 v6; // r14
  _QWORD *v7; // r13
  const void *v8; // r12
  unsigned __int64 v10; // rax
  __m128i *v16; // rdi

  v16 = *(__m128i **)(qword_2CCB598 + 1672);
  if ( !a1 )
    return 0;
  v5 = a5;
  v6 = a3;
  v7 = a4;
  v8 = (const void *)a2;
  if ( sub_4D42D0((__int64)v16, (__int64)a1, a2, 3, -1, -1) )
    return 0;
  if ( a1[3] == -1 )
  {
    sub_3792E0(0x3Bu, a1);
    if ( a1[3] == -1 )
      add_frame((__int64)a1, 0, 0, 0);
  }
  v10 = sub_5B94E0(v16, (__int64)a1, 0, 0, v6);
  return sub_5BD990(v16->m128i_i64, a1, v10, v8, v7, v5, 0, 0) != -1;
}
