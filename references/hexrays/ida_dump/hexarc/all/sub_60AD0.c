void *__fastcall sub_60AD0(_QWORD *a1)
{
  __int64 *v1; // r12
  __int64 *v3; // rbx
  __int64 *v4; // rdi
  __int64 v5; // rdi
  void *result; // rax

  v1 = a1 + 3;
  v3 = a1 + 27;
  *a1 = off_4B8590;
  do
  {
    v4 = v3;
    v3 -= 4;
    sub_60700(v4);
  }
  while ( v3 != v1 );
  v5 = a1[1];
  result = &unk_4B8648;
  *a1 = &unk_4B8648;
  if ( v5 )
  {
    a1[2] = 0;
    return (void *)qfree(v5);
  }
  return result;
}
