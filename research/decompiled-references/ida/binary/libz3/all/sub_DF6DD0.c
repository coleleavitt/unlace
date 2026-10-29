__int64 __fastcall sub_DF6DD0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  int v8; // r9d
  __int64 *v9; // rax
  __int64 i; // rax
  int v11; // r8d

  v2 = *a1;
  result = 0;
  if ( *a1 )
  {
    if ( (v2 & 7) != 0 )
    {
      v4 = v2 & 0xFFFFFFFFFFFFFFF8LL;
      v5 = *(__int64 **)v4;
      v6 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
      if ( *(_QWORD *)v4 != v6 )
      {
        while ( (unsigned __int64)*v5 <= 1 )
        {
          if ( (__int64 *)v6 == ++v5 )
            return 0;
        }
        if ( (__int64 *)v6 == v5 )
          return 0;
        v7 = *v5;
        while ( 1 )
        {
          if ( v7 != a2 )
          {
            v8 = *(_DWORD *)(v7 + 32);
            if ( *(_DWORD *)(a2 + 32) == v8 )
              break;
          }
LABEL_11:
          v9 = v5 + 1;
          if ( (__int64 *)v6 != v5 + 1 )
          {
            while ( 1 )
            {
              v7 = *v9;
              v5 = v9;
              if ( (unsigned __int64)*v9 > 1 )
                break;
              if ( (__int64 *)v6 == ++v9 )
                return 0;
            }
            if ( (__int64 *)v6 != v9 )
              continue;
          }
          return 0;
        }
        if ( v8 )
        {
          for ( i = 0; i != v8; ++i )
          {
            v11 = i;
            if ( *(_QWORD *)(a2 + 8 * i + 48) != *(_QWORD *)(v7 + 8 * i + 48) )
            {
              if ( v8 != (_DWORD)i )
                goto LABEL_11;
              return 1;
            }
          }
          if ( v8 != v11 + 1 )
            goto LABEL_11;
        }
        return 1;
      }
    }
  }
  return result;
}

