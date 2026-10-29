void __fastcall sub_8AECE0(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 *v4; // rbp
  __int64 v5; // rsi
  int v6; // r13d
  int *v7; // rdx
  __int64 i; // rax
  int v9; // ecx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // ecx

  if ( (*(_BYTE *)(a3 + 4) & 1) == 0 )
  {
    if ( *(_DWORD *)a3 == 1 )
    {
      if ( (*(_BYTE *)(a3 + 20) & 1) == 0 && *(_DWORD *)(a3 + 16) == 1 )
        return;
    }
    else if ( *(_DWORD *)a3 == -1 && (*(_BYTE *)(a3 + 20) & 1) == 0 && *(_DWORD *)(a3 + 16) == 1 )
    {
      sub_48E4C0(a1, a2);
      return;
    }
  }
  v4 = (__int64 *)(a1[1] + 16LL * a2);
  v5 = *v4;
  if ( *v4 )
  {
    v6 = *(_DWORD *)(v5 - 4);
    v7 = (int *)(v5 + 32);
    for ( i = 0; v6 != (_DWORD)i; i = v10 )
    {
      v9 = *v7;
      v10 = i + 1;
      v7 += 10;
      if ( v9 != -1 )
      {
        while ( 1 )
        {
          sub_8AE7F0(*a1, (int *)(v5 + 40 * i), a3, v5 + 40 * i);
          v5 = *v4;
          i = v10;
          if ( *v4 )
          {
            v11 = v5 + 40LL * v10;
            while ( v10 < *(_DWORD *)(v5 - 4) )
            {
              v12 = *(_DWORD *)(v11 + 32);
              ++v10;
              v11 += 40;
              if ( v12 != -1 )
                break;
              i = v10;
            }
          }
          if ( (_DWORD)i == v6 )
            break;
          v10 = i + 1;
        }
        return;
      }
    }
  }
}

