__int64 __fastcall sub_1562710(__int64 a1, char a2)
{
  unsigned int v3; // r12d
  __int16 v4; // ax
  __int64 *v5; // rdi
  int v7; // eax
  __int64 *v8; // rdi
  __int16 v9[21]; // [rsp+Eh] [rbp-2Ah] BYREF

  while ( 1 )
  {
    v3 = sub_1560060(a1, 0, 1u, 0, a2);
    if ( v3 != 2 )
      break;
    v4 = *(_WORD *)(a1 + 32);
    if ( v4 == 189 || v4 == 126 )
      return 0;
    if ( v4 == 22 )
    {
      v7 = *(_DWORD *)(a1 + 16);
      ++*(_WORD *)(a1 + 88);
      v8 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = v7;
      sub_14634E0(v8, (int *)(a1 + 16));
      v9[0] = 23;
      if ( !(unsigned __int8)sub_15680D0(a1, v9, 1, 1) )
        return 3;
    }
    else if ( v4 == 24 || v4 == 64 || sub_14F5220(a1) )
    {
      return 0;
    }
    if ( *(_WORD *)(a1 + 32) != 66 )
      return v3;
    v5 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v5, (int *)(a1 + 16));
  }
  return v3;
}
