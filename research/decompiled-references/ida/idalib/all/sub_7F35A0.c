__int64 __fastcall sub_7F35A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)(30 * *(_DWORD *)(a2 + 8));
  *(_DWORD *)(a1 + 56) += result;
  return result;
}
