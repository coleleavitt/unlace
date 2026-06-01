__int64 __fastcall sub_E3CF00(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  int v3; // ebx
  __int64 v5; // r14
  int v7; // ebx
  int v8; // eax
  const void *v9; // r8
  size_t v10; // r9
  unsigned int v11; // r12d
  bool v12; // r11
  __int64 v13; // r10
  __int64 v14; // r13
  char *v15; // rsi
  char v16; // al
  bool v17; // al
  int v18; // r9d
  char v19; // al
  int v20; // eax
  int v21; // [rsp+Ch] [rbp-5Ch]
  int v22; // [rsp+Ch] [rbp-5Ch]
  __int64 v23; // [rsp+10h] [rbp-58h]
  __int64 v24; // [rsp+10h] [rbp-58h]
  const void *v25; // [rsp+10h] [rbp-58h]
  bool v26; // [rsp+18h] [rbp-50h]
  const void *v27; // [rsp+18h] [rbp-50h]
  size_t v28; // [rsp+18h] [rbp-50h]
  size_t v29; // [rsp+20h] [rbp-48h]
  __int64 v30; // [rsp+20h] [rbp-48h]
  const void *v31; // [rsp+28h] [rbp-40h]
  bool v32; // [rsp+28h] [rbp-40h]

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = 0;
    return 0;
  }
  v5 = *a1;
  v7 = v3 - 1;
  v8 = sub_2248890(*a2, a2[1]);
  v9 = (const void *)*a2;
  v10 = a2[1];
  v11 = v7 & v8;
  v12 = *a2 == -2;
  if ( v10 )
  {
    v21 = 1;
    v13 = 0;
    while ( 1 )
    {
      v14 = v5 + 24LL * v11;
      v15 = *(char **)v14;
      if ( *(_QWORD *)v14 == -1 )
        goto LABEL_22;
      if ( v15 == (char *)-2LL )
      {
        v17 = v12;
      }
      else
      {
        if ( *(_QWORD *)(v14 + 8) != v10 )
          goto LABEL_8;
        v32 = v12;
        v30 = v13;
        v28 = v10;
        v25 = v9;
        v20 = memcmp(v9, v15, v10);
        v9 = v25;
        v10 = v28;
        v13 = v30;
        v12 = v32;
        v17 = v20 == 0;
      }
      if ( v17 )
        goto LABEL_14;
LABEL_8:
      v31 = v9;
      v29 = v10;
      v26 = v12;
      v23 = v13;
      v16 = sub_E39ED0(*(char **)v14, *(_QWORD *)(v14 + 8), (const void *)0xFFFFFFFFFFFFFFFELL, 0);
      v13 = v23;
      v12 = v26;
      v10 = v29;
      v9 = v31;
      if ( !v23 )
      {
        if ( v16 )
          v13 = v5 + 24LL * v11;
      }
      v11 = v7 & (v21 + v11);
      ++v21;
    }
  }
  v18 = 1;
  v13 = 0;
  while ( 1 )
  {
    v14 = v5 + 24LL * v11;
    if ( *(_QWORD *)v14 == -1 )
      break;
    if ( *(_QWORD *)v14 == -2 )
    {
      if ( v9 == (const void *)-2LL )
        goto LABEL_14;
    }
    else if ( !*(_QWORD *)(v14 + 8) )
    {
      goto LABEL_14;
    }
    v27 = v9;
    v24 = v13;
    v22 = v18;
    v19 = sub_E39ED0(*(char **)v14, *(_QWORD *)(v14 + 8), (const void *)0xFFFFFFFFFFFFFFFELL, 0);
    v9 = v27;
    if ( v24 || !v19 )
      v14 = v24;
    v13 = v14;
    v18 = v22 + 1;
    v11 = v7 & (v22 + v11);
  }
LABEL_22:
  if ( v9 == (const void *)-1LL )
  {
LABEL_14:
    *a3 = v14;
    return 1;
  }
  if ( !v13 )
    v13 = v14;
  *a3 = v13;
  return 0;
}
