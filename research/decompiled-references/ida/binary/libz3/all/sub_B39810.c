__int64 __fastcall sub_B39810(int a1, __int64 *a2)
{
  __int64 *v2; // rdx
  __int64 result; // rax

  if ( a1 )
  {
    v2 = &a2[a1];
    do
    {
      result = *a2++;
      *(_BYTE *)(result + 44) &= ~2u;
    }
    while ( a2 != v2 );
  }
  return result;
}

