__int64 __fastcall sub_29E080(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4,
        unsigned int a5,
        __int64 *a6,
        __int64 *a7,
        __int64 a8)
{
  __int64 *v12; // r12
  __int64 *v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 *v16; // r14
  __int64 v17; // rdi
  __int64 *v18; // rbp
  __int64 v19; // rdi

  v12 = a7;
  sub_2BB890();
  sub_2BB940(a1);
  sub_2BB940(a2);
  sub_2BBA80(a3);
  if ( a3 )
  {
    v13 = &a4[a3];
    do
    {
      v14 = *a4++;
      sub_2BB940(v14);
    }
    while ( a4 != v13 );
  }
  sub_2BBE50(a3);
  sub_2BBA80(a5);
  if ( a5 )
  {
    v15 = a5;
    v16 = &a6[v15];
    do
    {
      v17 = *a6++;
      sub_2BB940(v17);
    }
    while ( v16 != a6 );
    v18 = &a7[v15];
    sub_2BBE50(a5);
    do
    {
      v19 = *v12++;
      sub_2BB940(v19);
    }
    while ( v18 != v12 );
  }
  else
  {
    sub_2BBE50(0);
  }
  sub_2BBE50(a5);
  sub_2BB940(a8);
  return sub_2BC0D0(528);
}

