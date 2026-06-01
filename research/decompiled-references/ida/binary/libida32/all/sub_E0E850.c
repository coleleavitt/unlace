__int64 __fastcall sub_E0E850(__int64 a1, int a2, int a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  char *v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  int v17; // edx
  void **v18; // r12
  void **v19; // r13
  char *v20; // rbx
  char *v21; // rdi
  void **v22; // rdi
  void **v23; // rbx
  void **v24; // r13
  __int64 v25; // rax
  __int64 v27; // rax
  __int64 v28; // r15
  int v29; // [rsp+0h] [rbp-58h] BYREF
  void *v30; // [rsp+8h] [rbp-50h]
  unsigned __int64 v31; // [rsp+10h] [rbp-48h]
  int v32; // [rsp+18h] [rbp-40h]

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 104LL))(a1);
  v6 = v5 + 2448;
  v7 = v5;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
  v29 = a2;
  v9 = *(_QWORD *)(v8 + 8);
  v32 = a3;
  v30 = nullptr;
  v10 = *(unsigned int *)(v9 + 8);
  v11 = *(unsigned int *)(v9 + 12);
  v31 = v6;
  v12 = v10 + 1;
  if ( v10 + 1 > v11 )
  {
    v28 = *(_QWORD *)v9;
    if ( *(_QWORD *)v9 <= (unsigned __int64)&v29 && (unsigned __int64)&v29 < v28 + 32 * v10 )
    {
      sub_E0E630(v9, v12);
      v13 = *(_QWORD *)v9;
      v10 = *(unsigned int *)(v9 + 8);
      v14 = (char *)&v29 + *(_QWORD *)v9 - v28;
    }
    else
    {
      sub_E0E630(v9, v12);
      v13 = *(_QWORD *)v9;
      v10 = *(unsigned int *)(v9 + 8);
      v14 = (char *)&v29;
    }
  }
  else
  {
    v13 = *(_QWORD *)v9;
    v14 = (char *)&v29;
  }
  v15 = v13 + 32 * v10;
  v16 = *(_DWORD *)v14;
  *(_QWORD *)(v15 + 16) = 0;
  *(_DWORD *)v15 = v16;
  v17 = *((_DWORD *)v14 + 6);
  *(_QWORD *)(v15 + 8) = 0;
  *(_DWORD *)(v15 + 24) = v17;
  *(_QWORD *)(v15 + 16) = *((_QWORD *)v14 + 2);
  *(_QWORD *)(v15 + 8) = *((_QWORD *)v14 + 1);
  *((_QWORD *)v14 + 1) = 0;
  ++*(_DWORD *)(v9 + 8);
  v18 = (void **)v30;
  if ( v6 && v30 )
  {
    if ( (unsigned __int64)v30 < v6 || (unsigned __int64)v30 > v7 + 17296 )
    {
      v19 = *((void ***)v30 + 66);
      v20 = (char *)&v19[8 * (unsigned __int64)*((unsigned int *)v30 + 134)];
      while ( v19 != (void **)v20 )
      {
        while ( 1 )
        {
          v20 -= 64;
          v21 = *((char **)v20 + 3);
          if ( v21 == v20 + 40 )
            break;
          operator delete(v21);
          if ( v19 == (void **)v20 )
            goto LABEL_10;
        }
      }
LABEL_10:
      if ( v19 != v18 + 68 )
        free(v19);
      v22 = (void **)v18[52];
      if ( v22 != v18 + 54 )
        free(v22);
      v23 = v18 + 48;
      v24 = v18 + 8;
      do
      {
        while ( *v23 != v23 + 2 )
        {
          operator delete(*v23);
          v23 -= 4;
          if ( v24 == v23 )
            goto LABEL_17;
        }
        v23 -= 4;
      }
      while ( v24 != v23 );
LABEL_17:
      operator delete(v18, 0x3A0u);
    }
    else
    {
      v27 = *(unsigned int *)(v7 + 17424);
      *(_DWORD *)(v7 + 17424) = v27 + 1;
      *(_QWORD *)(v7 + 8 * v27 + 17296) = v18;
    }
  }
  v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
  return **(_QWORD **)(v25 + 8) + 32LL * *(unsigned int *)(*(_QWORD *)(v25 + 8) + 8LL) - 24;
}

