_BYTE *__fastcall sub_62BB50(unsigned int a1, unsigned __int64 a2, _DWORD *a3)
{
  unsigned __int64 v3; // r8
  _BYTE *v4; // rcx
  int v5; // r9d
  unsigned __int64 v6; // rdx
  _BYTE *v7; // rax
  _BYTE *v8; // rcx
  _BYTE *v9; // rax
  _BYTE *v10; // rax
  _BYTE *v11; // rax
  _BYTE *result; // rax

  v3 = a2 + a1;
  if ( !a3 )
    return nullptr;
  v4 = a3 + 1;
  if ( (unsigned __int64)a3 < a2 || v3 < (unsigned __int64)v4 )
    return nullptr;
  v5 = *a3;
  if ( *a3 != 2147483646 )
  {
    if ( (unsigned __int64)v4 >= a2 )
    {
      v6 = a2 + a1 - 1;
      if ( (unsigned __int64)v4 < v6 )
      {
        while ( *v4 )
        {
          if ( ++v4 == (_BYTE *)v6 )
            return nullptr;
        }
        if ( (unsigned __int64)v4 < v6 )
        {
          v7 = v4 + 5;
          if ( (unsigned __int64)(v4 + 1) >= a2 && v3 >= (unsigned __int64)v7 )
          {
            v8 = v4 + 9;
            if ( v5 < 0 )
              v7 = v8;
            if ( (unsigned __int64)v7 >= a2 && (unsigned __int64)v7 < v6 )
            {
              while ( *v7 )
              {
                if ( ++v7 == (_BYTE *)v6 )
                  return nullptr;
              }
              if ( (unsigned __int64)v7 < v6 )
              {
                v9 = v7 + 1;
                if ( (unsigned __int64)v9 >= a2 && (unsigned __int64)v9 < v6 )
                {
                  while ( *v9 )
                  {
                    if ( ++v9 == (_BYTE *)v6 )
                      return nullptr;
                  }
                  if ( (unsigned __int64)v9 < v6 )
                  {
                    v10 = v9 + 1;
                    if ( (unsigned __int64)v10 >= a2 && (unsigned __int64)v10 < v6 )
                    {
                      while ( *v10 )
                      {
                        if ( ++v10 == (_BYTE *)v6 )
                          return nullptr;
                      }
                      if ( (unsigned __int64)v10 < v6 )
                      {
                        v11 = v10 + 1;
                        if ( (unsigned __int64)v11 >= a2 && (unsigned __int64)v11 < v6 )
                        {
                          while ( *v11 )
                          {
                            if ( ++v11 == (_BYTE *)v6 )
                              return nullptr;
                          }
                          if ( (unsigned __int64)v11 < v6 )
                          {
                            result = v11 + 2;
                            if ( v3 < (unsigned __int64)result )
                              return nullptr;
                            return result;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return nullptr;
  }
  result = nullptr;
  if ( v3 >= (unsigned __int64)(a3 + 4) )
    return (char *)a3 + (unsigned int)a3[1];
  return result;
}

