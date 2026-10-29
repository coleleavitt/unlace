__int64 __fastcall sub_2A0110(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, void **a5)
{
  void **v8; // rbp
  void *v9; // rdi
  int v11; // [rsp+0h] [rbp-28h]
  void *v12; // [rsp+8h] [rbp-20h]
  int v13; // [rsp+10h] [rbp-18h]
  __int64 v14; // [rsp+18h] [rbp-10h]

  sub_2BB890();
  sub_2BB940(a1);
  sub_2BB940(a2);
  sub_2BB940(a3);
  sub_2BBA80(a4);
  if ( a4 )
  {
    v8 = &a5[a4];
    do
    {
      v9 = *a5++;
      sub_2BBCA0(v9, v11, v12, v13, v14);
    }
    while ( a5 != v8 );
  }
  sub_2BC030(a4);
  return sub_2BC0D0(648);
}

