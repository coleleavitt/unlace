__int64 __fastcall sub_8595B0(__int64 *a1, unsigned int *a2, __int64 a3)
{
  char **exception; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // rdx
  unsigned int *v8; // rax
  __int64 v9; // r15
  __int64 v10; // rcx
  _QWORD *v11; // rbp
  _QWORD *v12; // rax
  unsigned int v13; // eax
  size_t v14; // rdi
  unsigned int *v15; // rax
  int *v16; // r12
  __int64 v17; // rdi
  _DWORD *v18; // rdx
  int *v19; // rax
  int *v20; // rdi
  int v21; // ecx
  char v22; // si
  __int64 v23; // rcx
  char v24; // si
  __int64 v25; // rcx
  __int64 v26; // rbx
  int *v27; // rbx
  void *v28; // r13
  int *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r8
  _QWORD *v33; // rsi
  __int64 v34; // rdi
  _QWORD *v35; // rax
  __int64 v36; // rax
  void *v37; // r13
  int v38; // eax
  int v39; // eax
  __int64 v40; // rbx
  _QWORD *v41; // rdx
  __int64 v42; // rax
  unsigned int *v43; // rax
  unsigned int v44; // ebp
  unsigned int v45; // ecx
  unsigned int *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  _QWORD *v49; // r13
  _QWORD *v50; // rbx
  void *v51; // rbp
  _QWORD *v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rax
  _QWORD *v55; // rax
  unsigned int v57; // [rsp+10h] [rbp-88h]
  unsigned int *v58; // [rsp+18h] [rbp-80h]
  unsigned int v59; // [rsp+24h] [rbp-74h]
  unsigned int v60; // [rsp+28h] [rbp-70h]
  unsigned int v61; // [rsp+2Ch] [rbp-6Ch]
  __int64 v62[11]; // [rsp+40h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1[10] + 1720);
  if ( v4 )
  {
    v5 = *a2;
    if ( (unsigned int)v5 < *(_DWORD *)(v4 - 4) )
    {
      if ( *(_QWORD *)(v4 + 8 * v5) )
        return sub_852C00((__int64)a1, a2);
    }
  }
  sub_8591A0(a1, (__int64)a2, a3);
  v7 = *(_QWORD *)(a3 + 8);
  v8 = *(unsigned int **)(v7 + 24);
  if ( v8 )
  {
    if ( *(v8 - 1) == 1 )
    {
      v30 = *(_QWORD *)(v7 + 16);
      if ( (*(_BYTE *)(v30 + 4) & 1) == 0
        && *(_DWORD *)v30 == 1
        && (*(_BYTE *)(v30 + 20) & 1) == 0
        && *(_DWORD *)(v30 + 16) == 1 )
      {
        return *v8;
      }
    }
  }
  v60 = sub_852C00((__int64)a1, a2);
  v9 = *(_QWORD *)(a3 + 8);
  v10 = *(_QWORD *)(v9 + 24);
  v11 = *(_QWORD **)(v9 + 16);
  if ( v10 )
  {
    v59 = *(_DWORD *)(v10 - 4) + 1;
    if ( v11 )
    {
LABEL_9:
      v61 = *((_DWORD *)v11 - 1);
      if ( v61 < v59 )
        goto LABEL_10;
      v47 = 32LL * v59;
      v48 = 32LL * v61;
      v49 = &v11[(unsigned __int64)v47 / 8];
      v50 = &v11[(unsigned __int64)v48 / 8];
      if ( v47 == v48 )
      {
        v53 = *(_QWORD *)(v9 + 16);
      }
      else
      {
        do
        {
          v51 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v49);
          v52 = v49 + 2;
          v49 += 4;
          sub_182CBA0(v51, v52);
        }
        while ( v50 != v49 );
        v53 = *(_QWORD *)(v9 + 16);
        v54 = *(_QWORD *)(a3 + 8);
        v10 = *(_QWORD *)(v54 + 24);
        v11 = *(_QWORD **)(v54 + 16);
      }
      *(_DWORD *)(v53 - 4) = v59;
      goto LABEL_29;
    }
    if ( *(_DWORD *)(v10 - 4) == -1 )
    {
      v36 = 0xFFFFFFFFLL;
      goto LABEL_31;
    }
  }
  else
  {
    v59 = 1;
    if ( v11 )
      goto LABEL_9;
  }
  v61 = 0;
  v12 = (_QWORD *)sub_186B270(0x48u);
  v11 = v12 + 1;
  *v12 = 2;
  *(_QWORD *)(v9 + 16) = v12 + 1;
