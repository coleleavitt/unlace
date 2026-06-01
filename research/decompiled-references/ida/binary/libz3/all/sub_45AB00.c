__int64 *__fastcall sub_45AB00(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  _DWORD *v7; // rax
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rdi
  int v12; // edx
  __int64 v13; // rax
  __int64 *v14; // r14
  __int64 *v15; // rbx
  __int64 v16; // rdi
  char v17; // al
  __int64 v19; // rdx
  _BYTE v20[16]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v21; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+28h] [rbp-40h]

  v5 = a2;
  v6 = a3[1];
  sub_16669D0(v20, v6);
  if ( *(_WORD *)(a2 + 4) )
    goto LABEL_7;
  v7 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v7 )
    goto LABEL_7;
  if ( !*v7 )
  {
    if ( v7[1] != 8 || *(_DWORD *)(a2 + 24) != 1 )
    {
LABEL_23:
      if ( v7[1] != 2 )
      {
LABEL_6:
        if ( *v7 != 5 )
          goto LABEL_7;
        goto LABEL_15;
      }
      if ( *(_DWORD *)(v5 + 24) != 2 )
        goto LABEL_7;
LABEL_25:
      v19 = *(_QWORD *)(v5 + 40);
      v5 = *(_QWORD *)(v5 + 32);
      if ( *(_WORD *)(v5 + 4) )
        goto LABEL_7;
      v7 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL);
      if ( !v7 || *v7 != 5 )
        goto LABEL_7;
      if ( v7[1] )
        goto LABEL_15;
      v5 = v19;
      if ( *(_WORD *)(v19 + 4) )
        goto LABEL_7;
      v7 = *(_DWORD **)(*(_QWORD *)(v19 + 16) + 24LL);
      if ( !v7 )
        goto LABEL_7;
      goto LABEL_6;
    }
    v5 = *(_QWORD *)(a2 + 32);
    if ( *(_WORD *)(v5 + 4) )
      goto LABEL_7;
    v7 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL);
    if ( !v7 )
      goto LABEL_7;
  }
  if ( *v7 != 5 )
  {
    if ( *v7 )
      goto LABEL_6;
    goto LABEL_23;
  }
  v12 = v7[1];
  if ( (v12 == 2 || v12 == 4 || v12 == 3 || v12 == 5) && *(_DWORD *)(v5 + 24) == 2 )
    goto LABEL_25;
LABEL_15:
  if ( v7[1] == 6 )
  {
    v13 = 8LL * *(unsigned int *)(v5 + 24);
    v14 = (__int64 *)(v5 + 32 + v13);
    if ( !v13 )
    {
      *a1 = 0;
      a1[1] = v6;
      return a1;
    }
    v15 = (__int64 *)(v5 + 32);
    v10 = v6;
    v9 = 0;
    while ( 1 )
    {
      v22 = v10;
      v16 = *v15;
      v21 = v9;
      v17 = sub_45A870(v16, a3, &v21, (__int64)v20);
      v9 = v21;
      v10 = v22;
      if ( v17 )
        goto LABEL_20;
      if ( v14 == ++v15 )
        goto LABEL_8;
    }
  }
LABEL_7:
  v21 = 0;
  v22 = v6;
  v8 = sub_45A870(v5, a3, &v21, (__int64)v20);
  v9 = v21;
  v10 = v22;
  if ( v8 )
  {
LABEL_20:
    a1[1] = v10;
    *a1 = v9;
    return a1;
  }
LABEL_8:
  *a1 = 0;
  a1[1] = v6;
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 8))-- == 1 )
      sub_15D7BC0(v10, v9);
  }
  return a1;
}

