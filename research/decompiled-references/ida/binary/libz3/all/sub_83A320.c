__int64 __fastcall sub_83A320(__int64 a1, unsigned int a2)
{
  char **exception; // rbx
  __int64 v5; // rax
  int v6; // ebp
  unsigned int v7; // ebp
  __int64 v8; // r13
  _DWORD *v9; // rdx
  __int64 v10; // rcx
  _DWORD *v11; // rax
  __int64 v12; // r14
  unsigned int v13; // r15d
  size_t v14; // rsi
  unsigned int *v15; // rax
  unsigned int v16; // ecx
  _DWORD *v17; // rsi
  __int64 v18; // rcx
  _OWORD *v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v25; // rax
  __int64 v26[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a1 + 464);
  if ( v5 )
    v6 = *(_DWORD *)(v5 - 4);
  else
    v6 = 0;
  v7 = v6 - a2;
  v8 = 3LL * v7;
  sub_839200(a1, *(_DWORD *)(v5 + v8 * 4));
  v9 = *(_DWORD **)(a1 + 464);
  v10 = *(_QWORD *)(a1 + 248);
  v11 = &v9[v8];
  if ( v10 )
    *(_DWORD *)(v10 - 4) = v11[2];
  *(_DWORD *)(a1 + 344) = v11[1];
  if ( !v9 )
  {
    if ( !v7 )
      goto LABEL_19;
    v12 = 0;
    v25 = sub_186B270(0x20u);
    v16 = 2;
    v9 = (_DWORD *)(v25 + 8);
    *(_QWORD *)v25 = 2;
    *(_QWORD *)(a1 + 464) = v25 + 8;
    if ( v7 > 2 )
      goto LABEL_8;
    *(_DWORD *)(v25 + 4) = v7;
    v17 = &v9[v8];
    v18 = v25 + 8;
    goto LABEL_13;
  }
  v12 = (unsigned int)*(v9 - 1);
  if ( (unsigned int)v12 >= v7 )
  {
    *(v9 - 1) = v7;
    goto LABEL_19;
  }
  while ( 1 )
  {
    v16 = *(v9 - 2);
    if ( v16 >= v7 )
      break;
LABEL_8:
    v13 = (3 * v16 + 1) >> 1;
    v14 = 4 * (v13 + ((3 * v16 + 1) & 0xFFFFFFFE)) + 8;
    if ( 12 * v16 + 8 >= (unsigned int)v14 || v16 >= v13 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v26, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v26);
      sub_233E40((__int64)v26);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v15 = (unsigned int *)sub_186B300(v9 - 2, v14);
    v9 = v15 + 2;
    *v15 = v13;
    *(_QWORD *)(a1 + 464) = v15 + 2;
  }
  *(v9 - 1) = v7;
  v17 = &v9[v8];
  v18 = (__int64)&v9[3 * v12];
  if ( v8 != 3 * v12 )
  {
LABEL_13:
    v19 = (_OWORD *)v18;
    v20 = (0x2AAAAAAAAAAAAAABLL * (((unsigned __int64)v17 - v18 - 12) >> 2)) & 0x3FFFFFFFFFFFFFFFLL;
    v21 = v20 + 1;
    if ( v20 <= 2 )
      goto LABEL_31;
    do
    {
      *v19 = 0;
      v19 += 3;
      *(v19 - 2) = 0;
      *(v19 - 1) = 0;
    }
    while ( (_OWORD *)(v18 + 48 * (v21 >> 2)) != v19 );
    v18 += 12 * (v21 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v21 & 3) != 0 )
    {
LABEL_31:
      *(_QWORD *)v18 = 0;
      *(_DWORD *)(v18 + 8) = 0;
      if ( v17 != (_DWORD *)(v18 + 12) )
      {
        *(_QWORD *)(v18 + 12) = 0;
        *(_DWORD *)(v18 + 20) = 0;
        if ( v17 != (_DWORD *)(v18 + 24) )
        {
          *(_QWORD *)(v18 + 24) = 0;
          *(_DWORD *)(v18 + 32) = 0;
        }
      }
    }
  }
LABEL_19:
  sub_100E990(*(_QWORD *)(a1 + 496), a2);
  v22 = *(_QWORD *)(a1 + 520);
  if ( v22 )
    *(_DWORD *)(v22 - 4) = 0;
  v23 = *(_QWORD *)(a1 + 472);
  if ( v23 )
    sub_1021CB0(v23, a2);
  return sub_7E4990(a1, a2);
}

