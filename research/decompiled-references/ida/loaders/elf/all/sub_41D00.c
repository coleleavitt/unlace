__int64 __fastcall sub_41D00(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
{
  _QWORD *v4; // r10
  int v5; // r11d
  unsigned int v7; // r9d
  __int64 result; // rax
  __int64 v9; // rdx

  if ( (unsigned int)(a3 - 1) > 2 )
  {
    if ( under_debugger )
      BUG();
    interr(20098);
    return sub_41E20(20098, a2);
  }
  else
  {
    v4 = (_QWORD *)a2;
    v5 = a3;
    v7 = 0;
    if ( a3 == 1 )
    {
      result = *(unsigned int *)(a2 + 312);
      if ( (_DWORD)result )
        goto LABEL_12;
    }
    else
    {
      while ( 1 )
      {
        result = v4[37];
        while ( v5 != 2 )
        {
          if ( v7 >= (unsigned int)result )
            return result;
          if ( v7 )
          {
            v9 = 0;
            goto LABEL_8;
          }
          v7 = 1;
        }
        v9 = v4[39];
        result = (unsigned int)(result - v9);
        if ( v7 >= (unsigned int)result )
          break;
        if ( !v7 )
        {
          v7 = 1;
          if ( (unsigned int)result <= 1 )
            break;
        }
        while ( 1 )
        {
LABEL_8:
          result = v4[36] + 96 * (v9 + v7);
          if ( *(_BYTE *)(result + 92) != 0xFE )
          {
            result = sub_41C90(*(_QWORD *)(a1 + 240), *(_WORD *)(result + 54), *(char *)(result + 93));
            if ( (a4 & ((_DWORD)result == 0)) == 0 && (_DWORD)result != 4 )
            {
              result = 5LL * (int)result;
              ++*(_DWORD *)(a1 + 8 * result + 28);
            }
          }
LABEL_12:
          ++v7;
          if ( v5 != 1 )
            break;
          v9 = 0;
          if ( v7 >= *((_DWORD *)v4 + 78) )
            return result;
        }
      }
    }
  }
  return result;
}

