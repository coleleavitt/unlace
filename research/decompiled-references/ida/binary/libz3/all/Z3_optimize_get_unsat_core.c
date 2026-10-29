_QWORD *__fastcall Z3_optimize_get_unsat_core(__int64 a1, __int64 a2)
{
  char **exception; // r15
  char v4; // bp
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r15
  _QWORD *v9; // r14
  __int64 *v10; // r15
  __int64 *v11; // r13
  __int64 v12; // r12
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  int v15; // eax
  _QWORD *v16; // rsi
  unsigned int v17; // eax
  __int64 *v18; // rbx
  __int64 *v19; // r13
  __int64 v20; // rsi
  unsigned int v23; // r9d
  size_t v24; // rsi
  unsigned int v25; // ebp
  unsigned int *v26; // rax
  __int64 v27; // rsi
  char v28; // [rsp+7h] [rbp-81h]
  __int64 v29; // [rsp+20h] [rbp-68h] BYREF
  __int64 *v30; // [rsp+28h] [rbp-60h]
  __int64 v31[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v28 = v4;
  if ( v4 )
    sub_2A0790(a1, a2);
  v5 = *(_QWORD *)(a1 + 232);
  v6 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 1520) = 0;
  v30 = nullptr;
  v29 = v5;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 24LL))(v6, &v29);
  v7 = sub_186B270(0x28u);
  v8 = *(_QWORD *)(a1 + 232);
  v9 = (_QWORD *)v7;
  sub_2518F0(v7, a1);
  v9[3] = v8;
  *v9 = &off_1C4CA20;
  v9[4] = 0;
  sub_24FBE0(a1, (__int64)v9);
  v10 = v30;
  if ( v30 )
  {
    v11 = &v30[*((unsigned int *)v30 - 1)];
    if ( v30 == v11 )
    {
      if ( !v4 )
      {
        sub_186B220(v30 - 1);
        return v9;
      }
    }
    else
    {
      v12 = *v30;
      v13 = (_QWORD *)v9[4];
      if ( *v30 )
        ++*(_DWORD *)(v12 + 8);
      if ( v13 )
        goto LABEL_12;
      v14 = (_QWORD *)sub_186B270(0x18u);
      v13 = v14 + 1;
      *v14 = 2;
      v15 = 1;
      v9[4] = v13;
      v16 = v13;
      while ( 1 )
      {
        ++v10;
        *v16 = v12;
        *((_DWORD *)v13 - 1) = v15;
        if ( v11 == v10 )
          break;
        while ( 1 )
        {
          v12 = *v10;
          if ( *v10 )
            ++*(_DWORD *)(v12 + 8);
LABEL_12:
          v17 = *((_DWORD *)v13 - 1);
          if ( v17 == *((_DWORD *)v13 - 2) )
            break;
          ++v10;
          v13[v17] = v12;
          *((_DWORD *)v13 - 1) = v17 + 1;
          if ( v11 == v10 )
            goto LABEL_14;
        }
        v23 = (3 * v17 + 1) >> 1;
        v24 = 8 * v23 + 8;
        v25 = v23;
        if ( 8 * v17 + 8 >= (unsigned int)v24 || v17 >= v23 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v31, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v31);
          sub_233E40((__int64)v31);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v26 = (unsigned int *)sub_186B300(v13 - 1, v24);
        v27 = v26[1];
        v13 = v26 + 2;
        *v26 = v25;
        v9[4] = v26 + 2;
        LODWORD(v26) = v27;
        v16 = &v13[v27];
        v15 = (_DWORD)v26 + 1;
      }
LABEL_14:
      if ( !v28 )
      {
        v18 = v30;
        if ( !v30 )
          return v9;
        goto LABEL_16;
      }
    }
  }
  else if ( !v4 )
  {
    return v9;
  }
  sub_2BB620(v9);
  v18 = v30;
  if ( !v30 )
  {
LABEL_31:
    byte_1C7EBA0 = 1;
    return v9;
  }
LABEL_16:
  v19 = &v18[*((unsigned int *)v18 - 1)];
  if ( v18 >= v19 )
    goto LABEL_23;
  do
  {
    while ( 1 )
    {
      v20 = *v18;
      if ( *v18 )
      {
        if ( (*(_DWORD *)(v20 + 8))-- == 1 )
          break;
      }
      if ( ++v18 >= v19 )
        goto LABEL_22;
    }
    sub_15D7BC0(v29, v20);
    ++v18;
  }
  while ( v18 < v19 );
LABEL_22:
  v18 = v30;
  if ( v30 )
LABEL_23:
    sub_186B220(v18 - 1);
  if ( v28 )
    goto LABEL_31;
  return v9;
}

