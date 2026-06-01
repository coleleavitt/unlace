__int64 __fastcall sub_295840(__int64 a1, unsigned int a2, void **a3, __int64 a4, __int64 *a5)
{
  __int64 v7; // r13
  void **v8; // r14
  void *v9; // rdi
  int v10; // ebx
  __int64 *v11; // r13
  __int64 v12; // rdi
  int v14; // [rsp+0h] [rbp-28h]
  void *v15; // [rsp+8h] [rbp-20h]
  int v16; // [rsp+10h] [rbp-18h]
  __int64 v17; // [rsp+18h] [rbp-10h]

  sub_2BB890();
  sub_2BB940(a1);
  sub_2BBA80(a2);
  if ( a2 )
  {
    v7 = a2;
    v8 = &a3[v7];
    do
    {
      v9 = *a3++;
      sub_2BBCA0(v9, v14, v15, v16, v17);
    }
    while ( a3 != v8 );
    v10 = 0;
    sub_2BC030(a2);
    do
    {
      ++v10;
      sub_2BB940(0);
    }
    while ( a2 != v10 );
    v11 = &a5[v7];
    sub_2BBE50(a2);
    do
    {
      v12 = *a5++;
      sub_2BB940(v12);
    }
    while ( v11 != a5 );
  }
  else
  {
    sub_2BC030(0);
    sub_2BBE50(0);
  }
  sub_2BBE50(a2);
  return sub_2BC0D0(52);
}

