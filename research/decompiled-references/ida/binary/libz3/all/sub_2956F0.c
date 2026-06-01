__int64 __fastcall sub_2956F0(__int64 a1, void *a2, unsigned int a3, __int64 *a4)
{
  __int64 *v6; // rbp
  __int64 v7; // rdi
  int v9; // [rsp+0h] [rbp-28h]
  void *v10; // [rsp+8h] [rbp-20h]
  int v11; // [rsp+10h] [rbp-18h]
  __int64 v12; // [rsp+18h] [rbp-10h]

  sub_2BB890();
  sub_2BB940(a1);
  sub_2BBCA0(a2, v9, v10, v11, v12);
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
  }
  sub_2BBE50(a3);
  return sub_2BC0D0(48);
}

