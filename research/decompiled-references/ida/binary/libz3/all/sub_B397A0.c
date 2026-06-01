__int64 __fastcall sub_B397A0(unsigned int a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  unsigned int v4; // edx

  if ( !a1 )
    return 0;
  result = 0;
  v3 = a2 + 8LL * a1;
  do
  {
    v4 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
    if ( (unsigned int)result < v4 )
      result = v4;
    a2 += 8;
  }
  while ( v3 != a2 );
  return result;
}

