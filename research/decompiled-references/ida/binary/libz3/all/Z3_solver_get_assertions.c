_QWORD *__fastcall Z3_solver_get_assertions(__int64 a1, __int64 a2)
{
  char **exception; // r12
  char v4; // r14
  bool v5; // zf
  _QWORD *v6; // rbx
  __int64 v7; // r12
  int v8; // r12d
  unsigned int v9; // r15d
  __int64 v10; // rsi
  int v11; // eax
  __int64 *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r14
  _QWORD *v15; // rdx
  unsigned int v16; // eax
  unsigned int v17; // r9d
  size_t v18; // rsi
  unsigned int v19; // r13d
  unsigned int *v20; // rax
  __int64 v21; // rsi
  _QWORD *v23; // rax
  char v24; // [rsp+Fh] [rbp-69h]
  __int64 v25[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v24 = v4;
  if ( v4 )
    sub_29DA30(a1, a2);
  v5 = *(_QWORD *)(a2 + 32) == 0;
  *(_DWORD *)(a1 + 1520) = 0;
  if ( v5 )
    sub_2A74C0(a1, a2);
  v6 = (_QWORD *)sub_186B270(0x28u);
  v7 = *(_QWORD *)(a1 + 232);
  sub_2518F0((__int64)v6, a1);
  v6[3] = v7;
  *v6 = &off_1C4CA20;
  v6[4] = 0;
  sub_24FBE0(a1, (__int64)v6);
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 32) + 232LL))(*(_QWORD *)(a2 + 32));
  v9 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 32) + 240LL))(*(_QWORD *)(a2 + 32), v9);
      v14 = v13;
      if ( v13 )
        ++*(_DWORD *)(v13 + 8);
      v15 = (_QWORD *)v6[4];
      if ( !v15 )
        break;
      v16 = *((_DWORD *)v15 - 1);
      if ( v16 == *((_DWORD *)v15 - 2) )
      {
        v17 = (3 * v16 + 1) >> 1;
        v18 = 8 * v17 + 8;
        v19 = v17;
        if ( 8 * v16 + 8 >= (unsigned int)v18 || v16 >= v17 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v25, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v25);
          sub_233E40((__int64)v25);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v20 = (unsigned int *)sub_186B300(v15 - 1, v18);
        v21 = v20[1];
        *v20 = v19;
        ++v9;
        v6[4] = v20 + 2;
        *(_QWORD *)&v20[2 * v21 + 2] = v14;
        v20[1] = v21 + 1;
        if ( v8 == v9 )
          goto LABEL_16;
      }
      else
      {
        v10 = v16;
        v11 = v16 + 1;
        v12 = &v15[v10];
LABEL_8:
        ++v9;
        *v12 = v14;
        *((_DWORD *)v15 - 1) = v11;
        if ( v8 == v9 )
          goto LABEL_16;
      }
    }
    v23 = (_QWORD *)sub_186B270(0x18u);
    v15 = v23 + 1;
    *v23 = 2;
    v11 = 1;
    v6[4] = v15;
    v12 = v15;
    goto LABEL_8;
  }
LABEL_16:
  if ( v24 )
  {
    sub_2BB620(v6);
    byte_1C7EBA0 = 1;
  }
  return v6;
}

