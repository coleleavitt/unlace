/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlgets
// Address: 0x000AB940

//----- (000AB940) --------------------------------------------------------
char *__cdecl qlgets(char *s, int n, int a3)
{
  char *v3; // esi
  int v4; // ecx
  char *i; // edi
  int v6; // eax
  bool v7; // zf
  int v8; // eax
  char v9; // al
  unsigned __int8 dest; // [esp+7h] [ebp-15h] BYREF
  unsigned int v12; // [esp+8h] [ebp-14h]

  v12 = __readgsdword(0x14u);
  if ( n < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    BUG();
  }
  v3 = s;
  if ( s )
  {
    v4 = a3;
    if ( a3 )
    {
      if ( *(int *)a3 < 2 )
        return qfgets(s, n, *(FILE **)(a3 + 4));
      if ( n > 0 )
      {
        for ( i = s; ; ++i )
        {
          if ( i >= &s[n - 1] )
            goto LABEL_19;
          if ( *(int *)v4 < 2 )
            v6 = qfread(*(FILE **)(v4 + 4), &dest, 1);
          else
            v6 = sub_AB320(__SPAIR64__(&dest, v4), 1);
          v7 = v6 == 1;
          v8 = dest;
          if ( !v7 )
            v8 = -1;
          if ( v8 == -1 )
            break;
          v4 = a3;
          if ( v8 == 10 )
          {
            if ( i > s && *(i - 1) == 13 )
              --i;
            *i = 10;
            i[1] = 0;
            return v3;
          }
          *i = v8;
        }
        v9 = 1;
        if ( i != s )
          v9 = 7;
        if ( v9 == 7 )
        {
LABEL_19:
          *i = 0;
          return v3;
        }
      }
    }
  }
  return nullptr;
}
// ABA0D: conditional instruction was optimized away because al.1 is in (==1|==7)
// 13E34C: using guessed type int under_debugger;
