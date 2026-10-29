__int64 __fastcall sub_1A2D100(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 1328);
  *(_DWORD *)(a2 + 1628) = result;
  return result;
}
