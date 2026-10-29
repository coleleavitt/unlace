__int64 __fastcall sub_7A20B0(__int64 a1, int a2, _DWORD **a3, __int64 a4)
{
  char **v4; // rbp
  char **exception; // rbp
  _DWORD *v8; // r13
  _DWORD *v9; // r15
  int v10; // r14d
  _QWORD *v11; // rax
  int *v12; // rax
  int *v13; // rdx
  int v14; // edi
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // r8d
  size_t v18; // rsi
  unsigned int v19; // r12d
  unsigned int *v20; // rax
  __int64 v21; // rax
  int *v22; // rax
  __int64 v23; // rax
  __int64 result; // rax
  unsigned int v25; // r13d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  int *v31; // [rsp+18h] [rbp-60h] BYREF
  __int64 v32[11]; // [rsp+20h] [rbp-58h] BYREF

  v8 = *a3;
  v31 = nullptr;
  if ( !v8 || (v9 = &v8[*(v8 - 1)], v9 == v8) )
  {
    if ( a2 != -2 )
    {
      v29 = (_QWORD *)sub_186B270(0x10u);
      v13 = (int *)(v29 + 1);
      *v29 = 2;
      v31 = (int *)(v29 + 1);
      v22 = (int *)(v29 + 1);
LABEL_13:
      *v22 = a2;
      ++*(v13 - 1);
    }
  }
  else
  {
    v10 = *v8 ^ 1;
    v11 = (_QWORD *)sub_186B270(0x10u);
    *v11 = 2;
    v12 = (int *)(v11 + 1);
    v31 = v12;
    v13 = v12;
    while ( 1 )
    {
      *v12 = v10;
      v14 = *(v13 - 1);
      ++v8;
      v15 = (unsigned int)(v14 + 1);
      *(v13 - 1) = v15;
      if ( v9 == v8 )
        break;
      v16 = *(v13 - 2);
      v10 = *v8 ^ 1;
      if ( v16 == (_DWORD)v15 )
      {
        v17 = (3 * v16 + 1) >> 1;
        v18 = 4 * v17 + 8;
        v19 = v17;
        if ( 4 * v14 + 12 >= (unsigned int)v18 || v16 >= v17 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v32, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v32);
          sub_233E40((__int64)v32);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v20 = (unsigned int *)sub_186B300(v13 - 2, v18);
        v13 = (int *)(v20 + 2);
        *v20 = v19;
        v21 = v20[1];
        v31 = v13;
        v12 = &v13[v21];
      }
      else
      {
        v12 = &v13[v15];
      }
    }
    if ( a2 != -2 )
    {
      if ( (_DWORD)v15 == *(v13 - 2) )
      {
        v25 = (unsigned int)(3 * v15 + 1) >> 1;
        v26 = 4 * v25 + 8;
        if ( 4 * v14 + 12 >= (unsigned int)v26 || (unsigned int)v15 >= v25 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v32, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v32);
          sub_233E40((__int64)v32);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v27 = (unsigned int *)sub_186B300(v13 - 2, v26);
        v13 = (int *)(v27 + 2);
        *v27 = v25;
        v28 = v27[1];
        v31 = v13;
        v22 = &v13[v28];
      }
      else
      {
        v22 = &v13[v15];
      }
      goto LABEL_13;
    }
  }
  v23 = *(_QWORD *)(a1 + 24);
  LODWORD(v32[0]) = 2;
  HIDWORD(v32[0]) = *(_DWORD *)(a1 + 12);
  v32[1] = a4;
  result = sub_11F1890(v23 + 552, &v31, v32);
  if ( v31 )
    return sub_186B220(v31 - 2);
  return result;
}

