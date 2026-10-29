__int64 __fastcall sub_9E60E0(unsigned int *a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v3; // r10d
  unsigned int v4; // r8d
  unsigned int v5; // edx
  unsigned int v6; // edi
  unsigned int v7; // r9d
  unsigned int v8; // ecx

  result = 1;
  v3 = a1[3] & 0x7FFFFFFF;
  v4 = a1[2] & 0x7FFFFFFF;
  v5 = a1[1] & 0x7FFFFFFF;
  v6 = *a1;
  v7 = a2[2] & 0x7FFFFFFF;
  v8 = a2[1] & 0x7FFFFFFF;
  if ( *a2 <= v6 )
  {
    result = 0;
    if ( *a2 == v6 )
    {
      result = 1;
      if ( v8 <= v5 )
      {
        result = 0;
        if ( v8 == v5 )
        {
          result = 1;
          if ( v7 <= v4 )
          {
            LOBYTE(result) = (a2[3] & 0x7FFFFFFF) > v3;
            LOBYTE(v5) = v7 == v4;
            return v5 & (unsigned int)result;
          }
        }
      }
    }
  }
  return result;
}

