__int64 __fastcall sub_5A64A0(__int64 a1, __int64 *a2, __m128i a3)
{
  char **exception; // rbp
  _QWORD *v6; // rax
  __int64 v7; // rdi
  __int64 *v8; // r13
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rax
  _DWORD *i; // rbx
  unsigned int v13; // ebp
  _QWORD *v14; // rax
  unsigned int v15; // edx
  size_t v16; // rsi
  unsigned int v17; // r15d
  unsigned int *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rbp
  __int64 v21; // r14
  _QWORD *v22; // r12
  __int64 *v24; // [rsp+8h] [rbp-80h]
  _QWORD *v25; // [rsp+18h] [rbp-70h] BYREF
  _QWORD *v26; // [rsp+20h] [rbp-68h] BYREF
  int v27; // [rsp+28h] [rbp-60h]
  __int64 v28[11]; // [rsp+30h] [rbp-58h] BYREF

  v24 = a2 + 2;
  v26 = nullptr;
  v27 = 0;
  v6 = (_QWORD *)sub_186B270(0x18u);
  v6[1] = 0x7FFFFFFF;
  v7 = *(_QWORD *)(a1 + 24);
  v26 = v6 + 1;
  *v6 = 0x100000002LL;
  v27 = 1;
  v8 = (__int64 *)sub_4C51A0(v7, (__int64)&v26);
  v25 = nullptr;
  v9 = (_QWORD *)sub_186B270(0x18u);
  v10 = v9 + 1;
  v9[1] = 0;
  *v9 = 0x100000002LL;
  v11 = *v8;
  v25 = v10;
  (*(void (__fastcall **)(__int64 *, _QWORD **))(v11 + 40))(v8, &v25);
  i = (_DWORD *)a2[2];
  if ( i )
  {
    v13 = *(i - 1);
    if ( v13 )
    {
      v14 = (_QWORD *)sub_186B270(0xAu);
      *v14 = 2;
      for ( i = v14 + 1; ; i = v18 + 2 )
      {
        v19 = *(i - 2);
        if ( v19 >= v13 )
          break;
        v15 = (3 * v19 + 1) >> 1;
        v16 = v15 + 8;
        v17 = v15;
        if ( v19 + 8 >= (unsigned int)v16 || v19 >= v15 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v28, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v28);
          sub_233E40((__int64)v28);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v18 = (unsigned int *)sub_186B300(i - 2, v16);
        *v18 = v17;
      }
      *(i - 1) = v13;
      memset(i, 0, v13);
    }
    else
    {
      i = nullptr;
    }
  }
  v20 = sub_5A4FB0(a1, v24, (char *)i, -1);
  v21 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 72))(a2);
  v22 = (_QWORD *)sub_186B270(0x18u);
  v22[1] = v21;
  *v22 = 0x100000002LL;
  v28[0] = (__int64)(v22 + 1);
  sub_5A3D20(v20, (__int64)v8, v28, 1, a3);
  sub_186B220(v22);
  if ( i )
    sub_186B220(i - 2);
  if ( v25 )
    sub_186B220(v25 - 1);
  sub_4D63E0(v8);
  if ( v26 )
    sub_186B220(v26 - 1);
  return v20;
}

