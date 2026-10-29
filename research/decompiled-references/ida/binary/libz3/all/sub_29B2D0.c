__int64 __fastcall sub_29B2D0(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4, __int64 *a5)
{
  __int64 v8; // r13
  __int64 *v9; // r14
  __int64 v10; // rdi
  __int64 *v11; // r13
  __int64 v12; // rdi

  sub_2BB890();
  sub_2BB940(a1);
  sub_2BB940(a2);
  sub_2BBA80(a3);
  if ( a3 )
  {
    v8 = a3;
    v9 = &a4[v8];
    do
    {
      v10 = *a4++;
      sub_2BB940(v10);
    }
    while ( a4 != v9 );
    v11 = &a5[v8];
    sub_2BBE50(a3);
    do
    {
      v12 = *a5++;
      sub_2BB940(v12);
    }
    while ( v11 != a5 );
  }
  else
  {
    sub_2BBE50(0);
  }
  sub_2BBE50(a3);
  return sub_2BC0D0(354);
}

