__int64 __fastcall sub_2EE910(_QWORD *a1, unsigned __int64 a2, char a3, char a4, unsigned __int8 a5)
{
  char **exception; // rbx
  unsigned int v7; // r13d
  unsigned int v8; // r12d
  _QWORD *v10; // r15
  __int64 v11; // rcx
  unsigned int v12; // ebp
  __int64 (*v14)(void); // rax
  __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 (__fastcall *v18)(__int64); // rcx
  __int64 (__fastcall *v19)(__int64); // rax
  __int64 v20; // rdi
  __int64 v21[11]; // [rsp+0h] [rbp-58h] BYREF

  v7 = a5;
  v8 = a2;
  if ( !a4 )
  {
    v10 = a1 + 37;
    v12 = sub_339440((int)a1 + 296, a2);
    if ( v12 != 1 )
      return v12;
    sub_32FE40(v10, a1 + 77, a1 + 96, v11);
    if ( !a3 )
      goto LABEL_13;
    goto LABEL_12;
  }
  v14 = *(__int64 (**)(void))(*a1 + 240LL);
  if ( (char *)v14 == (char *)sub_2EAF00 )
    v15 = a1[29];
  else
    v15 = v14();
  v10 = a1 + 37;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 192LL))(v15);
  a2 = (unsigned int)a2;
  v16 = sub_339440((int)a1 + 296, a2);
  v18 = sub_2EAF00;
  v12 = v16;
  if ( v16 == 1 )
  {
    a2 = (unsigned __int64)(a1 + 77);
    sub_32FE40(a1 + 37, a1 + 77, a1 + 96, sub_2EAF00);
    v18 = sub_2EAF00;
  }
  v19 = *(__int64 (__fastcall **)(__int64))(*a1 + 240LL);
  if ( v19 == sub_2EAF00 )
    v20 = a1[29];
  else
    v20 = ((__int64 (__fastcall *)(_QWORD *, unsigned __int64, __int64, __int64 (__fastcall *)(__int64)))v19)(
            a1,
            a2,
            v17,
            sub_2EAF00);
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64 (__fastcall *)(__int64)))(*(_QWORD *)v20 + 200LL))(
    v20,
    1,
    v17,
    v18);
  if ( v12 == 1 )
  {
    if ( !a3 )
    {
LABEL_13:
      if ( (unsigned __int8)sub_32E790(v10, v8, v7) && (unsigned __int8)sub_2EBA90((__int64)a1) )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_2EB560(v21, "unbounded objectives on quantified constraints is not supported");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v21);
        sub_233E40((__int64)v21);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      return 1;
    }
LABEL_12:
    sub_32FF50(v10, v8);
    goto LABEL_13;
  }
  return v12;
}

