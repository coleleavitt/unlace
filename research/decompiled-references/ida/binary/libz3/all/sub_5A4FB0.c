__int64 __fastcall sub_5A4FB0(__int64 a1, __int64 *a2, char *a3, int a4)
{
  char **exception; // r15
  _QWORD *v8; // rdx
  __int64 v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r15
  unsigned int v17; // ecx
  size_t v18; // rsi
  unsigned int *v19; // rax
  _QWORD *v20; // rax
  __int64 *v21; // [rsp+0h] [rbp-80h]
  unsigned int v22; // [rsp+0h] [rbp-80h]
  __int64 v24; // [rsp+18h] [rbp-68h] BYREF
  _DWORD *v25; // [rsp+20h] [rbp-60h] BYREF
  int v26; // [rsp+28h] [rbp-58h]
  __int64 v27[10]; // [rsp+30h] [rbp-50h] BYREF

  v25 = nullptr;
  v26 = 0;
  v24 = 0;
  sub_5A1ED0(a1, a2, (__int64)a3, &v25, &v24);
  v8 = v25;
  v9 = v24;
  if ( v25 )
  {
    v10 = *(v25 - 1);
    if ( v10 == *(v25 - 2) )
    {
      v17 = (3 * v10 + 1) >> 1;
      v18 = 8 * v17 + 8;
      if ( 8 * v10 + 8 >= (unsigned int)v18 || v10 >= v17 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v27, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v27);
        sub_233E40((__int64)v27);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v22 = (3 * v10 + 1) >> 1;
      v19 = (unsigned int *)sub_186B300(v25 - 2, v18);
      v8 = v19 + 2;
      v25 = v19 + 2;
      *v19 = v22;
      LODWORD(v19) = v19[1];
      v13 = &v8[(unsigned int)v19];
      v12 = (_DWORD)v19 + 1;
    }
    else
    {
      v11 = v10;
      v12 = v10 + 1;
      v13 = &v25[2 * v11];
    }
  }
  else
  {
    v20 = (_QWORD *)sub_186B270(0x18u);
    v8 = v20 + 1;
    *v20 = 2;
    v12 = 1;
    v25 = v8;
    v13 = v8;
  }
  *v13 = 0x7FFFFFFF;
  v14 = *(_QWORD *)(a1 + 24);
  *((_DWORD *)v8 - 1) = v12;
  v26 = 1;
  v21 = (__int64 *)sub_4C50F0(v14, (__int64)&v25);
  v15 = sub_186B270(0xA0u);
  sub_5A4AC0(v15, a1, a2, a3, v21, *(_QWORD *)(a1 + 40), a4);
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  if ( v25 )
    sub_186B220(v25 - 2);
  return v15;
}

