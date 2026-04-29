void *__fastcall sub_FF0B0(__int64 *a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rbx
  __int64 *v4; // rdi
  __int64 *v5; // rbp
  void *result; // rax
  __int64 v7; // rdi

  v2 = a1 + 27;
  v3 = a1 + 19;
  *(v2 - 27) = (__int64)off_4B0CA0;
  sub_62200(v2);
  v4 = a1 + 23;
  v5 = a1 + 7;
  sub_62200(v4);
  result = &unk_4BEC88;
  *(v5 - 7) = (__int64)&unk_4BEC88;
  do
  {
    v7 = *v3;
    if ( *v3 )
    {
      v3[1] = 0;
      result = (void *)qfree(v7);
    }
    v3 -= 3;
  }
  while ( v3 != v5 );
  return result;
}
