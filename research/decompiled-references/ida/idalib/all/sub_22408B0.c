void __fastcall sub_22408B0(const char ***a1, const char ***a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // r14
  const char ***v10; // rax
  signed __int64 v11; // rcx
  char *v12; // r9
  char *v13; // r11
  __int64 v14; // r15
  const char ***v15; // rax
  const char **v16; // rbx
  const char **v17; // r13
  int v18; // eax
  __int64 v19; // [rsp+0h] [rbp-58h]
  char *v20; // [rsp+8h] [rbp-50h]
  char ***v21; // [rsp+8h] [rbp-50h]
  __int64 v22; // [rsp+10h] [rbp-48h]
  char *v23; // [rsp+10h] [rbp-48h]
  signed __int64 v24; // [rsp+18h] [rbp-40h]
  __int64 v25; // [rsp+48h] [rbp-10h]
  __int64 v26; // [rsp+50h] [rbp-8h]

  while ( a4 && a5 )
  {
    v26 = v6;
    v25 = v5;
    v7 = a5;
    v8 = a4;
    v19 = a3;
    if ( a4 + a5 == 2 )
    {
      v16 = *a1;
      v17 = *a2;
      v18 = strcmp(**a2, **a1);
      if ( !v18 )
      {
        v18 = strcmp(v17[1], v16[1]);
        if ( !v18 )
          v18 = strcmp(v17[2], v16[2]);
      }
      if ( v18 < 0 )
      {
        *a1 = v17;
        *a2 = v16;
      }
      return;
    }
    if ( a4 > a5 )
    {
      v14 = a4 / 2;
      v21 = (char ***)&a1[a4 / 2];
      v15 = sub_2240800(a2, a3, v21);
      v13 = (char *)v21;
      v12 = (char *)v15;
      v11 = (char *)v15 - (char *)a2;
      v9 = v15 - a2;
    }
    else
    {
      v9 = a5 / 2;
      v22 = a5 / 2;
      v10 = sub_2240750(a1, (__int64)a2, (char ***)&a2[v22]);
      v11 = v22 * 8;
      v12 = (char *)&a2[v22];
      v13 = (char *)v10;
      v14 = v10 - a1;
    }
    v23 = v12;
    v24 = v11;
    v20 = v13;
    sub_22403A0(v13, (char *)a2, v12);
    sub_22408B0(a1, v20, &v20[v24], v14, v9);
    a4 = v8 - v14;
    a3 = v19;
    a5 = v7 - v9;
    a1 = (const char ***)&v20[v24];
    a2 = (const char ***)v23;
    v5 = v25;
    v6 = v26;
  }
}
