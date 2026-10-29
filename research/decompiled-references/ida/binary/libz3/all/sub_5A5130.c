__int64 __fastcall sub_5A5130(__int64 a1, __int64 *a2)
{
  char **exception; // r12
  _QWORD *v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rbp
  char v7; // r15
  __int64 v8; // r13
  _QWORD *v9; // rax
  int v10; // edx
  char *v11; // rax
  char *v12; // rbx
  char v13; // al
  unsigned int v14; // edx
  __int64 v15; // rbp
  unsigned int v17; // r9d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // [rsp+8h] [rbp-80h]
  unsigned int v23; // [rsp+14h] [rbp-74h]
  char v24[8]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v25[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = (_QWORD *)*a2;
  if ( !v4 )
    return sub_5A4FB0(a1, a2, nullptr, -1);
  v5 = *((unsigned int *)v4 - 1);
  if ( !(_DWORD)v5 )
    return sub_5A4FB0(a1, a2, nullptr, -1);
  v6 = 8 * v5;
  v22 = *(_QWORD *)(a1 + 24);
  v7 = sub_4C4270(v22, v4, (__int64)v24);
  v8 = 0;
  v9 = (_QWORD *)sub_186B270(0xAu);
  v10 = 1;
  *v9 = 2;
  v11 = (char *)(v9 + 1);
  v12 = v11;
  while ( 1 )
  {
    v8 += 8;
    *v11 = v7;
    *((_DWORD *)v12 - 1) = v10;
    if ( v6 == v8 )
      break;
    while ( 1 )
    {
      v13 = sub_4C4270(v22, (_QWORD *)(v8 + *a2), (__int64)v24);
      v14 = *((_DWORD *)v12 - 1);
      v7 = v13;
      if ( v14 == *((_DWORD *)v12 - 2) )
        break;
      v8 += 8;
      v12[v14] = v13;
      *((_DWORD *)v12 - 1) = v14 + 1;
      if ( v6 == v8 )
        goto LABEL_7;
    }
    v17 = (3 * v14 + 1) >> 1;
    v18 = v17 + 8;
    if ( v14 + 8 >= (unsigned int)v18 || v14 >= v17 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v25, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v25);
      sub_233E40((__int64)v25);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v23 = (3 * v14 + 1) >> 1;
    v19 = (unsigned int *)sub_186B300(v12 - 8, v18);
    v12 = (char *)(v19 + 2);
    *v19 = v23;
    v20 = v19[1];
    v21 = v20;
    v11 = &v12[v20];
    v10 = v21 + 1;
  }
LABEL_7:
  v15 = sub_5A4FB0(a1, a2, v12, -1);
  sub_186B220(v12 - 8);
  return v15;
}

