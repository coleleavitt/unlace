__int64 __fastcall sub_4AD370(__int64 a1, unsigned int a2, int **a3)
{
  char **exception; // rbx
  int *v4; // r12
  __int64 v5; // rax
  int *v6; // rbp
  void *v7; // r13
  _QWORD *v8; // rsi
  __int64 result; // rax
  _QWORD *v10; // r15
  __int64 v11; // rbp
  __int64 v12; // r14
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // r13d
  int *v16; // rbp
  void *v17; // r12
  __int64 v18; // rdx
  _QWORD *v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // r13d
  size_t v23; // rdi
  unsigned int *v24; // rax
  int *v25; // r15
  __int64 v26; // rsi
  _DWORD *v27; // rdx
  int *v28; // rax
  int *v29; // rsi
  int v30; // ecx
  char v31; // di
  __int64 v32; // rcx
  char v33; // di
  __int64 v34; // rcx
  __int64 v35; // rbp
  int *v36; // rbp
  void *v37; // r14
  _QWORD *v38; // rsi
  int *v39; // rax
  _QWORD *v41; // [rsp+10h] [rbp-88h]
  unsigned int *v42; // [rsp+10h] [rbp-88h]
  unsigned int v43; // [rsp+18h] [rbp-80h]
  __int64 v44; // [rsp+18h] [rbp-80h]
  __int64 v47[11]; // [rsp+40h] [rbp-58h] BYREF

  v4 = *a3;
  if ( !*a3 )
  {
    v43 = *(_DWORD *)a1;
    if ( !*(_DWORD *)a1 )
      goto LABEL_7;
LABEL_18:
    v19 = (_QWORD *)sub_186B270(0x48u);
    *v19 = 2;
    v4 = (int *)(v19 + 1);
    *a3 = (int *)(v19 + 1);
    goto LABEL_19;
  }
  v5 = (unsigned int)*(v4 - 1);
  if ( (_DWORD)v5 )
  {
    v6 = &v4[8 * v5];
    do
    {
      v7 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v4);
      v8 = v4 + 4;
      v4 += 8;
      sub_182CBA0(v7, v8);
    }
    while ( v4 != v6 );
    v4 = *a3;
  }
  *(v4 - 1) = 0;
  v43 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
    goto LABEL_7;
  if ( !v4 )
    goto LABEL_18;
LABEL_19:
  while ( 1 )
  {
    v20 = *(v4 - 2);
    v21 = v43;
    if ( v20 >= v43 )
      break;
    while ( 1 )
    {
      v22 = (3 * v20 + 1) >> 1;
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
      v42 = v24;
      v4 = (int *)(v24 + 2);
      v25 = *a3;
      if ( !*a3 )
        break;
      v26 = (unsigned int)*(v25 - 1);
      v27 = v24 + 2;
      v24[1] = v26;
      v28 = v25;
      v29 = &v25[8 * v26];
      if ( v25 != v29 )
      {
        do
        {
          v30 = *v28;
          v31 = *((_BYTE *)v28 + 4);
          v28 += 8;
          v27 += 8;
          *(v27 - 8) = v30;
          *((_BYTE *)v27 - 28) = v31 & 3 | *(_BYTE *)(v27 - 7) & 0xFC;
          v32 = *((_QWORD *)v28 - 3);
          *((_QWORD *)v28 - 3) = 0;
          *((_QWORD *)v27 - 3) = v32;
          v33 = *((_BYTE *)v28 - 12);
          *(v27 - 4) = *(v28 - 4);
          *((_BYTE *)v27 - 12) = v33 & 3 | *(_BYTE *)(v27 - 3) & 0xFC;
          v34 = *((_QWORD *)v28 - 1);
          *((_QWORD *)v28 - 1) = 0;
          *((_QWORD *)v27 - 1) = v34;
        }
        while ( v29 != v28 );
      }
      v35 = (unsigned int)*(v25 - 1);
      if ( (_DWORD)v35 )
      {
        v36 = &v25[8 * v35];
        do
        {
          v37 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v25);
          v38 = v25 + 4;
          v25 += 8;
          sub_182CBA0(v37, v38);
        }
        while ( v25 != v36 );
        v25 = *a3;
      }
      sub_186B220(v25 - 2);
      v21 = v43;
      *a3 = v4;
      *v42 = v22;
      v20 = *(v4 - 2);
      if ( v20 >= v43 )
        goto LABEL_30;
    }
    v24[1] = 0;
    *a3 = v4;
    *v24 = v22;
  }
LABEL_30:
  v39 = v4;
  *(v4 - 1) = v21;
  do
  {
    *((_OWORD *)v39 + 1) = 0;
    v39 += 8;
    *((_OWORD *)v39 - 2) = 0;
    *(v39 - 4) = 1;
    *((_BYTE *)v39 - 28) = 0;
    *((_BYTE *)v39 - 12) = 0;
  }
  while ( &v4[8 * v21] != v39 );
LABEL_7:
  result = a1;
  v10 = *(_QWORD **)(a1 + 8);
  if ( v10 )
  {
    result = (__int64)&v10[*((unsigned int *)v10 - 1)];
    v41 = (_QWORD *)result;
    if ( (_QWORD *)result != v10 )
    {
      v11 = 0;
      v12 = 32LL * a2;
      while ( 1 )
      {
        v15 = v11 + 1;
        v16 = &v4[8 * v11];
        v17 = qword_1C7F2C0;
        v18 = v12 + *v10;
        if ( (*(_BYTE *)(v18 + 4) & 1) != 0 )
        {
          v44 = v12 + *v10;
          result = sub_182C690(qword_1C7F2C0, v16, v18);
          v18 = v44;
          if ( (*(_BYTE *)(v44 + 20) & 1) == 0 )
          {
LABEL_11:
            v14 = *(_DWORD *)(v18 + 16);
            ++v10;
            *((_BYTE *)v16 + 20) &= ~1u;
            v16[4] = v14;
            if ( v41 == v10 )
              return result;
            goto LABEL_12;
          }
        }
        else
        {
          v13 = *(_DWORD *)v18;
          *((_BYTE *)v16 + 4) &= ~1u;
          *v16 = v13;
          if ( (*(_BYTE *)(v18 + 20) & 1) == 0 )
            goto LABEL_11;
        }
        ++v10;
        result = sub_182C690(v17, v16 + 4, v18 + 16);
        if ( v41 == v10 )
          return result;
LABEL_12:
        result = (__int64)a3;
        v11 = v15;
        v4 = *a3;
      }
    }
  }
  return result;
}

