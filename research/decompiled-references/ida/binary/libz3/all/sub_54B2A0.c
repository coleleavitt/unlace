__int64 __fastcall sub_54B2A0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  _DWORD *i; // rbp
  __int64 v7; // rax
  unsigned int v10; // ebx
  _QWORD *v11; // rax
  unsigned int v12; // r15d
  size_t v13; // rsi
  unsigned int *v14; // rax
  unsigned int v15; // eax
  size_t v16; // rdx
  unsigned int v17; // ebx
  __int64 v18; // r15
  __int64 v19; // rsi
  bool v20; // cf
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rsi
  int v25; // ecx
  __int64 result; // rax
  __int64 v27; // rbx
  __int64 v28; // r13
  __int64 v29; // rdx
  __int64 v30; // r13
  __int64 *v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rdi
  bool v34; // zf
  __int64 v35; // rdi
  __int64 *v36; // rdx
  char **exception; // r12
  int v38; // [rsp+0h] [rbp-78h]
  __int64 v39; // [rsp+8h] [rbp-70h]
  __int64 v40; // [rsp+10h] [rbp-68h]
  __int64 v41; // [rsp+18h] [rbp-60h]
  int v42[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v43; // [rsp+28h] [rbp-50h]
  __int64 v44; // [rsp+30h] [rbp-48h]
  void *v45; // [rsp+38h] [rbp-40h]

  i = *(_DWORD **)(a2[5] + 8LL * *(unsigned int *)(a1 + 24));
  if ( i )
    ((void (__noreturn *)(void))sub_EA784)();
  v7 = a2[2];
  if ( v7 && (v10 = *(_DWORD *)(v7 - 4)) != 0 )
  {
    v11 = (_QWORD *)sub_186B270(0x18u);
    *v11 = 2;
    for ( i = v11 + 1; ; i = v14 + 2 )
    {
      v15 = *(i - 2);
      if ( v15 >= v10 )
        break;
      v12 = (3 * v15 + 1) >> 1;
      v13 = 8 * v12 + 8;
      if ( 8 * v15 + 8 >= (unsigned int)v13 || v15 >= v12 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v42, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v42);
        sub_233E40((__int64)v42);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = (unsigned int *)sub_186B300(i - 2, v13);
      *v14 = v12;
    }
    *(i - 1) = v10;
    v16 = 8LL * v10;
    v17 = v10 - 1;
    v18 = 0;
    memset(i, 0, v16);
    v19 = a2[5];
    v39 = (__int64)(i - 2);
    do
    {
      while ( 1 )
      {
        v21 = *(_QWORD *)(v19 + 8 * v18);
        if ( !v21 )
          break;
        ++v18;
        *(_QWORD *)&i[2 * v17] = v21;
        v20 = v17-- == 0;
        if ( v20 )
          goto LABEL_14;
      }
      v22 = *(_QWORD *)(a1 + 32);
      if ( (unsigned __int8)sub_645050(v22, v38, v39, v40, v41) )
        sub_EA784(v22, (unsigned int)v18);
      v19 = a2[5];
      v23 = *(_QWORD *)(v19 + 8 * v18++);
      *(_QWORD *)&i[2 * v17] = v23;
      v20 = v17-- == 0;
    }
    while ( !v20 );
LABEL_14:
    v24 = *(_QWORD *)(a1 + 16);
    v25 = *(i - 1);
  }
  else
  {
    v24 = *(_QWORD *)(a1 + 16);
    v25 = 0;
  }
  result = sub_157BE40((int)v42, v24, *(_QWORD *)(a1 + 32), v25, (int)i, a6, v38, v39, v40, v41, v42[0], v43, v44, v45);
  v27 = *(_QWORD *)v42;
  v28 = *(unsigned int *)(a1 + 24);
  if ( !*(_QWORD *)v42 )
  {
    v30 = 8 * v28;
    v36 = (__int64 *)(v30 + a2[5]);
    v32 = *v36;
    if ( !*v36 )
      goto LABEL_21;
    v33 = a2[4];
    v34 = (*(_DWORD *)(v32 + 8))-- == 1;
    if ( !v34 )
    {
      *v36 = 0;
      goto LABEL_21;
    }
LABEL_26:
    sub_15D7BC0(v33, v32);
    result = *(_QWORD *)v42;
    *(_QWORD *)(a2[5] + v30) = v27;
    v27 = result;
    if ( !result )
      goto LABEL_21;
    goto LABEL_19;
  }
  v29 = a2[5];
  v30 = 8 * v28;
  ++*(_DWORD *)(*(_QWORD *)v42 + 8LL);
  v31 = (__int64 *)(v30 + v29);
  v32 = *v31;
  if ( *v31 )
  {
    v33 = a2[4];
    v34 = (*(_DWORD *)(v32 + 8))-- == 1;
    if ( v34 )
      goto LABEL_26;
  }
  *v31 = v27;
LABEL_19:
  v35 = v43;
  v34 = (*(_DWORD *)(v27 + 8))-- == 1;
  if ( v34 )
    result = sub_15D7BC0(v35, v27);
LABEL_21:
  if ( i )
    return sub_186B220(i - 2);
  return result;
}

