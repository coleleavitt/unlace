unsigned int *__fastcall sub_5A0050(_QWORD *a1, __int64 a2)
{
  unsigned int *result; // rax
  unsigned int v3; // ecx
  __int64 v4; // rdx

  result = sub_59ED40(a1, a2, *(_DWORD *)a2);
  if ( result )
  {
    v3 = result[1];
    if ( v3 )
    {
      if ( *result == *(_DWORD *)a2 )
      {
        v4 = *(_QWORD *)(a2 + 48) + 8LL * *(unsigned int *)(a2 + 40);
        if ( result != (unsigned int *)v4 )
        {
          if ( (((_BYTE)v4 - (_BYTE)result) & 8) == 0 || (result[1] = 0, result += 2, (unsigned int *)v4 != result) )
          {
            do
            {
              result[1] -= v3;
              result[3] -= v3;
              result += 4;
            }
            while ( (unsigned int *)v4 != result );
          }
        }
      }
      else
      {
        return (unsigned int *)sub_59FDE0(a1, a2, *(_DWORD *)a2, -v3);
      }
    }
  }
  return result;
}

