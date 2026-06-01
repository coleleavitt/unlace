void __fastcall sub_DB9330(__int64 *a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rcx
  __int64 v7; // rbx
  __int64 *v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *i; // rbp
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 *v16; // r14
  __int64 v17; // r15
  _QWORD *v20; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v21; // [rsp+28h] [rbp-40h] BYREF

  if ( a2 - (__int64)a1 <= 112 )
  {
    if ( (__int64 *)a2 != a1 )
    {
      for ( i = a1 + 1; (__int64 *)a2 != i; ++i )
      {
        while ( 1 )
        {
          v12 = *a1;
          v13 = *i;
          v14 = *a1;
          v15 = *i;
          v20 = a3;
          if ( sub_DB0E50(&v20, v15, v14) )
            break;
          v16 = i;
          v21 = a3;
          while ( 1 )
          {
            v17 = *(v16 - 1);
            if ( !sub_DB0E50(&v21, v13, v17) )
              break;
            *v16-- = v17;
          }
          *v16 = v13;
          if ( (__int64 *)a2 == ++i )
            return;
        }
        if ( (char *)i - (char *)a1 <= 8 )
        {
          if ( (char *)i - (char *)a1 == 8 )
            *i = v12;
        }
        else
        {
          memmove(a1 + 1, a1, (char *)i - (char *)a1);
        }
        *a1 = v13;
      }
    }
  }
  else
  {
    v5 = (a2 - (__int64)a1) >> 4;
    v7 = 8 * v5;
    v8 = &a1[v5];
    sub_DB9330(a1, v8, a3, v5, a5);
    sub_DB9330(v8, a2, a3, v9, v10);
    sub_DB8D00(a1, v8, a2, v7 >> 3, (a2 - (__int64)v8) >> 3, a3);
  }
}

