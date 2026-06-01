__int64 *sub_3E1200()
{
  __int64 *result; // rax
  __int64 *v1; // rcx
  __int64 v2; // rdx

  result = (__int64 *)qword_8D1240;
  v1 = (__int64 *)(qword_8D1240 + 8 * xmmword_8D1248);
  if ( 8LL * (_QWORD)xmmword_8D1248 )
  {
    do
    {
      v2 = *result++;
      *(_BYTE *)(v2 + 1112) = 1;
    }
    while ( result != v1 );
  }
  return result;
}
