void __fastcall sub_B1900(__int64 a1, int a2)
{
  unsigned int v2; // edx
  _BOOL4 v3; // ecx
  int v4; // eax
  char v5; // al

  if ( *(_BYTE *)(a1 + 152) )
  {
    if ( (*(_BYTE *)(a1 + 153) & 2) != 0 )
    {
      if ( !*(_BYTE *)(a1 + 208)
        || !get_func()
        || (v5 = *(_BYTE *)(a1 + 208), *(_BYTE *)(a1 + 208) = 0, *(_BYTE *)(a1 + 153) = v5, (v5 & 2) != 0) )
      {
        v2 = *(_DWORD *)(a1 + 160);
        if ( (dword_250AA0 & 1) != 0 || a2 != v2 || v2 == -1 )
        {
          v3 = 0;
          if ( v2 != -1 )
          {
            v4 = 652835029 * dword_250948++;
            v3 = __ROR4__(v4, 3) > 0x418937u;
          }
          sub_B0AC0(xmmword_250E60, (signed int *)a1, v2, v3);
          *(_DWORD *)(a1 + 160) = a2;
        }
      }
    }
  }
}

