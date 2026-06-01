unsigned __int64 __fastcall sub_1F9A40(int a1, const char *a2, char *a3)
{
  __int64 v3; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  __int64 v12; // rdi
  __int64 v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  unsigned int v17; // esi
  __int64 v18; // r8

  v3 = a1;
  result = (unsigned __int64)strcpy(a3, a2);
  v5 = result;
  if ( !a1 )
  {
    if ( *(_BYTE *)result )
    {
      if ( *(_BYTE *)(result + 1) )
      {
        if ( *(_BYTE *)(result + 2) )
        {
          if ( *(_BYTE *)(result + 3) )
          {
            if ( *(_BYTE *)(result + 4) )
            {
              if ( *(_BYTE *)(result + 5) )
              {
                if ( *(_BYTE *)(result + 6) )
                {
                  if ( *(_BYTE *)(result + 7) )
                  {
LABEL_10:
                    *(_BYTE *)(v5 + 8) = 0;
                    return result;
                  }
                  v3 = 7;
                }
                else
                {
                  v3 = 6;
                }
              }
              else
              {
                v3 = 5;
              }
            }
            else
            {
              v3 = 4;
            }
          }
          else
          {
            v3 = 3;
          }
        }
        else
        {
          v3 = 2;
        }
      }
      else
      {
        v3 = 1;
      }
    }
    v7 = (unsigned int)(7 - v3);
    v8 = (_QWORD *)(v5 + v3);
    result = v7 + 1;
    if ( (unsigned int)result >= 8 )
    {
      *v8 = 0x2020202020202020LL;
      *(_QWORD *)((char *)v8 + (unsigned int)result - 8) = 0x2020202020202020LL;
      v9 = (unsigned __int64)(v8 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v10 = (result + (_DWORD)v8 - v9) & 0xFFFFFFF8;
      if ( v10 >= 8 )
      {
        v11 = v10 & 0xFFFFFFF8;
        LODWORD(result) = 0;
        do
        {
          v12 = (unsigned int)result;
          result = (unsigned int)(result + 8);
          *(_QWORD *)(v9 + v12) = 0x2020202020202020LL;
        }
        while ( (unsigned int)result < v11 );
      }
    }
    else if ( (result & 4) != 0 )
    {
      result = (unsigned int)result;
      *(_DWORD *)v8 = 538976288;
      *(_DWORD *)((char *)v8 + (unsigned int)result - 4) = 538976288;
    }
    else if ( (_DWORD)result )
    {
      *(_BYTE *)v8 = 32;
      if ( (result & 2) != 0 )
      {
        result = (unsigned int)result;
        *(_WORD *)((char *)v8 + (unsigned int)result - 2) = 8224;
      }
    }
    goto LABEL_10;
  }
  if ( (unsigned int)(a1 - 2) <= 5 )
  {
    if ( *(_BYTE *)result )
    {
      if ( *(_BYTE *)(result + 1) )
      {
        if ( *(_BYTE *)(result + 2) )
        {
          if ( *(_BYTE *)(result + 3) )
          {
            if ( *(_BYTE *)(result + 4) )
            {
              if ( *(_BYTE *)(result + 5) )
              {
                if ( *(_BYTE *)(result + 6) )
                {
                  if ( *(_BYTE *)(result + 7) )
                    goto LABEL_10;
                  v6 = 7;
                }
                else
                {
                  v6 = 6;
                }
              }
              else
              {
                v6 = 5;
              }
            }
            else
            {
              v6 = 4;
            }
          }
          else
          {
            v6 = 3;
          }
        }
        else
        {
          v6 = 2;
        }
      }
      else
      {
        v6 = 1;
      }
    }
    else
    {
      v6 = 0;
    }
    v13 = (unsigned int)(7 - v6);
    v14 = (_QWORD *)(v5 + v6);
    result = v13 + 1;
    if ( (unsigned int)result >= 8 )
    {
      *v14 = 0x2020202020202020LL;
      *(_QWORD *)((char *)v14 + (unsigned int)result - 8) = 0x2020202020202020LL;
      v16 = (unsigned __int64)(v14 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      result = ((_DWORD)v14 - (_DWORD)v16 + (_DWORD)result) & 0xFFFFFFF8;
      if ( (unsigned int)result >= 8 )
      {
        result = (unsigned int)result & 0xFFFFFFF8;
        v17 = 0;
        do
        {
          v18 = v17;
          v17 += 8;
          *(_QWORD *)(v16 + v18) = 0x2020202020202020LL;
        }
        while ( v17 < (unsigned int)result );
      }
    }
    else if ( (result & 4) != 0 )
    {
      *(_DWORD *)v14 = 538976288;
      *(_DWORD *)((char *)v14 + (unsigned int)result - 4) = 538976288;
    }
    else if ( (_DWORD)result )
    {
      *(_BYTE *)v14 = 32;
      if ( (result & 2) != 0 )
      {
        v15 = (unsigned int)result;
        result = 8224;
        *(_WORD *)((char *)v14 + v15 - 2) = 8224;
      }
    }
    goto LABEL_10;
  }
  return result;
}

