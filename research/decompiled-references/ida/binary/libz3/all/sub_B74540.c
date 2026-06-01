__int64 __fastcall sub_B74540(__int64 a1, __int64 a2)
{
  char **exception; // r14
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rax
  int v11; // ecx
  __int64 *v12; // rax
  unsigned int v13; // eax
  _QWORD *v14; // rax
  unsigned int v15; // edx
  size_t v16; // rsi
  unsigned int v17; // r12d
  unsigned int *v18; // rax
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // r12
  int v23; // r13d
  int v24; // eax
  __int64 v25; // r13
  __int64 *v26; // r15
  __int64 *v27; // r14
  __int64 v28; // rsi
  int v31; // r9d
  __int64 v32; // rax
  int v33; // [rsp-8h] [rbp-88h]
  __int64 v34; // [rsp+0h] [rbp-80h]
  int v35[2]; // [rsp+0h] [rbp-80h]
  __int64 v36; // [rsp+8h] [rbp-78h]
  int v37; // [rsp+10h] [rbp-70h]
  int v38; // [rsp+18h] [rbp-68h]
  __int64 v39; // [rsp+28h] [rbp-58h]
  __int64 v40; // [rsp+30h] [rbp-50h] BYREF
  int v41; // [rsp+38h] [rbp-48h]
  int v42; // [rsp+40h] [rbp-40h]
  void *v43; // [rsp+48h] [rbp-38h]

  v4 = *(_QWORD *)(a2 + 24);
  v34 = *(_QWORD *)(a2 + 8);
  if ( !*(_DWORD *)(a1 + 12) )
  {
    v32 = *(_QWORD *)(a1 + 32);
    v22 = v32;
    if ( !v32 )
    {
      v6 = nullptr;
      goto LABEL_38;
    }
    v23 = *(_DWORD *)(v32 - 4);
    v6 = nullptr;
LABEL_25:
    v24 = sub_15E1AF0(v34);
    v25 = sub_15E0A80(
            v34,
            *(_DWORD *)(a1 + 24),
            v24,
            0,
            0,
            v23,
            v22,
            v33,
            v34,
            v36,
            v37,
            v38,
            v34,
            v39,
            v40,
            v41,
            v42,
            v43);
    if ( v6 )
      goto LABEL_26;
    return v25;
  }
  v5 = 0;
  v6 = nullptr;
  do
  {
    v13 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v5);
    if ( v13 != dword_1C7ED74 )
    {
      if ( v13 == dword_1C7ED70 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(v4 + 104) + 864LL);
        v36 = v8;
        if ( !v8 )
          goto LABEL_7;
      }
      else
      {
        v7 = *(_QWORD *)(*(_QWORD *)(v4 + 8840) + 8LL * (v13 >> 1));
        v36 = v7;
        if ( (v13 & 1) == 0 )
        {
          v8 = *(_QWORD *)(*(_QWORD *)(v4 + 8840) + 8LL * (v13 >> 1));
          if ( !v7 )
            goto LABEL_7;
          goto LABEL_6;
        }
        v8 = sub_15E1A70(*(_QWORD *)(v4 + 104));
        v36 = v8;
        if ( !v8 )
        {
LABEL_7:
          if ( !v6 )
            goto LABEL_14;
          goto LABEL_8;
        }
      }
LABEL_6:
      ++*(_DWORD *)(v8 + 8);
      goto LABEL_7;
    }
    v8 = *(_QWORD *)(*(_QWORD *)(v4 + 104) + 856LL);
    v36 = v8;
    if ( v8 )
      goto LABEL_6;
    if ( !v6 )
    {
LABEL_14:
      v14 = (_QWORD *)sub_186B270(0x18u);
      *v14 = 2;
      v12 = v14 + 1;
      v11 = 1;
      v6 = v12;
      goto LABEL_10;
    }
LABEL_8:
    v9 = *((_DWORD *)v6 - 1);
    if ( v9 == *((_DWORD *)v6 - 2) )
    {
      v15 = (3 * v9 + 1) >> 1;
      v16 = 8 * v15 + 8;
      v17 = v15;
      if ( 8 * v9 + 8 >= (unsigned int)v16 || v9 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v40, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v40);
        sub_233E40((__int64)&v40);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v18 = (unsigned int *)sub_186B300(v6 - 1, v16);
      v6 = (__int64 *)(v18 + 2);
      *v18 = v17;
      v19 = v18[1];
      v20 = v19;
      v12 = &v6[v19];
      v11 = v20 + 1;
    }
    else
    {
      v10 = v9;
      v11 = v9 + 1;
      v12 = &v6[v10];
    }
LABEL_10:
    ++v5;
    *v12 = v36;
    *((_DWORD *)v6 - 1) = v11;
  }
  while ( (unsigned int)v5 < *(_DWORD *)(a1 + 12) );
  v21 = *(_QWORD *)(a1 + 32);
  v22 = v21;
  if ( v11 != 1 )
  {
    if ( v21 )
    {
      v23 = *(_DWORD *)(v21 - 4);
      goto LABEL_25;
    }
LABEL_38:
    v23 = 0;
    goto LABEL_25;
  }
  if ( v21 )
    v31 = *(_DWORD *)(v21 - 4);
  else
    v31 = 0;
  v25 = sub_15E0A80(
          v34,
          *(_DWORD *)(a1 + 24),
          *v6,
          0,
          0,
          v31,
          *(_QWORD *)(a1 + 32),
          v33,
          v34,
          v36,
          v37,
          v38,
          v34,
          v39,
          v40,
          v41,
          v42,
          v43);
LABEL_26:
  v26 = v6;
  v27 = &v6[*((unsigned int *)v6 - 1)];
  if ( v6 < v27 )
  {
    do
    {
      while ( 1 )
      {
        v28 = *v26;
        if ( *v26 )
        {
          if ( (*(_DWORD *)(v28 + 8))-- == 1 )
            break;
        }
        if ( ++v26 >= v27 )
          goto LABEL_32;
      }
      sub_15D7BC0(*(_QWORD *)v35, v28);
      ++v26;
    }
    while ( v26 < v27 );
  }
LABEL_32:
  sub_186B220(v6 - 1);
  return v25;
}

