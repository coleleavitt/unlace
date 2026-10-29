void __fastcall sub_1882480(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  __int64 v13; // r13
  unsigned __int64 *v14; // rax
  char v15; // dl
  char v16; // di
  unsigned __int64 *v17; // r15
  unsigned __int64 *v18; // rsi
  unsigned __int64 *v19; // rax
  unsigned __int64 *v20; // r8
  char v21; // r14
  unsigned __int64 *v22; // rbp
  unsigned __int64 v23; // rsi
  unsigned __int64 *v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rdx
  char v27; // di
  _QWORD *v28; // rdx
  __int64 v29; // rdi
  unsigned __int64 *v30; // r10
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  _QWORD *v33; // rax
  _QWORD *v34; // rsi
  unsigned __int64 *v35; // rax
  _BYTE *v36; // rax
  __int64 *v37; // rax
  __int64 *v38; // r12
  unsigned int v39; // eax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r15
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // [rsp+0h] [rbp-F8h]
  __int64 v56; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v57[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v59; // [rsp+50h] [rbp-A8h] BYREF
  char v60; // [rsp+A8h] [rbp-50h]
  unsigned int v61; // [rsp+B0h] [rbp-48h]
  char v62; // [rsp+B4h] [rbp-44h]

  if ( *(char *)(a1 + 28) < 0 )
    return;
  v7 = (_QWORD *)sub_B98F60(a1);
  v12 = (__int64)v7;
  if ( v7 )
  {
    v57[0] = 0;
    sub_B7F5F0(v7, v57, v8, v9, v10, v11);
    v13 = v57[0];
    if ( v57[0] )
    {
      v52 = sub_B709C0(a1);
      v12 = sub_B709C0(v13);
    }
    else
    {
      v12 = 0;
      v52 = sub_B709C0(a1);
    }
    v14 = sub_1703870(a4, v52);
  }
  else
  {
    v13 = 0;
    v52 = sub_B709C0(a1);
    v14 = sub_1703870(a4, v52);
  }
  v16 = *(_BYTE *)(a4 + 20);
  v17 = *(unsigned __int64 **)a4;
  if ( v16 )
    v18 = &v17[*(unsigned int *)(a4 + 12)];
  else
    v18 = &v17[*(unsigned int *)(a4 + 8)];
  if ( v14 != v18 && *v14 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v19 = v14 + 1;
    do
    {
      v20 = v19;
      if ( v18 == v19 )
        break;
      ++v19;
    }
    while ( *v20 >= 0xFFFFFFFFFFFFFFFELL );
  }
  v21 = v15;
  if ( !v15 )
    return;
  if ( v13 && (unsigned __int16)(*(_DWORD *)(v13 + 84) >> 13) == 1 )
  {
    v36 = *(_BYTE **)sub_B98F20(v13);
    if ( (*v36 & 6) == 0 && (v36[28] & 1) != 0 && *(char *)(v13 + 28) >= 0 && !sub_A5F460(a2, v12) )
    {
      if ( v12 != v52 && !sub_A5F460(a3, v12) && !sub_A5F460(a4, v12) )
      {
        sub_1882480(v13, a2, a3, a4, a5);
        return;
      }
      if ( !sub_A5F460(a3, v12) )
      {
        v37 = (__int64 *)sub_B98F20(a1);
        v38 = (__int64 *)(a5 + 8);
        v39 = sub_B98AF0(*v37);
        sub_168B9F0((__int64)v57, (__int64 *)(a5 + 8), v39, 0x1A9Fu, 0);
        if ( v60 )
        {
          sub_AE9DF0(&v59, a1, 0xAu);
        }
        else if ( v62 )
        {
          v49 = sub_168B9E0(v57);
          v50 = v58;
          if ( v58 )
            v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v58 + 32LL))(v58);
          v56 = v50;
          v51 = sub_1587BC0(v49, &v56, v45, v46, v47, v48);
          sub_AE9DF0((unsigned __int8 **)(*v51 + 32LL * v61 + 8), a1, 0xAu);
        }
        sub_15F7200(v57);
        if ( v12 != v52 )
        {
          sub_168B9F0((__int64)v57, v38, *(_DWORD *)(v13 + 24), 0x17A8u, 0);
          sub_15F7200(v57);
        }
        while ( sub_B709C0(v13) != v52 )
        {
          v56 = 0;
          v40 = (_QWORD *)sub_B98F60(v13);
          sub_B7F5F0(v40, &v56, v41, v42, v43, v44);
          v13 = v56;
          sub_168B9F0((__int64)v57, v38, *(_DWORD *)(v56 + 24), 0x1944u, 0);
          sub_15F7200(v57);
        }
      }
      sub_183F7B0(a3, a4);
      if ( !*(_BYTE *)(a4 + 20) )
        goto LABEL_23;
      goto LABEL_27;
    }
    v16 = *(_BYTE *)(a4 + 20);
    v17 = *(unsigned __int64 **)a4;
  }
  if ( v16 )
  {
    v22 = &v17[*(unsigned int *)(a4 + 12)];
    if ( v22 == v17 )
    {
LABEL_27:
      *(_QWORD *)(a4 + 12) = 0;
      return;
    }
  }
  else
  {
    v22 = &v17[*(unsigned int *)(a4 + 8)];
    if ( v22 == v17 )
      goto LABEL_23;
  }
  v23 = *v17;
  if ( *v17 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v24 = v17 + 1;
    do
    {
      v17 = v24;
      if ( v24 == v22 )
        goto LABEL_22;
      v23 = *v24++;
    }
    while ( v23 >= 0xFFFFFFFFFFFFFFFELL );
  }
  v27 = *(_BYTE *)(a2 + 20);
  while ( 1 )
  {
LABEL_35:
    if ( !v27 )
      goto LABEL_55;
    v28 = *(_QWORD **)a2;
    v29 = *(unsigned int *)(a2 + 12);
    v30 = (unsigned __int64 *)(*(_QWORD *)a2 + 8 * v29);
    if ( *(unsigned __int64 **)a2 != v30 )
    {
      v31 = *(_QWORD **)a2;
      if ( *v28 == v23 )
        goto LABEL_43;
      do
      {
        if ( v30 == ++v31 )
          break;
      }
      while ( v23 != *v31 );
    }
    if ( (unsigned int)v29 < *(_DWORD *)(a2 + 8) )
    {
      *(_DWORD *)(a2 + 12) = v29 + 1;
      *v30 = v23;
      v28 = *(_QWORD **)a2;
      v31 = (_QWORD *)(*(_QWORD *)a2 + 8 * v29);
    }
    else
    {
LABEL_55:
      v31 = (_QWORD *)sub_2236760(a2, v23);
      v27 = *(_BYTE *)(a2 + 20);
      v28 = *(_QWORD **)a2;
      if ( !v27 )
      {
        v32 = &v28[*(unsigned int *)(a2 + 8)];
        goto LABEL_44;
      }
    }
LABEL_43:
    v27 = v21;
    v32 = &v28[*(unsigned int *)(a2 + 12)];
LABEL_44:
    if ( v32 != v31 && *v31 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v33 = v31 + 1;
      do
      {
        v34 = v33;
        if ( v32 == v33 )
          break;
        ++v33;
      }
      while ( *v34 >= 0xFFFFFFFFFFFFFFFELL );
    }
    if ( v17 + 1 == v22 )
      goto LABEL_54;
    v23 = v17[1];
    if ( v23 >= 0xFFFFFFFFFFFFFFFELL )
      break;
    ++v17;
  }
  v35 = v17 + 2;
  while ( 1 )
  {
    v17 = v35;
    if ( v35 == v22 )
      break;
    v23 = *v35++;
    if ( v23 < 0xFFFFFFFFFFFFFFFELL )
      goto LABEL_35;
  }
LABEL_54:
  v16 = *(_BYTE *)(a4 + 20);
LABEL_22:
  if ( v16 )
    goto LABEL_27;
LABEL_23:
  v25 = 4 * (*(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 16));
  v26 = *(unsigned int *)(a4 + 8);
  if ( v25 < 0x20 )
    v25 = 32;
  if ( (unsigned int)v26 <= v25 )
  {
    memset(*(void **)a4, -1, 8 * v26);
    goto LABEL_27;
  }
  sub_22364B0(a4);
}
