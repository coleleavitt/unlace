void __fastcall sub_65E550(__int64 *a1)
{
  unsigned __int64 v1; // rax
  char *v3; // rbp
  unsigned __int64 v4; // rbx
  char *v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r12
  char *v8; // rdi
  char *v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax

  v1 = a1[1];
  if ( v1 > 1 )
  {
    v3 = (char *)*a1;
    v4 = *a1 + v1 - 1;
    if ( *a1 < v4 )
    {
      v5 = v3 + 1;
      do
      {
        if ( *(_BYTE *)(v4 - 1) != 32 )
          goto LABEL_8;
        if ( v5 == (char *)v4 )
          goto LABEL_9;
        if ( sub_65E160(v3, (char *)(v4 - 2)) )
        {
LABEL_8:
          v5 = (char *)v4;
LABEL_9:
          v6 = a1[1];
          if ( !v6 )
            return;
          goto LABEL_11;
        }
        --v4;
      }
      while ( (char *)v4 != v3 );
      v6 = a1[1];
      v5 = v3;
      if ( !v6 )
        return;
LABEL_11:
      v7 = v5 - v3;
      if ( v7 < v6 - 1 )
      {
        v8 = (char *)*a1;
        v9 = (char *)*a1;
        if ( v7 )
        {
          v10 = v7 + 1;
          if ( v6 < v7 + 1 )
          {
            if ( a1[2] < v10 )
            {
              v11 = qvector_reserve(a1, *a1, v7 + 1, 1);
              *a1 = v11;
              v8 = (char *)v11;
              v6 = a1[1];
            }
            memset(&v8[v6], 0, v10 - v6);
            a1[1] = v10;
            v9 = (char *)*a1;
          }
          else if ( v6 != v7 + 1 )
          {
            a1[1] = v10;
          }
          v9[v7] = 0;
        }
        else if ( v8 )
        {
          a1[1] = 0;
          qfree(v8);
          *a1 = 0;
          a1[2] = 0;
        }
      }
    }
  }
}
