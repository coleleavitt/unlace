__int64 __fastcall sub_299ED0(__int64 a1, unsigned int a2, __int64 *a3, int *a4, int a5)
{
  __int64 *v8; // r15
  __int64 v9; // rdi
  int *v10; // rbp
  __int64 v11; // rdi

  sub_2BB890();
  sub_2BB940(a1);
  sub_2BBA80(a2);
  if ( a2 )
  {
    v8 = &a3[a2];
    do
    {
      v9 = *a3++;
      sub_2BB940(v9);
    }
    while ( a3 != v8 );
    v10 = &a4[a2];
    sub_2BBE50(a2);
    do
    {
      v11 = *a4++;
      sub_2BB9E0(v11);
    }
    while ( v10 != a4 );
  }
  else
  {
    sub_2BBE50(0);
  }
  sub_2BBF90(a2);
  sub_2BB9E0(a5);
  return sub_2BC0D0(278);
}

