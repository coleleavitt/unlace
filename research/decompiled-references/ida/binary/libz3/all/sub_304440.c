__int64 __fastcall sub_304440(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  _QWORD *v5; // r13
  void *v6; // r15
  _QWORD *v7; // rbx
  int v8; // eax
  int v9; // eax
  void *v10; // r15
  void *v11; // rbx
  int v12; // eax
  void *v13; // rbx
  __int64 v15; // rbx
  int *v16; // rbx
  void *v17; // r14
  int *v18; // rsi
  int *v19; // r15
  unsigned int v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // r14d
  size_t v23; // rdi
  unsigned int *v24; // rax
  __int64 v25; // rdi
  _DWORD *v26; // rdx
  int *v27; // rax
  int *v28; // rdi
  int v29; // ecx
  char v30; // si
  __int64 v31; // rcx
  char v32; // si
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  _QWORD *v38; // r13
  char **exception; // rbx
  unsigned int *v41; // [rsp+10h] [rbp-88h]
  unsigned int v43; // [rsp+20h] [rbp-78h]
  unsigned int v44; // [rsp+24h] [rbp-74h]
  unsigned int v46; // [rsp+2Ch] [rbp-6Ch]
  __int64 v47[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v48[9]; // [rsp+50h] [rbp-48h] BYREF

  v5 = *(_QWORD **)(a2 + 48);
  v43 = a3 + 1;
  if ( v5 )
  {
    v46 = *((_DWORD *)v5 - 1);
    if ( v46 >= a3 + 1 )
      goto LABEL_3;
  }
  else
  {
    if ( a3 == -1 )
      goto LABEL_3;
    v46 = 0;
    v38 = (_QWORD *)sub_186B270(0x48u);
    *v38 = 2;
    v5 = v38 + 1;
    *(_QWORD *)(a2 + 48) = v5;
  }
  while ( 1 )
  {
    v20 = *((_DWORD *)v5 - 2);
    v21 = v43;
    if ( v20 >= v43 )
      break;
    while ( 1 )
    {
      v22 = (3 * v20 + 1) >> 1;
      v44 = v22;
      v23 = 32 * v22 + 8;
      if ( 32 * v20 + 8 >= (unsigned int)v23 || v20 >= v22 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v47, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v47);
        sub_233E40((__int64)v47);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v24 = (unsigned int *)sub_186B270(v23);
      v41 = v24;
      v5 = v24 + 2;
      v19 = *(int **)(a2 + 48);
      if ( v19 )
        break;
      *(_QWORD *)(a2 + 48) = v5;
      v24[1] = 0;
      *v24 = v22;
      v21 = v43;
      v20 = *v24;
      if ( v20 >= v43 )
        goto LABEL_42;
    }
    v25 = (unsigned int)*(v19 - 1);
    v26 = v24 + 2;
    v24[1] = v25;
    v27 = v19;
    v28 = &v19[8 * v25];
    if ( v19 != v28 )
    {
      do
      {
        v29 = *v27;
        v30 = *((_BYTE *)v27 + 4);
        v27 += 8;
        v26 += 8;
        *(v26 - 8) = v29;
        *((_BYTE *)v26 - 28) = v30 & 3 | *(_BYTE *)(v26 - 7) & 0xFC;
        v31 = *((_QWORD *)v27 - 3);
        *((_QWORD *)v27 - 3) = 0;
        *((_QWORD *)v26 - 3) = v31;
        v32 = *((_BYTE *)v27 - 12);
        *(v26 - 4) = *(v27 - 4);
        *((_BYTE *)v26 - 12) = v32 & 3 | *(_BYTE *)(v26 - 3) & 0xFC;
        v33 = *((_QWORD *)v27 - 1);
        *((_QWORD *)v27 - 1) = 0;
        *((_QWORD *)v26 - 1) = v33;
      }
      while ( v28 != v27 );
    }
    v15 = (unsigned int)*(v19 - 1);
    if ( (_DWORD)v15 )
    {
      v16 = &v19[8 * v15];
      do
      {
        v17 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v19);
        v18 = v19 + 4;
        v19 += 8;
        sub_182CBA0(v17, v18);
      }
      while ( v19 != v16 );
      v19 = *(int **)(a2 + 48);
    }
    sub_186B220(v19 - 2);
    *(_QWORD *)(a2 + 48) = v5;
    *v41 = v44;
  }
LABEL_42:
  *((_DWORD *)v5 - 1) = v21;
  v35 = 32LL * v21;
  v36 = 32LL * v46;
  v37 = &v5[(unsigned __int64)v36 / 8];
  if ( v36 != v35 )
  {
    do
    {
      *((_OWORD *)v37 + 1) = 0;
      v37 += 4;
      *((_OWORD *)v37 - 2) = 0;
      *((_DWORD *)v37 - 4) = 1;
      *((_BYTE *)v37 - 28) = 0;
      *((_BYTE *)v37 - 12) = 0;
    }
    while ( &v5[(unsigned __int64)v35 / 8] != v37 );
  }
LABEL_3:
  v47[0] = 0;
  v47[1] = 0;
  v6 = qword_1C7F2C0;
  v48[0] = 1;
  v48[1] = 0;
  v7 = &v5[4 * a3];
  if ( (*(_BYTE *)(a4 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v47, a4);
  else
    LODWORD(v47[0]) = *(_DWORD *)a4;
  if ( (*(_BYTE *)(a4 + 20) & 1) != 0 )
  {
    sub_182C690(v6, v48, a4 + 16);
  }
  else
  {
    v8 = *(_DWORD *)(a4 + 16);
    BYTE4(v48[0]) &= ~1u;
    LODWORD(v48[0]) = v8;
  }
  v9 = *(_DWORD *)v7;
  v10 = qword_1C7F2C0;
  if ( *(_DWORD *)v7 )
  {
    if ( LODWORD(v47[0]) )
    {
      if ( (v48[0] & 0x100000000LL) != 0
        || LODWORD(v48[0]) != 1
        || (*((_BYTE *)v7 + 20) & 1) != 0
        || *((_DWORD *)v7 + 4) != 1 )
      {
        sub_1851D20(qword_1C7F2C0, v47, v7, v47);
      }
      else
      {
        sub_1831A80(qword_1C7F2C0, v47, v7, v47);
        sub_182CBA0(v10, v48);
        BYTE4(v48[0]) &= ~1u;
        LODWORD(v48[0]) = 1;
      }
    }
    else
    {
      if ( (*((_BYTE *)v7 + 4) & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v47, v7);
      }
      else
      {
        BYTE4(v47[0]) &= ~1u;
        LODWORD(v47[0]) = v9;
      }
      if ( (*((_BYTE *)v7 + 20) & 1) != 0 )
      {
        sub_182C690(v10, v48, v7 + 2);
      }
      else
      {
        v34 = *((_DWORD *)v7 + 4);
        BYTE4(v48[0]) &= ~1u;
        LODWORD(v48[0]) = v34;
      }
    }
  }
  else
  {
    if ( (v47[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v47, v47);
    else
      BYTE4(v47[0]) &= ~1u;
    if ( (v48[0] & 0x100000000LL) != 0 )
      sub_182C690(v10, v48, v48);
    else
      BYTE4(v48[0]) &= ~1u;
  }
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  v11 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (v47[0] & 0x100000000LL) != 0 )
    sub_182C690(v11, a1, v47);
  else
    *(_DWORD *)a1 = v47[0];
  if ( (v48[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v11, a1 + 16, v48);
  }
  else
  {
    v12 = v48[0];
    *(_BYTE *)(a1 + 20) &= ~1u;
    *(_DWORD *)(a1 + 16) = v12;
  }
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v47);
  sub_182CBA0(v13, v48);
  return a1;
}

