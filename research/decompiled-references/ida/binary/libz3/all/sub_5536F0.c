__int64 __fastcall sub_5536F0(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v4; // r11d
  unsigned int v7; // esi
  int v8; // edi
  unsigned int v9; // ebx
  __int64 v10; // r13
  __int64 v11; // r12
  int v12; // eax
  int v13; // edx

  v4 = *(_DWORD *)(a1 + 520) >> 1;
  if ( v4 )
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      v10 = v7 >> 5;
      v11 = (v7 + 1) >> 5;
      v12 = ((*(_DWORD *)(a2 + 4 * v11) & (1 << (v7 + 1))) != 0) | (2 * ((*(_DWORD *)(a2 + 4 * v10) & (1 << v7)) != 0));
      v13 = ((*(_DWORD *)(a3 + 4 * v11) & (1 << (v7 + 1))) != 0) | (2 * ((*(_DWORD *)(a3 + 4 * v10) & (1 << v7)) != 0));
      if ( v13 == v12 )
        goto LABEL_4;
      if ( v9 == 1 )
        return 2;
      if ( v12 == 3 )
      {
        *a4 = v8++;
        v9 = 1;
        v7 += 2;
        if ( v4 == v8 )
          return v9;
      }
      else
      {
        if ( v13 != 3 )
          return 3;
LABEL_4:
        ++v8;
        v7 += 2;
        if ( v4 == v8 )
          return v9;
      }
    }
  }
  return 0;
}

