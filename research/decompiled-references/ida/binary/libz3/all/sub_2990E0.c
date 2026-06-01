__int64 __fastcall sub_2990E0(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 *a4,
        unsigned int a5,
        __int64 *a6,
        __int64 a7)
{
  __int64 *v11; // r15
  __int64 v12; // rdi
  __int64 *v13; // rbp
  __int64 v14; // rdi

  sub_2BB890();
  sub_2BB940(a1);
  sub_2BBA80(a2);
  sub_2BBA80(a3);
  if ( a3 )
  {
    v11 = &a4[a3];
    do
    {
      v12 = *a4++;
      sub_2BB940(v12);
    }
    while ( a4 != v11 );
  }
  sub_2BBE50(a3);
  sub_2BBA80(a5);
  if ( a5 )
  {
    v13 = &a6[a5];
    do
    {
      v14 = *a6++;
      sub_2BB940(v14);
    }
    while ( v13 != a6 );
  }
  sub_2BBE50(a5);
  sub_2BB940(a7);
  return sub_2BC0D0(243);
}

