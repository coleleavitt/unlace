void __fastcall sub_41F660(char *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  char v6; // al
  __int64 v7; // rbp
  _QWORD *i; // r15
  __int64 v9; // rdx
  _QWORD *v10; // r13
  char v11; // [rsp+1Eh] [rbp-3Ah] BYREF
  _BYTE v12[57]; // [rsp+1Fh] [rbp-39h] BYREF

  if ( a2 - (__int64)a1 <= 112 )
  {
    if ( (char *)a2 != a1 )
    {
      v5 = a1 + 8;
      if ( (char *)a2 != a1 + 8 )
      {
        do
        {
          while ( 1 )
          {
            v6 = sub_422720(&v11, *v5, *(_QWORD *)a1);
            v7 = *v5;
            if ( v6 )
              break;
            for ( i = v5; ; i[1] = *i )
            {
              v9 = *(i - 1);
              v10 = i--;
              if ( !(unsigned __int8)sub_422720(v12, v7, v9) )
                break;
            }
            *v10 = v7;
            if ( (_QWORD *)a2 == ++v5 )
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
        while ( (_QWORD *)a2 != v5 );
      }
    }
  }
  else
  {
    v3 = 8 * ((a2 - (__int64)a1) >> 4);
    sub_41F660(a1, &a1[v3], a3);
    sub_41F660(&a1[v3], a2, v4);
    sub_41F3B0(a1, &a1[v3], a2, v3 >> 3, (a2 - (__int64)&a1[v3]) >> 3);
  }
}

