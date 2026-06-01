__int64 __fastcall sub_59A960(__int64 a1, __int64 a2, _QWORD *a3)
{
  char **exception; // r12
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64, __int64, unsigned int); // r8
  __int64 v9; // rax
  _DWORD *i; // rbx
  __int64 v11; // r14
  unsigned int v12; // ebp
  _QWORD *v13; // rax
  unsigned int v14; // r15d
  size_t v15; // rsi
  unsigned int *v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rbp
  __int64 v19; // r9
  __int64 v21; // [rsp+8h] [rbp-60h] BYREF
  __int64 v22[11]; // [rsp+10h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a1 + 24);
  v21 = 0;
  v7 = sub_4C5040(v6, (__int64)a3);
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int))(*(_QWORD *)v7 + 72LL);
  if ( v8 == sub_4EA4F0 )
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v7 + 64LL))(v7, a2, &v21);
  else
    v9 = v8(v7, a2, (__int64)&v21, 0xFFFFFFFF);
  i = (_DWORD *)*a3;
  v11 = v9;
  if ( *a3 )
  {
    v12 = *(i - 1);
    if ( v12 )
    {
      v13 = (_QWORD *)sub_186B270(0xAu);
      *v13 = 2;
      for ( i = v13 + 1; ; i = v16 + 2 )
      {
        v17 = *(i - 2);
        if ( v17 >= v12 )
          break;
        v14 = (3 * v17 + 1) >> 1;
        v15 = v14 + 8;
        if ( v17 + 8 >= (unsigned int)v15 || v17 >= v14 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v22, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v22);
          sub_233E40((__int64)v22);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v16 = (unsigned int *)sub_186B300(i - 2, v15);
        *v16 = v14;
      }
      *(i - 1) = v12;
      memset(i, 0, v12);
    }
    else
    {
      i = nullptr;
    }
  }
  v18 = sub_186B270(0x48u);
  sub_59A080(v18, a1, a3, (char *)i, v11, v19);
  if ( i )
    sub_186B220(i - 2);
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  return v18;
}

