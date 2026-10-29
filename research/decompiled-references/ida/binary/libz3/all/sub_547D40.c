__int64 __fastcall sub_547D40(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // r13
  char **v4; // r13
  char **exception; // rbx
  char **v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r13
  unsigned int v10; // r12d
  _QWORD *v11; // rax
  _DWORD *v12; // rbp
  unsigned int v13; // edx
  size_t v14; // rsi
  unsigned int *v15; // rax
  unsigned int v16; // ebx
  _BYTE *v17; // rdx
  int v18; // eax
  _QWORD *v19; // rax
  _DWORD *i; // rbx
  unsigned int v21; // edx
  size_t v22; // rsi
  unsigned int v23; // r14d
  unsigned int *v24; // rax
  unsigned int v25; // ecx
  _BYTE *v26; // rax
  int v27; // r14d
  int v28; // r15d
  int v29; // r12d
  __int64 v30; // rax
  __int64 v31; // rax
  __int32 v32; // eax
  __int64 result; // rax
  unsigned int v34; // edx
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rdx
  unsigned int v38; // r14d
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // r14
  __int64 v42; // rax
  _QWORD *v43; // rax
  int v46; // [rsp+28h] [rbp-70h]
  unsigned int v47; // [rsp+2Ch] [rbp-6Ch]
  __int64 v48; // [rsp+38h] [rbp-60h] BYREF
  __int64 v49[11]; // [rsp+40h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(a1 + 32);
  sub_654200(v7, 0);
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 2968) + 192LL))(*(_QWORD *)(v7 + 2968));
  LODWORD(v7) = *(_DWORD *)(a2 + 32);
  v48 = 0;
  v9 = v8;
  v46 = v7;
  sub_4C51C0(v8, a2, &v48);
  v10 = v7 - 1;
  if ( (_DWORD)v7 == 1 )
  {
    v42 = sub_186B270(0xAu);
    v12 = (_DWORD *)(v42 + 8);
    *(_QWORD *)v42 = 0x100000002LL;
    *(_BYTE *)(v42 + 8) = 0;
    v43 = (_QWORD *)sub_186B270(0xAu);
    i = v43 + 1;
    *v43 = 2;
    v46 = 1;
    v26 = v43 + 1;
  }
  else
  {
    v11 = (_QWORD *)sub_186B270(0xAu);
    v12 = v11 + 1;
    *v11 = 2;
    while ( 1 )
    {
      v16 = *(v12 - 2);
      if ( v16 >= v10 )
        break;
      v13 = (3 * v16 + 1) >> 1;
      v14 = v13 + 8;
      if ( v16 + 8 >= (unsigned int)v14 || v16 >= v13 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v49, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v49);
        sub_233E40((__int64)v49);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v15 = (unsigned int *)sub_186B300(v12 - 2, v14);
      *v15 = (3 * v16 + 1) >> 1;
      v12 = v15 + 2;
    }
    *(v12 - 1) = v10;
    memset(v12, 1, v10);
    if ( v10 == v16 )
    {
      v34 = (3 * v10 + 1) >> 1;
      v35 = v34 + 8;
      if ( v10 + 8 >= (unsigned int)v35 || v10 >= v34 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v49, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v49);
        sub_233E40((__int64)v49);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v36 = (unsigned int *)sub_186B300(v12 - 2, v35);
      v37 = v36[1];
      v12 = v36 + 2;
      *v36 = (3 * v10 + 1) >> 1;
      LODWORD(v36) = v37;
      v17 = (char *)v12 + v37;
      v18 = (_DWORD)v36 + 1;
    }
    else
    {
      v17 = (char *)v12 + v10;
      v18 = v46;
    }
    *v17 = 0;
    *(v12 - 1) = v18;
    v19 = (_QWORD *)sub_186B270(0xAu);
    *v19 = 2;
    for ( i = v19 + 1; ; i = v24 + 2 )
    {
      v25 = *(i - 2);
      if ( v25 >= v10 )
        break;
      v21 = (3 * v25 + 1) >> 1;
      v22 = v21 + 8;
      v23 = v21;
      if ( v25 + 8 >= (unsigned int)v22 || v25 >= v21 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v49, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v49);
        sub_233E40((__int64)v49);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v24 = (unsigned int *)sub_186B300(i - 2, v22);
      *v24 = v23;
    }
    *(i - 1) = v10;
    v47 = v25;
    memset(i, 0, v10);
    if ( v10 == v47 )
    {
      v38 = (3 * v10 + 1) >> 1;
      v39 = v38 + 8;
      if ( v10 + 8 >= (unsigned int)v39 || v10 >= v38 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v49, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v49);
        sub_233E40((__int64)v49);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v40 = (unsigned int *)sub_186B300(i - 2, v39);
      *v40 = v38;
      i = v40 + 2;
      v41 = v40[1];
      v26 = (char *)v40 + v41 + 8;
      v46 = v41 + 1;
    }
    else
    {
      v26 = (char *)i + v10;
    }
  }
  *v26 = 1;
  *(i - 1) = v46;
  v27 = sub_596CF0(v9);
  sub_4C2FA0(v9, a3);
  v28 = sub_599F20(v27, (int)&v48);
  v29 = sub_599F20(v27, (int)&v48);
  v49[0] = 0;
  v30 = sub_186B270(0x10u);
  *(_DWORD *)(v30 + 8) = v28;
  *(_DWORD *)(v30 + 12) = v29;
  *(_QWORD *)v30 = 0x200000002LL;
  v49[0] = v30 + 8;
  v31 = sub_579060(v9);
  v32 = sub_57B970(v31, &v48, v49);
  sub_4C2C80(v9, a2, v32);
  if ( v49[0] )
    sub_186B220((void *)(v49[0] - 8));
  sub_186B220(i - 2);
  result = sub_186B220(v12 - 2);
  if ( v48 )
    return sub_186B220((void *)(v48 - 8));
  return result;
}

