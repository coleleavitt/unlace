__int64 __fastcall sub_16E2F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  result = *(unsigned int *)(a2 + 12);
  *(_DWORD *)(a1 + 12) = result;
  return result;
}

