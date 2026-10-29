__int64 __fastcall sub_297860(__int64 a1, unsigned int a2, unsigned __int8 *a3)
{
  unsigned __int8 *v4; // rbp
  __int64 v5; // rdi

  sub_2BB890();
  sub_2BB940(a1);
  sub_2BBA80(a2);
  if ( a2 )
  {
    v4 = &a3[a2];
    do
    {
      v5 = *a3++;
      sub_2BBA80(v5);
    }
    while ( a3 != v4 );
  }
  sub_2BBEF0(a2);
  return sub_2BC0D0(166);
}

