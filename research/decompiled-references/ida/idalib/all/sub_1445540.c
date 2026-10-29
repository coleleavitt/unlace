__int64 __fastcall sub_1445540(__int64 a1, __int64 a2, const void *a3, unsigned __int64 a4)
{
  size_t v5; // rax
  unsigned __int64 v7; // r15
  __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // r14
  char *v12; // r8
  char *v13; // r8
  char *i; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  size_t v18; // [rsp+0h] [rbp-58h]
  const void *v19; // [rsp+8h] [rbp-50h]
  _QWORD v20[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( !a4 )
    return 0;
  v5 = 24 * a4;
  v7 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(24 * a4) >> 3);
  v8 = *(unsigned int *)(a1 + 2480);
  v9 = v8 - 0x5555555555555555LL * ((__int64)(24 * a4) >> 3);
  v10 = v8;
  v11 = *(unsigned int *)(a1 + 2484) - v8;
  if ( *(unsigned int *)(a1 + 2484) >= v9 )
  {
    if ( !v5 )
      goto LABEL_5;
    goto LABEL_4;
  }
  v18 = v5;
  v19 = a3;
  sub_2237220(a1 + 2472, a1 + 2488, v9, 24);
  v5 = v18;
  v10 = *(unsigned int *)(a1 + 2480);
  a3 = v19;
  if ( v18 )
  {
LABEL_4:
    memcpy((void *)(*(_QWORD *)(a1 + 2472) + 24 * v10), a3, v5);
    LODWORD(v10) = *(_DWORD *)(a1 + 2480);
  }
LABEL_5:
  v12 = *(char **)(a1 + 2880);
  *(_DWORD *)(a1 + 2480) = v10 + v7;
  if ( v11 < a4 )
  {
    for ( i = *(char **)(a1 + 2872); v12 != i; *(_QWORD *)(v17 + 24) = *(_QWORD *)(a1 + 2472) + 24 * v16 )
    {
      v16 = *((_QWORD *)i + 1);
      v17 = *(_QWORD *)i;
      i += 16;
    }
  }
  v20[0] = a2;
  v20[1] = v8;
  if ( *(char **)(a1 + 2888) == v12 )
  {
    sub_14453C0(a1 + 2872, v12, v20);
  }
  else
  {
    *(_QWORD *)v12 = a2;
    v13 = v12 + 16;
    *((_QWORD *)v13 - 1) = v8;
    *(_QWORD *)(a1 + 2880) = v13;
  }
  return *(_QWORD *)(a1 + 2472) + 24 * v8;
}
