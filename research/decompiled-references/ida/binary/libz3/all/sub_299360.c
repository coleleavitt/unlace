__int64 __fastcall sub_299360(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        void *a4,
        void *a5,
        unsigned int a6,
        __int64 *a7,
        unsigned int a8,
        __int64 *a9,
        unsigned int a10,
        __int64 *a11,
        int a12)
{
  __int64 *v14; // rbx
  __int64 v15; // rdi
  __int64 *v16; // rbx
  __int64 v17; // rdi
  __int64 *v18; // rbx
  __int64 v19; // rdi
  int v22; // [rsp+0h] [rbp-68h]
  void *v24; // [rsp+8h] [rbp-60h]
  int v25; // [rsp+10h] [rbp-58h]
  int v26[2]; // [rsp+10h] [rbp-58h]
  __int64 v27; // [rsp+18h] [rbp-50h]

  v14 = a7;
  sub_2BB890();
  sub_2BB940(a1);
  sub_2BB9E0(a2);
  sub_2BBA80(a3);
  sub_2BBCA0(a4, (int)a4, a5, a12, a1);
  sub_2BBCA0(v24, v22, v24, v25, v27);
  sub_2BBA80(a6);
  if ( a6 )
  {
    do
    {
      v15 = *v14++;
      sub_2BB940(v15);
    }
    while ( v14 != &a7[a6] );
  }
  sub_2BBE50(a6);
  sub_2BBA80(a8);
  if ( a8 )
  {
    v16 = a9;
    do
    {
      v17 = *v16++;
      sub_2BB940(v17);
    }
    while ( &a9[a8] != v16 );
  }
  sub_2BBE50(a8);
  sub_2BBA80(a10);
  if ( a10 )
  {
    v18 = a11;
    do
    {
      v19 = *v18++;
      sub_2BB940(v19);
    }
    while ( &a11[a10] != v18 );
  }
  sub_2BBE50(a10);
  sub_2BB940(*(_QWORD *)v26);
  return sub_2BC0D0(246);
}

