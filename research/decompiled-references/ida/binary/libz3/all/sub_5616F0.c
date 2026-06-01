bool __fastcall sub_5616F0(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // r10d
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned int v8; // edi
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // r11
  __int64 i; // rax
  unsigned int *v13; // rcx
  unsigned int v14; // ecx
  unsigned int v15; // r9d
  __int64 v17; // rax

  v4 = sub_561580(a1, a2);
  if ( !v4 )
  {
    v5 = *(_DWORD *)(a1 + 64);
    if ( v5 >= 0 )
    {
      v6 = *(_QWORD *)(a2 + 40);
      v7 = *(_QWORD *)(a1 + 40);
      v8 = -1;
      v9 = 0x7FFFFFFF;
      while ( 1 )
      {
        v10 = *(unsigned int *)(v7 + 24);
        if ( (_DWORD)v10 )
        {
          v11 = 8 * v10 + 32;
          for ( i = 32; i != v11; i += 8 )
          {
            v13 = *(unsigned int **)(v7 + i);
            if ( *((_WORD *)v13 + 2) != 1 )
            {
              if ( v9 )
              {
                v14 = *v13;
                v15 = **(_DWORD **)(v6 + i);
                if ( v15 < v14 )
                  return 1;
                if ( v14 != v15 )
                  return 0;
                --v9;
              }
              else
              {
                v9 = -1;
              }
            }
          }
        }
        if ( v5 == ++v8 )
          break;
        v17 = v8 + 10LL;
        v6 = *(_QWORD *)(a2 + 8 * v17) & 0xFFFFFFFFFFFFFFF8LL;
        v7 = *(_QWORD *)(a1 + 8 * v17) & 0xFFFFFFFFFFFFFFF8LL;
      }
    }
    return 0;
  }
  return v4 == 1;
}

