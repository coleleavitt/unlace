__int64 __fastcall sub_295570(__int64 a1, void *a2, void *a3, unsigned int a4, void **a5, __int64 *a6, void *a7)
{
  void **v11; // r15
  void *v12; // rdi
  __int64 *v13; // r14
  __int64 v14; // rdi
  unsigned int *v15; // rbx
  __int64 v16; // rdi
  int v18; // [rsp+0h] [rbp-48h]
  int v19; // [rsp+0h] [rbp-48h]
  int v20; // [rsp+0h] [rbp-48h]
  void *v21; // [rsp+8h] [rbp-40h]
  unsigned int *v22; // [rsp+8h] [rbp-40h]
  int v23; // [rsp+10h] [rbp-38h]
  int v24; // [rsp+10h] [rbp-38h]
  int v25; // [rsp+10h] [rbp-38h]
  __int64 v26; // [rsp+18h] [rbp-30h]
  __int64 v27; // [rsp+18h] [rbp-30h]
  __int64 v28; // [rsp+18h] [rbp-30h]

  sub_2BB890();
  sub_2BB940(a1);
  sub_2BBCA0(a2, v18, a7, v23, v26);
  sub_2BBCA0(a3, v19, v21, v24, v27);
  sub_2BBA80(a4);
  if ( a4 )
  {
    v11 = &a5[a4];
    do
    {
      v12 = *a5++;
      sub_2BBCA0(v12, v20, v22, v25, v28);
    }
    while ( a5 != v11 );
    v13 = &a6[a4];
    sub_2BC030(a4);
    do
    {
      v14 = *a6++;
      sub_2BB940(v14);
    }
    while ( v13 != a6 );
    sub_2BBE50(a4);
    v15 = v22;
    do
    {
      v16 = *v15++;
      sub_2BBA80(v16);
    }
    while ( &v22[a4] != v15 );
  }
  else
  {
    sub_2BC030(0);
    sub_2BBE50(0);
  }
  sub_2BBEF0(a4);
  return sub_2BC0D0(45);
}

