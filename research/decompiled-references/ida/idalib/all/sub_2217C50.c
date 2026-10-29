void __fastcall sub_2217C50(__int64 a1, __int64 a2)
{
  __int64 *v3; // rsi
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // r12
  __int64 *v7; // r15
  __int64 *v8; // r12
  size_t *v9; // rdx
  size_t v10; // rsi
  __int64 *v11; // rax
  __int64 *v12; // rax
  size_t v13; // r13
  const void *v14; // r14
  unsigned int v15; // eax
  __int64 *v16; // rsi
  char v17; // dl
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 *v22; // [rsp+10h] [rbp-58h] BYREF
  size_t v23; // [rsp+18h] [rbp-50h]
  size_t v24[9]; // [rsp+20h] [rbp-48h] BYREF

  if ( !*(_BYTE *)(a1 + 292) )
    goto LABEL_25;
  v3 = *(__int64 **)(a1 + 272);
  v4 = *(unsigned int *)(a1 + 284);
  v5 = &v3[v4];
  if ( v3 == v5 )
  {
LABEL_24:
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 280) )
    {
LABEL_25:
      v3 = (__int64 *)sub_2236760(a1 + 272, a2);
      goto LABEL_6;
    }
    *(_DWORD *)(a1 + 284) = v4 + 1;
    *v5 = a2;
    v3 = (__int64 *)(8 * v4 + *(_QWORD *)(a1 + 272));
  }
  else
  {
    while ( a2 != *v3 )
    {
      if ( v5 == ++v3 )
        goto LABEL_24;
    }
  }
LABEL_6:
  sub_2214680((__int64 *)(a1 + 272), v3);
  v6 = sub_22102D0();
  sub_2216AE0(&v22, *(__int64 **)(v6 + 128), *(_DWORD *)(v6 + 136) == 0);
  v7 = v22;
  sub_2216AE0(&v22, (__int64 *)(*(_QWORD *)(v6 + 128) + 8LL * *(unsigned int *)(v6 + 136)), 1);
  v8 = v22;
  if ( v7 != v22 )
  {
    v9 = (size_t *)*v7;
    do
    {
      while ( 1 )
      {
        v10 = v9[1];
        if ( ((*(_WORD *)(v10 + 10) >> 7) & 3) == 1
          || (*(_BYTE *)(v10 + 11) & 8) != 0
          || (*(_BYTE *)(v10 + 10) & 7) == 4
          || *(_QWORD *)(v10 + 24) )
        {
          sub_22179D0(a1, (const char *)v10, a2);
        }
        else
        {
          v13 = *v9;
          v14 = v9 + 2;
          v24[0] = v9[1];
          v22 = (__int64 *)(v9 + 2);
          v23 = v13;
          v15 = sub_2244B30(v9 + 2, v13);
          v16 = v22;
          sub_2216B80(a2 + 128, v22, v23, v15, (__int64 *)v24);
          if ( !v17 )
          {
            v18 = sub_227D6D0(a2 + 128, v16);
            v19 = sub_227BF10(v18, *(_QWORD *)a1, *(_QWORD *)(a1 + 8));
            v20 = sub_995540(v19, ": CommandLine Error: Option '");
            v21 = sub_9954E0(v20, v14, v13);
            sub_995540(v21, "' registered more than once!\n");
            sub_2221C70("inconsistency in registered CommandLine options", 1);
          }
        }
        v9 = (size_t *)v7[1];
        v11 = v7 + 1;
        if ( v9 == (size_t *)-8LL || !v9 )
          break;
        ++v7;
        if ( v8 == v11 )
          return;
      }
      v12 = v7 + 2;
      do
      {
        do
        {
          v9 = (size_t *)*v12;
          v7 = v12++;
        }
        while ( !v9 );
      }
      while ( v9 == (size_t *)-8LL );
    }
    while ( v8 != v7 );
  }
}
