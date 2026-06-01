__int64 __fastcall sub_15EC6E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 **v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rdi
  unsigned __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 **v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rdi
  unsigned __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 **v21; // rax
  __int64 *v22; // rsi
  unsigned __int64 v23; // rax
  __int64 *v24; // rdx
  __int64 v26; // r12
  __int64 *v27; // rdi
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // r13
  bool v31; // al
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 *v38; // rax
  __int64 *v39; // rax
  __int64 *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // [rsp+8h] [rbp-E0h]
  __int64 v43; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v44[200]; // [rsp+20h] [rbp-C8h] BYREF

  v6 = a2;
  v7 = a4;
  if ( (*(_BYTE *)(a4 + 29) & 1) == 0 )
    return sub_15EB680(v6, a3, v7, a4, a5, a6);
  v9 = (__int64 **)sub_B8C3D0(a4, a2, a3, a4, a5, a6);
  v11 = *v9;
  v12 = (unsigned __int64)&(*v9)[*((unsigned int *)v9 + 2)];
  if ( (unsigned __int64)v11 >= v12 )
  {
    if ( v11 == (__int64 *)v12 )
      goto LABEL_8;
    if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 377 )
    {
      v13 = (__int64 *)(v12 + 8);
      do
      {
        v10 = (__int64)v13;
        if ( v13 == v11 )
          goto LABEL_8;
        v14 = *v13++;
      }
      while ( *(_WORD *)(v14 + 36) != 377 );
    }
LABEL_25:
    v26 = *v11;
    if ( *(_WORD *)(*v11 + 36) != 377 )
    {
      v27 = v11 + 1;
      do
        v26 = *v27++;
      while ( *(_WORD *)(v26 + 36) != 377 );
    }
    goto LABEL_28;
  }
  a2 = (__int64)v11;
  v10 = *v11;
  if ( *(_WORD *)(*v11 + 36) == 377 )
  {
LABEL_24:
    if ( v12 == a2 )
      goto LABEL_8;
    goto LABEL_25;
  }
  while ( 1 )
  {
    a2 += 8;
    if ( v12 == a2 )
      break;
    v10 = *(_QWORD *)a2;
    if ( *(_WORD *)(*(_QWORD *)a2 + 36LL) == 377 )
      goto LABEL_24;
  }
LABEL_8:
  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
    return sub_15EB680(v6, a3, v7, a4, a5, a6);
  v15 = (__int64 **)sub_B8C3D0(v7, a2, v10, a4, a5, a6);
  v17 = *v15;
  v18 = (unsigned __int64)&(*v15)[*((unsigned int *)v15 + 2)];
  if ( (unsigned __int64)v17 >= v18 )
  {
    if ( v17 == (__int64 *)v18 )
      goto LABEL_15;
    if ( *(_WORD *)(*(_QWORD *)v18 + 36LL) != 376 )
    {
      v19 = (__int64 *)(v18 + 8);
      do
      {
        v16 = (__int64)v19;
        if ( v17 == v19 )
          goto LABEL_15;
        v20 = *v19++;
      }
      while ( *(_WORD *)(v20 + 36) != 376 );
    }
LABEL_42:
    v26 = *v17;
    if ( *(_WORD *)(*v17 + 36) != 376 )
    {
      v38 = v17 + 1;
      do
        v26 = *v38++;
      while ( *(_WORD *)(v26 + 36) != 376 );
    }
    goto LABEL_28;
  }
  a2 = (__int64)v17;
  while ( 1 )
  {
    v16 = *(_QWORD *)a2;
    if ( *(_WORD *)(*(_QWORD *)a2 + 36LL) == 376 )
      break;
    a2 += 8;
    if ( v18 == a2 )
      goto LABEL_15;
  }
  if ( v18 != a2 )
    goto LABEL_42;
LABEL_15:
  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
    return sub_15EB680(v6, a3, v7, a4, a5, a6);
  v21 = (__int64 **)sub_B8C3D0(v7, a2, v16, a4, a5, a6);
  v22 = *v21;
  v23 = (unsigned __int64)&(*v21)[*((unsigned int *)v21 + 2)];
  if ( (unsigned __int64)v22 < v23 )
  {
    v24 = v22;
    while ( 1 )
    {
      a4 = *v24;
      if ( *(_WORD *)(*v24 + 36) == 157 )
        break;
      if ( (__int64 *)v23 == ++v24 )
        return sub_15EB680(v6, a3, v7, a4, a5, a6);
    }
    if ( (__int64 *)v23 != v24 )
      goto LABEL_47;
    return sub_15EB680(v6, a3, v7, a4, a5, a6);
  }
  if ( v22 == (__int64 *)v23 )
    return sub_15EB680(v6, a3, v7, a4, a5, a6);
  if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) != 157 )
  {
    v40 = (__int64 *)(v23 + 8);
    while ( v22 != v40 )
    {
      v41 = *v40++;
      if ( *(_WORD *)(v41 + 36) == 157 )
        goto LABEL_47;
    }
    return sub_15EB680(v6, a3, v7, a4, a5, a6);
  }
LABEL_47:
  v26 = *v22;
  if ( *(_WORD *)(*v22 + 36) != 157 )
  {
    v39 = v22 + 1;
    do
      v26 = *v39++;
    while ( *(_WORD *)(v26 + 36) != 157 );
  }
LABEL_28:
  v28 = v6 + 8;
  sub_168B9F0(v44, v28, *(unsigned int *)(a3 + 24), 3245, 0);
  v29 = sub_15DD120((__int64)v44, a3);
  v30 = v29;
  if ( *(_BYTE *)(v29 + 120) )
  {
    sub_15D6640((unsigned __int8 **)(v29 + 32), v26);
  }
  else if ( *(_BYTE *)(v29 + 132) )
  {
    v32 = sub_168B9E0(v29);
    v36 = *(_QWORD *)(v30 + 16);
    if ( v36 )
    {
      v42 = v32;
      v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36);
      v32 = v42;
    }
    v43 = v36;
    v37 = sub_1587BC0(v32, &v43, v32, v33, v34, v35);
    sub_15D6640((unsigned __int8 **)(*v37 + 32LL * *(unsigned int *)(v30 + 128) + 8), v26);
  }
  v31 = 1;
  if ( (*(_BYTE *)(a3 + 35) & 2) == 0 )
    v31 = (*(_BYTE *)(v26 + 35) & 2) != 0;
  LOBYTE(v43) = v31;
  sub_1588420(v30, (unsigned __int8 *)&v43);
  sub_15F7200(v44);
  sub_168B9F0(v44, v28, *(unsigned int *)(v26 + 24), 5839, 0);
  sub_15F7200(v44);
  return 0;
}
