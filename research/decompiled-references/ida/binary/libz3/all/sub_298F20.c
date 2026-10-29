__int64 __fastcall sub_298F20(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        void *a4,
        int a5,
        unsigned int a6,
        __int64 *a7,
        unsigned int a8,
        __int64 *a9,
        unsigned int a10,
        __int64 *a11,
        void **a12,
        __int64 a13)
{
  __int64 *v15; // rbx
  __int64 v16; // rdi
  __int64 *v17; // rbp
  __int64 v18; // rdi
  __int64 *v19; // rbx
  __int64 v20; // rbp
  __int64 v21; // rdi
  void **v22; // rbx
  void **v23; // rbp
  void *v24; // rdi
  int v26; // [rsp+0h] [rbp-78h]
  int v27; // [rsp+0h] [rbp-78h]
  int v28; // [rsp+0h] [rbp-78h]
  void *v30; // [rsp+8h] [rbp-70h]
  void *v31; // [rsp+8h] [rbp-70h]
  void *v33; // [rsp+10h] [rbp-68h]
  int v34; // [rsp+10h] [rbp-68h]
  __int64 v35; // [rsp+18h] [rbp-60h]
  __int64 v36; // [rsp+18h] [rbp-60h]

  v15 = a7;
  sub_2BB890();
  sub_2BB940(a1);
  sub_2BB9E0(a2);
  sub_2BBA80(a3);
  sub_2BBCA0(a4, v26, a4, a5, a13);
  sub_2BBCA0(v33, v27, v30, (int)v33, v35);
  sub_2BBA80(a6);
  if ( a6 )
  {
    do
    {
      v16 = *v15++;
      sub_2BB940(v16);
    }
    while ( v15 != &a7[a6] );
  }
  sub_2BBE50(a6);
  sub_2BBA80(a8);
  if ( a8 )
  {
    v17 = a9;
    do
    {
      v18 = *v17++;
      sub_2BB940(v18);
    }
    while ( v17 != &a9[a8] );
  }
  sub_2BBE50(a8);
  sub_2BBA80(a10);
  if ( a10 )
  {
    v19 = a11;
    v20 = a10;
    do
    {
      v21 = *v19++;
      sub_2BB940(v21);
    }
    while ( &a11[v20] != v19 );
    sub_2BBE50(a10);
    v22 = a12;
    v23 = &a12[v20];
    do
    {
      v24 = *v22++;
      sub_2BBCA0(v24, v28, v31, v34, v36);
    }
    while ( v23 != v22 );
  }
  else
  {
    sub_2BBE50(0);
  }
  sub_2BC030(a10);
  sub_2BB940(v36);
  return sub_2BC0D0(242);
}

