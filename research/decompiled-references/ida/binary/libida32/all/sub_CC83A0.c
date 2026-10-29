__int64 __fastcall sub_CC83A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 result; // rax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  __int64 v11; // rdx
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx

  result = a8;
  *(_BYTE *)(a2 + 24) = 0;
  v9 = *(_DWORD *)(a8 + 20);
  if ( v9 != -1 )
  {
    v10 = *(_DWORD *)(a8 + 16);
    result = v9 / v10;
    if ( v10 <= v9 )
    {
      if ( (unsigned int)result <= 0xF )
      {
        v12 = 0;
      }
      else
      {
        v11 = a2;
        do
        {
          *(_OWORD *)(v11 + 32) = 0;
          v11 += 16;
        }
        while ( v11 != a2 + 16LL * ((unsigned int)result >> 4) );
        v12 = result & 0xFFFFFFF0;
        if ( (_DWORD)result == (result & 0xFFFFFFF0) )
          return result;
      }
      *(_BYTE *)(a2 + v12 + 32) = 0;
      v13 = v12 + 1;
      if ( (unsigned int)result > (unsigned int)v13 )
      {
        *(_BYTE *)(a2 + v13 + 32) = 0;
        v14 = v12 + 2;
        if ( (unsigned int)result > (unsigned int)v14 )
        {
          *(_BYTE *)(a2 + v14 + 32) = 0;
          v15 = v12 + 3;
          if ( (unsigned int)result > (unsigned int)v15 )
          {
            *(_BYTE *)(a2 + v15 + 32) = 0;
            v16 = v12 + 4;
            if ( (unsigned int)result > (unsigned int)v16 )
            {
              *(_BYTE *)(a2 + v16 + 32) = 0;
              v17 = v12 + 5;
              if ( (unsigned int)result > (unsigned int)v17 )
              {
                *(_BYTE *)(a2 + v17 + 32) = 0;
                v18 = v12 + 6;
                if ( (unsigned int)result > (unsigned int)v18 )
                {
                  *(_BYTE *)(a2 + v18 + 32) = 0;
                  v19 = v12 + 7;
                  if ( (unsigned int)result > (unsigned int)v19 )
                  {
                    *(_BYTE *)(a2 + v19 + 32) = 0;
                    v20 = v12 + 8;
                    if ( (unsigned int)result > (unsigned int)v20 )
                    {
                      *(_BYTE *)(a2 + v20 + 32) = 0;
                      v21 = v12 + 9;
                      if ( (unsigned int)result > (unsigned int)v21 )
                      {
                        *(_BYTE *)(a2 + v21 + 32) = 0;
                        v22 = v12 + 10;
                        if ( (unsigned int)result > (unsigned int)v22 )
                        {
                          *(_BYTE *)(a2 + v22 + 32) = 0;
                          v23 = v12 + 11;
                          if ( (unsigned int)result > (unsigned int)v23 )
                          {
                            *(_BYTE *)(a2 + v23 + 32) = 0;
                            v24 = v12 + 12;
                            if ( (unsigned int)result > (unsigned int)v24 )
                            {
                              *(_BYTE *)(a2 + v24 + 32) = 0;
                              v25 = v12 + 13;
                              if ( (unsigned int)result > (unsigned int)v25 )
                              {
                                v26 = v12 + 14;
                                *(_BYTE *)(a2 + v25 + 32) = 0;
                                if ( (unsigned int)result > (unsigned int)v26 )
                                  *(_BYTE *)(a2 + v26 + 32) = 0;
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
      }
    }
  }
  return result;
}

