void __fastcall sub_3CE910(char *a1, __int64 a2, __int64 (__fastcall *a3)(__int64, __int64))
{
  __int64 v4; // rbp
  __int64 *v5; // rbp
  char v6; // al
  __int64 v7; // r12
  __int64 *i; // r15
  __int64 v9; // rsi
  __int64 *v10; // r14

  if ( a2 - (__int64)a1 <= 112 )
  {
    if ( (char *)a2 != a1 )
    {
      v5 = (__int64 *)(a1 + 8);
      if ( (char *)a2 != a1 + 8 )
      {
        do
        {
          while ( 1 )
          {
            v6 = a3(*v5, *(_QWORD *)a1);
            v7 = *v5;
            if ( v6 )
              break;
            for ( i = v5; ; i[1] = *i )
            {
              v9 = *(i - 1);
              v10 = i--;
              if ( !(unsigned __int8)a3(v7, v9) )
                break;
            }
            *v10 = v7;
            if ( (__int64 *)a2 == ++v5 )
              return;
          }
          if ( (char *)v5 - a1 <= 8 )
          {
            if ( (char *)v5 - a1 == 8 )
              *v5 = *(_QWORD *)a1;
          }
          else
          {
            memmove(a1 + 8, a1, (char *)v5 - a1);
          }
          *(_QWORD *)a1 = v7;
          ++v5;
        }
        while ( (__int64 *)a2 != v5 );
      }
    }
  }
  else
  {
    v4 = 8 * ((a2 - (__int64)a1) >> 4);
    sub_3CE910(a1, &a1[v4]);
    sub_3CE910(&a1[v4], a2);
    sub_3CE240(a1, &a1[v4], a2, v4 >> 3, (a2 - (__int64)&a1[v4]) >> 3, a3);
  }
}

