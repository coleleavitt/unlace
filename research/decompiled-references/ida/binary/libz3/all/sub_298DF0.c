__int64 __fastcall sub_298DF0(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        void *a4,
        __int64 *a5,
        unsigned int a6,
        __int64 *a7,
        __int64 a8,
        void *a9)
{
  unsigned int v10; // r13d
  __int64 *v13; // rbp
  __int64 *v14; // r14
  __int64 v15; // rdi
  __int64 v16; // r13
  __int64 v17; // rdi
  void **v18; // rbx
  void **v19; // r13
  void *v20; // rdi
  int v22; // [rsp+0h] [rbp-58h]
  void *v23; // [rsp+8h] [rbp-50h]
  int v24; // [rsp+10h] [rbp-48h]
  __int64 v25; // [rsp+18h] [rbp-40h]

  v10 = (unsigned int)a4;
  v13 = a7;
  v24 = a1;
  v25 = a8;
  v23 = a9;
  sub_2BB890();
  sub_2BB940(a1);
  sub_2BB9E0(a2);
  sub_2BBA80(a3);
  sub_2BBA80(v10);
  if ( v10 )
  {
    v14 = &a5[v10];
    do
    {
      v15 = *a5++;
      sub_2BB940(v15);
    }
    while ( a5 != v14 );
  }
  sub_2BBE50(v10);
  sub_2BBA80(a6);
  if ( a6 )
  {
    v16 = a6;
    do
    {
      v17 = *v13++;
      sub_2BB940(v17);
    }
    while ( &a7[v16] != v13 );
    sub_2BBE50(a6);
    v18 = (void **)a8;
    v19 = (void **)(a8 + v16 * 8);
    do
    {
      v20 = *v18++;
      sub_2BBCA0(v20, v22, v23, v24, v25);
    }
    while ( v19 != v18 );
  }
  else
  {
    sub_2BBE50(0);
  }
  sub_2BC030(a6);
  sub_2BB940(v23);
  return sub_2BC0D0(241);
}

