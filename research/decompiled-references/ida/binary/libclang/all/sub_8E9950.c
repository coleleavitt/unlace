__int64 __fastcall sub_8E9950(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 808);
  *(_DWORD *)(a1 + 808) = result + 1;
  return result;
}

