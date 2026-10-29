__int64 __fastcall sub_29F420(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 *v4; // r12
  __int64 v5; // rdi
  int v6; // ebx

  sub_2BB890();
  sub_2BB940(a1);
  sub_2BBA80(a2);
  if ( a2 )
  {
    v4 = &a3[a2];
    do
    {
      v5 = *a3++;
      sub_2BB940(v5);
    }
    while ( a3 != v4 );
    v6 = 0;
    sub_2BBE50(a2);
    do
    {
      ++v6;
      sub_2BB940(0);
    }
    while ( a2 != v6 );
  }
  else
  {
    sub_2BBE50(0);
  }
  sub_2BBE50(a2);
  return sub_2BC0D0(601);
}

