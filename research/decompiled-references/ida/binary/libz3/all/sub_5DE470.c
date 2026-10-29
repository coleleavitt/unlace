__int64 __fastcall sub_5DE470(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  __int64 v4; // rcx

  result = *a1;
  if ( *a1 )
  {
    v3 = 0;
    do
    {
      if ( v3 >= *(_DWORD *)(result - 4) )
        break;
      v4 = v3++;
      sub_5DE240(a2, (__int64 *)(result + 8 * v4), (int *)(a1[1] + 32 * v4));
      result = *a1;
    }
    while ( *a1 );
  }
  return result;
}

