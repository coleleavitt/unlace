__int64 __fastcall sub_8F5D0(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rcx

  if ( !a1 || !a2 )
    return 0;
  if ( (unsigned __int64)a2 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  result = operator new[](8LL * a2);
  if ( a2 > 0 )
  {
    v5 = 0;
    do
    {
      *(_QWORD *)(result + 8 * v5) = *(_QWORD *)(a1 + 8LL * *(int *)(a3 + 4 * v5));
      ++v5;
    }
    while ( (unsigned int)(a2 - 1) + 1LL != v5 );
  }
  return result;
}

