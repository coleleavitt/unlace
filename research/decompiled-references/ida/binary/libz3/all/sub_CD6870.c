__int64 __fastcall sub_CD6870(_QWORD *a1, __int64 a2)
{
  char *v4; // rsi
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rax
  __int64 v10; // rdx
  char v11; // al
  int v12; // r13d
  __int64 v13; // rbp
  unsigned int v14; // r15d
  __int64 v15; // rbx
  char v16; // al
  unsigned int v17; // eax
  int v18; // eax
  __int64 *v19; // rbx
  char v20; // si
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rdi
  bool v24; // zf
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v28; // rax
  int v29; // edx
  char **v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // [rsp+18h] [rbp-70h]
  char v36[8]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v37; // [rsp+30h] [rbp-58h] BYREF
  __int64 v38; // [rsp+38h] [rbp-50h]
  __int64 v39; // [rsp+40h] [rbp-48h] BYREF
  __int64 v40; // [rsp+48h] [rbp-40h]

  v4 = "der";
  sub_EE4940(v36, "der", a2);
  v9 = *a1;
  v10 = *(_QWORD *)(a2 + 72);
  v37 = 0;
  v39 = 0;
  v38 = v9;
  v40 = v9;
  if ( !v10 )
    goto LABEL_27;
  v11 = *(_BYTE *)(v10 + 3) >> 6;
  if ( !v11 )
  {
    do
    {
      v10 = *(_QWORD *)(v10 + 16);
      v11 = *(_BYTE *)(v10 + 3) >> 6;
    }
    while ( !v11 );
    if ( v11 != 1 )
      goto LABEL_4;
LABEL_60:
    v12 = *(_DWORD *)(v10 + 4) + 1;
    goto LABEL_6;
  }
  if ( v11 == 1 )
    goto LABEL_60;
LABEL_4:
  if ( v11 == 2 )
    v12 = *(_DWORD *)(v10 + 4) - 1;
  else
    v12 = *(_DWORD *)(v10 + 4);
LABEL_6:
  if ( !v12 )
    goto LABEL_27;
  v13 = 0;
  v14 = 0;
  while ( 2 )
  {
    v15 = *(_QWORD *)(a2 + 88);
    if ( !v15 )
      goto LABEL_20;
    v10 = *(_QWORD *)(a2 + 88);
    v16 = *(_BYTE *)(v15 + 3) >> 6;
    if ( v16 )
    {
      if ( v16 != 1 )
        goto LABEL_11;
    }
    else
    {
      do
      {
        v10 = *(_QWORD *)(v10 + 16);
        v16 = *(_BYTE *)(v10 + 3) >> 6;
      }
      while ( !v16 );
      if ( v16 != 1 )
      {
LABEL_11:
        if ( v16 == 2 )
          v17 = *(_DWORD *)(v10 + 4) - 1;
        else
          v17 = *(_DWORD *)(v10 + 4);
        if ( v14 < v17 )
          goto LABEL_14;
LABEL_57:
        v15 = 0;
        goto LABEL_20;
      }
    }
    if ( v14 >= *(_DWORD *)(v10 + 4) + 1 )
      goto LABEL_57;
LABEL_14:
    v18 = 18;
    while ( 1 )
    {
      if ( !--v18 )
      {
        sub_233F80((__int64 *)(*(_QWORD *)a2 + 616LL), (_DWORD *)(a2 + 88));
        v19 = (__int64 *)(v13 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL));
        goto LABEL_19;
      }
      LODWORD(v10) = *(unsigned __int8 *)(v15 + 3);
      v6 = v10;
      LOBYTE(v6) = (unsigned __int8)v10 >> 6;
      if ( (v10 & 0x80u) == 0LL )
        break;
      if ( (_BYTE)v6 != 2 )
      {
        v19 = (__int64 *)(v13 + *(_QWORD *)(v15 + 16));
        goto LABEL_19;
      }
LABEL_35:
      v15 = *(_QWORD *)(v15 + 16);
    }
    if ( v14 != *(_DWORD *)(v15 + 4) )
      goto LABEL_35;
    v19 = (__int64 *)(v15 + 8);
LABEL_19:
    v15 = *v19;
LABEL_20:
    v20 = *(_BYTE *)(a2 + 123);
    if ( (v20 & 0x10) == 0 )
    {
      LODWORD(v4) = v20 & 0x20;
      if ( (_DWORD)v4 )
        break;
      goto LABEL_39;
    }
    v21 = *(_QWORD *)(a2 + 104);
    LODWORD(v10) = 18;
    while ( 1 )
    {
      LODWORD(v10) = v10 - 1;
      if ( !(_DWORD)v10 )
        break;
      v6 = *(unsigned __int8 *)(v21 + 3);
      if ( (v6 & 0x80u) == 0 )
      {
        if ( *(_DWORD *)(v21 + 4) == v14 )
          goto LABEL_26;
      }
      else if ( *(_BYTE *)(v21 + 3) >> 6 != 2 )
      {
        v10 = v13 + *(_QWORD *)(v21 + 16);
        goto LABEL_26;
      }
      v21 = *(_QWORD *)(v21 + 16);
    }
    sub_236900((_QWORD *)(*(_QWORD *)a2 + 672LL), (__int64 *)(a2 + 104));
    v20 = *(_BYTE *)(a2 + 123);
    v10 = v13 + *(_QWORD *)(*(_QWORD *)(a2 + 104) + 16LL);
LABEL_26:
    LODWORD(v4) = v20 & 0x20;
    if ( !(_DWORD)v4 )
    {
LABEL_39:
      v28 = *(_QWORD *)(a2 + 72);
      v29 = 18;
      while ( --v29 )
      {
        if ( *(char *)(v28 + 3) >= 0 )
        {
          if ( v14 == *(_DWORD *)(v28 + 4) )
          {
            v30 = (char **)(v28 + 8);
            goto LABEL_44;
          }
        }
        else if ( *(_BYTE *)(v28 + 3) >> 6 != 2 )
        {
          v30 = (char **)(v13 + *(_QWORD *)(v28 + 16));
LABEL_44:
          v4 = *v30;
          goto LABEL_45;
        }
        v28 = *(_QWORD *)(v28 + 16);
      }
      sub_233F80((__int64 *)(*(_QWORD *)a2 + 616LL), (_DWORD *)(a2 + 72));
      v4 = *(char **)(*(_QWORD *)(*(_QWORD *)(a2 + 72) + 16LL) + v13);
      if ( (*(_BYTE *)(a2 + 123) & 0x20) != 0 )
        break;
LABEL_45:
      sub_148F880(a1 + 1, v4, &v37, &v39);
      v31 = sub_15DE0E0(*a1, v15, v39);
      v32 = v31;
      if ( v31 )
        ++*(_DWORD *)(v31 + 8);
      v33 = v39;
      if ( v39 )
      {
        v34 = v40;
        v24 = (*(_DWORD *)(v39 + 8))-- == 1;
        if ( v24 )
        {
          v35 = v31;
          sub_15D7BC0(v34, v33);
          v32 = v35;
        }
      }
      LODWORD(v4) = v14;
      v39 = v32;
      sub_EDBFA0(a2);
      v13 += 8;
      if ( v14 + 1 != v12 )
      {
        ++v14;
        continue;
      }
    }
    break;
  }
LABEL_27:
  sub_EDC6C0(a2, (_DWORD)v4, v10, v6, v7, v8);
  v22 = v39;
  if ( v39 )
  {
    v23 = v40;
    v24 = (*(_DWORD *)(v39 + 8))-- == 1;
    if ( v24 )
      sub_15D7BC0(v23, v22);
  }
  v25 = v37;
  if ( v37 )
  {
    v26 = v38;
    v24 = (*(_DWORD *)(v37 + 8))-- == 1;
    if ( v24 )
      sub_15D7BC0(v26, v25);
  }
  return sub_EE4A00(v36);
}

