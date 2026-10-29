char __fastcall sub_B93950(__int64 a1, unsigned __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // r12
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rax
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  __int64 *v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdi
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rsi
  int v24; // eax
  int v25; // eax
  unsigned int v26; // esi
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rbx
  unsigned __int64 v30; // r13
  __int64 *v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // rbp
  __int64 v37; // rax
  unsigned __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 v43; // r13
  __int64 v44; // rax
  __int64 v45; // rdi
  int v46; // ecx
  int v47; // ecx
  unsigned int v48; // eax
  __int64 v49; // rdx
  _QWORD *v50; // rcx
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  int v54; // edx
  __int64 v56; // [rsp+0h] [rbp-38h] BYREF
  _QWORD *v57; // [rsp+8h] [rbp-30h] BYREF

  v7 = a2;
  v9 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    v52 = sub_B8C1B0(a1);
    if ( (*(_BYTE *)(v52 + 28) & 0x7F) != 0 )
      v52 = sub_B8C2C0(v52);
    v9 = sub_B8EF10((unsigned __int64 *)a1, *(_QWORD *)(v52 + 88));
  }
  v10 = *(_QWORD *)(a2 + 40);
  if ( !a3 )
  {
    v44 = sub_B8C1B0(a1);
    if ( (*(_BYTE *)(v44 + 28) & 0x7F) != 0 )
      v44 = sub_B8C2C0(v44);
    v45 = *(_QWORD *)(*(_QWORD *)(v44 + 88) + 18360LL);
    if ( v45 )
    {
      if ( (*(_BYTE *)(a1 + 9) & 1) != 0 )
      {
        if ( (*(_BYTE *)v9 & 1) != 0 )
        {
          a5 = v9 + 8;
          v47 = 3;
        }
        else
        {
          v46 = *(_DWORD *)(v9 + 16);
          a5 = *(_QWORD *)(v9 + 8);
          if ( !v46 )
          {
LABEL_49:
            v50 = (_QWORD *)(*(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL);
            if ( (*(_QWORD *)(v7 + 16) & 4) != 0 )
              v50 = (_QWORD *)*v50;
            (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*(_QWORD *)v45 + 72LL))(v45, a1, v10, v50);
            v10 = *(_QWORD *)(v7 + 40);
            goto LABEL_3;
          }
          v47 = v46 - 1;
        }
        v48 = v47 & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
        v49 = *(_QWORD *)(a5 + 16LL * v48);
        if ( v49 == v10 )
          goto LABEL_3;
        if ( v49 == -1 )
          goto LABEL_49;
        v54 = 1;
        while ( 1 )
        {
          v48 = v47 & (v54 + v48);
          a6 = *(_QWORD *)(a5 + 16LL * v48);
          if ( a6 == v10 )
            break;
          ++v54;
          if ( a6 == -1 )
            goto LABEL_49;
        }
      }
    }
  }
