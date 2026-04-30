__int64 __fastcall sub_3839F0(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rax
  __int64 result; // rax

  if ( !a1 || !(_QWORD)xmmword_8CF2A8 )
    return 0;
  v1 = 0;
  v2 = 0;
  while ( 1 )
  {
    result = *(_QWORD *)(qword_8CF2A0 + 8 * v2);
    if ( result )
    {
      if ( *(_QWORD *)(result + 24) == a1 )
        break;
    }
    v2 = ++v1;
    if ( v1 >= (unsigned __int64)xmmword_8CF2A8 )
      return 0;
  }
  return result;
}
