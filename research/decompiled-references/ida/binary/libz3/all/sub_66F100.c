__int64 __fastcall sub_66F100(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  int v4; // r12d
  __int64 v5; // rax
  _DWORD *v6; // rax
  __int64 v7; // rbp
  __int64 *v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 *v12; // rdx
  unsigned int v13; // ebp
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rax
  unsigned int v17; // r12d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rdx
  _DWORD *v21; // rdi
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  char **exception; // rbp
  __int64 v25; // rdx
  __int64 v26[7]; // [rsp+0h] [rbp-38h] BYREF

  sub_66E8A0(a1);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 184) + 192LL))(*(_QWORD *)(a1 + 184));
  v2 = *(_QWORD *)(a1 + 208);
  if ( v2 )
  {
    v3 = *(_QWORD **)(a1 + 232);
    v4 = *(_DWORD *)(v2 - 4);
    if ( v3 )
      goto LABEL_3;
LABEL_16:
    v22 = (_QWORD *)sub_186B270(0x10u);
    v3 = v22 + 1;
    *v22 = 2;
    *(_QWORD *)(a1 + 232) = v22 + 1;
    v6 = v22 + 1;
    goto LABEL_5;
  }
  v3 = *(_QWORD **)(a1 + 232);
  v4 = 0;
  if ( !v3 )
    goto LABEL_16;
LABEL_3:
  v5 = *((unsigned int *)v3 - 1);
  if ( (_DWORD)v5 == *((_DWORD *)v3 - 2) )
  {
    v13 = (unsigned int)(3 * v5 + 1) >> 1;
    v14 = 4 * v13 + 8;
    if ( 4 * (int)v5 + 8 >= (unsigned int)v14 || (unsigned int)v5 >= v13 )
      goto LABEL_18;
    v15 = (unsigned int *)sub_186B300(v3 - 1, v14);
    v3 = v15 + 2;
    *v15 = v13;
    v16 = v15[1];
    *(_QWORD *)(a1 + 232) = v3;
    v6 = (_DWORD *)v3 + v16;
  }
  else
  {
    v6 = (_DWORD *)v3 + v5;
  }
LABEL_5:
  *v6 = v4;
  ++*((_DWORD *)v3 - 1);
  v7 = sub_186B270(0x80u);
  sub_F735C0(v7, *(_QWORD *)(a1 + 120));
  v8 = *(__int64 **)(a1 + 192);
  if ( !v8 )
  {
    v23 = (_QWORD *)sub_186B270(0x18u);
    v8 = v23 + 1;
    *v23 = 2;
    result = 1;
    *(_QWORD *)(a1 + 192) = v8;
    v12 = v8;
    goto LABEL_8;
  }
  v9 = *((_DWORD *)v8 - 1);
  if ( v9 != *((_DWORD *)v8 - 2) )
  {
    v10 = v9;
    result = v9 + 1;
    v12 = &v8[v10];
LABEL_8:
    *v12 = v7;
    *((_DWORD *)v8 - 1) = result;
    return result;
  }
  v17 = (3 * v9 + 1) >> 1;
  v18 = 8 * v17 + 8;
  if ( 8 * v9 + 8 >= (unsigned int)v18 || v9 >= v17 )
  {
LABEL_18:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_107D5E(v26, "Overflow encountered when expanding vector", v25);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v26);
    sub_233E40((__int64)v26);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v19 = (unsigned int *)sub_186B300(v8 - 1, v18);
  v20 = v19[1];
  *v19 = v17;
  v21 = v19 + 2;
  *(_QWORD *)(a1 + 192) = v19 + 2;
  result = (unsigned int)(v20 + 1);
  *(_QWORD *)&v21[2 * v20] = v7;
  *(v21 - 1) = result;
  return result;
}

