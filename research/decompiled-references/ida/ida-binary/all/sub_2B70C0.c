__int64 __fastcall sub_2B70C0(__int64 a1)
{
  __int64 *v1; // rax
  __int64 *v2; // rdx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 320);
  do
  {
    v2 = v1;
    v1 = (__int64 *)v1[1];
  }
  while ( v1 );
  result = *v2;
  if ( !*v2 )
  {
    result = *(_QWORD *)(a1 + 440);
    if ( result )
      return *(_QWORD *)(result + 8);
  }
  return result;
}
