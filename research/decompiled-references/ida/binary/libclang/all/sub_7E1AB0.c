__int64 __fastcall sub_7E1AB0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // r12
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  _QWORD *v10; // r15
  _QWORD *v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r13
  char v17; // r12
  unsigned int v18; // eax
  __int64 v19; // r9
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rax
  _QWORD *v22; // rdi
  unsigned __int64 v23; // rdx
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rdi
  int v30; // eax
  __int64 v31; // [rsp+0h] [rbp-58h]
  unsigned __int64 v32; // [rsp+8h] [rbp-50h]
  __int64 v33; // [rsp+8h] [rbp-50h]
  unsigned __int64 v34; // [rsp+8h] [rbp-50h]
  unsigned __int64 v35[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = sub_7D31C0(a2);
  v4 = *(_QWORD *)(v3 + 16) + 8LL * *(unsigned int *)(v3 + 24);
  v31 = v4;
  v5 = *(_QWORD *)(sub_7D31C0(a2) + 16);
  if ( v4 == v5 )
    return 1;
  while ( 1 )
  {
LABEL_2:
    v6 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v5 + 8LL) & 0xFFFFFFFFFFFFFFF8LL) + 112);
    v7 = *(_QWORD *)(v6 + 104);
    v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v7 & 1) != 0 )
      goto LABEL_3;
    if ( v8 <= 3 )
      goto LABEL_6;
    v12 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
    v10 = v12;
    if ( (v8 & 2) == 0 )
      goto LABEL_16;
    v13 = v12[2275];
    if ( v13 )
      break;
    v8 = v6 & 0xFFFFFFFFFFFFFFFALL;
    v7 = v6 & 0xFFFFFFFFFFFFFFFALL | 1;
    *(_QWORD *)(v6 + 104) = v7;
LABEL_3:
    if ( v8 )
    {
      v9 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      v10 = (_QWORD *)v9;
      if ( (v8 & 4) != 0 )
        goto LABEL_5;
      if ( v9 )
        goto LABEL_16;
    }
LABEL_6:
    v5 += 8;
    if ( v31 == v5 )
      return 1;
  }
  v12[284] += 24LL;
  v14 = v12[274];
  v15 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v10[275] >= v15 + 24 && v14 )
    v10[274] = v15 + 24;
  else
    v15 = sub_7DAE50((__int64)(v10 + 274), 24, 3);
  *(_QWORD *)v15 = v13;
  *(_DWORD *)(v15 + 8) = 0;
  *(_QWORD *)(v15 + 16) = v6;
  *(_QWORD *)(v6 + 104) = v15 | 5;
  v9 = v15 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_5:
  if ( !v9 )
    goto LABEL_6;
  v29 = *(_QWORD *)v9;
  v30 = *(_DWORD *)(*(_QWORD *)v9 + 12LL);
  if ( *(_DWORD *)(v9 + 8) != v30 )
  {
    *(_DWORD *)(v9 + 8) = v30;
    v34 = v9;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 144LL))(v29, v6);
    v9 = v34;
  }
  v10 = *(_QWORD **)(v9 + 16);
  if ( !v10 )
    goto LABEL_6;
LABEL_16:
  v16 = (unsigned __int64)v10;
  v17 = 0;
LABEL_17:
  v18 = sub_781200(v16);
  if ( v18 > 1 )
    goto LABEL_18;
LABEL_19:
  v19 = *a1;
  v35[0] = v16;
  if ( (unsigned __int8)sub_7E09C0((__int64)a1, v16, v16, (__int64 *)v35, a1, v19) )
  {
    while ( 1 )
    {
      v20 = *(_QWORD *)(v16 + 104);
      if ( (v20 & 1) != 0 )
      {
        if ( v17 )
          goto LABEL_6;
        v17 = 1;
        v21 = v20 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v20 & 1) != 0 )
          goto LABEL_51;
      }
      else
      {
        if ( (v20 & 2) == 0 )
        {
          v21 = v20 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v20 & 1) != 0 )
            goto LABEL_51;
          if ( v21 <= 3 )
            goto LABEL_6;
          goto LABEL_24;
        }
        if ( v17 )
          goto LABEL_6;
        v17 = 1;
        v21 = v20 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v20 & 1) != 0 )
          goto LABEL_36;
      }
      if ( v21 <= 3 )
      {
        v17 = 1;
        v16 = v20 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_32:
        if ( !v16 )
          goto LABEL_6;
        goto LABEL_17;
      }
LABEL_24:
      v22 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v21 & 2) != 0 )
      {
        v26 = v22[2275];
        if ( v26 )
        {
          v27 = v22[274];
          v22[284] += 24LL;
          v28 = (v27 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v22[275] >= v28 + 24 && v27 )
          {
            v22[274] = v28 + 24;
          }
          else
          {
            v33 = v26;
            v28 = sub_7DAE50((__int64)(v22 + 274), 24, 3);
            v26 = v33;
          }
          *(_QWORD *)v28 = v26;
          *(_DWORD *)(v28 + 8) = 0;
          *(_QWORD *)(v28 + 16) = v16;
          *(_QWORD *)(v16 + 104) = v28 | 5;
          v23 = v28 & 0xFFFFFFFFFFFFFFF8LL;
          goto LABEL_37;
        }
        v21 = v16 & 0xFFFFFFFFFFFFFFFALL;
        v20 = v16 & 0xFFFFFFFFFFFFFFFALL | 1;
        *(_QWORD *)(v16 + 104) = v20;
LABEL_51:
        if ( !v21 )
        {
          v5 += 8;
          if ( v31 == v5 )
            return 1;
          goto LABEL_2;
        }
LABEL_36:
        v23 = v20 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v21 & 4) != 0 )
        {
LABEL_37:
          if ( !v23 )
            goto LABEL_6;
          v24 = *(_QWORD *)v23;
          v25 = *(_DWORD *)(*(_QWORD *)v23 + 12LL);
          if ( *(_DWORD *)(v23 + 8) != v25 )
          {
            *(_DWORD *)(v23 + 8) = v25;
            v32 = v23;
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v24 + 144LL))(v24, v16);
            v23 = v32;
          }
          v16 = *(_QWORD *)(v23 + 16);
        }
        else
        {
          v16 = v20 & 0xFFFFFFFFFFFFFFF8LL;
        }
        if ( (_QWORD *)v16 == v10 )
        {
          v5 += 8;
          if ( v31 == v5 )
            return 1;
          goto LABEL_2;
        }
        goto LABEL_32;
      }
      if ( v10 == v22 )
        goto LABEL_6;
      v16 = (unsigned __int64)v22;
      v18 = sub_781200((__int64)v22);
      if ( v18 <= 1 )
        goto LABEL_19;
LABEL_18:
      if ( v18 - 3 <= 1 )
        goto LABEL_19;
    }
  }
  return 0;
}

