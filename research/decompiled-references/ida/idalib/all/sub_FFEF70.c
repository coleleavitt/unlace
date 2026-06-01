__int64 __fastcall sub_FFEF70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdx
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  __int64 v8; // rdx
  _DWORD *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdi
  _DWORD *v12; // rdx
  _DWORD *v13; // rcx

  result = 1;
  v5 = (unsigned int)a1 & 0xFFFFFFFD;
  if ( (_DWORD)v5 != 88 )
  {
    v6 = (_DWORD *)sub_20ED4B0(a1, a2, v5, a4);
    v7 = v6;
    v9 = &v6[v8];
    v10 = (4 * v8) >> 4;
    v11 = (4 * v8) >> 2;
    if ( v10 > 0 )
    {
      if ( *v6 == 90 )
      {
        v12 = v6;
      }
      else
      {
        v12 = v6 + 1;
        if ( v6[1] != 90 )
        {
          v12 = v6 + 2;
          if ( v6[2] != 90 )
          {
            v12 = v6 + 3;
            v13 = &v6[4 * v10];
            if ( v6[3] != 90 )
            {
              while ( 1 )
              {
                v12 = v7 + 4;
                if ( v7 + 4 == v13 )
                {
                  v11 = v9 - v13;
                  goto LABEL_15;
                }
                if ( v7[4] == 90 )
                  goto LABEL_20;
                if ( v7[5] == 90 )
                {
                  v12 = v7 + 5;
                  goto LABEL_20;
                }
                if ( v7[6] == 90 )
                {
                  v12 = v7 + 6;
                  goto LABEL_20;
                }
                if ( v7[7] == 90 )
                  break;
                v7 += 4;
              }
              v12 = v7 + 7;
            }
          }
        }
      }
      goto LABEL_20;
    }
    v12 = v6;
LABEL_15:
    if ( v11 != 2 )
    {
      if ( v11 != 3 )
      {
        if ( v11 != 1 )
          return 0;
LABEL_28:
        if ( *v12 != 90 )
          return 0;
LABEL_20:
        result = 1;
        if ( v9 != v12 )
          return result;
        return 0;
      }
      if ( *v12 == 90 )
        goto LABEL_20;
      ++v12;
    }
    if ( *v12 == 90 )
      goto LABEL_20;
    ++v12;
    goto LABEL_28;
  }
  return result;
}
