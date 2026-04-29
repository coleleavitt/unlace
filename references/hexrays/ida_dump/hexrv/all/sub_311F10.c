__int64 __fastcall sub_311F10(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *a1;
  result = 16 * a1[1];
  v3 = *a1 + result;
  if ( result )
  {
    result = 0;
    do
    {
      result += *(_QWORD *)(v1 + 8);
      v1 += 16;
    }
    while ( v1 != v3 );
  }
  return result;
}
