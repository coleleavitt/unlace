void __fastcall sub_1F6BEF0(__int64 *a1, __int64 *a2)
{
  __int64 *v2; // r13
  __int64 *v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 *v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax

  if ( a1 != a2 && a2 != a1 + 2 )
  {
    v2 = a1 + 2;
    do
    {
      v4 = v2;
      if ( (int)sub_B84BB0(*v2, *a1) < 0 )
      {
        v9 = *v2;
        v10 = v2[1];
        v11 = ((char *)v2 - (char *)a1) >> 4;
        if ( (char *)v2 - (char *)a1 > 0 )
        {
          do
          {
            v4 -= 2;
            v4[2] = *v4;
            v4[3] = v4[1];
            --v11;
          }
          while ( v11 );
        }
        *a1 = v9;
        a1[1] = v10;
      }
      else
      {
        v5 = v2[1];
        v6 = *v2;
        while ( 1 )
        {
          v7 = *(v4 - 2);
          v8 = v4;
          v4 -= 2;
          if ( (int)sub_B84BB0(v6, v7) >= 0 )
            break;
          v4[2] = *v4;
          v4[3] = v4[1];
        }
        *v8 = v6;
        v8[1] = v5;
      }
      v2 += 2;
    }
    while ( v2 != a2 );
  }
}
