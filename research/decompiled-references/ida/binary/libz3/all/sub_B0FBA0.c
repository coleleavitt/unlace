void __fastcall sub_B0FBA0(__int64 a1, unsigned int a2)
{
  int v2; // eax
  unsigned int v3[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v3[0] = a2;
  if ( dword_1C7ED20 != a2 )
  {
    if ( a2 == dword_1C7ED24 )
    {
      v2 = *(_DWORD *)(a1 + 16);
      if ( v2 )
        *(_DWORD *)(a1 + 16) = v2 - 1;
    }
    else
    {
      sub_B0E5E0((unsigned int **)(a1 + 8), v3);
    }
  }
}

