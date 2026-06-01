void __fastcall sub_48E4C0(_QWORD *a1, unsigned int a2)
{
  __int64 *v2; // rbp
  __int64 v3; // rsi
  int v4; // r12d
  int *v5; // rdx
  __int64 i; // rax
  int v7; // ecx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // ecx

  v2 = (__int64 *)(a1[1] + 16LL * a2);
  v3 = *v2;
  if ( *v2 )
  {
    v4 = *(_DWORD *)(v3 - 4);
    v5 = (int *)(v3 + 32);
    for ( i = 0; (_DWORD)i != v4; i = v8 )
    {
      v7 = *v5;
      v8 = i + 1;
      v5 += 10;
      if ( v7 != -1 )
      {
        while ( 1 )
        {
          sub_1839100(*a1, v3 + 40 * i);
          v3 = *v2;
          i = v8;
          if ( *v2 )
          {
            v9 = v3 + 40LL * v8;
            while ( v8 < *(_DWORD *)(v3 - 4) )
            {
              v10 = *(_DWORD *)(v9 + 32);
              ++v8;
              v9 += 40;
              if ( v10 != -1 )
                break;
              i = v8;
            }
          }
          if ( (_DWORD)i == v4 )
            break;
          v8 = i + 1;
        }
        return;
      }
    }
  }
}

