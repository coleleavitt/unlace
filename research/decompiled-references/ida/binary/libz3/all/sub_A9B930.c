void __fastcall sub_A9B930(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned int *v5; // rbx
  unsigned int *v6; // r12
  unsigned int v7; // ebp
  __int64 v8; // rsi
  unsigned __int64 v9; // r12
  __int64 v10; // rbx
  void *v11; // r15
  __int64 v12; // rbx
  int v13; // eax
  int v14; // ebx
  int v15; // r8d
  __int64 v16; // rax
  int v17; // r8d
  _DWORD *v18; // rbx
  unsigned int v19; // edx
  _DWORD *v20; // rcx
  __int64 v21; // rdx
  _DWORD *v22; // r15
  int v23; // eax
  bool v24; // al
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  void *v28; // rbx
  int v29; // eax
  bool v30; // al
  unsigned int v31; // ebx
  __int64 v32; // rax
  unsigned int *v33; // r15
  unsigned int *v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // r15
  __int64 v38; // rax
  bool v39; // zf
  char v40; // r14
  _QWORD *v41; // rax
  unsigned int *v42; // [rsp+8h] [rbp-90h]
  _DWORD *v43; // [rsp+10h] [rbp-88h]
  void *v44; // [rsp+10h] [rbp-88h]
  unsigned int v45; // [rsp+10h] [rbp-88h]
  int v46; // [rsp+10h] [rbp-88h]
  int v47; // [rsp+1Ch] [rbp-7Ch]
  unsigned int v49; // [rsp+2Ch] [rbp-6Ch] BYREF
  __int64 v50; // [rsp+30h] [rbp-68h] BYREF
  _QWORD *v51; // [rsp+38h] [rbp-60h]
  __int64 v52; // [rsp+40h] [rbp-58h] BYREF
  __int64 v53; // [rsp+48h] [rbp-50h]
  __int64 v54; // [rsp+50h] [rbp-48h]

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL);
  v49 = a2;
  v4 = *(_QWORD *)(sub_FF9B20(v3) + 256) + 24LL * a2;
  v5 = *(unsigned int **)v4;
  v6 = *(unsigned int **)(v4 + 8);
  if ( *(unsigned int **)v4 == v6 )
    return;
  v7 = -1;
  do
  {
    while ( 1 )
    {
      v8 = *v5;
      if ( *(_DWORD *)(**(_QWORD **)(a1 + 144) + 4 * v8) != 4
        || *(_DWORD *)(sub_FFA040(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL), v8) + 32) )
      {
        break;
      }
      v5 += 10;
      if ( v6 == v5 )
        goto LABEL_8;
    }
    if ( v7 != -1 )
      return;
    v7 = *v5;
    v5 += 10;
  }
  while ( v6 != v5 );
LABEL_8:
  if ( v7 == -1 )
    return;
  v9 = (unsigned __int64)v7 << 6;
  v10 = *(_QWORD *)(sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL)) + 48);
  v50 = 0;
  v51 = nullptr;
  v11 = qword_1C7F2C0;
  v52 = 1;
  v12 = v9 + v10;
  v53 = 0;
  v54 = 0;
  if ( (*(_BYTE *)(v12 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v50, v12);
  else
    LODWORD(v50) = *(_DWORD *)v12;
  if ( (*(_BYTE *)(v12 + 20) & 1) != 0 )
  {
    sub_182C690(v11, &v52, v12 + 16);
  }
  else
  {
    v13 = *(_DWORD *)(v12 + 16);
    BYTE4(v52) &= ~1u;
    LODWORD(v52) = v13;
  }
  v14 = sub_182DB30(&v50);
  v15 = 3 * sub_182DB30(&v52);
  v16 = *(unsigned int *)(a1 + 80);
  v17 = v14 + v15;
  v18 = *(_DWORD **)(a1 + 72);
  v19 = v16 - 1;
  v16 *= 48;
  v20 = (_DWORD *)((char *)v18 + v16);
  v21 = 48LL * (v17 & v19);
  v22 = &v18[(unsigned __int64)v21 / 4];
  if ( v21 == v16 )
  {
LABEL_26:
    while ( v22 != v18 )
    {
      v29 = v18[1];
      if ( v29 == 2 )
      {
        if ( *v18 == v17 )
        {
          v46 = v17;
          v30 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)(v18 + 2), (__int64)&v50);
          v17 = v46;
          if ( v30 )
            goto LABEL_20;
        }
      }
      else if ( !v29 )
      {
        break;
      }
      v18 += 12;
    }
LABEL_24:
    v28 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v50);
    sub_182CBA0(v28, &v52);
