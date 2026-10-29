void __fastcall sub_9CC560(__int64 **a1, __int64 *a2, char a3)
{
  __int64 *v3; // rsi
  __int64 v4; // rax
  __int64 *v5; // rdx

  *a1 = a2;
  if ( !a3 && (*a2 == -8 || !*a2) )
  {
    v3 = a2 + 1;
    do
    {
      do
      {
        v4 = *v3;
        v5 = v3++;
      }
      while ( !v4 );
    }
    while ( v4 == -8 );
    *a1 = v5;
  }
}

