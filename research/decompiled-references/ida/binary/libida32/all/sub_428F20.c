__int64 __fastcall sub_428F20(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 208) = 1;
  result = getinf(36);
  *(_DWORD *)(a1 + 212) = result;
  return result;
}

