__int64 __fastcall sub_B0C660(__int64 a1, __int64 a2, _DWORD **a3, unsigned int a4)
{
  char **v4; // r12
  char **exception; // r12
  _DWORD *v6; // r13
  __int64 v7; // rbp
  unsigned int v8; // r12d
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  unsigned int v11; // edx
  size_t v12; // rsi
  unsigned int v13; // r15d
  unsigned int *v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r15
  unsigned int v18; // r13d
  __int64 v19; // r12
  unsigned int v20; // ebp
  unsigned int v21; // r14d
  int v22; // esi
  __int64 i; // rax
  _DWORD *v24; // rdx
  __int64 v25; // rax
  unsigned int v27; // r15d
  size_t v28; // rsi
  unsigned int *v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rax
  int v34; // [rsp+4h] [rbp-74h]
  _DWORD *v35; // [rsp+8h] [rbp-70h]
  unsigned int v37; // [rsp+18h] [rbp-60h]
  __int64 v39[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = *a3;
  if ( !*a3 || (v35 = &v6[*(v6 - 1)], v6 == v35) )
  {
    v18 = 0;
    v33 = (_QWORD *)sub_186B270(0x10u);
    v19 = a4 >> 5;
    *v33 = 2;
    v10 = v33 + 1;
    v20 = v19 + 1;
LABEL_24:
    while ( 1 )
    {
      v30 = *((_DWORD *)v10 - 2);
      if ( v30 >= v20 )
        break;
      v27 = (3 * v30 + 1) >> 1;
      v28 = 4 * v27 + 8;
      if ( 4 * v30 + 8 >= (unsigned int)v28 || v30 >= v27 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_B035D0(v39, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v39);
        sub_233E40((__int64)v39);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v29 = (unsigned int *)sub_186B300(v10 - 1, v28);
      *v29 = v27;
      v10 = v29 + 2;
    }
    *((_DWORD *)v10 - 1) = v20;
    v31 = 4LL * v18;
    v32 = 4LL * v20;
    if ( v31 != v32 )
      memset((char *)v10 + v31, 0, v32 - v31);
    goto LABEL_14;
  }
  v7 = *v6 >> 5;
  v8 = v7 + 1;
  v34 = *v6 ^ 1;
  v9 = (_QWORD *)sub_186B270(0x10u);
  v37 = 0;
  *v9 = 2;
  v10 = v9 + 1;
LABEL_7:
  while ( 1 )
  {
    v15 = *((_DWORD *)v10 - 2);
    if ( v15 >= v8 )
      break;
    v11 = (3 * v15 + 1) >> 1;
    v12 = 4 * v11 + 8;
    v13 = v11;
    if ( 4 * v15 + 8 >= (unsigned int)v12 || v15 >= v11 )
    {
      v4 = (char **)__cxa_allocate_exception(0x28u);
      sub_B035D0(v39, "Overflow encountered when expanding vector");
      *v4 = (char *)off_1C63128;
      sub_2333C0(v4 + 1, v39);
      sub_233E40((__int64)v39);
      __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v14 = (unsigned int *)sub_186B300(v10 - 1, v12);
    *v14 = v13;
    v10 = v14 + 2;
  }
  *((_DWORD *)v10 - 1) = v8;
  v16 = 4LL * v8;
  v17 = 4LL * v37;
  if ( v17 != v16 )
    memset((char *)v10 + v17, 0, v16 - v17);
  while ( 1 )
  {
    ++v6;
    *((_DWORD *)v10 + v7) |= 1 << v34;
    if ( v35 == v6 )
      break;
    v7 = *v6 >> 5;
    v34 = *v6 ^ 1;
    v37 = *((_DWORD *)v10 - 1);
    if ( (unsigned int)v7 >= v37 )
    {
      v8 = v7 + 1;
      goto LABEL_7;
    }
  }
  v18 = *((_DWORD *)v10 - 1);
  v19 = a4 >> 5;
  v20 = v19 + 1;
  if ( (unsigned int)v19 >= v18 )
    goto LABEL_24;
LABEL_14:
  v39[0] = 0;
  v39[1] = 0;
  *((_DWORD *)v10 + v19) |= 1 << a4;
  v39[2] = 1;
  v39[3] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v39, &qword_1C7F2A0);
  v21 = 0;
  v22 = *(_DWORD *)(a2 + 8);
  for ( i = *(_QWORD *)(a2 + 40LL * (v22 & 1) + 16); i; i = *(_QWORD *)(a2 + 40LL * (v22 & 1) + 16) )
  {
    if ( v21 >= *(_DWORD *)(i - 4) )
      break;
    v24 = (_DWORD *)(i + 40LL * v21);
    v25 = *v24 >> 5;
    if ( (unsigned int)v25 >= *((_DWORD *)v10 - 1) || (*((_DWORD *)v10 + v25) & (1 << *v24)) == 0 )
    {
      sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v39, (__int64)(v24 + 2), (__int64)v39);
      v22 = *(_DWORD *)(a2 + 8);
    }
    ++v21;
  }
  sub_25A130((char *)v39);
  return sub_186B220(v10 - 1);
}

