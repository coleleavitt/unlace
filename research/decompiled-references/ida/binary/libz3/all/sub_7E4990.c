__int64 __fastcall sub_7E4990(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  unsigned int v4; // edx

  result = *(_QWORD *)(a1 + 96);
  v3 = *(_QWORD *)(a1 + 88);
  if ( result )
  {
    v4 = *(_DWORD *)(result - 4) - a2;
    if ( v3 )
      *(_DWORD *)(v3 - 4) = *(_DWORD *)(result + 4LL * v4);
    *(_DWORD *)(result - 4) = v4;
  }
  else if ( v3 )
  {
    result = *(unsigned int *)(4LL * (unsigned int)-a2);
    *(_DWORD *)(v3 - 4) = result;
  }
  return result;
}

