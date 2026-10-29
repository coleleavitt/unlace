__int64 __fastcall sub_10C5570(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  int v3; // ebp
  __int64 v5; // r13
  int v7; // ebp
  int v8; // eax
  const void *v9; // r10
  size_t v10; // r11
  unsigned int v11; // r8d
  bool v12; // r9
  __int64 v13; // r14
  bool v14; // al
  __int64 v15; // rbx
  char *v16; // rsi
  char v17; // al
  int v18; // r10d
  int v19; // eax
  bool v20; // al
  char v21; // al
  bool v22; // [rsp+Bh] [rbp-6Dh]
  int v23; // [rsp+Ch] [rbp-6Ch]
  int v24; // [rsp+Ch] [rbp-6Ch]
  unsigned int v25; // [rsp+10h] [rbp-68h]
  unsigned int v26; // [rsp+10h] [rbp-68h]
  const void *v27; // [rsp+10h] [rbp-68h]
  bool v28; // [rsp+18h] [rbp-60h]
  bool v29; // [rsp+18h] [rbp-60h]
  size_t v30; // [rsp+18h] [rbp-60h]
  size_t v31; // [rsp+20h] [rbp-58h]
  char *v32; // [rsp+20h] [rbp-58h]
  unsigned int v33; // [rsp+20h] [rbp-58h]
  const void *v34; // [rsp+28h] [rbp-50h]
  size_t v35; // [rsp+28h] [rbp-50h]
  bool v36; // [rsp+28h] [rbp-50h]
  char *v37; // [rsp+30h] [rbp-48h]
  size_t v38; // [rsp+38h] [rbp-40h]

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = 0;
    return 0;
  }
  v5 = *a1;
  v7 = v3 - 1;
  v8 = sub_2224B50(*a2, a2[1]);
  v9 = (const void *)*a2;
  v10 = a2[1];
  v11 = v7 & v8;
  v22 = *a2 == -2;
  v12 = *a2 == -1;
  if ( v10 )
  {
    v23 = 1;
    v13 = 0;
    while ( 1 )
    {
      v14 = v12;
      v15 = v5 + 16LL * v11;
      v16 = *(char **)v15;
      if ( *(_QWORD *)v15 != -1 )
      {
        if ( v16 == (char *)-2LL )
        {
          v14 = v22;
        }
        else
        {
          if ( v10 != *(_QWORD *)(v15 + 8) )
            goto LABEL_8;
          v36 = v12;
          v33 = v11;
          v30 = v10;
          v27 = v9;
          v19 = memcmp(v9, v16, v10);
          v9 = v27;
          v10 = v30;
          v11 = v33;
          v12 = v36;
          v14 = v19 == 0;
        }
      }
      if ( v14 )
        goto LABEL_15;
LABEL_8:
      v34 = v9;
      v31 = v10;
      v28 = v12;
      v25 = v11;
      v37 = *(char **)v15;
      v38 = *(_QWORD *)(v15 + 8);
      if ( sub_E16190(*(char **)v15, v38, (const void *)0xFFFFFFFFFFFFFFFFLL, 0) )
        goto LABEL_21;
      v17 = sub_E16190(v37, v38, (const void *)0xFFFFFFFFFFFFFFFELL, 0);
      v12 = v28;
      v10 = v31;
      v9 = v34;
      if ( !v13 )
      {
        if ( v17 )
          v13 = v15;
      }
      v11 = v7 & (v23 + v25);
      ++v23;
    }
  }
  v18 = 1;
  v13 = 0;
  while ( 1 )
  {
    v15 = v5 + 16LL * v11;
    if ( *(_QWORD *)v15 == -1 )
    {
      v20 = v12;
    }
    else
    {
      if ( *(_QWORD *)v15 != -2 )
      {
        if ( !*(_QWORD *)(v15 + 8) )
          goto LABEL_15;
        goto LABEL_20;
      }
      v20 = v22;
    }
    if ( v20 )
    {
LABEL_15:
      *a3 = v15;
      return 1;
    }
LABEL_20:
    v29 = v12;
    v26 = v11;
    v24 = v18;
    v32 = *(char **)v15;
    v35 = *(_QWORD *)(v15 + 8);
    if ( sub_E16190(*(char **)v15, v35, (const void *)0xFFFFFFFFFFFFFFFFLL, 0) )
      break;
    v21 = sub_E16190(v32, v35, (const void *)0xFFFFFFFFFFFFFFFELL, 0);
    v12 = v29;
    if ( v13 || !v21 )
      v15 = v13;
    v13 = v15;
    v18 = v24 + 1;
    v11 = v7 & (v24 + v26);
  }
LABEL_21:
  if ( !v13 )
    v13 = v15;
  *a3 = v13;
  return 0;
}

