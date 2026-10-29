unsigned __int64 __fastcall sub_C03CC0(__int64 a1, int a2, int a3)
{
  unsigned __int64 result; // rax

  result = 4LL * (unsigned int)(3 * a2)
         + 8 * ((unsigned int)(3 * *(_DWORD *)(a1 + 28)) + (unsigned __int64)*(unsigned int *)(a1 + 28));
  *(_DWORD *)(a1 + result + 32) = a3;
  return result;
}
