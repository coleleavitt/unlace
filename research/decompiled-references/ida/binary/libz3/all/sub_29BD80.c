__int64 __fastcall sub_29BD80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 *a7,
        __int64 a8)
{
  __int64 *v12; // rbx
  __int64 v13; // rdi

  v12 = a7;
  sub_2BB890();
  sub_2BB940(a1);
  sub_2BBBC0(a2);
  sub_2BBBC0(a3);
  sub_2BBBC0(a4);
  sub_2BBBC0(a5);
  sub_2BBA80(a6);
  if ( a6 )
  {
    do
    {
      v13 = *v12++;
      sub_2BB940(v13);
    }
    while ( v12 != &a7[a6] );
  }
  sub_2BBE50(a6);
  sub_2BB940(a8);
  return sub_2BC0D0(395);
}

