__int64 __fastcall sub_81DFD0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  char **v3; // r12
  _DWORD *v5; // rbx
  unsigned int v6; // r14d
  __int64 v7; // rax
  const void *v8; // rdi
  _DWORD *v9; // rax
  char *v10; // rdx
  unsigned int v11; // edx
  __int64 v12; // rcx
  unsigned int v13; // esi
  __int64 *v14; // r13
  __int64 *v15; // r15
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rdi
  unsigned int *v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rdi
  unsigned int v24; // eax
  __int64 result; // rax
  __int64 v27; // rcx
  int v28; // eax
  _QWORD *v29; // rcx
  unsigned int v30; // eax
  unsigned int v31; // r14d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // r15d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rsi
  _QWORD *v39; // rax
  __int64 v41; // [rsp+0h] [rbp-78h]
  int v42[2]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *(_DWORD **)(a1 + 456);
  if ( v5 )
    *(v5 - 1) = 0;
  v6 = *(_DWORD *)(a1 + 136);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 2400LL);
  if ( !v7 || v6 >= *(_DWORD *)(v7 - 4) || (v8 = *(const void **)(v7 + 8LL * v6)) == nullptr )
    BUG();
  v9 = __dynamic_cast(
         v8,
         (const struct __class_type_info *)&`typeinfo for'euf::th_solver,
         (const struct __class_type_info *)&`typeinfo for'array::solver,
         0);
  v10 = (char *)(a2 + 88);
  if ( *(int *)(a2 + 88) >> 8 == -1 )
  {
LABEL_34:
    v11 = -1;
  }
  else
  {
    while ( v9[3] != *v10 )
    {
      v10 = *((char **)v10 + 1);
      if ( !v10 )
        goto LABEL_34;
    }
    v11 = *(int *)v10 >> 8;
  }
  do
  {
    v12 = v11;
    v13 = v11;
    v11 = *(_DWORD *)(*((_QWORD *)v9 + 43) + 4LL * v11);
  }
  while ( v13 != v11 );
  v14 = *(__int64 **)(*(_QWORD *)(*((_QWORD *)v9 + 23) + 8 * v12) + 24LL);
  if ( v14 )
  {
    v15 = &v14[*((unsigned int *)v14 - 1)];
    if ( v15 != v14 )
    {
      v16 = *v14;
      if ( v5 )
        goto LABEL_29;
      ++v14;
      v17 = sub_186B270(0x18u);
      v5 = (_DWORD *)(v17 + 8);
      *(_QWORD *)v17 = 2;
      *(_QWORD *)(a1 + 456) = v17 + 8;
      *(_QWORD *)(v17 + 8) = v16;
      for ( *(_DWORD *)(v17 + 4) = 1; v15 != v14; *(v5 - 1) = v28 )
      {
        v16 = *v14;
LABEL_29:
        v30 = *(v5 - 1);
        if ( v30 == *(v5 - 2) )
        {
          v31 = (3 * v30 + 1) >> 1;
          v32 = 8 * v31 + 8;
          if ( 8 * v30 + 8 >= (unsigned int)v32 || v30 >= v31 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v42, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v42);
            sub_233E40((__int64)v42);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v33 = (unsigned int *)sub_186B300(v5 - 2, v32);
          v34 = v33[1];
          v5 = v33 + 2;
          *v33 = v31;
          *(_QWORD *)(a1 + 456) = v33 + 2;
          LODWORD(v33) = v34;
          v29 = &v5[2 * v34];
          v28 = (_DWORD)v33 + 1;
        }
        else
        {
          v27 = v30;
          v28 = v30 + 1;
          v29 = &v5[2 * v27];
        }
        ++v14;
        *v29 = v16;
      }
    }
  }
  v18 = *(_QWORD *)(a1 + 72);
  v19 = *(_QWORD *)(a1 + 144);
  *(_QWORD *)v42 = *(_QWORD *)a2;
  v20 = (unsigned int *)sub_15DCAD0(v19, (int)v42, 0);
  if ( v20 )
    ++v20[2];
  v21 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
  if ( !v21 )
  {
LABEL_21:
    v23 = *(_QWORD *)(a1 + 456);
    if ( v23 )
      goto LABEL_22;
LABEL_39:
    v39 = (_QWORD *)sub_186B270(0x18u);
    v39[1] = v21;
    *(_QWORD *)(a1 + 456) = v39 + 1;
    *v39 = 0x100000002LL;
    result = a1 + 456;
    goto LABEL_24;
  }
  v22 = *v20;
  if ( (unsigned int)v22 < *(_DWORD *)(v21 - 4) )
  {
    v21 = *(_QWORD *)(v21 + 8 * v22);
    goto LABEL_21;
  }
  v23 = *(_QWORD *)(a1 + 456);
  v21 = 0;
  if ( !v23 )
    goto LABEL_39;
LABEL_22:
  v24 = *(_DWORD *)(v23 - 4);
  if ( v24 == *(_DWORD *)(v23 - 8) )
  {
    v35 = (3 * v24 + 1) >> 1;
    v36 = 8 * v35 + 8;
    if ( 8 * v24 + 8 >= (unsigned int)v36 || v24 >= v35 )
    {
      v3 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v42, "Overflow encountered when expanding vector");
      *v3 = (char *)off_1C63128;
      sub_2333C0(v3 + 1, v42);
      sub_233E40((__int64)v42);
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v37 = (unsigned int *)sub_186B300((void *)(v23 - 8), v36);
    v38 = v37[1];
    *v37 = v35;
    *(_QWORD *)(a1 + 456) = v37 + 2;
    *(_QWORD *)&v37[2 * v38 + 2] = v21;
    v37[1] = v38 + 1;
    result = a1 + 456;
  }
  else
  {
    *(_QWORD *)(v23 + 8LL * v24) = v21;
    *(_DWORD *)(v23 - 4) = v24 + 1;
    result = a1 + 456;
  }
LABEL_24:
  if ( v20[2]-- == 1 )
  {
    v41 = result;
    sub_15D7BC0(v18, v20);
    return v41;
  }
  return result;
}

