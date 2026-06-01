__int64 __fastcall sub_984DC0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  __int64 *v3; // r13
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 *v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 *v12; // r15
  __int64 v13; // r12
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // r14d
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 *v31; // r14
  __int64 v32; // r14
  __int64 v33; // rax
  int v34; // eax
  unsigned int v35; // r12d
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // [rsp+8h] [rbp-80h]
  __int64 v45; // [rsp+10h] [rbp-78h] BYREF
  __int128 v46; // [rsp+18h] [rbp-70h]
  __int64 v47; // [rsp+28h] [rbp-60h]
  __int64 v48; // [rsp+30h] [rbp-58h]
  char v49; // [rsp+38h] [rbp-50h]
  int v50; // [rsp+40h] [rbp-48h]

  v1 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 24);
  v2 = *(_QWORD *)(a1 + 184);
  v3 = (__int64 *)v1;
  v4 = sub_A24BE0(12);
  v5 = sub_A1A5A0(v2, (2 * v4 + 14) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_QWORD *)(a1 + 184);
  v7 = (__int64 *)v5;
  v8 = sub_A24BE0(12);
  v9 = sub_A24BE0(13);
  v10 = sub_A1A5A0(v6, ((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL) + ((2 * v8 + 14) & 0xFFFFFFFFFFFFFFF0LL));
  v11 = v10;
  sub_8E61F0((__int64)&v45, v10, 0);
  if ( v50 )
    goto LABEL_6;
  v10 = *(_QWORD *)(v47 + 32);
  if ( *(_DWORD *)(v10 + 16) != (_DWORD)v48 && (_DWORD)v48 )
    v10 = *(_QWORD *)(v47 + (unsigned int)v48 + 32);
  if ( !*(_BYTE *)(v10 + 51) || (v12 = (__int64 *)(v47 + v45 + 72), (unsigned int)v48 != v45) )
LABEL_6:
    v12 = (__int64 *)(v47 + v45 + 40);
  v44 = *v12;
  v13 = sub_2575D20(&v45, v10, v45);
  v14 = *v7;
  if ( v44 == v13 )
  {
    if ( v13 == v14 )
    {
      sub_257D030(v12, v7);
LABEL_10:
      sub_A1C0C0(&v45);
      v15 = *(_DWORD *)(v11 + 48);
      if ( v15 != 1 )
        goto LABEL_11;
LABEL_24:
      v21 = *(_QWORD *)(v11 + 24);
      v22 = *(_QWORD *)(v11 + 32);
      v45 = 0;
      v50 = 1;
      v48 = v22;
      v47 = v21;
      v46 = 0;
      goto LABEL_28;
    }
  }
  else if ( v13 != v14 )
  {
    sub_2576220(v12, v7);
    goto LABEL_10;
  }
  if ( v7 == v12 )
    goto LABEL_10;
  sub_5FF3B0(v12);
  if ( v13 == *v7 )
  {
    sub_257CF50(v12, v7);
    goto LABEL_10;
  }
  sub_25768A0(v12, v7);
  sub_A1C0C0(&v45);
  v15 = *(_DWORD *)(v11 + 48);
  if ( v15 == 1 )
    goto LABEL_24;
LABEL_11:
  if ( v15 == 2 )
  {
    v23 = *(_QWORD *)(v11 + 24);
    v50 = 2;
    v45 = 0;
    v47 = v23;
    v48 = 0;
    v49 = 1;
    v46 = 0;
    goto LABEL_28;
  }
  v16 = *(unsigned int *)(v11 + 32);
  if ( (_DWORD)v16 != -1 )
  {
    if ( v15 )
    {
      if ( v15 == 3 )
        BUG();
      v17 = *(_QWORD *)(v11 + 24);
      v18 = *(_QWORD *)(v17 + 32);
    }
    else
    {
      v17 = *(_QWORD *)(v11 + 24);
      v18 = *(_QWORD *)(v17 + 32);
      if ( *(_DWORD *)(v18 + 16) != (_DWORD)v16 && (_DWORD)v16 )
      {
        v19 = (unsigned int)v16;
        v18 = *(_QWORD *)(v17 + (unsigned int)v16 + 32);
        goto LABEL_17;
      }
    }
    v19 = (unsigned int)v16;
LABEL_17:
    v20 = 32;
    if ( *(_QWORD *)(v18 + 32) )
      v20 = 16;
    sub_A1C030(&v45, v17, v16, v19 + v20);
    goto LABEL_28;
  }
  if ( v15 == 3 )
    BUG();
  sub_A1C030(&v45, *(_QWORD *)(v11 + 24), v16, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 32LL) + 12LL));
