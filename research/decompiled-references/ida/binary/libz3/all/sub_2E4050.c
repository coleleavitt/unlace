__int64 *__fastcall sub_2E4050(__int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 (*v5)(void); // rax
  __int64 v6; // r12
  __int64 v7; // rdx
  unsigned __int64 v8; // r9
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // r10
  __int64 v16; // rsi
  __int64 v17; // rbx
  int v18; // edx
  _QWORD *v19; // r14
  _QWORD *v20; // rax
  _DWORD *v21; // rdx
  void *v22; // r13
  int v23; // eax
  _QWORD *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // r13
  void *v27; // rdi
  int v28; // edx
  __int64 v29; // rdi
  __int64 v30; // rax
  int v31; // eax
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rax
  char *v35; // rbx
  void *v36; // r12
  void *v37; // rbx
  int v39; // edx
  _QWORD *v40; // rax
  void *v41; // rdi
  int v42; // eax
  int v43; // [rsp+0h] [rbp-88h]
  void *v45; // [rsp+10h] [rbp-78h]
  __int64 v46; // [rsp+18h] [rbp-70h]
  __int64 v47; // [rsp+20h] [rbp-68h] BYREF
  char v48; // [rsp+28h] [rbp-60h]
  void *ptr[2]; // [rsp+30h] [rbp-58h] BYREF
  int v50; // [rsp+40h] [rbp-48h]
  void *v51; // [rsp+48h] [rbp-40h]

  v5 = *(__int64 (**)(void))(**(_QWORD **)a2 + 72LL);
  if ( (char *)v5 == (char *)sub_2DD1A0 )
    v6 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  else
    v6 = v5();
  sub_16669D0(&v47, v6);
  LOBYTE(v50) = 0;
  v7 = *(unsigned int *)(a2 + 80);
  *(_OWORD *)ptr = 0;
  v8 = *a3;
  v9 = *(_QWORD *)(a2 + 72);
  if ( *a3 )
  {
    if ( (*a3 & 7) == 1 )
      v10 = v8 >> 3;
    else
      LODWORD(v10) = *(_DWORD *)(v8 - 8);
  }
  else
  {
    LODWORD(v10) = -1640531495;
  }
  v11 = v7 - 1;
  v12 = 40 * v7;
  v13 = 5LL * ((unsigned int)v10 & v11);
  v14 = v9 + v12;
  v15 = 8 * v13;
  v16 = v9 + v15;
  if ( v15 == v12 )
  {
LABEL_35:
    while ( v16 != v9 )
    {
      v39 = *(_DWORD *)(v9 + 4);
      if ( v39 == 2 )
      {
        if ( (_DWORD)v10 == *(_DWORD *)v9 && v8 == *(_QWORD *)(v9 + 8) )
        {
          v17 = v9;
          goto LABEL_13;
        }
      }
      else if ( !v39 )
      {
        break;
      }
      v9 += 40;
    }
LABEL_43:
    v40 = (_QWORD *)sub_186B270(0x20u);
    *v40 = 0;
    v19 = v40;
    v40[1] = 0;
    v40[2] = 1;
    v40[3] = 0;
    v41 = qword_1C7F2C0;
    if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
    {
      v45 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, v40, &qword_1C7F2A0);
      v41 = v45;
    }
    else
    {
      *(_DWORD *)v40 = qword_1C7F2A0;
    }
    if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
    {
      sub_182C690(v41, v19 + 2, &qword_1C7F2B0);
    }
    else
    {
      v42 = qword_1C7F2B0;
      *((_BYTE *)v19 + 20) &= ~1u;
      *((_DWORD *)v19 + 4) = v42;
    }
    ptr[0] = v19;
    sub_2DC5E0((char **)(a2 + 72), *a3, (__int64)ptr);
    v29 = v47;
    goto LABEL_48;
  }
  v17 = v9 + v15;
  while ( 1 )
  {
    v18 = *(_DWORD *)(v17 + 4);
    if ( v18 != 2 )
    {
      if ( !v18 )
        goto LABEL_43;
      goto LABEL_9;
    }
    if ( (_DWORD)v10 == *(_DWORD *)v17 && *(_QWORD *)(v17 + 8) == v8 )
      break;
LABEL_9:
    v17 += 40;
    if ( v14 == v17 )
      goto LABEL_35;
  }
LABEL_13:
  v19 = *(_QWORD **)(v17 + 16);
  if ( v19 )
  {
    v20 = (_QWORD *)sub_186B270(0x20u);
    v21 = *(_DWORD **)(v17 + 16);
    v19 = v20;
    *v20 = 0;
    v20[1] = 0;
    v20[2] = 1;
    v20[3] = 0;
    v22 = qword_1C7F2C0;
    if ( (v21[1] & 1) != 0 )
    {
      v45 = v21;
      sub_182C690(qword_1C7F2C0, v20, v21);
      v21 = v45;
    }
    else
    {
      *(_DWORD *)v20 = *v21;
    }
    if ( (v21[5] & 1) != 0 )
    {
      sub_182C690(v22, v19 + 2, v21 + 4);
    }
    else
    {
      v23 = v21[4];
      *((_BYTE *)v19 + 20) &= ~1u;
      *((_DWORD *)v19 + 4) = v23;
    }
    ptr[0] = v19;
  }
  if ( *(_QWORD *)(v17 + 24) )
  {
    v24 = (_QWORD *)sub_186B270(0x20u);
    v25 = *(_QWORD *)(v17 + 24);
    v26 = v24;
    *v24 = 0;
    v24[1] = 0;
    v24[2] = 1;
    v27 = qword_1C7F2C0;
    v24[3] = 0;
    if ( (*(_BYTE *)(v25 + 4) & 1) != 0 )
    {
      v46 = v25;
      LODWORD(v45) = (_DWORD)v27;
      sub_182C690(v27, v24, v25);
      v25 = v46;
    }
    else
    {
      *(_DWORD *)v24 = *(_DWORD *)v25;
    }
    if ( (*(_BYTE *)(v25 + 20) & 1) != 0 )
    {
      sub_182C690(v27, v26 + 2, v25 + 16);
    }
    else
    {
      v28 = *(_DWORD *)(v25 + 16);
      *((_BYTE *)v26 + 20) &= ~1u;
      *((_DWORD *)v26 + 4) = v28;
    }
    ptr[1] = v26;
  }
  v29 = v47;
  LOBYTE(v50) = *(_BYTE *)(v17 + 32);
  if ( (_BYTE)v50 )
  {
    v30 = sub_15D2CD0(v47, 5, 1, 0, 0);
    goto LABEL_27;
  }
LABEL_48:
  v30 = sub_15D2CD0(v29, 5, 0, 0, 0);
LABEL_27:
  v31 = sub_15E3510(v6, a3, 0, 0, v30, 0);
  v34 = sub_15DC610(v6, v31, 0, 0, v32, v33, v43, (int)a3, (int)v45, v46, v47, v48, (int)ptr[0], (int)ptr[1], v50, v51);
  *a1 = v34;
  a1[1] = v6;
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  v35 = (char *)ptr[1];
  if ( ptr[1] )
  {
    v36 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, ptr[1]);
    sub_182CBA0(v36, v35 + 16);
    sub_186B220(v35);
  }
  if ( v19 )
  {
    v37 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v19);
    sub_182CBA0(v37, v19 + 2);
    sub_186B220(v19);
  }
  return a1;
}

