void __fastcall sub_9955A0(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // r12

  if ( *a1 == sub_21F90D0() )
  {
    v1 = a1[1];
    if ( v1 )
    {
      v2 = 24LL * *(_QWORD *)(v1 - 8);
      v3 = v1 + v2;
      if ( v1 != v1 + v2 )
      {
        while ( 1 )
        {
          v1 = v3 - 24;
          sub_9955A0(v3 - 24);
          if ( a1[1] == v3 - 24 )
            break;
          v3 -= 24;
        }
        v2 = 24LL * *(_QWORD *)(v3 - 32);
      }
      operator delete[]((void *)(v1 - 8), v2 + 8);
    }
  }
  else
  {
    sub_21F9830(a1);
  }
}
