__int64 *__fastcall sub_C177C0(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rdi

  v4 = sub_21F90D0();
  v5 = *a2;
  v6 = v4;
  if ( *a1 == v4 )
  {
    if ( v4 == v5 )
    {
      if ( a2 != a1 )
      {
        v8 = a1[1];
        if ( v8 )
        {
          v9 = 24LL * *(_QWORD *)(v8 - 8);
          v10 = v8 + v9;
          if ( v8 != v8 + v9 )
          {
            while ( 1 )
            {
              v8 = v10 - 24;
              v11 = v10 - 24;
              if ( v5 == *(_QWORD *)(v10 - 24) )
              {
                sub_A4F010(v11);
                if ( a1[1] == v8 )
                {
LABEL_17:
                  v9 = 24LL * *(_QWORD *)(v10 - 32);
                  break;
                }
              }
              else
              {
                sub_21F9830(v11);
                if ( a1[1] == v8 )
                  goto LABEL_17;
              }
              v10 -= 24;
            }
          }
          operator delete[]((void *)(v8 - 8), v9 + 8);
        }
        sub_21FFED0(a1, a2);
      }
      return a1;
    }
  }
  else if ( v4 != v5 )
  {
    sub_21F9590(a1, a2);
    return a1;
  }
  if ( a1 == a2 )
    return a1;
  sub_9955A0(a1);
  if ( v6 == *a2 )
  {
    sub_21FFED0(a1, a2);
    return a1;
  }
  sub_21F97D0(a1, a2);
  return a1;
}
