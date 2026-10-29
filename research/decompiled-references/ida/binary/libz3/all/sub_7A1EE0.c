__int64 __fastcall sub_7A1EE0(__int64 a1, int a2, _DWORD **a3)
{
  char **v3; // rbp
  char **exception; // rbp
  _DWORD *v7; // r12
  _DWORD *v8; // r14
  int v9; // r13d
  _QWORD *v10; // rax
  int *v11; // rax
  int *v12; // rdx
  int v13; // edi
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // r15d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rax
  int *v20; // rax
  __int64 v21; // rdi
  __int64 result; // rax
  unsigned int v23; // r12d
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  int *v28; // [rsp+8h] [rbp-60h] BYREF
  __int64 v29[11]; // [rsp+10h] [rbp-58h] BYREF

  v7 = *a3;
  v28 = nullptr;
  if ( !v7 || (v8 = &v7[*(v7 - 1)], v8 == v7) )
  {
    if ( a2 != -2 )
    {
      v27 = (_QWORD *)sub_186B270(0x10u);
      v12 = (int *)(v27 + 1);
      *v27 = 2;
      v28 = (int *)(v27 + 1);
      v20 = (int *)(v27 + 1);
LABEL_13:
      *v20 = a2;
      ++*(v12 - 1);
    }
  }
  else
  {
    v9 = *v7 ^ 1;
    v10 = (_QWORD *)sub_186B270(0x10u);
    *v10 = 2;
    v11 = (int *)(v10 + 1);
    v28 = v11;
    v12 = v11;
    while ( 1 )
    {
      *v11 = v9;
      v13 = *(v12 - 1);
      ++v7;
      v14 = (unsigned int)(v13 + 1);
      *(v12 - 1) = v14;
      if ( v8 == v7 )
        break;
      v15 = *(v12 - 2);
      v9 = *v7 ^ 1;
      if ( v15 == (_DWORD)v14 )
      {
        v16 = (3 * v15 + 1) >> 1;
        v17 = 4 * v16 + 8;
        if ( 4 * v13 + 12 >= (unsigned int)v17 || v15 >= v16 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v29, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v29);
          sub_233E40((__int64)v29);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v18 = (unsigned int *)sub_186B300(v12 - 2, v17);
        v12 = (int *)(v18 + 2);
        *v18 = v16;
        v19 = v18[1];
        v28 = v12;
        v11 = &v12[v19];
      }
      else
      {
        v11 = &v12[v14];
      }
    }
    if ( a2 != -2 )
    {
      if ( (_DWORD)v14 == *(v12 - 2) )
      {
        v23 = (unsigned int)(3 * v14 + 1) >> 1;
        v24 = 4 * v23 + 8;
        if ( 4 * v13 + 12 >= (unsigned int)v24 || (unsigned int)v14 >= v23 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v29, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v29);
          sub_233E40((__int64)v29);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v25 = (unsigned int *)sub_186B300(v12 - 2, v24);
        v12 = (int *)(v25 + 2);
        *v25 = v23;
        v26 = v25[1];
        v28 = v12;
        v20 = &v12[v26];
      }
      else
      {
        v20 = &v12[v14];
      }
      goto LABEL_13;
    }
  }
  v21 = *(_QWORD *)(a1 + 24);
  v29[1] = 0;
  v29[0] = 0xFFFFFFFF00000002LL;
  result = sub_11F1890(v21 + 552, &v28, v29);
  if ( v28 )
    return sub_186B220(v28 - 2);
  return result;
}

