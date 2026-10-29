void __fastcall sub_21C56E0(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 *i; // r8
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r10
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // rax

  if ( a1 != a2 )
  {
    for ( i = a1 + 2; a2 != i; i += 2 )
    {
      v3 = i;
      v4 = *i;
      v5 = i[1];
      if ( *i >= *a1 )
      {
        v7 = *(i - 2);
        v8 = i - 2;
        if ( v4 < v7 )
        {
          while ( 1 )
          {
            v8[2] = v7;
            v8[3] = v8[1];
            v7 = *(v8 - 2);
            if ( v4 >= v7 )
              break;
            v8 -= 2;
          }
          *v8 = v4;
          v8[1] = v5;
        }
        else
        {
          *i = v4;
          i[1] = v5;
        }
      }
      else
      {
        v6 = ((char *)i - (char *)a1) >> 4;
        if ( (char *)i - (char *)a1 > 0 )
        {
          do
          {
            v3 -= 2;
            v3[2] = *v3;
            v3[3] = v3[1];
            --v6;
          }
          while ( v6 );
        }
        *a1 = v4;
        a1[1] = v5;
      }
    }
  }
}
