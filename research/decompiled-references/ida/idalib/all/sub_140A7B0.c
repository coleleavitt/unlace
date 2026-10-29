void __fastcall sub_140A7B0(__int64 a1, char *a2, char *a3, unsigned __int8 (__fastcall *a4)(const __m128i *, __int64))
{
  __int64 v4; // r12
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r8
  char *v9; // rdi
  __int64 v10; // r12
  char *v11; // rbx
  __int64 v12; // rax
  signed __int64 v13; // rdx
  __int64 v14; // r8
  char *v15; // rdi
  char *v16; // rbx
  __int64 v17; // rax
  signed __int64 v18; // rdx
  unsigned __int64 v19; // r10
  __int64 v20; // rbx
  char *v21; // [rsp+0h] [rbp-68h]
  __int64 v22; // [rsp+10h] [rbp-58h]
  __int64 v24; // [rsp+20h] [rbp-48h]
  __int64 v25; // [rsp+28h] [rbp-40h]

  v4 = (__int64)&a2[-a1];
  v21 = &a2[(_QWORD)a3 - a1];
  v25 = 0x8E38E38E38E38E39LL * ((__int64)&a2[-a1] >> 3);
  if ( (__int64)&a2[-a1] <= 432 )
  {
    sub_1403ED0(a1, a2, a4);
  }
  else
  {
    v22 = a1;
    do
    {
      sub_1403ED0(a1, (char *)(a1 + 504), a4);
      a1 += 504;
    }
    while ( (__int64)&a2[-a1] > 432 );
    sub_1403ED0(a1, a2, a4);
    if ( v4 > 504 )
    {
      v6 = 7;
      while ( 1 )
      {
        v7 = 2 * v6;
        if ( v25 < 2 * v6 )
        {
          v8 = (__int64)a3;
          v13 = v25;
          v11 = (char *)v22;
        }
        else
        {
          v8 = (__int64)a3;
          v9 = (char *)v22;
          v10 = 144 * v6;
          do
          {
            v12 = sub_140A660(
                    v9,
                    &v9[72 * v6],
                    &v9[72 * v6],
                    &v9[v10],
                    v8,
                    (unsigned __int8 (__fastcall *)(char *, char *))a4);
            v9 += v10;
            v11 = v9;
            v8 = v12;
            v13 = 0x8E38E38E38E38E39LL * ((a2 - v9) >> 3);
          }
          while ( v7 <= v13 );
        }
        if ( v6 <= v13 )
          v13 = v6;
        v6 *= 4;
        sub_140A660(v11, &v11[72 * v13], &v11[72 * v13], a2, v8, (unsigned __int8 (__fastcall *)(char *, char *))a4);
        if ( v25 < v6 )
          break;
        v14 = v22;
        v15 = a3;
        v24 = 72 * v6;
        do
        {
          v16 = &v15[v24];
          v17 = sub_140A660(
                  v15,
                  &v15[72 * v7],
                  &v15[72 * v7],
                  &v15[v24],
                  v14,
                  (unsigned __int8 (__fastcall *)(char *, char *))a4);
          v15 = v16;
          v14 = v17;
          v18 = 0x8E38E38E38E38E39LL * ((v21 - v16) >> 3);
        }
        while ( v6 <= v18 );
        v19 = v7;
        if ( v18 <= v7 )
          v19 = 0x8E38E38E38E38E39LL * ((v21 - v16) >> 3);
        sub_140A660(v16, &v16[72 * v19], &v16[72 * v19], v21, v17, (unsigned __int8 (__fastcall *)(char *, char *))a4);
        if ( v25 <= v6 )
          return;
      }
      v20 = v7;
      if ( v25 <= v7 )
        v20 = v25;
      sub_140A660(a3, &a3[72 * v20], &a3[72 * v20], v21, v22, (unsigned __int8 (__fastcall *)(char *, char *))a4);
    }
  }
}
