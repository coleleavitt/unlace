__int64 __fastcall sub_29BFA0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void **a4,
        int a5,
        unsigned int a6,
        void **a7,
        char *a8)
{
  void **v11; // rbp
  __int64 v12; // r12
  void **v13; // r13
  void *v14; // rdi
  __int64 *v15; // rbx
  __int64 *v16; // r12
  __int64 v17; // rdi
  __int64 v18; // r12
  void *v19; // rdi
  char *v20; // rbx
  char *v21; // r12
  __int64 v22; // rdi
  int v24[2]; // [rsp+0h] [rbp-48h]
  char *v25; // [rsp+8h] [rbp-40h]
  int v26; // [rsp+10h] [rbp-38h]
  __int64 v27; // [rsp+18h] [rbp-30h]

  v11 = a7;
  v24[0] = a5;
  v25 = a8;
  sub_2BB890();
  sub_2BB940(a1);
  sub_2BBBC0(a2);
  sub_2BBA80(a3);
  if ( a3 )
  {
    v12 = a3;
    v13 = &a4[v12];
    do
    {
      v14 = *a4++;
      sub_2BBCA0(v14, v24[0], v25, v26, v27);
    }
    while ( a4 != v13 );
    sub_2BC030(a3);
    v15 = *(__int64 **)v24;
    v16 = (__int64 *)(*(_QWORD *)v24 + v12 * 8);
    do
    {
      v17 = *v15++;
      sub_2BB940(v17);
    }
    while ( v15 != v16 );
  }
  else
  {
    sub_2BC030(0);
  }
  sub_2BBE50(a3);
  sub_2BBA80(a6);
  if ( a6 )
  {
    v18 = a6;
    do
    {
      v19 = *v11++;
      sub_2BBCA0(v19, v24[0], v25, v26, v27);
    }
    while ( &a7[v18] != v11 );
    sub_2BC030(a6);
    v20 = v25;
    v21 = &v25[v18 * 8];
    do
    {
      v22 = *(_QWORD *)v20;
      v20 += 8;
      sub_2BB940(v22);
    }
    while ( v21 != v20 );
  }
  else
  {
    sub_2BC030(0);
  }
  sub_2BBE50(a6);
  return sub_2BC0D0(397);
}

