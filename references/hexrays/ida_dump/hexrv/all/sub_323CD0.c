void *__fastcall sub_323CD0(_QWORD *a1)
{
  void *result; // rax
  __int64 *v2; // rbp
  __int64 *v3; // rbx
  __int64 v4; // rdi

  result = &unk_4BDC88;
  v2 = a1 + 7;
  v3 = a1 + 19;
  *a1 = &unk_4BDC88;
  do
  {
    v4 = *v3;
    if ( *v3 )
    {
      v3[1] = 0;
      result = (void *)qfree(v4);
    }
    v3 -= 3;
  }
  while ( v3 != v2 );
  return result;
}
