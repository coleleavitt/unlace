void __fastcall sub_1C4C250(__int64 a1, char *a2, char *a3, unsigned __int8 (__fastcall *a4)(void **, __int64 *))
{
  __int64 v4; // r13
  __int64 v6; // r12
  __int64 v7; // r15
  __int64 v8; // r8
  char *v9; // rdi
  __int64 v10; // r14
  char *v11; // r13
  __int64 v12; // rax
  signed __int64 v13; // rdx
  __int64 v14; // r8
  char *v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rax
  signed __int64 v18; // rdx
  unsigned __int64 v19; // r10
  __int64 v20; // rbx
  char *v21; // [rsp+0h] [rbp-68h]
  __int64 v22; // [rsp+10h] [rbp-58h]
  __int64 v24; // [rsp+28h] [rbp-40h]

  v4 = (__int64)&a2[-a1];
  v24 = 0xAAAAAAAAAAAAAAABLL * ((__int64)&a2[-a1] >> 3);
  v21 = &a2[(_QWORD)a3 - a1];
  if ( (__int64)&a2[-a1] <= 144 )
  {
    sub_1C39250(a1, (__int64)a2, a4);
  }
  else
  {
    v22 = a1;
    do
    {
      sub_1C39250(a1, a1 + 168, a4);
      a1 += 168;
    }
    while ( (__int64)&a2[-a1] > 144 );
    sub_1C39250(a1, (__int64)a2, a4);
    if ( v4 > 168 )
    {
      v6 = 7;
      while ( 1 )
      {
        v7 = 2 * v6;
        if ( v24 < 2 * v6 )
        {
          v8 = (__int64)a3;
          v13 = v24;
          v11 = (char *)v22;
        }
        else
        {
          v8 = (__int64)a3;
          v9 = (char *)v22;
          v10 = 48 * v6;
          do
          {
            v12 = sub_1C4C070(v9, &v9[24 * v6], &v9[24 * v6], &v9[v10], v8, (__int64 (__fastcall *)(char *, char *))a4);
            v9 += v10;
            v11 = v9;
            v8 = v12;
            v13 = 0xAAAAAAAAAAAAAAABLL * ((a2 - v9) >> 3);
          }
          while ( v7 <= v13 );
        }
        if ( v6 <= v13 )
          v13 = v6;
        v6 *= 4;
        sub_1C4C070(v11, &v11[24 * v13], &v11[24 * v13], a2, v8, (__int64 (__fastcall *)(char *, char *))a4);
        if ( v24 < v6 )
          break;
        v14 = v22;
        v15 = a3;
        v16 = 24 * v6;
        do
        {
          v17 = sub_1C4C070(
                  v15,
                  &v15[24 * v7],
                  &v15[24 * v7],
                  &v15[v16],
                  v14,
                  (__int64 (__fastcall *)(char *, char *))a4);
          v15 += v16;
          v14 = v17;
          v18 = 0xAAAAAAAAAAAAAAABLL * ((v21 - v15) >> 3);
        }
        while ( v6 <= v18 );
        v19 = v7;
        if ( v18 <= v7 )
          v19 = 0xAAAAAAAAAAAAAAABLL * ((v21 - v15) >> 3);
        sub_1C4C070(v15, &v15[24 * v19], &v15[24 * v19], v21, v17, (__int64 (__fastcall *)(char *, char *))a4);
        if ( v24 <= v6 )
          return;
      }
      v20 = v7;
      if ( v24 <= v7 )
        v20 = v24;
      sub_1C4C070(a3, &a3[24 * v20], &a3[24 * v20], v21, v22, (__int64 (__fastcall *)(char *, char *))a4);
    }
  }
}
