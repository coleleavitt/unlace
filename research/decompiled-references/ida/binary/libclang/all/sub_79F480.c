char __fastcall sub_79F480(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r12
  __int64 v6; // rbx
  __int64 v7; // r15
  char v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r9
  __int64 *v12; // rcx
  int v13; // esi
  unsigned int v14; // edx
  __int64 *v15; // rax
  __int64 v16; // r11
  __int64 v17; // rdx
  int v18; // esi
  int v19; // r9d
  __int64 *v20; // rdi
  __int64 v21; // rax
  __int64 *v22; // r13
  __int64 v23; // rcx
  __int64 v24; // rbp
  unsigned __int64 *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rsi
  unsigned __int64 v31; // rcx
  unsigned int v32; // esi
  __int64 *v33; // rbp
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rbx
  unsigned int v39; // edx
  unsigned int v40; // eax
  int v41; // ecx
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rcx
  _QWORD *v46; // rdx
  __int64 v47; // rsi
  unsigned __int64 v48; // rcx
  _QWORD *v49; // rcx
  unsigned __int64 v50; // r13
  __int64 v51; // rcx
  _QWORD *v52; // rdx
  __int64 v53; // rsi
  unsigned __int64 v54; // rcx
  int v55; // eax
  int v56; // r10d
  __int64 v57; // rax
  __int64 v58; // rsi
  __int64 *v60; // [rsp+8h] [rbp-40h] BYREF

  v4 = a2;
  v6 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    v43 = sub_79A2E0(a1);
    if ( (*(_BYTE *)(v43 + 28) & 0x7F) != 0 )
      v43 = sub_793320(v43);
    v6 = sub_79C6E0((__int64 *)a1, *(_QWORD *)(v43 + 88));
  }
  v7 = *(_QWORD *)(a2 + 40);
  v8 = *(_BYTE *)v6 & 1;
  if ( !a3 )
  {
    v9 = sub_79A2E0(a1);
    if ( (*(_BYTE *)(v9 + 28) & 0x7F) != 0 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(sub_793320(v9) + 88) + 18200LL);
      if ( !v10 )
        goto LABEL_10;
    }
    else
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 88) + 18200LL);
      if ( !v10 )
        goto LABEL_10;
    }
    if ( (*(_BYTE *)(a1 + 9) & 1) == 0 )
      goto LABEL_10;
    if ( v8 )
    {
      v11 = v6 + 8;
      v12 = (__int64 *)(v6 + 72);
      v13 = 3;
    }
    else
    {
      v11 = *(_QWORD *)(v6 + 8);
      v44 = *(unsigned int *)(v6 + 16);
      v12 = (__int64 *)(v11 + 16 * v44);
      if ( !(_DWORD)v44 )
      {
LABEL_82:
        v49 = (_QWORD *)(*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
          v49 = (_QWORD *)*v49;
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*(_QWORD *)v10 + 72LL))(v10, a1, v7, v49);
        v7 = *(_QWORD *)(v4 + 40);
        v8 = *(_BYTE *)v6 & 1;
        goto LABEL_10;
      }
      v13 = v44 - 1;
    }
    v14 = v13 & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
    v15 = (__int64 *)(v11 + 16LL * v14);
    v16 = *v15;
    if ( *v15 == v7 )
    {
LABEL_9:
      if ( v15 != v12 )
        goto LABEL_10;
    }
    else
    {
      v55 = 1;
      while ( v16 != -1 )
      {
        v56 = v55 + 1;
        v57 = v13 & (v14 + v55);
        v14 = v57;
        v15 = (__int64 *)(v11 + 16 * v57);
        v16 = *v15;
        if ( *v15 == v7 )
          goto LABEL_9;
        v55 = v56;
      }
    }
    goto LABEL_82;
  }
