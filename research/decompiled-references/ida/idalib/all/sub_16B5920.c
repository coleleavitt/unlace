__int64 __fastcall sub_16B5920(_QWORD *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = a2;
  v3 = *a1 + 4LL * a2;
  if ( *(char *)(v3 + 3) < 0 )
  {
    result = sub_16B5920(a1, *(_DWORD *)v3 & 0x7FFFFFFF) & 0x7FFFFFFF;
    *(_DWORD *)(*a1 + 4LL * a2) = result | *(_DWORD *)(*a1 + 4LL * a2) & 0x80000000;
  }
  return result;
}
