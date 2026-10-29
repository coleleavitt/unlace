__int64 __fastcall sub_2994D0(__int64 a1, unsigned int a2, __int64 *a3, void **a4, __int64 a5)
{
  __int64 v8; // r14
  __int64 *v9; // r15
  __int64 v10; // rdi
  void **v11; // r14
  void *v12; // rdi
  int v14; // [rsp+0h] [rbp-38h]
  void *v15; // [rsp+8h] [rbp-30h]
  int v16; // [rsp+10h] [rbp-28h]
  __int64 v17; // [rsp+18h] [rbp-20h]

  sub_2BB890();
  sub_2BB940(a1);
  sub_2BBA80(a2);
  if ( a2 )
  {
    v8 = a2;
    v9 = &a3[v8];
    do
    {
      v10 = *a3++;
      sub_2BB940(v10);
    }
    while ( a3 != v9 );
    v11 = &a4[v8];
    sub_2BBE50(a2);
    do
    {
      v12 = *a4++;
      sub_2BBCA0(v12, v14, v15, v16, v17);
    }
    while ( v11 != a4 );
  }
  else
  {
    sub_2BBE50(0);
  }
  sub_2BC030(a2);
  sub_2BB940(a5);
  return sub_2BC0D0(247);
}

