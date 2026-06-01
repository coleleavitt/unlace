void ***__fastcall sub_A6AAA0(void ***a1, __int64 a2)
{
  void **v2; // rbp
  bool v3; // cc

  v2 = *a1;
  v3 = *((_DWORD *)*a1 + 2) <= 0x40u;
  *(_BYTE *)a1[1] = *(_BYTE *)a2;
  if ( !v3 && *v2 )
    operator delete[](*v2);
  *v2 = *(void **)(a2 + 8);
  *((_DWORD *)v2 + 2) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 16) = 0;
  return a1;
}
