_QWORD *__fastcall Z3_solver_get_non_units(__int64 a1, __int64 a2)
{
  char **exception; // r15
  char v3; // bp
  __int64 v4; // rax
  __int64 v5; // r13
  _QWORD *v6; // r14
  __int64 *v7; // r15
  __int64 *v8; // r13
  __int64 v9; // r12
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  int v12; // eax
  _QWORD *v13; // rsi
  unsigned int v14; // eax
  __int64 *v15; // rbx
  __int64 *v16; // r13
  __int64 v17; // rsi
  unsigned int v20; // r9d
  size_t v21; // rsi
  unsigned int v22; // ebp
  unsigned int *v23; // rax
  __int64 v24; // rsi
  char v25; // [rsp+7h] [rbp-81h]
  __int64 v26; // [rsp+20h] [rbp-68h] BYREF
  __int64 *v27; // [rsp+28h] [rbp-60h]
  __int64 v28[11]; // [rsp+30h] [rbp-58h] BYREF

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v25 = v3;
  if ( v3 )
    sub_29DAF0(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !*(_QWORD *)(a2 + 32) )
    sub_2A74C0(a1, a2);
  v4 = sub_186B270(0x28u);
  v5 = *(_QWORD *)(a1 + 232);
  v6 = (_QWORD *)v4;
  sub_2518F0(v4, a1);
  v6[3] = v5;
  *v6 = &off_1C4CA20;
  v6[4] = 0;
  sub_24FBE0(a1, (__int64)v6);
  sub_E60570(&v26, *(_QWORD *)(a2 + 32));
  v7 = v27;
  if ( v27 )
  {
    v8 = &v27[*((unsigned int *)v27 - 1)];
    if ( v27 == v8 )
    {
      if ( !v3 )
      {
        sub_186B220(v27 - 1);
        return v6;
      }
    }
    else
    {
      v9 = *v27;
      v10 = (_QWORD *)v6[4];
      if ( *v27 )
        ++*(_DWORD *)(v9 + 8);
      if ( v10 )
        goto LABEL_14;
      v11 = (_QWORD *)sub_186B270(0x18u);
      v10 = v11 + 1;
      *v11 = 2;
      v12 = 1;
      v6[4] = v10;
      v13 = v10;
      while ( 1 )
      {
        ++v7;
        *v13 = v9;
        *((_DWORD *)v10 - 1) = v12;
        if ( v8 == v7 )
          break;
        while ( 1 )
        {
          v9 = *v7;
          if ( *v7 )
            ++*(_DWORD *)(v9 + 8);
LABEL_14:
          v14 = *((_DWORD *)v10 - 1);
          if ( v14 == *((_DWORD *)v10 - 2) )
            break;
          ++v7;
          v10[v14] = v9;
          *((_DWORD *)v10 - 1) = v14 + 1;
          if ( v8 == v7 )
            goto LABEL_16;
        }
        v20 = (3 * v14 + 1) >> 1;
        v21 = 8 * v20 + 8;
        v22 = v20;
        if ( 8 * v14 + 8 >= (unsigned int)v21 || v14 >= v20 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v28, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v28);
          sub_233E40((__int64)v28);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v23 = (unsigned int *)sub_186B300(v10 - 1, v21);
        v24 = v23[1];
        v10 = v23 + 2;
        *v23 = v22;
        v6[4] = v23 + 2;
        LODWORD(v23) = v24;
        v13 = &v10[v24];
        v12 = (_DWORD)v23 + 1;
      }
LABEL_16:
      if ( !v25 )
      {
        v15 = v27;
        if ( !v27 )
          return v6;
        goto LABEL_18;
      }
    }
  }
  else if ( !v3 )
  {
    return v6;
  }
  sub_2BB620(v6);
  v15 = v27;
  if ( !v27 )
  {
LABEL_33:
    byte_1C7EBA0 = 1;
    return v6;
  }
LABEL_18:
  v16 = &v15[*((unsigned int *)v15 - 1)];
  if ( v15 >= v16 )
    goto LABEL_25;
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
        goto LABEL_24;
    }
    sub_15D7BC0(v26, v17);
    ++v15;
  }
  while ( v15 < v16 );
LABEL_24:
  v15 = v27;
  if ( v27 )
LABEL_25:
    sub_186B220(v15 - 1);
  if ( v25 )
    goto LABEL_33;
  return v6;
}