LABEL_21:
    v26 = *(_QWORD *)(a1 + 56);
    goto LABEL_22;
  }
  v18 = (_DWORD *)((char *)v18 + v21);
  while ( 1 )
  {
    v23 = v18[1];
    if ( v23 != 2 )
    {
      if ( !v23 )
        goto LABEL_24;
      goto LABEL_16;
    }
    if ( *v18 == v17 )
    {
      v47 = v17;
      v43 = v20;
      v24 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)(v18 + 2), (__int64)&v50);
      v20 = v43;
      v17 = v47;
      if ( v24 )
        break;
    }
LABEL_16:
    v18 += 12;
    if ( v20 == v18 )
    {
      v18 = *(_DWORD **)(a1 + 72);
      goto LABEL_26;
    }
  }
LABEL_20:
  v44 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v50);
  sub_182CBA0(v44, &v52);
  v45 = v18[10];
  v25 = sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL));
  if ( -1431655765 * (unsigned int)((__int64)(*(_QWORD *)(v25 + 264) - *(_QWORD *)(v25 + 256)) >> 3) <= v45 )
    goto LABEL_21;
  v31 = -1;
  v32 = *(_QWORD *)(sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL)) + 256) + 24LL * v45;
  v33 = *(unsigned int **)v32;
  v34 = *(unsigned int **)(v32 + 8);
  if ( *(unsigned int **)v32 == v34 )
    goto LABEL_21;
  do
  {
    v35 = *v33;
    if ( *(_DWORD *)(**(_QWORD **)(a1 + 144) + 4 * v35) != 4
      || (v42 = v34, v36 = sub_FFA040(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL), v35), v34 = v42, *(_DWORD *)(v36 + 32)) )
    {
      if ( v31 != -1 )
        goto LABEL_21;
      v31 = *v33;
    }
    v33 += 10;
  }
  while ( v34 != v33 );
  v26 = *(_QWORD *)(a1 + 56);
  if ( v31 == -1
    || (v37 = *(_QWORD *)(sub_FF9B20(*(_QWORD *)(v26 + 504)) + 48) + ((unsigned __int64)v31 << 6),
        v38 = sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL)),
        v39 = !sub_3ED680((__int64)qword_1C7F2C0, v9 + *(_QWORD *)(v38 + 48), v37),
        v26 = *(_QWORD *)(a1 + 56),
        v39) )
  {
LABEL_22:
    v27 = sub_FF9B20(*(_QWORD *)(v26 + 504));
    sub_83DB40(a1 + 72, (int *)(v9 + *(_QWORD *)(v27 + 48)), (int *)&v49);
    return;
  }
  v40 = sub_FFADC0(*(_QWORD *)(v26 + 504), v7);
  if ( v40 != (unsigned __int8)sub_FFADC0(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL), v31) )
    goto LABEL_21;
  if ( v7 != v31 )
  {
    v50 = 0;
    v41 = (_QWORD *)sub_186B270(0x60u);
    *v41 = 0;
    *(_QWORD *)((char *)v41 + 12) = 0;
    v41[3] = 0;
    *(_QWORD *)((char *)v41 + 36) = 0;
    v41[6] = 0;
    *(_QWORD *)((char *)v41 + 60) = 0;
    v41[9] = 0;
    *(_QWORD *)((char *)v41 + 84) = 0;
    v51 = v41;
    v52 = 8;
    LODWORD(v53) = 0;
    sub_A7C770(a1, a2, (__int64)&v50);
    sub_A7C770(a1, v45, (__int64)&v50);
    sub_A9B8D0(a1, (__int64)&v50, v7, v31, 1);
    sub_83B4F0(&v50);
  }
}

