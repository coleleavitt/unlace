__int64 __fastcall sub_3049C0(__int64 a1, unsigned int a2, int *a3)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // rbp
  void *v5; // rbx
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // rbx
  int *v9; // rbx
  void *v10; // r15
  int *v11; // rsi
  int *v12; // r14
  unsigned int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // r12d
  size_t v16; // rdi
  unsigned int *v17; // r13
  __int64 v18; // rdi
  int *v19; // rax
  _DWORD *v20; // rdx
  int *v21; // rdi
  int v22; // ecx
  char v23; // si
  __int64 v24; // rcx
  char v25; // si
  __int64 v26; // rcx
  char v27; // al
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rbp
  _QWORD *v33; // rsi
  _QWORD *v34; // rdx
  char **exception; // rbx
  unsigned int v37; // [rsp+Ch] [rbp-7Ch]
  unsigned int v40; // [rsp+1Ch] [rbp-6Ch]
  __int64 v41[11]; // [rsp+30h] [rbp-58h] BYREF

  v3 = *(_QWORD **)(a1 + 48);
  v37 = a2 + 1;
  if ( v3 )
  {
    v40 = *((_DWORD *)v3 - 1);
    if ( v40 >= a2 + 1 )
      goto LABEL_3;
  }
  else
  {
    if ( a2 == -1 )
      goto LABEL_3;
    v40 = 0;
    v32 = (_QWORD *)sub_186B270(0x48u);
    *v32 = 2;
    v3 = v32 + 1;
    *(_QWORD *)(a1 + 48) = v3;
  }
  while ( 1 )
  {
    v13 = *((_DWORD *)v3 - 2);
    v14 = v37;
    if ( v13 >= v37 )
      break;
    while ( 1 )
    {
      v15 = (3 * v13 + 1) >> 1;
      v16 = 32 * v15 + 8;
      if ( 32 * v13 + 8 >= (unsigned int)v16 || v13 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v41, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v41);
        sub_233E40((__int64)v41);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = (unsigned int *)sub_186B270(v16);
      v3 = v17 + 2;
      v12 = *(int **)(a1 + 48);
      if ( v12 )
        break;
      v17[1] = 0;
      v14 = v37;
      *(_QWORD *)(a1 + 48) = v3;
      *v17 = v15;
      v13 = *v17;
      if ( *v17 >= v37 )
        goto LABEL_28;
    }
    v18 = (unsigned int)*(v12 - 1);
    v19 = *(int **)(a1 + 48);
    v20 = v17 + 2;
    v17[1] = v18;
    v21 = &v12[8 * v18];
    if ( v12 != v21 )
    {
      do
      {
        v22 = *v19;
        v23 = *((_BYTE *)v19 + 4);
        v19 += 8;
        v20 += 8;
        *(v20 - 8) = v22;
        *((_BYTE *)v20 - 28) = v23 & 3 | *(_BYTE *)(v20 - 7) & 0xFC;
        v24 = *((_QWORD *)v19 - 3);
        *((_QWORD *)v19 - 3) = 0;
        *((_QWORD *)v20 - 3) = v24;
        v25 = *((_BYTE *)v19 - 12);
        *(v20 - 4) = *(v19 - 4);
        *((_BYTE *)v20 - 12) = v25 & 3 | *(_BYTE *)(v20 - 3) & 0xFC;
        v26 = *((_QWORD *)v19 - 1);
        *((_QWORD *)v19 - 1) = 0;
        *((_QWORD *)v20 - 1) = v26;
      }
      while ( v19 != v21 );
    }
    v8 = (unsigned int)*(v12 - 1);
    if ( (_DWORD)v8 )
    {
      v9 = &v12[8 * v8];
      do
      {
        v10 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v12);
        v11 = v12 + 4;
        v12 += 8;
        sub_182CBA0(v10, v11);
      }
      while ( v9 != v12 );
      v12 = *(int **)(a1 + 48);
    }
    sub_186B220(v12 - 2);
    *v17 = v15;
    *(_QWORD *)(a1 + 48) = v3;
  }
LABEL_28:
  *((_DWORD *)v3 - 1) = v14;
  v29 = 32LL * v14;
  v30 = 32LL * v40;
  v31 = &v3[(unsigned __int64)v30 / 8];
  if ( v30 != v29 )
  {
    do
    {
      *((_OWORD *)v31 + 1) = 0;
      v31 += 4;
      *((_OWORD *)v31 - 2) = 0;
      *((_DWORD *)v31 - 4) = 1;
      *((_BYTE *)v31 - 28) = 0;
      *((_BYTE *)v31 - 12) = 0;
    }
    while ( &v3[(unsigned __int64)v29 / 8] != v31 );
  }
LABEL_3:
  v4 = &v3[4 * a2];
  v5 = qword_1C7F2C0;
  v6 = *a3;
  if ( !*a3 )
  {
    v27 = *((_BYTE *)v4 + 4);
    if ( (v27 & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v4, v4);
      v28 = *((unsigned __int8 *)v4 + 20);
      if ( (v28 & 1) == 0 )
        goto LABEL_26;
    }
    else
    {
      *((_BYTE *)v4 + 4) = v27 & 0xFE;
      v28 = *((unsigned __int8 *)v4 + 20);
      if ( (v28 & 1) == 0 )
      {
LABEL_26:
        result = v28 & 0xFFFFFFFE;
        *((_BYTE *)v4 + 20) = result;
        return result;
      }
    }
    v33 = v4 + 2;
    v34 = v4 + 2;
    return sub_182C690(v5, v33, v34);
  }
  if ( !*(_DWORD *)v4 )
  {
    if ( (a3[1] & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v4, a3);
    }
    else
    {
      *((_BYTE *)v4 + 4) &= ~1u;
      *(_DWORD *)v4 = v6;
    }
    if ( (a3[5] & 1) == 0 )
    {
      result = (unsigned int)a3[4];
      *((_BYTE *)v4 + 20) &= ~1u;
      *((_DWORD *)v4 + 4) = result;
      return result;
    }
    v33 = v4 + 2;
    v34 = a3 + 4;
    return sub_182C690(v5, v33, v34);
  }
  if ( (*((_BYTE *)v4 + 20) & 1) != 0 || *((_DWORD *)v4 + 4) != 1 || (a3[5] & 1) != 0 || a3[4] != 1 )
    return sub_1851D20(qword_1C7F2C0, v4, a3, v4);
  sub_1831A80(qword_1C7F2C0, v4, a3, v4);
  result = sub_182CBA0(v5, v4 + 2);
  *((_BYTE *)v4 + 20) &= ~1u;
  *((_DWORD *)v4 + 4) = 1;
  return result;
}

