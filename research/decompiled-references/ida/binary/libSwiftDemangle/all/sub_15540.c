unsigned __int64 __fastcall sub_15540(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  _QWORD *v4; // r12
  __int16 v5; // ax
  char v6; // bp
  unsigned __int8 v7; // al
  __int64 *v8; // rdx
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // r13
  unsigned __int8 v12; // al
  __int64 *v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  char v16; // dl
  unsigned __int64 v17; // r12
  __int64 v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r13
  char v23; // al
  unsigned __int64 v24; // rbx
  char v25; // al
  __int64 v26; // rdi
  char v27; // al
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r15
  __int16 v30; // ax
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // r10d
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // r9
  __int64 *v38; // r9
  __int64 v39; // rcx
  __int64 v40; // rsi
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdi
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // [rsp+0h] [rbp-58h]
  unsigned __int64 v50; // [rsp+8h] [rbp-50h]
  __int64 v51; // [rsp+10h] [rbp-48h]

  if ( !*(_BYTE *)(a1 + 80) )
  {
    v45 = *(_DWORD *)(a1 + 96);
    if ( v45 )
    {
      v46 = (unsigned int)(v45 - 1);
      v47 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v46);
      if ( *(_WORD *)(v47 + 16) == 262 )
      {
        *(_DWORD *)(a1 + 96) = v46;
        if ( v47 )
        {
LABEL_89:
          v17 = sub_12C70((_QWORD *)a1, 1);
          *(_WORD *)(v17 + 16) = 278;
          *(_BYTE *)(v17 + 18) = 0;
          return v17;
        }
      }
    }
  }
  if ( !a2 || *(_WORD *)(a2 + 16) != 221 )
    return 0;
  v3 = *(_BYTE *)(a2 + 18);
  if ( v3 > 4u )
  {
    v4 = nullptr;
    if ( v3 == 5 && *(_DWORD *)(a2 + 8) )
      v4 = **(_QWORD ***)a2;
  }
  else
  {
    v4 = nullptr;
    if ( v3 > 2u )
      v4 = *(_QWORD **)a2;
  }
  v5 = *((_WORD *)v4 + 8);
  if ( v5 == 41 )
  {
    v48 = sub_BA70((__int64)v4, 1u);
    v4 = (_QWORD *)sub_BA70(v48, 0);
    v5 = *((_WORD *)v4 + 8);
  }
  v6 = v5 != 62 && v5 != 79;
  if ( v6 )
    return 0;
  v7 = *((_BYTE *)v4 + 18);
  if ( v7 > 4u )
  {
    v9 = 0;
    if ( v7 == 5 && *((_DWORD *)v4 + 2) )
    {
      v8 = (__int64 *)*v4;
      goto LABEL_12;
    }
  }
  else
  {
    v8 = v4;
    if ( v7 > 2u )
    {
LABEL_12:
      v9 = *v8;
      goto LABEL_13;
    }
    v9 = 0;
  }
LABEL_13:
  v10 = *(_WORD *)(v9 + 16) == 64;
  v11 = sub_BA70((__int64)v4, *(_WORD *)(v9 + 16) == 64);
  if ( *(_WORD *)(v11 + 16) == 65 )
    v11 = sub_BA70((__int64)v4, (unsigned int)++v10);
  if ( *(_WORD *)(v11 + 16) == 261 )
    v11 = sub_BA70((__int64)v4, (unsigned int)++v10);
  if ( *(_WORD *)(v11 + 16) == 63 )
    v11 = sub_BA70((__int64)v4, (unsigned int)++v10);
  if ( *(_WORD *)(v11 + 16) == 260 )
    v11 = sub_BA70((__int64)v4, (unsigned int)(v10 + 1));
  v12 = *(_BYTE *)(v11 + 18);
  if ( v12 <= 4u )
  {
    v13 = (__int64 *)v11;
    v14 = 0;
    if ( v12 <= 2u )
      goto LABEL_24;
    goto LABEL_23;
  }
  v14 = 0;
  if ( v12 == 5 && *(_DWORD *)(v11 + 8) )
  {
    v13 = *(__int64 **)v11;
LABEL_23:
    v14 = *v13;
  }
LABEL_24:
  v15 = sub_BA70(v14, 0);
  if ( *(_WORD *)(v15 + 16) != 212 )
  {
LABEL_33:
    v19 = 1;
    goto LABEL_34;
  }
  v16 = *(_BYTE *)(v15 + 18);
  if ( v16 == 4 )
  {
    v19 = 2;
    goto LABEL_34;
  }
  if ( v16 != 5 )
  {
    if ( v16 != 3 )
      return 0;
    goto LABEL_33;
  }
  v19 = *(unsigned int *)(v15 + 8);
  if ( !(_DWORD)v19 )
    return 0;