LABEL_3:
  v56 = v10;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    v11 = v9 + 8;
    v12 = 3;
  }
  else
  {
    v24 = *(_DWORD *)(v9 + 16);
    v11 = *(_QWORD *)(v9 + 8);
    if ( !v24 )
    {
      v14 = nullptr;
      goto LABEL_19;
    }
    v12 = v24 - 1;
  }
  LODWORD(v13) = v12 & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
  v14 = (_QWORD *)(v11 + 16LL * (unsigned int)v13);
  v15 = *v14;
  if ( *v14 == v10 )
  {
LABEL_6:
    v16 = v14 + 1;
    if ( a3 )
    {
LABEL_7:
      v17 = *v16;
      *v16 |= 2uLL;
      if ( (v17 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v18 = v7;
        if ( (*(_BYTE *)(v7 + 28) & 0x7F) != 0 )
          v18 = sub_B8C2C0(v7);
        v19 = *(_QWORD **)(v18 + 88);
        v20 = v19[2187];
        if ( v20 )
        {
          v21 = *(_QWORD *)(v20 + 8);
          v22 = 0;
          if ( v21 && (v21 & 4) != 0 )
            v22 = v21 & 0xFFFFFFFFFFFFFFF8LL;
          v19[2187] = v22;
          *(_QWORD *)v20 = v7;
          v23 = v20 & 0xFFFFFFFFFFFFFFFBLL;
          *(_QWORD *)(v20 + 8) = 0;
        }
        else
        {
          v53 = v19[294];
          v19[304] += 16LL;
          v23 = (v53 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v19[295] >= v23 + 16 && v53 )
          {
            v19[294] = v23 + 16;
            v20 = (v53 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v20 = sub_986170((__int64)(v19 + 294), 16, 16, 3, a5, a6);
            v23 = v20 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v20 = v7;
          *(_QWORD *)(v20 + 8) = 0;
        }
        *(_QWORD *)(v20 + 8) = *v16 & 0xFFFFFFFFFFFFFFFCLL;
        v13 = v23 | *v16 & 3 | 4;
        *v16 = v13;
      }
      else
      {
        v13 = v7 & 0xFFFFFFFFFFFFFFFBLL | v17 & 1 | 2;
        *v16 = v13;
      }
      return v13;
    }
    goto LABEL_26;
  }
  a5 = 1;
  a6 = 0;
  if ( v15 != -1 )
  {
    while ( 1 )
    {
      if ( !a6 && v15 == -2 )
        a6 = (__int64)v14;
      LODWORD(v13) = v12 & (a5 + v13);
      v14 = (_QWORD *)(v11 + 16LL * (unsigned int)v13);
      v15 = *v14;
      if ( *v14 == v10 )
        goto LABEL_6;
      if ( v15 == -1 )
        break;
      a5 = (unsigned int)(a5 + 1);
    }
    if ( a6 )
      v14 = (_QWORD *)a6;
  }
LABEL_19:
  v57 = v14;
  v25 = (*(_DWORD *)v9 >> 1) + 1;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    v27 = 12;
    v26 = 4;
  }
  else
  {
    v26 = *(_DWORD *)(v9 + 16);
    v27 = 3 * v26;
  }
  v28 = (unsigned int)(4 * v25);
  if ( (unsigned int)v28 >= (unsigned int)v27 )
  {
    v26 *= 2;
  }
  else
  {
    v28 = v26 - (v25 + *(_DWORD *)(v9 + 4));
    v27 = v26 >> 3;
    if ( (unsigned int)v28 > (unsigned int)v27 )
      goto LABEL_23;
  }
  sub_B928B0(v9, v26, v27, v28, a5, a6);
  sub_B8FEB0(v9, &v56, &v57);
  v25 = (*(_DWORD *)v9 >> 1) + 1;
LABEL_23:
  *(_DWORD *)v9 = *(_DWORD *)v9 & 1 | (2 * v25);
  v29 = v57;
  if ( *v57 != -1 )
    --*(_DWORD *)(v9 + 4);
  v13 = v56;
  v29[1] = 0;
  v16 = v29 + 1;
  *(v16 - 1) = v13;
  if ( a3 )
    goto LABEL_7;
LABEL_26:
  v30 = *v16 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v30 )
  {
    *v16 = v7 & 0xFFFFFFFFFFFFFFFBLL | *v16 & 3;
    return v13;
  }
  v31 = (__int64 *)(*v16 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*v16 & 4) == 0 )
  {
    v36 = v7 & 0xFFFFFFFFFFFFFFFBLL;
    if ( sub_B72D20(v7, *v16 & 0xFFFFFFFFFFFFFFF8LL) )
    {
      v13 = v36 | *v16 & 3;
      *v16 = v13;
    }
    else
    {
      if ( (*(_BYTE *)(v7 + 28) & 0x7F) != 0 )
        v7 = sub_B8C2C0(v7);
      v51 = (unsigned __int64)sub_B90080(*(_QWORD **)(v7 + 88), v30, v32, v33, v34, v35);
      *(_QWORD *)(v51 + 8) = v36;
      v13 = *v16 & 3 | v51 | 4;
      *v16 = v13;
    }
    return v13;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      LOBYTE(v13) = sub_B72D20(v7, *v31);
      if ( (_BYTE)v13 )
      {
        *v31 = v7;
        return v13;
      }
      v37 = v31[1];
      if ( v37 )
        break;
LABEL_30:
      v31 = nullptr;
    }
    v38 = v37 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v37 & 4) == 0 )
      break;
    v31 = (__int64 *)(v37 & 0xFFFFFFFFFFFFFFF8LL);
  }
  if ( !v38 )
    goto LABEL_30;
  LOBYTE(v13) = sub_B72D20(v7, v37 & 0xFFFFFFFFFFFFFFF8LL);
  v43 = v7 & 0xFFFFFFFFFFFFFFFBLL;
  if ( (_BYTE)v13 )
  {
    v31[1] = v43;
  }
  else
  {
    if ( (*(_BYTE *)(v7 + 28) & 0x7F) != 0 )
      v7 = sub_B8C2C0(v7);
    v13 = (__int64)sub_B90080(*(_QWORD **)(v7 + 88), v38, v39, v40, v41, v42);
    v31[1] = v13 | 4;
    *(_QWORD *)(v13 + 8) = v43;
  }
  return v13;
}