LABEL_10:
  while ( 1 )
  {
    v13 = *((_DWORD *)v11 - 2);
    if ( v13 >= v59 )
      break;
    v57 = (3 * v13 + 1) >> 1;
    v14 = 32 * v57 + 8;
    if ( 32 * v13 + 8 >= (unsigned int)v14 || v13 >= (3 * v13 + 1) >> 1 )
      goto LABEL_56;
    v15 = (unsigned int *)sub_186B270(v14);
    v16 = *(int **)(v9 + 16);
    v58 = v15;
    v11 = v15 + 2;
    if ( v16 )
    {
      v17 = (unsigned int)*(v16 - 1);
      v18 = v15 + 2;
      v15[1] = v17;
      v19 = v16;
      v20 = &v16[8 * v17];
      if ( v16 != v20 )
      {
        do
        {
          v21 = *v19;
          v22 = *((_BYTE *)v19 + 4);
          v19 += 8;
          v18 += 8;
          *(v18 - 8) = v21;
          *((_BYTE *)v18 - 28) = v22 & 3 | *(_BYTE *)(v18 - 7) & 0xFC;
          v23 = *((_QWORD *)v19 - 3);
          *((_QWORD *)v19 - 3) = 0;
          *((_QWORD *)v18 - 3) = v23;
          v24 = *((_BYTE *)v19 - 12);
          *(v18 - 4) = *(v19 - 4);
          *((_BYTE *)v18 - 12) = v24 & 3 | *(_BYTE *)(v18 - 3) & 0xFC;
          v25 = *((_QWORD *)v19 - 1);
          *((_QWORD *)v19 - 1) = 0;
          *((_QWORD *)v18 - 1) = v25;
        }
        while ( v19 != v20 );
      }
      v26 = (unsigned int)*(v16 - 1);
      if ( (_DWORD)v26 )
      {
        v27 = &v16[8 * v26];
        do
        {
          v28 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v16);
          v29 = v16 + 4;
          v16 += 8;
          sub_182CBA0(v28, v29);
        }
        while ( v16 != v27 );
        v16 = *(int **)(v9 + 16);
      }
      sub_186B220(v16 - 2);
      *(_QWORD *)(v9 + 16) = v11;
      *v58 = v57;
    }
    else
    {
      v15[1] = 0;
      *(_QWORD *)(v9 + 16) = v11;
      *v15 = v57;
    }
  }
  *((_DWORD *)v11 - 1) = v59;
  v31 = 32LL * v59;
  v32 = *(_QWORD *)(a3 + 8);
  v33 = &v11[(unsigned __int64)v31 / 8];
  v34 = 32LL * v61;
  v35 = &v11[(unsigned __int64)v34 / 8];
  v10 = *(_QWORD *)(v32 + 24);
  v11 = *(_QWORD **)(v32 + 16);
  if ( v34 != v31 )
  {
    do
    {
      *((_OWORD *)v35 + 1) = 0;
      v35 += 4;
      *((_OWORD *)v35 - 2) = 0;
      *((_DWORD *)v35 - 4) = 1;
      *((_BYTE *)v35 - 28) = 0;
      *((_BYTE *)v35 - 12) = 0;
    }
    while ( v33 != v35 );
  }
LABEL_29:
  if ( v10 )
  {
    v36 = *(unsigned int *)(v10 - 4);
LABEL_31:
    v11 += 4 * v36;
  }
  v37 = qword_1C7F2C0;
  if ( (qword_1C7F260 & 0x100000000LL) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v11, &qword_1C7F260);
  }
  else
  {
    v38 = qword_1C7F260;
    *((_BYTE *)v11 + 4) &= ~1u;
    *(_DWORD *)v11 = v38;
  }
  if ( (qword_1C7F270 & 0x100000000LL) != 0 )
  {
    sub_182C690(v37, v11 + 2, &qword_1C7F270);
  }
  else
  {
    v39 = qword_1C7F270;
    *((_BYTE *)v11 + 20) &= ~1u;
    *((_DWORD *)v11 + 4) = v39;
  }
  v40 = *(_QWORD *)(a3 + 8);
  v41 = *(_QWORD **)(v40 + 24);
  if ( v41 )
  {
    v42 = *((unsigned int *)v41 - 1);
    if ( (_DWORD)v42 == *((_DWORD *)v41 - 2) )
    {
      v44 = (unsigned int)(3 * v42 + 1) >> 1;
      v45 = 4 * v44 + 8;
      if ( 4 * (int)v42 + 8 >= v45 || (unsigned int)v42 >= v44 )
      {
LABEL_56:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v62, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v62);
        sub_233E40((__int64)v62);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v46 = (unsigned int *)sub_186B300(v41 - 1, v45);
      v41 = v46 + 2;
      *(_QWORD *)(v40 + 24) = v46 + 2;
      *v46 = v44;
      v43 = &v46[v46[1] + 2];
    }
    else
    {
      v43 = (unsigned int *)v41 + v42;
    }
  }
  else
  {
    v55 = (_QWORD *)sub_186B270(0x10u);
    *v55 = 2;
    v41 = v55 + 1;
    *(_QWORD *)(v40 + 24) = v55 + 1;
    v43 = (unsigned int *)(v55 + 1);
  }
  *v43 = v60;
  ++*((_DWORD *)v41 - 1);
  return v60;
}

