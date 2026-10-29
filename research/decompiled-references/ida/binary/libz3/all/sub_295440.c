__int64 __fastcall sub_295440(__int64 a1, void *a2, unsigned int a3, void **a4)
{
  void **v6; // r12
  void *v7; // rdi
  int v8; // ebx
  int v9; // r12d
  int v10; // ebx
  int v11; // eax
  int v13; // [rsp+0h] [rbp-28h]
  int v14; // [rsp+0h] [rbp-28h]
  void *v15; // [rsp+8h] [rbp-20h]
  void *v16; // [rsp+8h] [rbp-20h]
  int v17; // [rsp+10h] [rbp-18h]
  int v18; // [rsp+10h] [rbp-18h]
  __int64 v19; // [rsp+18h] [rbp-10h]
  __int64 v20; // [rsp+18h] [rbp-10h]

  sub_2BB890();
  sub_2BB940(a1);
  sub_2BBCA0(a2, v13, v15, v17, v19);
  sub_2BBA80(a3);
  if ( a3 )
  {
    v6 = &a4[a3];
    do
    {
      v7 = *a4++;
      sub_2BBCA0(v7, v14, v16, v18, v20);
    }
    while ( a4 != v6 );
    v8 = 0;
    sub_2BC030(a3);
    do
    {
      v9 = v8++;
      sub_2BB940(0);
    }
    while ( a3 != v8 );
    v10 = 0;
    sub_2BBE50(a3);
    do
    {
      sub_2BB940(0);
      v11 = v10++;
    }
    while ( v9 != v11 );
  }
  else
  {
    sub_2BC030(0);
    sub_2BBE50(0);
  }
  sub_2BBE50(a3);
  return sub_2BC0D0(43);
}