LABEL_34:
  v20 = sub_12C70((_QWORD *)a1, 1);
  *(_WORD *)(v20 + 16) = 278;
  v17 = v20;
  *(_BYTE *)(v20 + 18) = 0;
  v21 = sub_BA70(v11, 0);
  v22 = sub_BA70(v21, 0);
  v23 = *(_BYTE *)(a1 + 80);
  if ( v23 && (!v22 || *(_WORD *)(v22 + 16) != 212) )
    return v17;
  v49 = v19;
  v24 = 0;
  if ( !v23 )
    goto LABEL_48;
LABEL_36:
  v25 = *(_BYTE *)(v22 + 18);
  if ( v25 == 4 )
  {
    if ( v24 <= 1 )
    {
LABEL_51:
      v33 = v22;
      goto LABEL_52;
    }
LABEL_39:
    v26 = 0;
    v27 = 62;
    goto LABEL_40;
  }
  if ( v25 != 5 )
  {
    if ( v25 == 3 && !v24 )
      goto LABEL_51;
    goto LABEL_39;
  }
  if ( v24 >= *(unsigned int *)(v22 + 8) )
    goto LABEL_39;
  v33 = *(_QWORD *)v22;
LABEL_52:
  v26 = *(_QWORD *)(v33 + 8 * v24);
  v27 = *(_BYTE *)(v26 + 18);
  if ( v27 != 4 )
  {
LABEL_40:
    if ( v27 == 5 )
    {
      v34 = *(_DWORD *)(v26 + 8);
      if ( !v34 )
        goto LABEL_42;
    }
    else
    {
      if ( v27 != 3 )
      {
LABEL_42:
        v28 = sub_12C70((_QWORD *)a1, 1);
        *(_WORD *)(v28 + 16) = 263;
        v29 = v28;
        *(_BYTE *)(v28 + 18) = 0;
        goto LABEL_43;
      }
      v34 = 1;
    }
    goto LABEL_54;
  }
  v34 = 2;
LABEL_54:
  v35 = 0;
  while ( v27 != 4 )
  {
    if ( v27 != 5 )
    {
      if ( (_DWORD)v35 )
        goto LABEL_56;
      goto LABEL_72;
    }
    if ( (unsigned int)v35 < (unsigned __int64)*(unsigned int *)(v26 + 8) )
    {
      v36 = *(_QWORD *)v26;
      goto LABEL_61;
    }
LABEL_56:
    v35 = (unsigned int)(v35 + 1);
    if ( (_DWORD)v35 == v34 )
      goto LABEL_42;
  }
  if ( (unsigned int)v35 > 1uLL )
    goto LABEL_56;
LABEL_72:
  v36 = v26;
LABEL_61:
  v37 = *(_QWORD *)(v36 + 8LL * (unsigned int)v35);
  if ( *(_WORD *)(v37 + 16) != 214 )
    goto LABEL_56;
  if ( !v37 )
    goto LABEL_42;
  sub_C330(v26, v35);
  v39 = *v38;
  v40 = v38[1];
  v29 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 8) = v29;
  if ( !v29 || (v41 = v29 + 24, v29 + 24 > *(_QWORD *)(a1 + 16)) )
  {
    v51 = v39;
    v42 = 2LL * *(_QWORD *)(a1 + 32);
    if ( v42 < 0x20 )
      v42 = 32;
    *(_QWORD *)(a1 + 32) = v42;
    v50 = v42 + 8;
    v43 = malloc(v42 + 8);
    v44 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v43;
    *v43 = v44;
    v29 = ((unsigned __int64)v43 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    v39 = v51;
    *(_QWORD *)(a1 + 16) = (char *)v43 + v50;
    v41 = v29 + 24;
  }
  *(_QWORD *)(a1 + 8) = v41;
  *(_WORD *)(v29 + 16) = 98;
  *(_BYTE *)(v29 + 18) = 1;
  *(_QWORD *)v29 = v39;
  *(_QWORD *)(v29 + 8) = v40;
LABEL_43:
  while ( v29 )
  {
    v30 = *(_WORD *)(v29 + 16);
    if ( v30 != 98 && v30 != 263 )
      break;
    sub_C080(v17, v29, (_QWORD *)a1);
    ++v24;
    v6 |= *(_WORD *)(v29 + 16) != 263;
    if ( v24 == v49 )
    {
      if ( !v6 )
        goto LABEL_89;
      if ( !*(_BYTE *)(a1 + 80) )
        sub_C3A0(v17, 0);
      return v17;
    }
    if ( *(_BYTE *)(a1 + 80) )
      goto LABEL_36;
LABEL_48:
    v31 = *(_DWORD *)(a1 + 96);
    if ( !v31 )
      return 0;
    v32 = (unsigned int)(v31 - 1);
    v29 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v32);
    *(_DWORD *)(a1 + 96) = v32;
  }
  return 0;
}

