/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48F078
// Address: 0x000000000048F078

//----- (000000000048F078) ----------------------------------------------------
char *__fastcall sub_48F078(char *s, __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  unsigned __int8 *v6; // x1
  char *v7; // x28
  int v8; // w24
  unsigned __int64 v10; // x23
  char *v11; // x19
  _BOOL4 v12; // w25
  int v13; // w1
  _BOOL4 v14; // w2
  int v15; // w1
  unsigned __int8 **v17; // x1
  int v18; // w2
  int v20; // w2
  int v21; // t1

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      goto LABEL_48;
    goto LABEL_47;
  }
  if ( s )
  {
    v6 = a3;
    v7 = &s[a2];
    if ( a3 )
    {
      v8 = *(_DWORD *)(a4 + 24);
      v10 = *(_QWORD *)a4;
      v11 = s;
      v12 = 0;
      do
      {
        if ( v6 != (unsigned __int8 *)v11 )
          sub_4860D8((unsigned __int64)v11, v6, v7 - v11);
        v11 += strlen(v11);
        if ( s < v11 )
        {
          v13 = (unsigned __int8)*(v11 - 1);
          v14 = v13 == 47;
          if ( v13 == 92 )
            v14 = 1;
          if ( v14 )
          {
            do
            {
              if ( --v11 == s )
                break;
              v15 = (unsigned __int8)*(v11 - 1);
            }
            while ( v15 == 47 || v15 == 92 );
            v12 = v14;
          }
        }
        if ( v8 < 0 )
        {
          if ( v8 + 8 <= 0 )
          {
            v17 = (unsigned __int8 **)(*(_QWORD *)(a4 + 8) + v8);
            v8 += 8;
          }
          else
          {
            v17 = (unsigned __int8 **)v10;
            v8 += 8;
            v10 = (v10 + 15) & 0xFFFFFFFFFFFFFFF8LL;
          }
        }
        else
        {
          v17 = (unsigned __int8 **)v10;
          v10 = (v10 + 15) & 0xFFFFFFFFFFFFFFF8LL;
        }
        v6 = *v17;
        if ( !v6 )
          break;
        v18 = *v6;
        if ( v18 == 47 || v18 == 92 )
        {
          do
          {
            v21 = *++v6;
            v20 = v21;
          }
          while ( v21 == 47 || v20 == 92 );
        }
        if ( v7 <= v11 )
          goto LABEL_53;
        *v11++ = 47;
        if ( v7 <= v11 )
        {
          v11 = v7 - 1;
          *(v7 - 1) = 0;
        }
      }
      while ( v6 );
      if ( v12 && s == v11 )
      {
        if ( v7 <= v11 )
        {
LABEL_53:
          if ( !under_debugger )
            sub_492270(518);
          goto LABEL_47;
        }
        *v11 = 47;
        if ( v7 > v11 + 1 )
        {
          ++v11;
LABEL_44:
          *v11 = 0;
          return s;
        }
        v11 = v7 - 1;
        *(v7 - 1) = 0;
      }
    }
    else
    {
      v11 = s;
    }
    if ( v7 <= v11 )
    {
      if ( !under_debugger )
        sub_492270(519);
LABEL_47:
      __break(0x3E8u);
LABEL_48:
      sub_492270(1225);
    }
    goto LABEL_44;
  }
  return s;
}
// 52451C: using guessed type char under_debugger;
