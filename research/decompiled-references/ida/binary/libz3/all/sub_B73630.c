__int64 __fastcall sub_B73630(__int64 a1, __int64 a2)
{
  char **exception; // r12
  __int64 v3; // r12
  __int64 v4; // r13
  unsigned __int64 *v5; // rbx
  unsigned int v6; // ecx
  __int64 v7; // rax
  int v8; // ecx
  unsigned __int64 *v9; // rax
  unsigned int v10; // r15d
  size_t v11; // rsi
  unsigned int *v12; // rax
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // r15
  int v17; // r13d
  int v18; // eax
  __int64 v19; // r13
  unsigned __int64 *v20; // r15
  unsigned __int64 *v21; // r14
  unsigned __int64 v22; // rsi
  _QWORD *v25; // rax
  int v26; // r9d
  __int64 v27; // rax
  int v28; // [rsp-8h] [rbp-88h]
  int v29; // [rsp+0h] [rbp-80h]
  unsigned __int64 v30; // [rsp+8h] [rbp-78h]
  int v31; // [rsp+10h] [rbp-70h]
  int v32; // [rsp+18h] [rbp-68h]
  __int64 v33; // [rsp+28h] [rbp-58h]
  __int64 v34; // [rsp+30h] [rbp-50h] BYREF
  int v35; // [rsp+38h] [rbp-48h]
  int v36; // [rsp+40h] [rbp-40h]
  void *v37; // [rsp+48h] [rbp-38h]

  v3 = *(_QWORD *)(a2 + 8);
  if ( !*(_DWORD *)(a1 + 24) )
  {
    v27 = *(_QWORD *)(a1 + 16);
    v16 = v27;
    if ( v27 )
    {
      v17 = *(_DWORD *)(v27 - 4);
      v5 = nullptr;
LABEL_17:
      v18 = sub_15E1AF0(v3);
      v19 = sub_15E0A80(
              v3,
              *(_DWORD *)(a1 + 12),
              v18,
              0,
              0,
              v17,
              v16,
              v28,
              v29,
              v30,
              v31,
              v32,
              v3,
              v33,
              v34,
              v35,
              v36,
              v37);
      if ( !v5 )
        return v19;
      goto LABEL_18;
    }
    v5 = nullptr;
LABEL_31:
    v17 = 0;
    goto LABEL_17;
  }
  v4 = 0;
  v5 = nullptr;
  do
  {
    v30 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v4) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v4) & 7) != 0 )
      v30 = sub_15E1A70(v3);
    if ( v30 )
      ++*(_DWORD *)(v30 + 8);
    if ( v5 )
    {
      v6 = *((_DWORD *)v5 - 1);
      if ( v6 == *((_DWORD *)v5 - 2) )
      {
        v10 = (3 * v6 + 1) >> 1;
        v11 = 8 * v10 + 8;
        if ( 8 * v6 + 8 >= (unsigned int)v11 || v6 >= v10 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v34, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v34);
          sub_233E40((__int64)&v34);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v12 = (unsigned int *)sub_186B300(v5 - 1, v11);
        v5 = (unsigned __int64 *)(v12 + 2);
        *v12 = v10;
        v13 = v12[1];
        v14 = v13;
        v9 = &v5[v13];
        v8 = v14 + 1;
      }
      else
      {
        v7 = v6;
        v8 = v6 + 1;
        v9 = &v5[v7];
      }
    }
    else
    {
      v25 = (_QWORD *)sub_186B270(0x18u);
      *v25 = 2;
      v9 = v25 + 1;
      v8 = 1;
      v5 = v9;
    }
    ++v4;
    *v9 = v30;
    *((_DWORD *)v5 - 1) = v8;
  }
  while ( (unsigned int)v4 < *(_DWORD *)(a1 + 24) );
  v15 = *(_QWORD *)(a1 + 16);
  v16 = v15;
  if ( v8 != 1 )
  {
    if ( v15 )
    {
      v17 = *(_DWORD *)(v15 - 4);
      goto LABEL_17;
    }
    goto LABEL_31;
  }
  if ( v15 )
    v26 = *(_DWORD *)(v15 - 4);
  else
    v26 = 0;
  v19 = sub_15E0A80(
          v3,
          *(_DWORD *)(a1 + 12),
          *v5,
          0,
          0,
          v26,
          *(_QWORD *)(a1 + 16),
          v28,
          v29,
          v30,
          v31,
          v32,
          v3,
          v33,
          v34,
          v35,
          v36,
          v37);
LABEL_18:
  v20 = v5;
  v21 = &v5[*((unsigned int *)v5 - 1)];
  if ( v5 < v21 )
  {
    do
    {
      while ( 1 )
      {
        v22 = *v20;
        if ( *v20 )
        {
          if ( (*(_DWORD *)(v22 + 8))-- == 1 )
            break;
        }
        if ( ++v20 >= v21 )
          goto LABEL_24;
      }
      sub_15D7BC0(v3, v22);
      ++v20;
    }
    while ( v20 < v21 );
  }
LABEL_24:
  sub_186B220(v5 - 1);
  return v19;
}

