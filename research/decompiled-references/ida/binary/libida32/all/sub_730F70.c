__int64 __fastcall sub_730F70(_WORD *a1, __int64 a2, int a3)
{
  int v3; // r8d
  __int64 result; // rax
  int v5; // r11d
  int v6; // r10d
  int v7; // ebx
  int v8; // ecx
  int v9; // r9d

  v3 = *(unsigned __int16 *)(a2 + 2);
  result = a3 + 1;
  *(_WORD *)(a2 + 4 * result + 2) = -1;
  v5 = 4 - (v3 == 0);
  v6 = v3 == 0 ? 138 : 7;
  if ( a3 >= 0 )
  {
    LODWORD(result) = 0;
    v7 = -1;
    v8 = 0;
    while ( 1 )
    {
      ++v8;
      result = (unsigned int)(result + 1);
      v9 = *(unsigned __int16 *)(a2 + 4LL * v8 + 2);
      if ( (int)result < v6 )
      {
        if ( v9 == v3 )
          goto LABEL_10;
        if ( (int)result < v5 )
        {
          a1[2 * v3 + 1374] += result;
          if ( v9 )
            goto LABEL_15;
LABEL_17:
          v7 = v3;
          v5 = 3;
          v6 = 138;
          result = 0;
          v3 = 0;
          goto LABEL_10;
        }
      }
      if ( v3 )
      {
        if ( v3 != v7 )
          ++a1[2 * v3 + 1374];
        ++a1[1406];
      }
      else if ( (int)result > 10 )
      {
        ++a1[1410];
      }
      else
      {
        ++a1[1408];
      }
      if ( !v9 )
        goto LABEL_17;
      if ( v9 == v3 )
      {
        v7 = v3;
        v5 = 3;
        v6 = 6;
        result = 0;
LABEL_10:
        if ( v8 > a3 )
          return result;
      }
      else
      {
LABEL_15:
        v7 = v3;
        v5 = 4;
        v3 = v9;
        result = 0;
        v6 = 7;
        if ( v8 > a3 )
          return result;
      }
    }
  }
  return result;
}

