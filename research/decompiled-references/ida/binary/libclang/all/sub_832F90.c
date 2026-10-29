void __fastcall sub_832F90(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbp
  __int64 v4; // r14
  __int64 *v5; // r12
  __int64 *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rsi

  if ( a1 )
  {
    v3 = &a1[3 * *(a1 - 1)];
    if ( a1 == v3 )
    {
      v8 = 0;
    }
    else
    {
      v4 = sub_2575D20(a1, a2, a3);
      do
      {
        while ( 1 )
        {
          v3 -= 3;
          if ( *v3 == v4 )
            break;
          sub_25769A0(v3);
          if ( a1 == v3 )
            goto LABEL_12;
        }
        v5 = (__int64 *)v3[1];
        if ( v5 )
        {
          v6 = &v5[3 * *(v5 - 1)];
          if ( v5 == v6 )
          {
            v7 = 0;
          }
          else
          {
            do
            {
              v6 -= 3;
              sub_5FF3B0(v6);
            }
            while ( v5 != v6 );
            v7 = 24 * *(v5 - 1);
          }
          operator delete[](v5 - 1, v7 + 8);
        }
        v3[1] = 0;
      }
      while ( a1 != v3 );
LABEL_12:
      v8 = 24LL * *(a1 - 1);
    }
    operator delete[](a1 - 1, v8 + 8);
  }
}

