void __fastcall sub_9E8400(int **a1, unsigned int a2)
{
  int *v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // r12d
  size_t v7; // rdi
  unsigned int *v8; // rax
  int *v9; // r15
  __int64 v10; // rdi
  _DWORD *v11; // rdx
  int *v12; // rax
  int *v13; // rdi
  int v14; // ecx
  char v15; // si
  __int64 v16; // rcx
  char v17; // si
  __int64 v18; // rcx
  __int64 v19; // rbx
  int *v20; // rbx
  void *v21; // r13
  _QWORD *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  int *v25; // rax
  int *v26; // rbp
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  int *v30; // r12
  int *v31; // rbx
  void *v32; // rbp
  _QWORD *v33; // rsi
  char **exception; // rbx
  unsigned int *v36; // [rsp+10h] [rbp-68h]
  unsigned int v38; // [rsp+1Ch] [rbp-5Ch]
  __int64 v39[11]; // [rsp+20h] [rbp-58h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    v3 = (unsigned int)*(v2 - 1);
    v38 = v3;
    if ( (unsigned int)v3 >= a2 )
    {
      v28 = 32 * v3;
      v29 = 32LL * a2;
      v30 = &v2[(unsigned __int64)v28 / 4];
      v31 = &v2[(unsigned __int64)v29 / 4];
      if ( v29 != v28 )
      {
        do
        {
          v32 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v31);
          v33 = v31 + 4;
          v31 += 8;
          sub_182CBA0(v32, v33);
        }
        while ( v30 != v31 );
        v2 = *a1;
      }
      *(v2 - 1) = a2;
      return;
    }
  }
  else
  {
    v38 = 0;
    if ( !a2 )
      return;
    v27 = (_QWORD *)sub_186B270(0x48u);
    *v27 = 2;
    v2 = (int *)(v27 + 1);
    *a1 = (int *)(v27 + 1);
  }
  while ( 1 )
  {
    v4 = *(v2 - 2);
    v5 = a2;
    if ( v4 >= a2 )
      break;
    while ( 1 )
    {
      v6 = (3 * v4 + 1) >> 1;
      v7 = 32 * v6 + 8;
      if ( 32 * v4 + 8 >= (unsigned int)v7 || v4 >= v6 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_98B3B0(v39, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v39);
        sub_233E40((__int64)v39);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v8 = (unsigned int *)sub_186B270(v7);
      v36 = v8;
      v2 = (int *)(v8 + 2);
      v9 = *a1;
      if ( !*a1 )
        break;
      v10 = (unsigned int)*(v9 - 1);
      v11 = v8 + 2;
      v8[1] = v10;
      v12 = v9;
      v13 = &v9[8 * v10];
      if ( v9 != v13 )
      {
        do
        {
          v14 = *v12;
          v15 = *((_BYTE *)v12 + 4);
          v12 += 8;
          v11 += 8;
          *(v11 - 8) = v14;
          *((_BYTE *)v11 - 28) = v15 & 3 | *(_BYTE *)(v11 - 7) & 0xFC;
          v16 = *((_QWORD *)v12 - 3);
          *((_QWORD *)v12 - 3) = 0;
          *((_QWORD *)v11 - 3) = v16;
          v17 = *((_BYTE *)v12 - 12);
          *(v11 - 4) = *(v12 - 4);
          *((_BYTE *)v11 - 12) = v17 & 3 | *(_BYTE *)(v11 - 3) & 0xFC;
          v18 = *((_QWORD *)v12 - 1);
          *((_QWORD *)v12 - 1) = 0;
          *((_QWORD *)v11 - 1) = v18;
        }
        while ( v13 != v12 );
      }
      v19 = (unsigned int)*(v9 - 1);
      if ( (_DWORD)v19 )
      {
        v20 = &v9[8 * v19];
        do
        {
          v21 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v9);
          v22 = v9 + 4;
          v9 += 8;
          sub_182CBA0(v21, v22);
        }
        while ( v20 != v9 );
        v9 = *a1;
      }
      sub_186B220(v9 - 2);
      v5 = a2;
      *a1 = v2;
      *v36 = v6;
      v4 = *(v2 - 2);
      if ( v4 >= a2 )
        goto LABEL_14;
    }
    v8[1] = 0;
    *a1 = v2;
    *v8 = v6;
  }
LABEL_14:
  *(v2 - 1) = v5;
  v23 = 32LL * v5;
  v24 = 32LL * v38;
  v25 = &v2[(unsigned __int64)v24 / 4];
  v26 = &v2[(unsigned __int64)v23 / 4];
  if ( v24 != v23 )
  {
    do
    {
      *((_OWORD *)v25 + 1) = 0;
      v25 += 8;
      *((_OWORD *)v25 - 2) = 0;
      *(v25 - 4) = 1;
      *((_BYTE *)v25 - 28) = 0;
      *((_BYTE *)v25 - 12) = 0;
    }
    while ( v26 != v25 );
  }
}

