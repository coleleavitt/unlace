void __fastcall sub_49BFE0(char *a1, char *a2)
{
  char *v3; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  char *v6; // rax
  char *v7; // rsi
  char *v8; // rsi

  if ( a2 - a1 <= 128 )
  {
    sub_49BF00(a1, a2);
  }
  else
  {
    v3 = a1 + 128;
    sub_49BF00(a1, a1 + 128);
    if ( a2 != a1 + 128 )
    {
      do
      {
        while ( 1 )
        {
          v4 = *(_QWORD *)v3;
          v5 = *((_QWORD *)v3 - 1);
          v6 = v3 - 8;
          if ( *(_QWORD *)v3 < v5 )
            break;
          v8 = v3;
          v3 += 8;
          *(_QWORD *)v8 = v4;
          if ( a2 == v3 )
            return;
        }
        do
        {
          *((_QWORD *)v6 + 1) = v5;
          v7 = v6;
          v5 = *((_QWORD *)v6 - 1);
          v6 -= 8;
        }
        while ( v4 < v5 );
        v3 += 8;
        *(_QWORD *)v7 = v4;
      }
      while ( a2 != v3 );
    }
  }
}
