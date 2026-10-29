__int64 __fastcall sub_2228930(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // r9
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // r11
  __int64 v11; // r10
  size_t v12; // r12
  size_t v13; // rcx
  size_t v14; // rdx
  int v15; // eax
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // r13
  size_t v19; // r12
  _QWORD *v20; // rcx
  size_t v21; // rdx
  __int64 v22; // rbx
  size_t v23; // rbp
  int v24; // eax
  _QWORD *v25; // r13
  __int64 v27; // [rsp+8h] [rbp-80h]
  char *s2; // [rsp+10h] [rbp-78h]
  void *s2a; // [rsp+10h] [rbp-78h]
  size_t v30; // [rsp+18h] [rbp-70h]
  __int64 v31; // [rsp+20h] [rbp-68h]
  __int64 v32; // [rsp+30h] [rbp-58h]
  __int64 v34; // [rsp+40h] [rbp-48h]

  v4 = a1;
  v34 = a3 & 1;
  v32 = (a3 - 1) / 2;
  if ( a2 >= v32 )
  {
    v8 = 8 * a2;
    if ( (a3 & 1) != 0 )
      goto LABEL_33;
    v9 = a2;
    goto LABEL_30;
  }
  v5 = a2;
  v6 = a1;
  do
  {
    while ( 1 )
    {
      v9 = 2 * (v5 + 1);
      v8 = 16 * (v5 + 1);
      v7 = *(_QWORD *)(v6 + v8);
      v10 = *(_QWORD *)(v6 + 8 * (v9 - 1));
      v11 = 8 * (v9 - 1);
      v12 = *(_QWORD *)(v7 + 16);
      v13 = *(_QWORD *)(v10 + 16);
      v14 = v12;
      if ( v13 <= v12 )
        v14 = *(_QWORD *)(v10 + 16);
      if ( !v14 )
        break;
      v31 = v6;
      v30 = *(_QWORD *)(v10 + 16);
      s2 = (char *)(8 * (v9 - 1));
      v27 = *(_QWORD *)&s2[v6];
      v15 = memcmp(*(const void **)(v7 + 8), *(const void **)(v10 + 8), v14);
      v10 = v27;
      v11 = (__int64)s2;
      v13 = v30;
      v6 = v31;
      if ( !v15 )
        break;
      if ( v15 < 0 )
      {
        v7 = v27;
        --v9;
        v8 = (__int64)s2;
      }
      *(_QWORD *)(v31 + 8 * v5) = v7;
      v5 = v9;
      if ( v9 >= v32 )
        goto LABEL_14;
    }
    if ( v13 != v12 && v13 > v12 )
    {
      v7 = v10;
      v8 = v11;
      --v9;
    }
    *(_QWORD *)(v6 + 8 * v5) = v7;
    v5 = v9;
  }
  while ( v9 < v32 );
LABEL_14:
  v4 = v6;
  if ( !v34 )
  {
LABEL_30:
    if ( (a3 - 2) / 2 == v9 )
    {
      v9 = 2 * v9 + 1;
      *(_QWORD *)(v4 + v8) = *(_QWORD *)(v4 + 8 * v9);
      v8 = 8 * v9;
    }
  }
  v16 = (v9 - 1) / 2;
  if ( v9 <= a2 )
  {
LABEL_33:
    v25 = (_QWORD *)(v4 + v8);
    goto LABEL_24;
  }
  v17 = v4;
  v18 = v9;
  s2a = *(void **)(a4 + 8);
  v19 = *(_QWORD *)(a4 + 16);
  while ( 1 )
  {
    v20 = (_QWORD *)(v17 + 8 * v16);
    v21 = v19;
    v22 = *v20;
    v23 = *(_QWORD *)(*v20 + 16LL);
    if ( v23 <= v19 )
      v21 = *(_QWORD *)(*v20 + 16LL);
    if ( v21 && (v24 = memcmp(*(const void **)(v22 + 8), s2a, v21), v20 = (_QWORD *)(v17 + 8 * v16), v24) )
    {
      if ( v24 >= 0 )
        goto LABEL_23;
    }
    else if ( v23 == v19 || v23 >= v19 )
    {
LABEL_23:
      v25 = (_QWORD *)(v17 + 8 * v18);
      goto LABEL_24;
    }
    *(_QWORD *)(v17 + 8 * v18) = v22;
    v18 = v16;
    if ( a2 >= v16 )
      break;
    v16 = (v16 - 1) / 2;
  }
  v25 = v20;
LABEL_24:
  *v25 = a4;
  return a4;
}
