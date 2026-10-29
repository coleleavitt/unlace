__int64 __fastcall sub_298BD0(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 *a4,
        unsigned int a5,
        __int64 *a6,
        void **a7,
        __int64 a8)
{
  void **v12; // r12
  __int64 *v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 *v16; // r14
  __int64 v17; // rdi
  void **v18; // rbp
  void *v19; // rdi
  int v21[2]; // [rsp+0h] [rbp-48h]
  void *v22; // [rsp+8h] [rbp-40h]
  int v23; // [rsp+10h] [rbp-38h]
  __int64 v24; // [rsp+18h] [rbp-30h]

  v12 = a7;
  v22 = a1;
  *(_QWORD *)v21 = a8;
  sub_2BB890();
  sub_2BB940(a1);
  sub_2BBA80(a2);
  sub_2BBA80(a3);
  if ( a3 )
  {
    v13 = &a4[a3];
    do
    {
      v14 = *a4++;
      sub_2BB940(v14);
    }
    while ( a4 != v13 );
  }
  sub_2BBE50(a3);
  sub_2BBA80(a5);
  if ( a5 )
  {
    v15 = a5;
    v16 = &a6[v15];
    do
    {
      v17 = *a6++;
      sub_2BB940(v17);
    }
    while ( v16 != a6 );
    v18 = &a7[v15];
    sub_2BBE50(a5);
    do
    {
      v19 = *v12++;
      sub_2BBCA0(v19, v21[0], v22, v23, v24);
    }
    while ( v18 != v12 );
  }
  else
  {
    sub_2BBE50(0);
  }
  sub_2BC030(a5);
  sub_2BB940(*(_QWORD *)v21);
  return sub_2BC0D0(239);
}

