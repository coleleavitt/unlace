__int64 __fastcall sub_2A1FA0(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4, __int64 a5)
{
  __int64 *v8; // rbp
  __int64 v9; // rdi

  sub_2BB890();
  sub_2BB940(a1);
  sub_2BB940(a2);
  sub_2BBA80(a3);
  if ( a3 )
  {
    v8 = &a4[a3];
    do
    {
      v9 = *a4++;
      sub_2BB940(v9);
    }
    while ( a4 != v8 );
  }
  sub_2BBE50(a3);
  sub_2BB940(a5);
  return sub_2BC0D0(771);
}

