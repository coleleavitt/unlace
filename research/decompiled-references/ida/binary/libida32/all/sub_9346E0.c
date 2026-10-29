__int64 __fastcall sub_9346E0(unsigned int *a1, unsigned int *a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edx
  __int64 result; // rax
  unsigned int v5; // ecx

  v2 = *a2;
  v3 = a1[2];
  a1[5] = v2;
  if ( !v3 )
  {
    a1[2] = 3;
    v3 = 3;
  }
  if ( !a1[3] )
    a1[3] = 64;
  result = a1[1];
  if ( !(_DWORD)result )
  {
    result = v2 - 7;
    if ( (unsigned int)result < 6 )
      result = 6;
    a1[1] = result;
  }
  v5 = a1[4];
  if ( !v5 )
  {
    if ( v2 >= (unsigned int)result )
      v5 = v2 - result;
    a1[4] = v5;
  }
  if ( (unsigned int)result > v3 )
    result = v3;
  a1[2] = result;
  return result;
}

