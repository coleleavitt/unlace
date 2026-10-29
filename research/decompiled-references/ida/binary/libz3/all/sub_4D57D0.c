void __fastcall sub_4D57D0(__int64 a1, int a2, __int64 *a3)
{
  __int64 *v3; // r13
  __int64 *v4; // rbx
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(); // rdx
  __int64 *v7; // rsi

  if ( a2 )
  {
    v3 = &a3[a2];
    v4 = a3;
    do
    {
      while ( 1 )
      {
        v6 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 160LL);
        if ( v6 != sub_4D9400 )
          break;
        v5 = *v4++;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 168LL))(a1, v5);
        if ( v3 == v4 )
          return;
      }
      v7 = v4++;
      ((void (__fastcall *)(__int64, __int64 *))v6)(a1, v7);
    }
    while ( v3 != v4 );
  }
}

