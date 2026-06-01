__int64 __fastcall sub_8F1E10(__int64 a1, unsigned int *a2)
{
  char **exception; // rbp
  __int64 v5; // r13
  _QWORD *v6; // rbp
  __int64 v7; // r15
  _QWORD *v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  unsigned int **v12; // rdx
  _QWORD *v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  unsigned int **v17; // rdx
  unsigned int v18; // ebp
  __int64 result; // rax
  unsigned int v20; // r14d
  unsigned int v21; // edx
  size_t v22; // rsi
  unsigned int v23; // r15d
  unsigned int *v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rax
  _QWORD *v28; // rax
  unsigned int v29; // ebp
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rdx
  unsigned int v33; // ebp
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  unsigned int v39; // [rsp+Ch] [rbp-5Ch]
  __int64 v40[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = a2[2];
  v6 = *(_QWORD **)(a1 + 8672);
  if ( (_DWORD)v5 == -1 )
  {
    if ( v6 )
      *((_DWORD *)v6 - 1) = 0;
    v7 = 0xFFFFFFFFLL;
  }
  else if ( v6 )
  {
    v39 = *((_DWORD *)v6 - 1);
    if ( (unsigned int)v5 >= v39 )
    {
      v20 = v5 + 1;
      goto LABEL_18;
    }
    v7 = v5;
    if ( v6[v5] )
    {
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a2 + 232LL))(a2);
      return sub_186B220(a2);
    }
  }
  else
  {
    v20 = v5 + 1;
    v28 = (_QWORD *)sub_186B270(0x18u);
    v39 = 0;
    v6 = v28 + 1;
    *v28 = 2;
    *(_QWORD *)(a1 + 8672) = v28 + 1;
LABEL_18:
    while ( 1 )
    {
      v25 = *((_DWORD *)v6 - 2);
      if ( v25 >= v20 )
        break;
      v21 = (3 * v25 + 1) >> 1;
      v22 = 8 * v21 + 8;
      v23 = v21;
      if ( 8 * v25 + 8 >= (unsigned int)v22 || v25 >= v21 )
        goto LABEL_34;
      v24 = (unsigned int *)sub_186B300(v6 - 1, v22);
      v6 = v24 + 2;
      *v24 = v23;
      *(_QWORD *)(a1 + 8672) = v24 + 2;
    }
    *((_DWORD *)v6 - 1) = v20;
    v26 = 8LL * v20;
    v27 = 8LL * v39;
    v7 = (unsigned int)v5;
    if ( v27 != v26 )
      memset(&v6[(unsigned __int64)v27 / 8], 0, v26 - v27);
  }
  v8 = *(_QWORD **)(a1 + 8680);
  v6[v7] = a2;
  if ( v8 )
  {
    v9 = *((_DWORD *)v8 - 1);
    if ( v9 == *((_DWORD *)v8 - 2) )
    {
      v33 = (3 * v9 + 1) >> 1;
      v34 = 8 * v33 + 8;
      if ( 8 * v9 + 8 >= (unsigned int)v34 || v9 >= v33 )
        goto LABEL_34;
      v35 = (unsigned int *)sub_186B300(v8 - 1, v34);
      v36 = v35[1];
      v8 = v35 + 2;
      *v35 = v33;
      *(_QWORD *)(a1 + 8680) = v35 + 2;
      LODWORD(v35) = v36;
      v12 = (unsigned int **)&v8[v36];
      v11 = (_DWORD)v35 + 1;
    }
    else
    {
      v10 = v9;
      v11 = v9 + 1;
      v12 = (unsigned int **)&v8[v10];
    }
  }
  else
  {
    v38 = (_QWORD *)sub_186B270(0x18u);
    v8 = v38 + 1;
    *v38 = 2;
    v11 = 1;
    *(_QWORD *)(a1 + 8680) = v8;
    v12 = (unsigned int **)v8;
  }
  *v12 = a2;
  *((_DWORD *)v8 - 1) = v11;
  (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a2 + 256LL))(a2);
  v13 = *(_QWORD **)(a1 + 8688);
  if ( v13 )
  {
    v14 = *((_DWORD *)v13 - 1);
    if ( v14 != *((_DWORD *)v13 - 2) )
    {
      v15 = v14;
      v16 = v14 + 1;
      v17 = (unsigned int **)&v13[v15];
      goto LABEL_11;
    }
    v29 = (3 * v14 + 1) >> 1;
    v30 = 8 * v29 + 8;
    if ( 8 * v14 + 8 < (unsigned int)v30 && v14 < v29 )
    {
      v31 = (unsigned int *)sub_186B300(v13 - 1, v30);
      v32 = v31[1];
      v13 = v31 + 2;
      *v31 = v29;
      *(_QWORD *)(a1 + 8688) = v31 + 2;
      LODWORD(v31) = v32;
      v17 = (unsigned int **)&v13[v32];
      v16 = (_DWORD)v31 + 1;
      goto LABEL_11;
    }
LABEL_34:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_8E4EB0(v40, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v40);
    sub_233E40((__int64)v40);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v37 = (_QWORD *)sub_186B270(0x18u);
  v13 = v37 + 1;
  *v37 = 2;
  v16 = 1;
  *(_QWORD *)(a1 + 8688) = v13;
  v17 = (unsigned int **)v13;
LABEL_11:
  *v17 = a2;
  v18 = 0;
  *((_DWORD *)v13 - 1) = v16;
  result = *(unsigned int *)(a1 + 9464);
  if ( (_DWORD)result )
  {
    do
    {
      ++v18;
      result = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a2 + 96LL))(a2);
    }
    while ( v18 < *(_DWORD *)(a1 + 9464) );
  }
  return result;
}

