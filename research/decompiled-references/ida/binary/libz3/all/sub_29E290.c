__int64 __fastcall sub_29E290(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 *v6; // r12
  __int64 v7; // rdi
  int v8; // ebx

  sub_2BB890();
  sub_2BB940(a1);
  sub_2BB940(a2);
  sub_2BBA80(a3);
  if ( a3 )
  {
    v6 = &a4[a3];
    do
    {
      v7 = *a4++;
      sub_2BB940(v7);
    }
    while ( a4 != v6 );
    v8 = 0;
    sub_2BBE50(a3);
    do
    {
      ++v8;
      sub_2BBA80(0);
    }
    while ( a3 != v8 );
  }
  else
  {
    sub_2BBE50(0);
  }
  sub_2BBEF0(a3);
  return sub_2BC0D0(532);
}

