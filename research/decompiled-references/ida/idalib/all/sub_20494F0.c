__int64 __fastcall sub_20494F0(__int64 *a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rsi

  result = *a1;
  if ( *a1 )
  {
    v3 = (unsigned int)(a2 + 2);
    if ( (unsigned int)v3 < *(_DWORD *)(result + 8) )
      return *(_QWORD *)(result + 8 * v3 + 48);
    else
      return 0;
  }
  return result;
}
