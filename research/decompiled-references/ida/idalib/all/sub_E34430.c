__int64 __fastcall sub_E34430(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)(*(_DWORD *)(a1 + 48) + 1);
  *(_DWORD *)(a1 + 48) = result;
  return result;
}
