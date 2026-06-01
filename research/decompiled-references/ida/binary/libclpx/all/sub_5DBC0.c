char *__fastcall sub_5DBC0(char *src, char *a2)
{
  char *result; // rax
  char *v4; // r15
  char *v5; // rbx
  int v6; // r12d
  int v7; // edx
  int v8; // esi
  int v9; // edx
  char *v10; // rbx
  int v11; // r12d
  int v12; // edx

  result = (char *)(a2 - src);
  if ( a2 - src <= 64 )
  {
    if ( a2 != src )
    {
      v10 = src + 4;
      if ( a2 != src + 4 )
      {
        result = src + 8;
        do
        {
          v11 = *(_DWORD *)v10;
          if ( *(_DWORD *)v10 < *(_DWORD *)src )
          {
            if ( v10 != src )
              result = (char *)memmove(src + 4, src, v10 - src);
            *(_DWORD *)src = v11;
          }
          else
          {
            v12 = *((_DWORD *)v10 - 1);
            result = v10 - 4;
            if ( v11 < v12 )
            {
              while ( 1 )
              {
                *((_DWORD *)result + 1) = v12;
                v12 = *((_DWORD *)result - 1);
                if ( v11 >= v12 )
                  break;
                result -= 4;
              }
              *(_DWORD *)result = v11;
            }
            else
            {
              result = v10;
              *(_DWORD *)v10 = v11;
            }
          }
          v10 += 4;
        }
        while ( &src[4 * ((unsigned __int64)(a2 - (src + 8)) >> 2) + 8] != v10 );
      }
    }
  }
  else
  {
    v4 = src + 64;
    v5 = src + 4;
    do
    {
      while ( 1 )
      {
        v6 = *(_DWORD *)v5;
        if ( *(_DWORD *)v5 < *(_DWORD *)src )
          break;
        v7 = *((_DWORD *)v5 - 1);
        result = v5 - 4;
        if ( v6 < v7 )
        {
          while ( 1 )
          {
            *((_DWORD *)result + 1) = v7;
            v7 = *((_DWORD *)result - 1);
            if ( v6 >= v7 )
              break;
            result -= 4;
          }
          *(_DWORD *)result = v6;
        }
        else
        {
          result = v5;
          *(_DWORD *)v5 = v6;
        }
        v5 += 4;
        if ( v4 == v5 )
          goto LABEL_13;
      }
      if ( v5 != src )
        result = (char *)memmove(src + 4, src, v5 - src);
      v5 += 4;
      *(_DWORD *)src = v6;
    }
    while ( v4 != v5 );
LABEL_13:
    while ( a2 != v5 )
    {
      v8 = *(_DWORD *)v5;
      v9 = *((_DWORD *)v5 - 1);
      result = v5 - 4;
      if ( *(_DWORD *)v5 < v9 )
      {
        while ( 1 )
        {
          *((_DWORD *)result + 1) = v9;
          v9 = *((_DWORD *)result - 1);
          if ( v8 >= v9 )
            break;
          result -= 4;
        }
        *(_DWORD *)result = v8;
        v5 += 4;
      }
      else
      {
        result = v5;
        v5 += 4;
        *(_DWORD *)result = v8;
      }
    }
  }
  return result;
}

