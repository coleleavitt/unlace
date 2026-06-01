__int64 __fastcall sub_22604A0(__int64 *a1, __int64 a2, _QWORD *a3)
{
  int v3; // ebx
  __int64 v5; // r13
  int v7; // ebx
  int v8; // eax
  const void *v9; // r10
  size_t v10; // r11
  unsigned int v11; // r12d
  bool v12; // r9
  bool v13; // r8
  __int64 v14; // r14
  __int64 v15; // r15
  bool v16; // al
  char *v17; // rsi
  char v18; // al
  int v19; // r10d
  int v20; // eax
  bool v21; // al
  char v22; // al
  int v23; // [rsp+Ch] [rbp-6Ch]
  int v24; // [rsp+Ch] [rbp-6Ch]
  bool v25; // [rsp+10h] [rbp-68h]
  bool v26; // [rsp+10h] [rbp-68h]
  const void *v27; // [rsp+10h] [rbp-68h]
  bool v28; // [rsp+18h] [rbp-60h]
  bool v29; // [rsp+18h] [rbp-60h]
  size_t v30; // [rsp+18h] [rbp-60h]
  size_t v31; // [rsp+20h] [rbp-58h]
  char *v32; // [rsp+20h] [rbp-58h]
  bool v33; // [rsp+20h] [rbp-58h]
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
  v8 = sub_2248890(*(_QWORD **)a2, *(_QWORD *)(a2 + 8));
  v9 = *(const void **)a2;
  v10 = *(_QWORD *)(a2 + 8);
  v11 = v7 & v8;
  v12 = *(_QWORD *)a2 == -2;
  v13 = *(_QWORD *)a2 == -1;
  if ( v10 )
  {
    v23 = 1;
    v14 = 0;
    while ( 1 )
    {
      v15 = v5 + 24LL * v11;
      v16 = v13;
      v17 = *(char **)v15;
      if ( *(_QWORD *)v15 != -1 )
      {
        if ( v17 == (char *)-2LL )
        {
          v16 = v12;
        }
        else
        {
          if ( v10 != *(_QWORD *)(v15 + 8) )
            goto LABEL_8;
          v36 = v12;
          v33 = v13;
          v30 = v10;
          v27 = v9;
          v20 = memcmp(v9, v17, v10);
          v9 = v27;
          v10 = v30;
          v13 = v33;
          v12 = v36;
          v16 = v20 == 0;
        }
      }
      if ( v16 )
        goto LABEL_15;
LABEL_8:
      v34 = v9;
      v31 = v10;
      v28 = v12;
      v25 = v13;
      v37 = *(char **)v15;
      v38 = *(_QWORD *)(v15 + 8);
      if ( sub_E39ED0(*(char **)v15, v38, (const void *)0xFFFFFFFFFFFFFFFFLL, 0) )
        goto LABEL_21;
      v18 = sub_E39ED0(v37, v38, (const void *)0xFFFFFFFFFFFFFFFELL, 0);
      v13 = v25;
      v12 = v28;
      v10 = v31;
      v9 = v34;
      if ( !v14 )
      {
        if ( v18 )
          v14 = v5 + 24LL * v11;
      }
      v11 = v7 & (v23 + v11);
      ++v23;
    }
  }
  v19 = 1;
  v14 = 0;
  while ( 1 )
  {
    v15 = v5 + 24LL * v11;
    if ( *(_QWORD *)v15 == -1 )
    {
      v21 = v13;
    }
    else
    {
      if ( *(_QWORD *)v15 != -2 )
      {
        if ( !*(_QWORD *)(v15 + 8) )
          goto LABEL_15;
        goto LABEL_20;
      }
      v21 = v12;
    }
    if ( v21 )
    {
LABEL_15:
      *a3 = v15;
      return 1;
    }
LABEL_20:
    v29 = v12;
    v26 = v13;
    v24 = v19;
    v32 = *(char **)v15;
    v35 = *(_QWORD *)(v15 + 8);
    if ( sub_E39ED0(*(char **)v15, v35, (const void *)0xFFFFFFFFFFFFFFFFLL, 0) )
      break;
    v22 = sub_E39ED0(v32, v35, (const void *)0xFFFFFFFFFFFFFFFELL, 0);
    v13 = v26;
    v12 = v29;
    if ( v14 || !v22 )
      v15 = v14;
    v14 = v15;
    v19 = v24 + 1;
    v11 = v7 & (v24 + v11);
  }
LABEL_21:
  if ( !v14 )
    v14 = v15;
  *a3 = v14;
  return 0;
}
