__int64 __fastcall sub_2EC520(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  int v4; // esi
  _DWORD *v5; // rcx
  int v6; // edi
  __int64 v7; // rsi
  _DWORD *v8; // rcx
  __int64 v9; // rax
  _DWORD *v10; // rax
  int v12; // edi
  __int64 v13; // rdx
  _DWORD *v14; // rdx
  _DWORD *v15; // rdi

  v2 = 0;
  if ( *(_WORD *)(a2 + 4) )
    return v2;
  v4 = *(_DWORD *)(a2 + 24);
  v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( v4 )
  {
    if ( !v5 )
      return v2;
    if ( *v5 != 5 )
      return v2;
    v12 = v5[1];
    v2 = 1;
    if ( !v12 )
      return v2;
    if ( v12 == 9 )
    {
      v2 = 0;
      if ( v4 != 2 )
        return v2;
      v13 = *(_QWORD *)(a2 + 32);
      if ( !*(_WORD *)(v13 + 4) )
      {
        v14 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL);
        if ( v14 )
        {
          if ( *v14 == 5 && !v14[1] )
          {
            v7 = *(_QWORD *)(a2 + 40);
            if ( !*(_WORD *)(v7 + 4) && !*(_DWORD *)(v7 + 24) )
            {
              v15 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL);
              v2 = 1;
              if ( !v15 || *v15 == -1 )
                return v2;
            }
            if ( v5[1] != 9 )
              return 0;
            goto LABEL_11;
          }
          if ( v5[1] != 9 )
            return 0;
        }
      }
LABEL_10:
      v7 = *(_QWORD *)(a2 + 40);
LABEL_11:
      v2 = 0;
      if ( !*(_WORD *)(v7 + 4) )
      {
        v8 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL);
        if ( v8 )
        {
          if ( *v8 == 5 && !v8[1] )
          {
            v9 = *(_QWORD *)(a2 + 32);
            if ( !*(_WORD *)(v9 + 4) && !*(_DWORD *)(v9 + 24) )
            {
              v10 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
              if ( v10 )
              {
                LOBYTE(v2) = *v10 == -1;
                return v2;
              }
              return 1;
            }
          }
        }
      }
      return v2;
    }
LABEL_8:
    v2 = 0;
    if ( v5[1] != 9 || v4 != 2 )
      return v2;
    goto LABEL_10;
  }
  if ( !v5 )
    return 1;
  v2 = 1;
  if ( *v5 != -1 )
  {
    v2 = 0;
    if ( *v5 == 5 )
    {
      v6 = v5[1];
      v2 = 1;
      if ( v6 )
      {
        v2 = 0;
        if ( v6 != 9 )
          goto LABEL_8;
      }
    }
  }
  return v2;
}

