__int64 __fastcall sub_299280(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 *a5,
        unsigned int a6,
        __int64 *a7,
        __int64 a8)
{
  __int64 *v12; // rbp
  __int64 *v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rdi

  v12 = a7;
  sub_2BB890();
  sub_2BB940(a1);
  sub_2BB9E0(a2);
  sub_2BBA80(a3);
  sub_2BBA80(a4);
  if ( a4 )
  {
    v13 = &a5[a4];
    do
    {
      v14 = *a5++;
      sub_2BB940(v14);
    }
    while ( a5 != v13 );
  }
  sub_2BBE50(a4);
  sub_2BBA80(a6);
  if ( a6 )
  {
    do
    {
      v15 = *v12++;
      sub_2BB940(v15);
    }
    while ( &a7[a6] != v12 );
  }
  sub_2BBE50(a6);
  sub_2BB940(a8);
  return sub_2BC0D0(245);
}

