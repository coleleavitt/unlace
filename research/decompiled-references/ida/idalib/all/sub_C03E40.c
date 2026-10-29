unsigned __int64 __fastcall sub_C03E40(__int64 a1, unsigned int a2)
{
  return 32LL * a2
       + ((a1
         + 4LL * (unsigned int)(3 * *(_DWORD *)(a1 + 28))
         + 32
         + 8 * ((unsigned int)(3 * *(_DWORD *)(a1 + 28)) + (unsigned __int64)*(unsigned int *)(a1 + 28))
         + 7)
        & 0xFFFFFFFFFFFFFFF8LL);
}