LABEL_10:
  if ( v8 )
  {
    v17 = v6 + 8;
    v18 = 3;
  }
  else
  {
    v32 = *(_DWORD *)(v6 + 16);
    if ( !v32 )
      goto LABEL_72;
    v17 = *(_QWORD *)(v6 + 8);
    v18 = v32 - 1;
  }
  v19 = 1;
  v20 = nullptr;
  LODWORD(v21) = v18 & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
  v22 = (__int64 *)(v17 + 16LL * (unsigned int)v21);
  v23 = *v22;
  if ( v7 != *v22 )
  {
    while ( v23 != -1 )
    {
      if ( v23 == -2 && !v20 )
        v20 = v22;
      v21 = v18 & (unsigned int)(v21 + v19);
      v22 = (__int64 *)(v17 + 16 * v21);
      v23 = *v22;
      if ( *v22 == v7 )
        goto LABEL_13;
      ++v19;
    }
    if ( !v20 )
      v20 = v22;
    v60 = v20;
    if ( v8 )
    {
      v39 = 12;
      v32 = 4;
    }
    else
    {
      v32 = *(_DWORD *)(v6 + 16);
      v39 = 3 * v32;
    }
    v40 = *(_DWORD *)v6;
    v41 = (*(_DWORD *)v6 >> 1) + 1;
    if ( 4 * v41 < v39 )
    {
      if ( v32 >> 3 < v32 - *(_DWORD *)(v6 + 4) - v41 )
      {
LABEL_51:
        *(_DWORD *)v6 = (2 * (v40 >> 1) + 2) | v40 & 1;
        v26 = (__int64)v60;
        if ( *v60 != -1 )
          --*(_DWORD *)(v6 + 4);
        *(_QWORD *)v26 = v7;
        v25 = (unsigned __int64 *)(v26 + 8);
        if ( a3 )
        {
          *(_QWORD *)(v26 + 8) = 2;
          LOBYTE(v24) = 0;
          goto LABEL_61;
        }
        *(_QWORD *)(v26 + 8) = 0;
        LOBYTE(v24) = 0;
LABEL_55:
        *v25 = v24 & 3 | v4 & 0xFFFFFFFFFFFFFFFBLL;
        return v26;
      }
LABEL_73:
      sub_79E7C0(v6, v32);
      sub_793010(v6, v7, &v60);
      v40 = *(_DWORD *)v6;
      goto LABEL_51;
    }
LABEL_72:
    v32 *= 2;
    goto LABEL_73;
  }
