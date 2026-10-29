__int64 __fastcall sub_147B3A0(__int64 a1, _DWORD *a2)
{
  int v2; // r8d
  _DWORD *v3; // rdx
  __int64 v4; // rax
  _DWORD *v6; // rdx
  int v7; // eax
  __int64 v8; // r9

  v2 = *(_DWORD *)(a1 + 136);
  if ( v2 )
  {
    v3 = *(_DWORD **)(a1 + 128);
    v4 = 1LL << *v3;
    if ( (v4 & 0xB7) == 0 )
    {
      if ( (v4 & 0x40) == 0 )
      {
        *a2 = 0;
        return 1;
      }
      v6 = v3 + 36;
      v7 = 0;
      while ( ++v7 != v2 )
      {
        v8 = 1LL << *v6;
        if ( (v8 & 0xB7) != 0 )
          break;
        v6 += 36;
        if ( (v8 & 0x40) == 0 )
        {
          *a2 = v7;
          return 1;
        }
      }
    }
  }
  return 0;
}
