void __fastcall sub_750DF0(__int64 a1, __int64 a2, int a3)
{
  int v3; // r11d
  __int64 v4; // r10
  int v5; // edx
  int v6; // r14d
  unsigned __int16 *v7; // r12
  __int64 v8; // r9
  int v9; // eax
  int v10; // ecx
  unsigned __int16 v11; // r8
  __int64 v12; // r15
  unsigned __int16 v13; // bp

  v3 = *(_DWORD *)(a1 + 5300);
  v4 = a3;
  v5 = 2 * a3;
  v6 = *(_DWORD *)(a1 + 4 * v4 + 3008);
  if ( v5 <= v3 )
  {
    v7 = (unsigned __int16 *)(a2 + 4LL * v6);
    do
    {
      v8 = *(int *)(a1 + 4LL * v5 + 3008);
      v9 = v5;
      v10 = *(_DWORD *)(a1 + 4LL * v5 + 3008);
      v11 = *(_WORD *)(a2 + 4 * v8);
      if ( v3 > v5 )
      {
        v9 = v5 + 1;
        v12 = *(int *)(a1 + 4LL * (v5 + 1) + 3008);
        v13 = *(_WORD *)(a2 + 4 * v12);
        if ( v13 < v11 )
        {
          v11 = *(_WORD *)(a2 + 4 * v12);
          v10 = *(_DWORD *)(a1 + 4LL * (v5 + 1) + 3008);
        }
        else if ( v13 == v11 )
        {
          if ( *(_BYTE *)(a1 + v12 + 5308) > *(_BYTE *)(a1 + v8 + 5308) )
            v9 = v5;
          else
            v10 = *(_DWORD *)(a1 + 4LL * (v5 + 1) + 3008);
        }
        else
        {
          v9 = v5;
        }
      }
      if ( *v7 < v11 || *v7 == v11 && *(_BYTE *)(a1 + v6 + 5308) <= *(_BYTE *)(a1 + v10 + 5308) )
        break;
      v5 = 2 * v9;
      *(_DWORD *)(a1 + 4 * v4 + 3008) = v10;
      v4 = v9;
    }
    while ( 2 * v9 <= v3 );
  }
  *(_DWORD *)(a1 + 4 * v4 + 3008) = v6;
}
