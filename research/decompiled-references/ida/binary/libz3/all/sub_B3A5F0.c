__int64 __fastcall sub_B3A5F0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
    *(_DWORD *)(v1 - 4) = 0;
  v2 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 40) = 0;
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  result = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 56) = 0;
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  return result;
}

