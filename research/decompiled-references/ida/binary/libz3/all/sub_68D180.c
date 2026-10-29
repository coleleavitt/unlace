__int64 __fastcall sub_68D180(__int64 a1, const void *a2, unsigned int a3, __int64 a4, __int64 a5)
{
  char **v5; // r14
  _QWORD *v8; // rbx
  unsigned int v9; // ebp
  char **exception; // rbp
  unsigned int v11; // r15d
  __int64 v12; // rax
  unsigned int *v13; // rax
  unsigned int v15; // ecx
  size_t v16; // rsi
  unsigned int *v17; // rax
  _QWORD *v18; // rax
  unsigned int v19; // [rsp+4h] [rbp-74h]
  void *v20; // [rsp+8h] [rbp-70h]
  __int64 v21[11]; // [rsp+20h] [rbp-58h] BYREF

  v20 = __dynamic_cast(
          a2,
          (const struct __class_type_info *)&`typeinfo for'solver,
          (const struct __class_type_info *)&`typeinfo for'inc_sat_solver,
          0);
  if ( !v20 )
    __cxa_bad_cast();
  if ( !a3 )
    return sub_6960D0((int)v20);
  v8 = nullptr;
  v9 = 0;
  if ( !a5 )
    return sub_6960D0((int)v20);
  do
  {
    if ( (*(_BYTE *)(a5 + 20) & 1) != 0
      || *(_DWORD *)(a5 + 16) != 1
      || !(unsigned __int8)sub_182CFA0(qword_1C7F2C0, a5)
      || (unsigned __int64)sub_182D020(qword_1C7F2C0, a5) > 0xFFFFFFFF )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_68CF80(v21, "Cannot display weights that are not integers");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v21);
      sub_233E40((__int64)v21);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v11 = sub_182D020(qword_1C7F2C0, a5);
    if ( v8 )
    {
      v12 = *((unsigned int *)v8 - 1);
      if ( (_DWORD)v12 == *((_DWORD *)v8 - 2) )
      {
        v15 = (unsigned int)(3 * v12 + 1) >> 1;
        v16 = 4 * v15 + 8;
        if ( 4 * (int)v12 + 8 >= (unsigned int)v16 || (unsigned int)v12 >= v15 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_68CF80(v21, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v21);
          sub_233E40((__int64)v21);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v19 = (unsigned int)(3 * v12 + 1) >> 1;
        v17 = (unsigned int *)sub_186B300(v8 - 1, v16);
        v8 = v17 + 2;
        *v17 = v19;
        v13 = &v17[v17[1] + 2];
      }
      else
      {
        v13 = (unsigned int *)v8 + v12;
      }
    }
    else
    {
      v18 = (_QWORD *)sub_186B270(0x10u);
      v8 = v18 + 1;
      *v18 = 2;
      v13 = (unsigned int *)(v18 + 1);
    }
    ++v9;
    *v13 = v11;
    a5 += 32;
    ++*((_DWORD *)v8 - 1);
  }
  while ( v9 < a3 );
  sub_6960D0((int)v20);
  return sub_186B220(v8 - 1);
}

