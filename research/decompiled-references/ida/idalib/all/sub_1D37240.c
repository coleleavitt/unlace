__int64 __fastcall sub_1D37240(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 i; // rdx

  if ( *(unsigned int *)(a1 + 12) < a2 )
    sub_2237220(a1, a1 + 16, a2, 32);
  result = *(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8);
  for ( i = 32 * a2 + *(_QWORD *)a1; i != result; *(_QWORD *)(result - 24) = 0 )
  {
    *(_BYTE *)(result + 24) = 0;
    *(_QWORD *)result &= 0xFFFFFFFE00000000LL;
    result += 32;
  }
  *(_DWORD *)(a1 + 8) = a2;
  return result;
}
