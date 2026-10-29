void __fastcall sub_82E220(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r10d
  __int64 v4; // rbp
  unsigned int v5; // ebx
  _DWORD *v6; // rdx
  int v7; // edi
  __int64 v8; // r11
  __int64 v9; // rax
  _DWORD *v10; // r8
  _DWORD *v11; // rsi
  _DWORD *i; // rax
  int v13; // ecx
  int v14; // eax

  v2 = *(_DWORD *)(a1 + 344);
  if ( a2 < v2 )
  {
    v4 = 4LL * a2;
    v5 = a2;
    do
    {
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 3184LL) )
        break;
      v6 = *(_DWORD **)(a1 + 296);
      v7 = *(_DWORD *)(*(_QWORD *)(a1 + 248) + v4) >> 1;
      v8 = 24LL * (v7 & (unsigned int)(*(_DWORD *)(a1 + 304) - 1));
      v9 = 24LL * *(unsigned int *)(a1 + 304);
      v10 = &v6[(unsigned __int64)v8 / 4];
      v11 = &v6[(unsigned __int64)v9 / 4];
      if ( v8 != v9 )
      {
        for ( i = &v6[(unsigned __int64)v8 / 4]; v11 != i; i += 6 )
        {
          v13 = i[1];
          if ( v13 == 2 )
          {
            if ( v7 == *i && v7 == i[2] )
            {
LABEL_11:
              sub_82D880(a1, *(_DWORD *)(*(_QWORD *)(a1 + 248) + v4), *((_QWORD *)i + 2));
              v2 = *(_DWORD *)(a1 + 344);
              goto LABEL_12;
            }
          }
          else if ( !v13 )
          {
            goto LABEL_12;
          }
        }
      }
      for ( ; v10 != v6; v6 += 6 )
      {
        v14 = v6[1];
        if ( v14 == 2 )
        {
          if ( v7 == *v6 && v7 == v6[2] )
          {
            i = v6;
            goto LABEL_11;
          }
        }
        else if ( !v14 )
        {
          break;
        }
      }
LABEL_12:
      ++v5;
      v4 += 4;
    }
    while ( v5 < v2 );
  }
}

