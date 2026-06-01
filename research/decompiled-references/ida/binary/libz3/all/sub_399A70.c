__int64 __fastcall sub_399A70(__int64 *a1, _QWORD *a2)
{
  __int64 result; // rax
  unsigned int v3; // edx

  result = *a1;
  if ( !*a1 || (v3 = *(_DWORD *)(result - 4), v3 == *(_DWORD *)(result - 8)) )
  {
    sub_3A6B20(a1);
    result = *a1;
    v3 = *(_DWORD *)(*a1 - 4);
  }
  *(_QWORD *)(result + 8LL * v3) = *a2;
  *(_DWORD *)(result - 4) = v3 + 1;
  return result;
}