LABEL_13:
  v24 = v22[1];
  v25 = (unsigned __int64 *)(v22 + 1);
  v26 = v24 & 0xFFFFFFFFFFFFFFFCLL;
  if ( a3 )
  {
    v22[1] = v24 | 2;
    if ( (unsigned __int64)v26 > 7 )
    {
      v27 = v4;
      if ( (*(_BYTE *)(v4 + 28) & 0x7F) != 0 )
        v27 = sub_793320(v4);
      v28 = *(_QWORD **)(v27 + 88);
      v29 = v28[2167];
      if ( v29 )
      {
        v30 = *(_QWORD *)(v29 + 8);
        v31 = 0;
        if ( v30 && (v30 & 4) != 0 )
          v31 = v30 & 0xFFFFFFFFFFFFFFF8LL;
        v28[2167] = v31;
        *(_QWORD *)v29 = v4;
        *(_QWORD *)(v29 + 8) = 0;
      }
      else
      {
        v45 = v28[274];
        v28[284] += 16LL;
        v29 = (v45 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v28[275] >= v29 + 16 && v45 )
          v28[274] = v29 + 16;
        else
          v29 = sub_792ED0((__int64)(v28 + 274), 16, 3);
        *(_QWORD *)v29 = v4;
        *(_QWORD *)(v29 + 8) = 0;
      }
      *(_QWORD *)(v29 + 8) = v22[1] & 0xFFFFFFFFFFFFFFFCLL;
LABEL_23:
      v26 = v22[1] & 3 | v29 | 4;
      v22[1] = v26;
      return v26;
    }
LABEL_61:
    *v25 = v24 & 3 | v4 & 0xFFFFFFFFFFFFFFFBLL | 2;
    return v26;
  }
  if ( (unsigned __int64)v26 <= 7 )
    goto LABEL_55;
  v33 = (__int64 *)(v24 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v22[1] & 4) == 0 )
  {
    v38 = v4 & 0xFFFFFFFFFFFFFFFBLL;
    if ( sub_77A8A0(v4, (__int64)v33, 1, v23) )
    {
      v26 = v38 | v22[1] & 3;
      v22[1] = v26;
      return v26;
    }
    if ( (*(_BYTE *)(v4 + 28) & 0x7F) != 0 )
      v4 = sub_793320(v4);
    v46 = *(_QWORD **)(v4 + 88);
    v29 = v46[2167];
    if ( v29 )
    {
      v47 = *(_QWORD *)(v29 + 8);
      v48 = 0;
      if ( v47 && (v47 & 4) != 0 )
        v48 = v47 & 0xFFFFFFFFFFFFFFF8LL;
      v46[2167] = v48;
      *(_QWORD *)v29 = v33;
      *(_QWORD *)(v29 + 8) = 0;
    }
    else
    {
      v51 = v46[274];
      v46[284] += 16LL;
      v29 = (v51 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v46[275] >= v29 + 16 && v51 )
        v46[274] = v29 + 16;
      else
        v29 = sub_792ED0((__int64)(v46 + 274), 16, 3);
      *(_QWORD *)v29 = v33;
      *(_QWORD *)(v29 + 8) = 0;
    }
    *(_QWORD *)(v29 + 8) = v38;
    goto LABEL_23;
  }
  if ( ((v26 >> 2) & 1) == 0 )
    v33 = nullptr;
  while ( 1 )
  {
    while ( 1 )
    {
      LOBYTE(v26) = sub_77A8A0(v4, *v33, 1, v23);
      if ( (_BYTE)v26 )
      {
        *v33 = v4;
        return v26;
      }
      v34 = v33[1];
      if ( v34 )
        break;
LABEL_34:
      v33 = nullptr;
    }
    v35 = v34 >> 2;
    if ( (v34 & 4) == 0 )
      break;
    v42 = v34 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v35 & 1) == 0 )
      v42 = 0;
    v33 = (__int64 *)v42;
  }
  v36 = v34 & 0xFFFFFFFFFFFFFFF8LL;
  v37 = v36;
  if ( !v36 )
    goto LABEL_34;
  LOBYTE(v26) = sub_77A8A0(v4, v36, 1, v23);
  v50 = v4 & 0xFFFFFFFFFFFFFFFBLL;
  if ( (_BYTE)v26 )
  {
    v33[1] = v50;
  }
  else
  {
    if ( (*(_BYTE *)(v4 + 28) & 0x7F) != 0 )
      v4 = sub_793320(v4);
    v52 = *(_QWORD **)(v4 + 88);
    v26 = v52[2167];
    if ( v26 )
    {
      v53 = *(_QWORD *)(v26 + 8);
      v54 = 0;
      if ( v53 && (v53 & 4) != 0 )
        v54 = v53 & 0xFFFFFFFFFFFFFFF8LL;
      v52[2167] = v54;
      *(_QWORD *)v26 = v37;
      *(_QWORD *)(v26 + 8) = 0;
    }
    else
    {
      v58 = v52[274];
      v52[284] += 16LL;
      v26 = (v58 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v52[275] >= (unsigned __int64)(v26 + 16) && v58 )
        v52[274] = v26 + 16;
      else
        v26 = sub_792ED0((__int64)(v52 + 274), 16, 3);
      *(_QWORD *)v26 = v37;
      *(_QWORD *)(v26 + 8) = 0;
    }
    v33[1] = v26 | 4;
    *(_QWORD *)(v26 + 8) = v50;
  }
  return v26;
}

