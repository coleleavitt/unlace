__int64 __fastcall sub_DDBB40(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // r9
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // edi
  unsigned int v8; // edx
  __int64 *v9; // rsi
  __int64 v10; // rdx
  __int64 *v11; // r8
  __int64 *j; // rdx
  __int64 v13; // r9
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // edi
  unsigned int v17; // edx
  __int64 *v18; // rsi
  __int64 v19; // rdx
  __int64 *v20; // r8
  __int64 *i; // rdx

  result = *(_QWORD *)(a1 + 24);
  if ( result )
  {
    if ( !*(_DWORD *)result )
      return *(_QWORD *)(result + 8);
    if ( *(_DWORD *)result == 1 )
    {
LABEL_15:
      v13 = *a2;
      v14 = *(__int64 **)(result + 16);
      v15 = *(unsigned int *)(result + 24);
      v16 = *(_DWORD *)(*a2 + 12);
      v17 = v15 - 1;
      v15 *= 16;
      v18 = (__int64 *)((char *)v14 + v15);
      v19 = 16LL * (v16 & v17);
      v20 = &v14[(unsigned __int64)v19 / 8];
      if ( v19 != v15 )
      {
        for ( i = &v14[(unsigned __int64)v19 / 8]; v18 != i; i += 2 )
        {
          result = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(result + 12) == v16 && v13 == result )
              return i[1];
          }
          else if ( !result )
          {
            return result;
          }
        }
      }
      for ( ; v20 != v14; v14 += 2 )
      {
        result = *v14;
        if ( (unsigned __int64)*v14 > 1 )
        {
          if ( *(_DWORD *)(result + 12) == v16 && v13 == result )
          {
            i = v14;
            return i[1];
          }
        }
        else if ( !result )
        {
          return result;
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v4 = *a2;
        v5 = *(__int64 **)(result + 16);
        v6 = *(unsigned int *)(result + 24);
        v7 = *(_DWORD *)(*a2 + 12);
        v8 = v6 - 1;
        v6 *= 16;
        v9 = (__int64 *)((char *)v5 + v6);
        v10 = 16LL * (v7 & v8);
        v11 = &v5[(unsigned __int64)v10 / 8];
        if ( v10 != v6 )
        {
          for ( j = &v5[(unsigned __int64)v10 / 8]; v9 != j; j += 2 )
          {
            result = *j;
            if ( (unsigned __int64)*j > 1 )
            {
              if ( *(_DWORD *)(result + 12) == v7 && v4 == result )
                goto LABEL_13;
            }
            else if ( !result )
            {
              return result;
            }
          }
        }
        if ( v5 == v11 )
          break;
        while ( 1 )
        {
          while ( 1 )
          {
            result = *v5;
            if ( (unsigned __int64)*v5 > 1 )
              break;
            if ( !result )
              return result;
            v5 += 2;
            if ( v11 == v5 )
              return 0;
          }
          if ( *(_DWORD *)(result + 12) == v7 && v4 == result )
            break;
          v5 += 2;
          if ( v11 == v5 )
            return 0;
        }
        j = v5;
LABEL_13:
        result = j[1];
        if ( !result )
          return result;
        ++a2;
        if ( *(_DWORD *)result == 1 )
          goto LABEL_15;
      }
    }
    return 0;
  }
  return result;
}

