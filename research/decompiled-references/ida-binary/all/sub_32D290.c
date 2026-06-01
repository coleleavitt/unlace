__int64 __fastcall sub_32D290(__int64 a1, unsigned __int8 a2, __int64 *a3, __int64 a4, double a5)
{
  int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // rcx
  const char **v9; // rax
  const char **v10; // rbp
  const char *i; // rax
  const char *v12; // rdx
  char v13; // dl
  char v14; // bp
  _BYTE *j; // r12
  unsigned __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // r13
  __int64 v19; // rsi
  __int64 v21; // rax

  if ( !a1 )
    return 0;
  v6 = sub_1EBFA0(a1, a2, (__int64)a3, a4, a5);
  v9 = (const char **)sub_1F36A0(a1, a2, v7, v8, a5);
  v10 = v9;
  if ( (unsigned __int64)v9[1] > 1 )
  {
    for ( i = (const char *)tag_advance(*v9, (unsigned int)(v6 + 1)); ; --i )
    {
      v12 = &s1;
      if ( v10[1] )
        v12 = *v10;
      if ( v12 >= i )
        break;
      v13 = *(i - 1);
      if ( v13 == 2 )
        break;
      if ( v13 == 1 && *i == 33 )
      {
        if ( a3 )
        {
          v14 = i[1];
          for ( j = i + 1; (v14 & 0xFD) != 0; ++j )
          {
            if ( v14 != 32 )
            {
              v18 = a3[1];
              if ( v18 )
              {
                v16 = v18 + 1;
                v17 = a3[1];
                --v18;
              }
              else
              {
                v17 = 1;
                v16 = 2;
              }
              v19 = *a3;
              if ( a3[2] < v16 )
              {
                v21 = qvector_reserve(a3, v19, v16, 1);
                *a3 = v21;
                v19 = v21;
              }
              a3[1] = v16;
              *(_BYTE *)(v19 + v18) = v14;
              *(_BYTE *)(*a3 + v17) = 0;
            }
            v14 = j[1];
          }
        }
        return 1;
      }
    }
  }
  return 0;
}
