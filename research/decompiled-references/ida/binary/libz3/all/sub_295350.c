__int64 __fastcall sub_295350(__int64 a1, void *a2, unsigned int a3, void **a4, __int64 *a5)
{
  __int64 v8; // r13
  void **v9; // r14
  void *v10; // rdi
  __int64 *v11; // r13
  __int64 v12; // rdi
  int v13; // ebx
  int v15; // [rsp+0h] [rbp-28h]
  int v16; // [rsp+0h] [rbp-28h]
  void *v17; // [rsp+8h] [rbp-20h]
  void *v18; // [rsp+8h] [rbp-20h]
  int v19; // [rsp+10h] [rbp-18h]
  int v20; // [rsp+10h] [rbp-18h]
  __int64 v21; // [rsp+18h] [rbp-10h]
  __int64 v22; // [rsp+18h] [rbp-10h]

  sub_2BB890();
  sub_2BB940(a1);
  sub_2BBCA0(a2, v15, v17, v19, v21);
  sub_2BBA80(a3);
  if ( a3 )
  {
    v8 = a3;
    v9 = &a4[v8];
    do
    {
      v10 = *a4++;
      sub_2BBCA0(v10, v16, v18, v20, v22);
    }
    while ( a4 != v9 );
    v11 = &a5[v8];
    sub_2BC030(a3);
    do
    {
      v12 = *a5++;
      sub_2BB940(v12);
    }
    while ( v11 != a5 );
    v13 = 0;
    sub_2BBE50(a3);
    sub_2BB940(0);
    do
    {
      ++v13;
      sub_2BB940(0);
    }
    while ( a3 != v13 );
  }
  else
  {
    sub_2BC030(0);
    sub_2BBE50(0);
    sub_2BB940(0);
  }
  sub_2BBE50(a3);
  return sub_2BC0D0(42);
}

