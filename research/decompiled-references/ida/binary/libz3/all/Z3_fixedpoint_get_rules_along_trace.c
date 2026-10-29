_QWORD *__fastcall Z3_fixedpoint_get_rules_along_trace(__int64 a1, __int64 a2)
{
  char **exception; // r15
  char v3; // bp
  __int64 v4; // r13
  _QWORD *v5; // r14
  __int64 v6; // rdi
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  _QWORD *v10; // rdi
  unsigned int v11; // r12d
  __int64 v12; // r15
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 *v15; // rbx
  __int64 *v16; // r13
  __int64 v17; // rsi
  unsigned int v20; // r8d
  size_t v21; // rsi
  unsigned int v22; // r13d
  unsigned int *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rsi
  _QWORD *v26; // rsi
  int v27; // eax
  _QWORD *v28; // rax
  __int64 v29; // [rsp+18h] [rbp-70h] BYREF
  __int64 v30; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v31; // [rsp+28h] [rbp-60h]
  __int64 v32[11]; // [rsp+30h] [rbp-58h] BYREF

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
    sub_2A1E90();
  v4 = *(_QWORD *)(a1 + 232);
  v5 = (_QWORD *)sub_186B270(0x28u);
  sub_2518F0((__int64)v5, a1);
  v5[3] = v4;
  *v5 = &off_1C4CA20;
  v5[4] = 0;
  sub_24FBE0(a1, (__int64)v5);
  v6 = *(_QWORD *)(a2 + 24);
  v30 = v4;
  v31 = nullptr;
  v29 = 0;
  sub_6546E0(v6 + 48, (unsigned int)&v30, (unsigned int)&v29, v7, v8, v9);
  v10 = v31;
  v11 = 0;
  if ( v31 )
  {
    while ( v11 < *((_DWORD *)v10 - 1) )
    {
      while ( 1 )
      {
        v12 = v10[v11];
        if ( v12 )
          ++*(_DWORD *)(v12 + 8);
        v13 = v5[4];
        if ( !v13 )
        {
          v28 = (_QWORD *)sub_186B270(0x18u);
          v24 = v28 + 1;
          *v28 = 2;
          v10 = v31;
          v27 = 1;
          v5[4] = v24;
          v26 = v24;
          goto LABEL_26;
        }
        v14 = *(_DWORD *)(v13 - 4);
        if ( v14 == *(_DWORD *)(v13 - 8) )
          break;
        ++v11;
        *(_QWORD *)(v13 + 8LL * v14) = v12;
        *(_DWORD *)(v13 - 4) = v14 + 1;
        if ( v11 >= *((_DWORD *)v10 - 1) )
          goto LABEL_10;
      }
      v20 = (3 * v14 + 1) >> 1;
      v21 = 8 * v20 + 8;
      v22 = v20;
      if ( 8 * v14 + 8 >= (unsigned int)v21 || v14 >= v20 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v32, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v32);
        sub_233E40((__int64)v32);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v23 = (unsigned int *)sub_186B300((void *)(v13 - 8), v21);
      v24 = v23 + 2;
      v25 = v23[1];
      v10 = v31;
      *v23 = v22;
      v5[4] = v23 + 2;
      LODWORD(v23) = v25;
      v26 = &v24[v25];
      v27 = (_DWORD)v23 + 1;
LABEL_26:
      *v26 = v12;
      *((_DWORD *)v24 - 1) = v27;
      if ( !v10 )
        break;
      ++v11;
    }
  }
LABEL_10:
  if ( v3 )
  {
    sub_2BB620(v5);
    if ( v29 )
      sub_186B220((void *)(v29 - 8));
    v15 = v31;
    if ( !v31 )
    {
LABEL_34:
      byte_1C7EBA0 = 1;
      return v5;
    }
  }
  else if ( v29 )
  {
    sub_186B220((void *)(v29 - 8));
    v15 = v31;
    if ( !v31 )
      return v5;
  }
  else
  {
    v15 = v10;
    if ( !v10 )
      return v5;
  }
  v16 = &v15[*((unsigned int *)v15 - 1)];
  if ( v15 >= v16 )
    goto LABEL_20;
  do
  {
    while ( 1 )
    {
      v17 = *v15;
      if ( *v15 )
      {
        if ( (*(_DWORD *)(v17 + 8))-- == 1 )
          break;
      }
      if ( ++v15 >= v16 )
        goto LABEL_19;
    }
    sub_15D7BC0(v30, v17);
    ++v15;
  }
  while ( v15 < v16 );
LABEL_19:
  v15 = v31;
  if ( v31 )
LABEL_20:
    sub_186B220(v15 - 1);
  if ( v3 )
    goto LABEL_34;
  return v5;
}

