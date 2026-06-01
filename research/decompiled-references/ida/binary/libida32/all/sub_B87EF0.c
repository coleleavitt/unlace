__int64 __fastcall sub_B87EF0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rax
  __int64 *v8; // rax

  do
  {
    if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
    {
      v7 = sub_B68690(a1, a2, a3, a4, a5, a6);
      a3 = *v7;
      a4 = *v7 + 8LL * *((unsigned int *)v7 + 2);
      if ( *v7 >= a4 )
      {
        if ( a3 != a4 )
        {
          while ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 133 )
          {
            a4 += 8LL;
            if ( a3 == a4 )
              goto LABEL_2;
          }
          return 1;
        }
      }
      else
      {
        v8 = (__int64 *)*v7;
        while ( 1 )
        {
          a3 = *v8;
          if ( *(_WORD *)(*v8 + 36) == 133 )
            break;
          if ( (__int64 *)a4 == ++v8 )
            goto LABEL_2;
        }
        if ( (__int64 *)a4 != v8 )
          return 1;
      }
    }
LABEL_2:
    a1 = sub_B878F0(a1, a2, a3, a4, a5, a6);
  }
  while ( a1 );
  return 0;
}

