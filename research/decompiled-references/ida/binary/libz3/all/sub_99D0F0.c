unsigned int *__fastcall sub_99D0F0(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int *result; // rax
  unsigned int *v4; // r9
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx

  v2 = a1[73] + 16LL * a2;
  if ( *(_DWORD *)(v2 + 8) )
  {
    result = *(unsigned int **)v2;
    if ( !result )
      return result;
    v4 = &result[2 * *(result - 1)];
    if ( result != v4 )
    {
      v5 = 4LL * a2;
      while ( 1 )
      {
        v8 = *result;
        if ( (_DWORD)v8 == -1 )
          goto LABEL_11;
        v9 = a1[74];
        v10 = a1[71] + 24 * v8;
        v11 = *(unsigned int *)(v10 + 12);
        if ( (_DWORD)v11 == -1 || ((*(_BYTE *)(v9 + 4 * v11 + 3) >> 4) & 3) != 2 )
          goto LABEL_5;
        v12 = *(_QWORD *)(a1[79] + 8 * v11);
        if ( !v12 )
          goto LABEL_11;
        if ( *(_DWORD *)(v12 - 4) )
        {
LABEL_5:
          if ( (*(_BYTE *)(v9 + v5 + 3) & 0x40) == 0 )
            return result;
          v6 = *(_QWORD *)v10;
          v7 = *(_QWORD *)v10 + 40LL * result[1];
          if ( (*(_BYTE *)(v7 + 4) & 1) == 0
            && (*(_DWORD *)v7 == 1 || *(_DWORD *)v7 == -1)
            && (*(_BYTE *)(v7 + 20) & 1) == 0
            && *(_DWORD *)(v7 + 16) == 1 )
          {
            if ( !v6 )
              return result;
            v13 = v6 + 40LL * *(unsigned int *)(v6 - 4);
            if ( v6 == v13 )
              return result;
            while ( *(_DWORD *)(v6 + 32) == -1 || (*(_BYTE *)(v6 + 20) & 1) == 0 && *(_DWORD *)(v6 + 16) == 1 )
            {
              v6 += 40;
              if ( v13 == v6 )
                return result;
            }
          }
LABEL_11:
          result += 2;
          if ( v4 == result )
            return nullptr;
        }
        else
        {
          result += 2;
          if ( v4 == result )
            return nullptr;
        }
      }
    }
  }
  return nullptr;
}

