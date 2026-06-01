__int64 __fastcall sub_A741D0(__int64 a1, unsigned int a2)
{
  char **exception; // rbx
  unsigned int v3; // ebx
  __int64 v4; // r15
  _DWORD *v5; // rdx
  int v6; // r12d
  unsigned int v7; // r12d
  __int64 v8; // rsi
  unsigned int *v9; // rax
  unsigned int v10; // r8d
  unsigned int v11; // edi
  unsigned int v12; // r10d
  __int64 v13; // r9
  unsigned __int64 v14; // rbp
  __int64 i; // rbx
  void *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r13
  _QWORD **v20; // r12
  __int64 (__fastcall *v21)(_QWORD *); // rax
  __int64 v22; // rsi
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdi
  unsigned int v28; // r13d
  size_t v29; // rsi
  unsigned int *v30; // rax
  unsigned int v31; // edi
  __int64 v32; // rsi
  _DWORD *v33; // rdi
  _OWORD *v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r8
  __int64 v37; // rax
  __int64 v39; // [rsp+8h] [rbp-70h]
  unsigned int v40; // [rsp+14h] [rbp-64h]
  unsigned int v41; // [rsp+1Ch] [rbp-5Ch]
  char *v42[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = a2;
  if ( !a2 )
    return sub_965AE0(a1, v3);
  v4 = *(_QWORD *)(a1 + 64);
  v5 = *(_DWORD **)(v4 + 424);
  if ( v5 )
    v6 = *(v5 - 1);
  else
    v6 = 0;
  v7 = v6 - a2;
  v8 = *(_QWORD *)(v4 + 256);
  v39 = 3LL * v7;
  v9 = &v5[v39];
  if ( v8 )
  {
    v10 = *(_DWORD *)(v8 - 4);
    v11 = *v9;
    v12 = v10 - 1;
    if ( *v9 >= v10 )
      goto LABEL_17;
    v41 = v3;
    v13 = *(_QWORD *)(v4 + 240);
    v40 = v7;
    v14 = 4 * (v12 - (unsigned __int64)(v12 - v11));
    for ( i = 4LL * v12; ; i -= 4 )
    {
      v18 = 0x7FFFFFFF8LL;
      v19 = *(unsigned int *)(v8 + i);
      v17 = *(_QWORD *)(v13 + 8 * v19);
      if ( v17 )
        v18 = 8LL * (unsigned int)(*(_DWORD *)(v17 - 4) - 1);
      v20 = *(_QWORD ***)(v17 + v18);
      if ( v20 )
      {
        v21 = (__int64 (__fastcall *)(_QWORD *))**v20;
        if ( v21 == sub_83AF80 )
        {
          *v20 = &off_1C55220;
          v16 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v20 + 3);
          sub_182CBA0(v16, v20 + 5);
        }
        else
        {
          v21(v20);
        }
        sub_186B220(v20);
        v13 = *(_QWORD *)(v4 + 240);
        v8 = *(_QWORD *)(v4 + 256);
        v17 = *(_QWORD *)(v13 + 8 * v19);
      }
      --*(_DWORD *)(v17 - 4);
      if ( i == v14 )
        break;
    }
    v5 = *(_DWORD **)(v4 + 424);
    v7 = v40;
    v3 = v41;
    v9 = &v5[v39];
    if ( v8 )
LABEL_17:
      *(_DWORD *)(v8 - 4) = v11;
  }
  v22 = *(_QWORD *)(v4 + 176);
  if ( v22 )
    *(_DWORD *)(v22 - 4) = v9[2];
  *(_DWORD *)(v4 + 264) = v9[1];
  if ( !v5 )
  {
    if ( !v7 )
      goto LABEL_23;
    v23 = 0;
    v37 = sub_186B270(0x20u);
    *(_QWORD *)v37 = 2;
    v31 = *(_DWORD *)v37;
    v5 = (_DWORD *)(v37 + 8);
    *(_QWORD *)(v4 + 424) = v37 + 8;
    if ( v31 < v7 )
      goto LABEL_30;
    *(_DWORD *)(v37 + 4) = v7;
    v32 = v37 + 8;
    v33 = &v5[v39];
LABEL_35:
    v34 = (_OWORD *)v32;
    v35 = (0x2AAAAAAAAAAAAAABLL * (((unsigned __int64)v33 - v32 - 12) >> 2)) & 0x3FFFFFFFFFFFFFFFLL;
    v36 = v35 + 1;
    if ( v35 <= 2 )
      goto LABEL_48;
    do
    {
      *v34 = 0;
      v34 += 3;
      *(v34 - 2) = 0;
      *(v34 - 1) = 0;
    }
    while ( (_OWORD *)(v32 + 48 * (v36 >> 2)) != v34 );
    v32 += 12 * (v36 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v36 & 3) != 0 )
    {
LABEL_48:
      *(_QWORD *)v32 = 0;
      *(_DWORD *)(v32 + 8) = 0;
      if ( v33 != (_DWORD *)(v32 + 12) )
      {
        *(_QWORD *)(v32 + 12) = 0;
        *(_DWORD *)(v32 + 20) = 0;
        if ( v33 != (_DWORD *)(v32 + 24) )
        {
          *(_QWORD *)(v32 + 24) = 0;
          *(_DWORD *)(v32 + 32) = 0;
        }
      }
    }
    goto LABEL_23;
  }
  v23 = (unsigned int)*(v5 - 1);
  if ( (unsigned int)v23 < v7 )
  {
    while ( 1 )
    {
      v31 = *(v5 - 2);
      if ( v31 >= v7 )
        break;
LABEL_30:
      v28 = (3 * v31 + 1) >> 1;
      v29 = 4 * (v28 + ((3 * v31 + 1) & 0xFFFFFFFE)) + 8;
      if ( 12 * v31 + 8 >= (unsigned int)v29 || v31 >= v28 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_137C7A(v42);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v42);
        sub_233E40((__int64)v42);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v30 = (unsigned int *)sub_186B300(v5 - 2, v29);
      v5 = v30 + 2;
      *(_QWORD *)(v4 + 424) = v30 + 2;
      *v30 = v28;
    }
    *(v5 - 1) = v7;
    v32 = (__int64)&v5[3 * v23];
    v33 = &v5[v39];
    if ( v39 == 3 * v23 )
      goto LABEL_23;
    goto LABEL_35;
  }
  *(v5 - 1) = v7;
LABEL_23:
  sub_100E990(*(_QWORD *)(v4 + 504), v3);
  v24 = *(_QWORD *)(v4 + 528);
  if ( v24 )
    *(_DWORD *)(v24 - 4) = 0;
  v25 = *(_QWORD *)(v4 + 272);
  if ( v25 )
    *(_DWORD *)(v25 - 4) = 0;
  v26 = *(_QWORD *)(v4 + 328);
  if ( v26 )
    sub_1021CB0(v26, v3);
  return sub_965AE0(a1, v3);
}

