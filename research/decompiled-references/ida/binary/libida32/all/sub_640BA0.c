void __fastcall sub_640BA0(__int64 *a1)
{
  _BYTE *i; // rdi
  _BYTE *v3; // rax
  char *v4; // rdi
  _BYTE *v5; // r12
  unsigned __int64 v6; // rdx
  _BYTE *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax

  if ( (unsigned __int64)a1[1] > 1 )
  {
    for ( i = (_BYTE *)*a1; ; i = v3 + 1 )
    {
      v3 = (_BYTE *)tag_skipcodes(i);
      if ( !*v3 )
        break;
      if ( *v3 == 10 )
      {
        v4 = (char *)*a1;
        v5 = &v3[-*a1];
        if ( v3 == (_BYTE *)*a1 )
        {
          if ( v4 )
          {
            a1[1] = 0;
            qfree(v4);
            *a1 = 0;
            a1[2] = 0;
          }
        }
        else
        {
          v6 = a1[1];
          v7 = v5 + 1;
          if ( v6 < (unsigned __int64)(v5 + 1) )
          {
            if ( a1[2] < (unsigned __int64)v7 )
            {
              v9 = qvector_reserve(a1, *a1, v5 + 1, 1);
              v6 = a1[1];
              *a1 = v9;
              v4 = (char *)v9;
            }
            memset(&v4[v6], 0, (size_t)&v7[-v6]);
            v8 = *a1;
            a1[1] = (__int64)v7;
            v3 = &v5[v8];
          }
          else if ( v7 != (_BYTE *)v6 )
          {
            a1[1] = (__int64)v7;
          }
          *v3 = 0;
        }
        return;
      }
    }
  }
}

