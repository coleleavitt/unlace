void *__fastcall sub_10150(_QWORD *a1, const char *a2)
{
  void *result; // rax
  __int64 *v3; // rbp
  __int64 *v4; // rbx
  __int64 v5; // rdi

  result = &unk_19C30;
  v3 = a1 + 7;
  v4 = a1 + 19;
  *a1 = &unk_19C30;
  do
  {
    v5 = *v4;
    if ( *v4 )
    {
      v4[1] = 0;
      result = (void *)qfree(v5, a2);
    }
    v4 -= 3;
  }
  while ( v4 != v3 );
  return result;
}
