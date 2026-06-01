__int64 __fastcall sub_7D0430(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)(100 * *(_DWORD *)(a2 + 8));
  *(_DWORD *)(a1 + 56) += result;
  return result;
}

