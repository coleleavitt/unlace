__int64 __fastcall sub_3E3120(__int64 *a1, __int64 a2, double a3)
{
  __int64 v4; // rbx
  char *v5; // rbp
  char *v6; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 i; // rcx
  unsigned __int64 v10; // r15
  char *v11; // rax
  __int64 v12; // rcx
  char *v13; // rsi
  char *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rax
  char *v23; // [rsp+8h] [rbp-40h]
  char *v24; // [rsp+8h] [rbp-40h]
  char *v25; // [rsp+8h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(char **)a2;
  v6 = (char *)(*(_QWORD *)a2 + 4 * v4);
  if ( *(char **)a2 != v6 )
  {
    v7 = ((4 * v4) >> 2) + 1;
    v8 = v7 / 2;
    if ( v7 <= 1 )
    {
      v13 = *(char **)a2;
      v10 = 0;
      v11 = nullptr;
      if ( v8 )
      {
LABEL_20:
        v10 = 0;
        sub_3DB990(v5, v6);
        v14 = nullptr;
        goto LABEL_7;
      }
    }
    else
    {
      for ( i = v7 / 2; ; i = (__int64)(v23 + 1) >> 1 )
      {
        v10 = 4 * i;
        v23 = (char *)i;
        v11 = (char *)operator new(4 * i, (const std::nothrow_t *)&std::nothrow);
        v12 = (__int64)v23;
        if ( v11 )
          break;
        if ( v23 == (_BYTE *)&dword_0 + 1 )
          goto LABEL_20;
      }
      v13 = &v5[v10];
      if ( (char *)v8 != v23 )
      {
        v25 = v11;
        sub_3DBE60(v5, v6, v11, v12);
        v14 = v25;
        goto LABEL_7;
      }
    }
    v24 = v11;
    sub_3DB5C0(v5, v13, v6, v11);
    v14 = v24;
LABEL_7:
    operator delete(v14, v10);
    v4 = *(_QWORD *)(a2 + 8);
  }
  v15 = (unsigned int)(v4 - 1);
  v16 = 4 * v15;
  if ( (int)v15 >= 0 )
  {
    do
    {
      v17 = a1[2];
      v18 = *(_QWORD *)(v17 + 8LL * *(int *)(*(_QWORD *)a2 + v16));
      v19 = (_QWORD *)(v17 + 8 * a1[3]);
      if ( (_QWORD *)v17 != v19 )
      {
        v20 = (_QWORD *)a1[2];
        while ( v18 != *v20 )
        {
          if ( v19 == ++v20 )
            goto LABEL_16;
        }
        if ( v20 != v19 )
        {
          v21 = ((__int64)v20 - v17) >> 3;
          if ( (_DWORD)v21 != -1 )
            sub_3E2CD0(a1, (char *)(unsigned int)v21, 1u, v18, a3);
        }
      }
LABEL_16:
      LODWORD(v15) = v15 - 1;
      v16 -= 4;
    }
    while ( (_DWORD)v15 != -1 );
  }
  return 1;
}
