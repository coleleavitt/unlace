void __fastcall sub_A79520(char *a1, __int64 a2)
{
  __int64 v2; // rcx
  char *v3; // rbp
  __int64 v4; // rbx
  char *i; // rbp
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  char *v8; // rax
  char *v9; // rcx

  if ( a2 - (__int64)a1 <= 112 )
  {
    if ( (char *)a2 != a1 )
    {
      for ( i = a1 + 8; (char *)a2 != i; *(_QWORD *)a1 = v6 )
      {
        while ( 1 )
        {
          v6 = *(_QWORD *)i;
          if ( *(_QWORD *)i < *(_QWORD *)a1 )
            break;
          v7 = *((_QWORD *)i - 1);
          v8 = i - 8;
          if ( v6 >= v7 )
          {
            *(_QWORD *)i = v6;
          }
          else
          {
            do
            {
              *((_QWORD *)v8 + 1) = v7;
              v9 = v8;
              v7 = *((_QWORD *)v8 - 1);
              v8 -= 8;
            }
            while ( v6 < v7 );
            *(_QWORD *)v9 = v6;
          }
          i += 8;
          if ( (char *)a2 == i )
            return;
        }
        if ( i - a1 <= 8 )
        {
          if ( i - a1 == 8 )
            *(_QWORD *)i = *(_QWORD *)a1;
        }
        else
        {
          memmove(a1 + 8, a1, i - a1);
        }
        i += 8;
      }
    }
  }
  else
  {
    v2 = (a2 - (__int64)a1) >> 4;
    v3 = &a1[8 * v2];
    v4 = (8 * v2) >> 3;
    sub_A79520(a1, v3);
    sub_A79520(v3, a2);
    sub_A78F00(a1, v3, a2, v4, (a2 - (__int64)v3) >> 3);
  }
}

