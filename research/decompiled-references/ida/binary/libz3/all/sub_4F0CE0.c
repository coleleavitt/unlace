__int64 *__fastcall sub_4F0CE0(__int64 *a1, _QWORD *a2, __int64 a3)
{
  char **exception; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // rbp
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // r12
  bool v12; // zf
  __int64 v13; // rbp
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 *v26; // rbp
  unsigned __int64 v27; // r12
  __int64 v28; // rsi
  __int64 v31; // [rsp+10h] [rbp-A8h]
  unsigned int v32; // [rsp+1Ch] [rbp-9Ch]
  __int64 v34[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v35; // [rsp+60h] [rbp-58h] BYREF

  v5 = sub_4D6490(*(_QWORD *)(a2[1] + 24LL));
  *a1 = 0;
  v6 = *(_QWORD *)a3;
  a1[1] = v5;
  v7 = v5;
  sub_4F01B0(&v35, a2, v6);
  v8 = v35;
  v9 = (_QWORD *)sub_186B270(0x18u);
  v9[1] = v8;
  v10 = v9 + 1;
  *v9 = 0x100000002LL;
  if ( *(_DWORD *)(a3 + 16) )
  {
    v11 = 0;
    sub_4F01B0(v34, a2, **(_QWORD **)(a3 + 8));
    while ( 1 )
    {
      v13 = v34[0];
      v14 = v34[1];
      v15 = sub_15E1A70(v7);
      v16 = v15;
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
      v17 = *((_DWORD *)v10 - 1);
      if ( v17 == *((_DWORD *)v10 - 2) )
      {
        v18 = (3 * v17 + 1) >> 1;
        v19 = 8 * v18 + 8;
        if ( 8 * v17 + 8 >= (unsigned int)v19 || v17 >= v18 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v35, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v35);
          sub_233E40((__int64)&v35);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v32 = (3 * v17 + 1) >> 1;
        v31 = v16;
        v20 = (unsigned int *)sub_186B300(v10 - 1, v19);
        v10 = v20 + 2;
        v16 = v31;
        *v20 = v32;
        v17 = v20[1];
      }
      v10[v17] = v16;
      *((_DWORD *)v10 - 1) = v17 + 1;
      if ( v13 && (v12 = *(_DWORD *)(v13 + 8) == 1, --*(_DWORD *)(v13 + 8), v12) )
      {
        ++v11;
        sub_15D7BC0(v14, v13);
        if ( (unsigned int)v11 >= *(_DWORD *)(a3 + 16) )
        {
LABEL_14:
          v21 = *((unsigned int *)v10 - 1);
          goto LABEL_15;
        }
      }
      else if ( (unsigned int)++v11 >= *(_DWORD *)(a3 + 16) )
      {
        goto LABEL_14;
      }
      sub_4F01B0(v34, a2, *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v11));
    }
  }
  v21 = 1;
LABEL_15:
  v22 = sub_15EC1C0(v7, v21);
  v23 = v22;
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  v24 = *a1;
  if ( *a1 )
  {
    v25 = a1[1];
    v12 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v25, v24);
  }
  *a1 = v23;
  v26 = v10;
  v27 = (unsigned __int64)&v10[*((unsigned int *)v10 - 1)];
  if ( (unsigned __int64)v10 < v27 )
  {
    do
    {
      while ( 1 )
      {
        v28 = *v26;
        if ( *v26 )
        {
          v12 = (*(_DWORD *)(v28 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( (unsigned __int64)++v26 >= v27 )
          goto LABEL_26;
      }
      ++v26;
      sub_15D7BC0(v7, v28);
    }
    while ( (unsigned __int64)v26 < v27 );
  }
LABEL_26:
  sub_186B220(v10 - 1);
  return a1;
}

