void __fastcall sub_8CBD20(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v4; // rdx
  char *v5; // rcx
  __int64 v6; // r13
  __int64 v7; // rax
  unsigned int v8; // eax
  unsigned int v9; // eax
  int *v10; // rdx
  char *v11; // rcx
  __int64 v12; // r13
  char *v14; // [rsp+8h] [rbp-70h]
  char *v15; // [rsp+8h] [rbp-70h]
  int v16; // [rsp+1Ch] [rbp-5Ch] BYREF
  int v17[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+28h] [rbp-50h]
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h]

  v3 = 32LL * a2;
  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(v4 + v3) )
  {
    *(_QWORD *)v17 = 0;
    v18 = 0;
    v19 = 1;
    v20 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v17, (int *)(v4 + v3));
    v5 = *(char **)(a1 + 24);
    if ( v5 )
    {
      v14 = &v5[32 * *((unsigned int *)v5 - 1)];
      if ( v5 != v14 )
      {
        v6 = *(_QWORD *)(a1 + 24);
        do
        {
          sub_89ABF0((__int64)qword_1C7F2C0, v6, (__int64)v17, v6);
          v6 += 32;
        }
        while ( v14 != (char *)v6 );
      }
    }
  }
  else
  {
    v10 = (int *)(32LL * a3 + v4);
    if ( !*v10 )
      return;
    *(_QWORD *)v17 = 0;
    v18 = 0;
    v19 = 1;
    v20 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v17, v10);
    v11 = *(char **)(a1 + 24);
    if ( v11 )
    {
      v15 = &v11[32 * *((unsigned int *)v11 - 1)];
      if ( v11 != v15 )
      {
        v12 = *(_QWORD *)(a1 + 24);
        do
        {
          sub_89ABF0((__int64)qword_1C7F2C0, v12, (__int64)v17, v12);
          v12 += 32;
        }
        while ( v15 != (char *)v12 );
      }
    }
  }
  sub_25A130((char *)v17);
  v7 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(v7 + 32LL * a2) || *(_DWORD *)(v7 + 32LL * a3) )
  {
    v16 = -2;
    *(_QWORD *)v17 = 0;
    v18 = 0;
    v19 = 1;
    v20 = 0;
    sub_182CBA0(qword_1C7F2C0, &v19);
    BYTE4(v19) &= ~1u;
    LODWORD(v19) = 1;
    v8 = sub_8ACED0(a1, a2, a3, v17, &v16);
    sub_8CBC10(a1, v8);
    sub_25A130((char *)v17);
    v16 = -2;
    *(_QWORD *)v17 = 0;
    v18 = 0;
    v19 = 1;
    v20 = 0;
    sub_182CBA0(qword_1C7F2C0, &v19);
    BYTE4(v19) &= ~1u;
    LODWORD(v19) = 1;
    v9 = sub_8ACED0(a1, a3, a2, v17, &v16);
    sub_8CBC10(a1, v9);
    sub_25A130((char *)v17);
  }
}

