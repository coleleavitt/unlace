__int64 __fastcall sub_7EFA90(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 8LL * *(unsigned int *)(a1 + 16));
  if ( result )
    *(_DWORD *)(result - 4) = *(_DWORD *)(a1 + 20);
  return result;
}

