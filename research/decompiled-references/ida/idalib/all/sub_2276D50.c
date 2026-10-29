__int64 __fastcall sub_2276D50(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(**(_QWORD **)(a1 + 672) + 32LL);
  result = 0;
  if ( (unsigned int)(v1 - 1) > 1 )
  {
    LOBYTE(result) = v1 != 4;
    return (unsigned int)(result + 1);
  }
  return result;
}
