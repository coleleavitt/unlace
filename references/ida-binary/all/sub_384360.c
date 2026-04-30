__int64 sub_384360()
{
  __int64 v0; // rax
  __int64 v1; // rdi
  int v2; // ecx
  __int64 v3; // rdx
  __int64 result; // rax

  v0 = sub_1F4200();
  if ( !v0 || !(_QWORD)xmmword_8CF2A8 )
    return 0;
  v1 = v0;
  v2 = 0;
  v3 = 0;
  while ( 1 )
  {
    result = *(_QWORD *)(qword_8CF2A0 + 8 * v3);
    if ( result )
    {
      if ( v1 == *(_QWORD *)(result + 24) )
        break;
    }
    v3 = ++v2;
    if ( v2 >= (unsigned __int64)xmmword_8CF2A8 )
      return 0;
  }
  return result;
}
