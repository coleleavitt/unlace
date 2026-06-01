__int64 __fastcall sub_7AC030(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int v3; // edx

  result = *(_QWORD *)(a1 + 768);
  if ( result )
  {
    v3 = *(_DWORD *)(result - 4) - a2;
    *(_DWORD *)(a1 + 776) = *(_DWORD *)(result + 4LL * v3);
    *(_DWORD *)(result - 4) = v3;
    *(_DWORD *)(a1 + 848) = 0;
  }
  else
  {
    result = *(unsigned int *)(4LL * (unsigned int)-a2);
    *(_DWORD *)(a1 + 848) = 0;
    *(_DWORD *)(a1 + 776) = result;
  }
  return result;
}