LABEL_28:
  sub_A1DB00(&v45);
  sub_A1C0C0(&v45);
  v24 = *(_DWORD *)(v11 + 48);
  if ( v24 == 1 )
  {
    v29 = *(_QWORD *)(v11 + 24);
    v42 = *(_QWORD *)(v11 + 32);
    v50 = 1;
    v45 = 1;
    v48 = v42;
    v47 = v29;
    v46 = 0;
LABEL_58:
    v32 = 41;
    goto LABEL_41;
  }
  if ( v24 == 2 )
  {
    v29 = *(_QWORD *)(v11 + 24);
    v49 = 1;
    v45 = 1;
    v50 = 2;
    v47 = v29;
    v48 = 0;
    v46 = 0;
    goto LABEL_58;
  }
  v25 = *(_DWORD *)(v11 + 32);
  if ( v25 == -1 )
  {
    if ( v24 == 3 )
      BUG();
    sub_A1C030(
      &v45,
      *(_QWORD *)(v11 + 24),
      0xFFFFFFFFLL,
      *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 32LL) + 12LL));
  }
  else
  {
    v26 = sub_8E5480(v11);
    v27 = *(unsigned int *)(v26 + 8);
    v28 = v27 + 32;
    if ( *(_QWORD *)(v26 + 32) )
      v28 = v27 + 16;
    sub_A1C030(&v45, *(_QWORD *)(v11 + 24), v25, v28 + v25);
  }
  v29 = v47;
  if ( v50 )
    goto LABEL_40;
  v30 = *(_QWORD *)(v47 + 32);
  if ( *(_DWORD *)(v30 + 16) != (_DWORD)v48 && (_DWORD)v48 )
    v30 = *(_QWORD *)(v47 + (unsigned int)v48 + 32);
  if ( !*(_BYTE *)(v30 + 51) || (v31 = (__int64 *)(v47 + v45 + 72), v45 != (unsigned int)v48) )
  {
LABEL_40:
    v32 = v45 + 40;
LABEL_41:
    v31 = (__int64 *)(v29 + v32);
  }
  v33 = *v3;
  if ( *v31 == v13 )
  {
    if ( v13 == v33 )
    {
      sub_257D030(v31, v3);
LABEL_45:
      sub_A1C0C0(&v45);
      v34 = *(_DWORD *)(v11 + 48);
      if ( v34 != 1 )
        goto LABEL_46;
LABEL_56:
      v40 = *(_QWORD *)(v11 + 24);
      v41 = *(_QWORD *)(v11 + 32);
      v45 = 1;
      v50 = 1;
      v48 = v41;
      v47 = v40;
      v46 = 0;
      goto LABEL_51;
    }
  }
  else if ( v13 != v33 )
  {
    sub_2576220(v31, v3);
    goto LABEL_45;
  }
  if ( v3 == v31 )
    goto LABEL_45;
  sub_5FF3B0(v31);
  if ( v13 == *v3 )
  {
    sub_257CF50(v31, v3);
    goto LABEL_45;
  }
  sub_25768A0(v31, v3);
  sub_A1C0C0(&v45);
  v34 = *(_DWORD *)(v11 + 48);
  if ( v34 == 1 )
    goto LABEL_56;
LABEL_46:
  if ( v34 == 2 )
  {
    v43 = *(_QWORD *)(v11 + 24);
    v49 = 1;
    v45 = 1;
    v50 = 2;
    v47 = v43;
    v48 = 0;
    v46 = 0;
  }
  else
  {
    v35 = *(_DWORD *)(v11 + 32);
    if ( v35 == -1 )
    {
      if ( v34 == 3 )
        BUG();
      sub_A1C030(
        &v45,
        *(_QWORD *)(v11 + 24),
        0xFFFFFFFFLL,
        *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 32LL) + 12LL));
    }
    else
    {
      v36 = sub_8E5480(v11);
      v37 = *(unsigned int *)(v36 + 8);
      v38 = v37 + 32;
      if ( *(_QWORD *)(v36 + 32) )
        v38 = v37 + 16;
      sub_A1C030(&v45, *(_QWORD *)(v11 + 24), v35, v38 + v35);
    }
  }
LABEL_51:
  sub_A1DB00(&v45);
  sub_A1C0C0(&v45);
  return sub_A1DB00(v11);
}

