__int64 __fastcall sub_56EC90(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  char **v4; // r12
  char **exception; // rbx
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rbx
  unsigned int *v11; // r12
  _QWORD *v12; // rax
  _DWORD *v13; // rax
  _DWORD *v14; // rdx
  int v15; // ecx
  int v16; // edi
  __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  size_t v20; // rsi
  unsigned int v21; // r15d
  unsigned int *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned int *v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // r14d
  __int64 v29; // r12
  unsigned int v30; // ebp
  _QWORD *v31; // rax
  _QWORD *v32; // rbx
  unsigned int v33; // ecx
  size_t v34; // rsi
  unsigned int v35; // r15d
  unsigned int *v36; // rax
  unsigned int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // ebp
  __int64 v42; // rax
  __int64 v44; // rdi
  __int64 v45; // rsi
  int v46; // eax
  __int64 v47; // [rsp+0h] [rbp-88h]
  unsigned int v48; // [rsp+Ch] [rbp-7Ch]
  unsigned int *v49; // [rsp+10h] [rbp-78h]
  __int64 v51[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a2 + 32) != *(_DWORD *)(a1 + 8) )
    return 0;
  v8 = sub_186B270(0x28u);
  *(_QWORD *)(v8 + 8) = 0;
  v9 = v8;
  *(_DWORD *)(v8 + 16) = 0;
  v47 = v8;
  *(_QWORD *)v8 = qword_1C65E70;
  *(_QWORD *)(v8 + 24) = 0;
  if ( a3 )
  {
    v10 = a3;
    v11 = a4;
    v12 = (_QWORD *)sub_186B270(0x10u);
    *v12 = 2;
    v13 = v12 + 1;
    *(_QWORD *)(v9 + 24) = v13;
    v14 = v13;
    while ( 1 )
    {
      v15 = *v11++;
      *v13 = v15;
      v16 = *(v14 - 1);
      v17 = (unsigned int)(v16 + 1);
      *(v14 - 1) = v17;
      if ( &a4[a3] == v11 )
        break;
      v18 = *(v14 - 2);
      if ( v18 == (_DWORD)v17 )
      {
        v19 = (3 * v18 + 1) >> 1;
        v20 = 4 * v19 + 8;
        v21 = v19;
        if ( 4 * v16 + 12 >= (unsigned int)v20 || v18 >= v19 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v51, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v51);
          sub_233E40((__int64)v51);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v22 = (unsigned int *)sub_186B300(v14 - 2, v20);
        v14 = v22 + 2;
        *v22 = v21;
        v23 = v22[1];
        *(_QWORD *)(v47 + 24) = v14;
        v13 = &v14[v23];
      }
      else
      {
        v13 = &v14[v17];
      }
    }
    if ( v47 + 8 == a2 + 16 || !*(_QWORD *)(a2 + 16) )
    {
      *(_DWORD *)(v47 + 16) = *(_DWORD *)(a2 + 24);
      if ( a3 != 1 )
      {
LABEL_13:
        v24 = *(_QWORD *)(v47 + 8);
        v25 = *(_QWORD *)(v24 + 8LL * *a4);
        v26 = a4;
        do
        {
          v27 = v26[1];
          *(_QWORD *)(v24 + 8LL * *v26++) = *(_QWORD *)(v24 + 8 * v27);
        }
        while ( v26 != &a4[a3 - 1] );
        *(_QWORD *)(v24 + 8LL * a4[a3 - 1]) = v25;
        *(_QWORD *)v47 = &off_1C514A8;
        *(_QWORD *)(v47 + 32) = 0;
        goto LABEL_16;
      }
      *(_QWORD *)v47 = &off_1C514A8;
      *(_QWORD *)(v47 + 32) = 0;
      goto LABEL_16;
    }
    sub_577180(v47 + 8, a2 + 16);
    *(_DWORD *)(v47 + 16) = *(_DWORD *)(a2 + 24);
    if ( a3 != 1 )
      goto LABEL_13;
  }
  else
  {
    v44 = v8 + 8;
    v45 = a2 + 16;
    v40 = *(_QWORD *)(a2 + 16);
    if ( a2 + 16 == v9 + 8 )
    {
      *(_DWORD *)(v47 + 16) = *(_DWORD *)(a2 + 24);
      *(_QWORD *)v47 = &off_1C514A8;
      *(_QWORD *)(v47 + 32) = 0;
      goto LABEL_45;
    }
    if ( !v40 )
    {
      v46 = *(_DWORD *)(a2 + 24);
      *(_QWORD *)(v9 + 32) = 0;
      *(_DWORD *)(v9 + 16) = v46;
      *(_QWORD *)v9 = &off_1C514A8;
      return v47;
    }
    sub_577180(v44, v45);
    *(_DWORD *)(v9 + 16) = *(_DWORD *)(a2 + 24);
  }
  v10 = a3;
  *(_QWORD *)v47 = &off_1C514A8;
  *(_QWORD *)(v47 + 32) = 0;
  if ( !a3 )
  {
    v40 = *(_QWORD *)(a2 + 16);
LABEL_45:
    if ( !v40 )
      return v47;
    LODWORD(v51[0]) = 0;
    v32 = nullptr;
    goto LABEL_27;
  }
LABEL_16:
  v28 = *a4;
  v49 = &a4[v10];
  v29 = *a4 >> 5;
  v30 = v29 + 1;
  v31 = (_QWORD *)sub_186B270(0x10u);
  *v31 = 2;
  v32 = v31 + 1;
  v48 = 0;
LABEL_20:
  while ( 1 )
  {
    v37 = *((_DWORD *)v32 - 2);
    if ( v37 >= v30 )
      break;
    v33 = (3 * v37 + 1) >> 1;
    v34 = 4 * v33 + 8;
    v35 = v33;
    if ( 4 * v37 + 8 >= (unsigned int)v34 || v37 >= v33 )
    {
      v4 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v51, "Overflow encountered when expanding vector");
      *v4 = (char *)off_1C63128;
      sub_2333C0(v4 + 1, v51);
      sub_233E40((__int64)v51);
      __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v36 = (unsigned int *)sub_186B300(v32 - 1, v34);
    *v36 = v35;
    v32 = v36 + 2;
  }
  *((_DWORD *)v32 - 1) = v30;
  v38 = 4LL * v30;
  v39 = 4LL * v48;
  if ( v39 != v38 )
    memset((char *)v32 + v39, 0, v38 - v39);
  while ( 1 )
  {
    ++a4;
    *((_DWORD *)v32 + v29) |= 1 << v28;
    if ( a4 == v49 )
      break;
    v28 = *a4;
    v48 = *((_DWORD *)v32 - 1);
    v29 = *a4 >> 5;
    if ( (unsigned int)v29 >= v48 )
    {
      v30 = v29 + 1;
      goto LABEL_20;
    }
  }
  LODWORD(v51[0]) = 0;
  v40 = *(_QWORD *)(a2 + 16);
  if ( !v40 )
    goto LABEL_37;
LABEL_27:
  v41 = 0;
  do
  {
    if ( v41 >= *(_DWORD *)(v40 - 4) )
      break;
    v42 = v41 >> 5;
    if ( !v32 || (unsigned int)v42 >= *((_DWORD *)v32 - 1) || (*((_DWORD *)v32 + v42) & (1 << v41)) == 0 )
      sub_56C550((_QWORD *)(v47 + 32), (unsigned int *)v51);
    LODWORD(v51[0]) = ++v41;
    v40 = *(_QWORD *)(a2 + 16);
  }
  while ( v40 );
  if ( v32 )
LABEL_37:
    sub_186B220(v32 - 1);
  return v47;
}

