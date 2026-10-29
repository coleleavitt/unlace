__int64 __fastcall sub_7A71E0(__int64 a1)
{
  __int64 result; // rax

  result = **(_QWORD **)(a1 + 8);
  if ( result )
    *(_DWORD *)(result - 4) = *(_DWORD *)(a1 + 16);
  return result;
}

