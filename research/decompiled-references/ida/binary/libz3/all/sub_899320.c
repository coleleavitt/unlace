void __fastcall sub_899320(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 *v5; // rbp
  __int64 v6; // rsi
  int v7; // r13d
  int *v8; // rdx
  __int64 i; // rax
  int v10; // ecx
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r15
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // [rsp+8h] [rbp-40h]

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
  v5 = (__int64 *)(a1[1] + 16LL * a2);
  v6 = *v5;
  if ( *v5 )
  {
    v7 = *(_DWORD *)(v6 - 4);
    v8 = (int *)(v6 + 32);
    for ( i = 0; (_DWORD)i != v7; i = v11 )
    {
      v10 = *v8;
      v11 = i + 1;
      v8 += 10;
      if ( v10 != -1 )
      {
        while ( 1 )
        {
          v12 = 5 * i;
          v13 = *a1;
          v14 = v6 + 8 * v12;
          if ( (*(_BYTE *)(v14 + 20) & 1) != 0
            || *(_DWORD *)(v14 + 16) != 1
            || (*(_BYTE *)(a3 + 20) & 1) != 0
            || *(_DWORD *)(a3 + 16) != 1 )
          {
            sub_184C880(v13, v6 + 8 * v12, a3, v6 + 8 * v12);
          }
          else
          {
            v17 = *a1;
            sub_1839230(v13, v6 + 8 * v12, a3, v6 + 8 * v12);
            sub_182EF00(v17, v14 + 16);
            *(_BYTE *)(v14 + 20) &= ~1u;
            *(_DWORD *)(v14 + 16) = 1;
          }
          v6 = *v5;
          i = v11;
          if ( *v5 )
          {
            v15 = v6 + 40LL * v11;
            while ( v11 < *(_DWORD *)(v6 - 4) )
            {
              v16 = *(_DWORD *)(v15 + 32);
              ++v11;
              v15 += 40;
              if ( v16 != -1 )
                break;
              i = v11;
            }
          }
          if ( (_DWORD)i == v7 )
            break;
          v11 = i + 1;
        }
        return;
      }
    }
  }
}

