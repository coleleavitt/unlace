__int64 __fastcall sub_C0CE80(__int64 a1, __int64 a2)
{
  __int64 (*v3)(); // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rcx
  unsigned int i; // ebp
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 (*v25)(); // rdx
  __int64 v27; // r14
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  _DWORD *v32; // rax
  __int64 v33; // rdi
  int v34; // edx
  __int64 v35; // r15
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  _DWORD *v40; // rax
  __int64 v41; // rdi
  int v42; // edx
  __int64 v43; // r14
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  _DWORD *v48; // rax
  __int64 v49; // rdi
  int v50; // edx

  v3 = *(__int64 (**)())(*(_QWORD *)a2 + 32LL);
  if ( v3 == sub_9DD400 )
    v6 = sub_B4CD20(a2);
  else
    v6 = ((__int64 (__fastcall *)(__int64))v3)(a2);
  v7 = *(_QWORD *)(a1 + 104);
  v8 = *(_QWORD *)(v7 + 96);
  v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v8 & 1) == 0 )
  {
    v10 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v8 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v8 & 2) == 0 )
        goto LABEL_6;
      v43 = v10[2295];
      v44 = v7 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v43 )
      {
        v45 = v10[294];
        v10[304] += 24LL;
        v46 = (v45 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v10[295] >= v46 + 24 && v45 )
        {
          v10[294] = v46 + 24;
          v47 = (v45 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v47 = sub_962430((__int64)(v10 + 294), 24, 24, 3, v4, v5);
          v46 = v47 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v47 = v43;
        v44 = v46 | 4;
        *(_DWORD *)(v47 + 8) = 0;
        *(_QWORD *)(v47 + 16) = v7;
      }
      v9 = v44 & 0xFFFFFFFFFFFFFFFELL;
      v8 = v9 | 1;
      *(_QWORD *)(v7 + 96) = v9 | 1;
    }
  }
  if ( v9 )
  {
    if ( (v9 & 4) != 0 )
    {
      v48 = (_DWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v48 )
      {
        v49 = *(_QWORD *)v48;
        v50 = *(_DWORD *)(*(_QWORD *)v48 + 12LL);
        if ( v48[2] != v50 )
        {
          v48[2] = v50;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v49 + 152LL))(v49, v7);
          v11 = *(_QWORD *)(a1 + 128);
          if ( (*(_BYTE *)(v11 + 24) & 1) == 0 )
            goto LABEL_7;
LABEL_57:
          v12 = sub_B72C40(v11);
          goto LABEL_8;
        }
      }
    }
  }
LABEL_6:
  v11 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v11 + 24) & 1) != 0 )
    goto LABEL_57;
LABEL_7:
  v12 = *(_QWORD *)(v11 + 24);
LABEL_8:
  v13 = *(_QWORD *)(a1 + 104);
  v14 = *(_QWORD *)(v13 + 96);
  v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v14 & 1) == 0 )
  {
    v16 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v14 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v14 & 2) == 0 )
        goto LABEL_11;
      v35 = v16[2295];
      v36 = v13 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v35 )
      {
        v37 = v16[294];
        v16[304] += 24LL;
        v38 = (v37 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v16[295] >= v38 + 24 && v37 )
        {
          v16[294] = v38 + 24;
          v39 = (v37 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v39 = sub_962430((__int64)(v16 + 294), 24, 24, 3, v4, v5);
          v38 = v39 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v39 = v35;
        v36 = v38 | 4;
        *(_DWORD *)(v39 + 8) = 0;
        *(_QWORD *)(v39 + 16) = v13;
      }
      v15 = v36 & 0xFFFFFFFFFFFFFFFELL;
      v14 = v15 | 1;
      *(_QWORD *)(v13 + 96) = v15 | 1;
    }
  }
  if ( v15 )
  {
    if ( (v15 & 4) != 0 )
    {
      v40 = (_DWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v40 )
      {
        v41 = *(_QWORD *)v40;
        v42 = *(_DWORD *)(*(_QWORD *)v40 + 12LL);
        if ( v40[2] != v42 )
        {
          v40[2] = v42;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 152LL))(v41, v13);
          v17 = *(_QWORD *)(a1 + 128);
          if ( (*(_BYTE *)(v17 + 24) & 1) == 0 )
            goto LABEL_12;
LABEL_45:
          sub_B72C40(v17);
          goto LABEL_12;
        }
      }
    }
  }
LABEL_11:
  v17 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v17 + 24) & 1) != 0 )
    goto LABEL_45;
LABEL_12:
  v18 = *(_QWORD *)(a1 + 104);
  v19 = *(_QWORD *)(v18 + 96);
  v20 = v19 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v19 & 1) != 0 || (v21 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL), (v19 & 0xFFFFFFFFFFFFFFFCLL) == 0) )
  {
LABEL_29:
    if ( v20 )
    {
      if ( (v20 & 4) != 0 )
      {
        v32 = (_DWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v32 )
        {
          v33 = *(_QWORD *)v32;
          v34 = *(_DWORD *)(*(_QWORD *)v32 + 12LL);
          if ( v32[2] != v34 )
          {
            v32[2] = v34;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 152LL))(v33, v18);
          }
        }
      }
    }
    goto LABEL_15;
  }
  if ( (v19 & 2) != 0 )
  {
    v27 = v21[2295];
    v28 = v18 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v27 )
    {
      v29 = v21[294];
      v21[304] += 24LL;
      v30 = (v29 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v21[295] >= v30 + 24 && v29 )
      {
        v21[294] = v30 + 24;
        v31 = (v29 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v31 = sub_962430((__int64)(v21 + 294), 24, 24, 3, v4, v5);
        v30 = v31 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v31 = v27;
      v28 = v30 | 4;
      *(_DWORD *)(v31 + 8) = 0;
      *(_QWORD *)(v31 + 16) = v18;
    }
    v20 = v28 & 0xFFFFFFFFFFFFFFFELL;
    v19 = v20 | 1;
    *(_QWORD *)(v18 + 96) = v20 | 1;
    goto LABEL_29;
  }
LABEL_15:
  for ( i = 0; ; ++i )
  {
    v23 = *(_QWORD *)(**(_QWORD **)(v12 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v23 + 8) & 0xF) != 0 )
      v23 = sub_F411C0(**(_QWORD **)(v12 + 16));
    v24 = sub_F3F530(*(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL));
    v25 = *(__int64 (**)())(*(_QWORD *)v24 + 32LL);
    if ( v25 != sub_9DD400 )
      break;
    if ( sub_B4CD20(v24) == v6 )
      return i;
LABEL_17:
    v12 += 24;
  }
  if ( ((__int64 (__fastcall *)(__int64))v25)(v24) != v6 )
    goto LABEL_17;
  return i;
}

