unsigned __int64 *__fastcall sub_5BA4E0(__m128i *a1, __int64 a2)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx

  result = sub_5B9070(a1, a2, *(_QWORD *)a2);
  if ( result )
  {
    v3 = result[1];
    if ( v3 )
    {
      if ( *result == *(_QWORD *)a2 )
      {
        v4 = *(_QWORD *)(a2 + 72) + 16LL * *(unsigned int *)(a2 + 68);
        if ( result != (unsigned __int64 *)v4 )
        {
          if ( (((_BYTE)v4 - (_BYTE)result) & 0x10) == 0
            || (result[1] = 0, result += 2, (unsigned __int64 *)v4 != result) )
          {
            do
            {
              result[1] -= v3;
              result[3] -= v3;
              result += 4;
            }
            while ( (unsigned __int64 *)v4 != result );
          }
        }
      }
      else
      {
        return (unsigned __int64 *)sub_5BA260(a1, a2, *(_QWORD *)a2, -(__int64)v3);
      }
    }
  }
  return result;
}
