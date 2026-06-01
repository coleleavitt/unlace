__int64 __fastcall sub_29DF80(__int64 a1, void *a2, unsigned int a3, __int64 *a4, __int64 a5)
{
  __int64 *v8; // rbp
  __int64 v9; // rdi
  int v11; // [rsp+0h] [rbp-28h]
  void *v12; // [rsp+8h] [rbp-20h]
  int v13; // [rsp+10h] [rbp-18h]
  __int64 v14; // [rsp+18h] [rbp-10h]

  sub_2BB890();
  sub_2BB940(a1);
  sub_2BBCA0(a2, v11, v12, v13, v14);
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
  return sub_2BC0D0(525);
}

