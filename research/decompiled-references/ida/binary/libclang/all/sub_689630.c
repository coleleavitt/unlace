void __fastcall sub_689630(__m128i *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  a1->m128i_i64[0] = (__int64)&off_47D01C0;
  v2 = (void *)a1[6].m128i_i64[1];
  if ( v2 )
    operator delete(v2, a1[7].m128i_i64[1] - (_QWORD)v2);
  v3 = (void *)a1[5].m128i_i64[0];
  if ( v3 )
    operator delete(v3, a1[6].m128i_i64[0] - (_QWORD)v3);
  sub_62FED0(a1);
}

