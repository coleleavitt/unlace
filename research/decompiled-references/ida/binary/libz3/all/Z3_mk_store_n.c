struct _Unwind_Exception *__fastcall Z3_mk_store_n(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct _Unwind_Exception *a4,
        __int64 a5)
{
  __int64 v5; // r14
  char v7; // r15
  int *v8; // rax
  int v9; // eax
  _QWORD *v11; // rax
  _DWORD *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r12
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rsi
  unsigned int v18; // eax
  _Unwind_Exception_Class exception_class; // rcx
  unsigned int v20; // eax
  _Unwind_Exception_Class v21; // rdi
  unsigned int v22; // r8d
  size_t v23; // rsi
  unsigned int *v24; // rax
  unsigned int v25; // r8d
  size_t v26; // rsi
  unsigned int *v27; // rax
  unsigned int v28; // edx
  __int64 v29; // r8
  int v30; // eax
  int v31; // r8d
  int v32; // r9d
  unsigned int v33; // ecx
  size_t v34; // rsi
  _DWORD *v35; // rax
  unsigned int v36; // edi
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // [rsp+0h] [rbp-A0h]
  int v40[2]; // [rsp+8h] [rbp-98h]
  int v41; // [rsp+10h] [rbp-90h]
  unsigned int v42; // [rsp+14h] [rbp-8Ch]
  unsigned int v43; // [rsp+14h] [rbp-8Ch]
  __int64 v44; // [rsp+18h] [rbp-88h]
  __int64 v45; // [rsp+20h] [rbp-80h]
  struct _Unwind_Exception *v47; // [rsp+30h] [rbp-70h]
  struct _Unwind_Exception *v48; // [rsp+38h] [rbp-68h]
  struct _Unwind_Exception *v49; // [rsp+38h] [rbp-68h]
  struct _Unwind_Exception *exception; // [rsp+38h] [rbp-68h]
  struct _Unwind_Exception *v51; // [rsp+38h] [rbp-68h]
  struct _Unwind_Exception *v52; // [rsp+38h] [rbp-68h]
  struct _Unwind_Exception *v53; // [rsp+38h] [rbp-68h]
  int v54; // [rsp+40h] [rbp-60h]
  void *v55; // [rsp+48h] [rbp-58h]
  __int64 v56[10]; // [rsp+50h] [rbp-50h] BYREF

  v5 = a3;
  v52 = a4;
  v7 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v7 )
    sub_297170(a1, a2, a3, a4, a5);
  *(_DWORD *)(a1 + 1520) = 0;
  *(_QWORD *)v40 = *(_QWORD *)(a1 + 232);
  v45 = sub_15D1F10(a2);
  v39 = sub_15D1F10(a5);
  v8 = *(int **)(v45 + 24);
  if ( v8 )
    v9 = *v8;
  else
    v9 = -1;
  if ( v9 == *(_DWORD *)(a1 + 1440) )
  {
    v11 = (_QWORD *)sub_186B270(0x18u);
    v11[1] = a2;
    v12 = v11 + 1;
    *v11 = 0x100000002LL;
    v13 = (_QWORD *)sub_186B270(0x18u);
    v14 = (__int64)(v13 + 1);
    v13[1] = v45;
    *v13 = 0x100000002LL;
    if ( (_DWORD)v5 )
    {
      v47 = (struct _Unwind_Exception *)((char *)v52 + 8 * v5);
      do
      {
        exception_class = v52->exception_class;
        v20 = *(v12 - 1);
        v21 = v52->exception_class;
        if ( v20 == *(v12 - 2) )
        {
          v22 = (3 * v20 + 1) >> 1;
          v23 = 8 * v22 + 8;
          if ( 8 * v20 + 8 >= (unsigned int)v23 || v20 >= v22 )
          {
            exception = (struct _Unwind_Exception *)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v56, "Overflow encountered when expanding vector");
            exception->exception_class = (_Unwind_Exception_Class)off_1C63128;
            sub_2333C0((char **)&exception->exception_cleanup, v56);
            sub_233E40((__int64)v56);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v42 = (3 * v20 + 1) >> 1;
          v44 = v52->exception_class;
          v24 = (unsigned int *)sub_186B300(v12 - 2, v23);
          v12 = v24 + 2;
          *v24 = v42;
          v21 = v52->exception_class;
          v20 = v24[1];
          exception_class = v44;
        }
        *(_QWORD *)&v12[2 * v20] = exception_class;
        *(v12 - 1) = v20 + 1;
        v15 = sub_15D1F10(v21);
        v16 = *(_DWORD *)(v14 - 4);
        if ( v16 == *(_DWORD *)(v14 - 8) )
        {
          v25 = (3 * v16 + 1) >> 1;
          v26 = 8 * v25 + 8;
          if ( 8 * v16 + 8 >= (unsigned int)v26 || v16 >= v25 )
          {
            v51 = (struct _Unwind_Exception *)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v56, "Overflow encountered when expanding vector");
            v51->exception_class = (_Unwind_Exception_Class)off_1C63128;
            sub_2333C0((char **)&v51->exception_cleanup, v56);
            sub_233E40((__int64)v56);
            __cxa_throw(v51, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v43 = (3 * v16 + 1) >> 1;
          v44 = v15;
          v27 = (unsigned int *)sub_186B300((void *)(v14 - 8), v26);
          v14 = (__int64)(v27 + 2);
          v15 = v44;
          *v27 = v43;
          v16 = v27[1];
        }
        v17 = v16;
        v52 = (struct _Unwind_Exception *)((char *)v52 + 8);
        v18 = v16 + 1;
        *(_QWORD *)(v14 + 8 * v17) = v15;
        *(_DWORD *)(v14 - 4) = v18;
      }
      while ( v52 != v47 );
    }
    else
    {
      v18 = 1;
    }
    v28 = *(v12 - 1);
    if ( v28 == *(v12 - 2) )
    {
      v33 = (3 * v28 + 1) >> 1;
      v34 = 8 * v33 + 8;
      LODWORD(v52) = v33;
      if ( 8 * v28 + 8 >= (unsigned int)v34 || v28 >= v33 )
      {
        v49 = (struct _Unwind_Exception *)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v56, "Overflow encountered when expanding vector");
        v49->exception_class = (_Unwind_Exception_Class)off_1C63128;
        sub_2333C0((char **)&v49->exception_cleanup, v56);
        sub_233E40((__int64)v56);
        __cxa_throw(v49, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v35 = (_DWORD *)sub_186B300(v12 - 2, v34);
      v28 = v35[1];
      v12 = v35 + 2;
      *v35 = (_DWORD)v52;
      v18 = *(_DWORD *)(v14 - 4);
    }
    *(_QWORD *)&v12[2 * v28] = a5;
    *(v12 - 1) = v28 + 1;
    if ( *(_DWORD *)(v14 - 8) == v18 )
    {
      v36 = (3 * v18 + 1) >> 1;
      v37 = 8 * v36 + 8;
      LODWORD(v52) = v36;
      if ( 8 * v18 + 8 >= (unsigned int)v37 || v18 >= v36 )
      {
        v48 = (struct _Unwind_Exception *)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v56, "Overflow encountered when expanding vector");
        v48->exception_class = (_Unwind_Exception_Class)off_1C63128;
        sub_2333C0((char **)&v48->exception_cleanup, v56);
        sub_233E40((__int64)v56);
        __cxa_throw(v48, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v38 = (unsigned int *)sub_186B300((void *)(v14 - 8), v37);
      v14 = (__int64)(v38 + 2);
      *v38 = v36;
      v18 = v38[1];
    }
    v29 = *(_QWORD *)(v45 + 24);
    *(_QWORD *)(v14 + 8LL * v18) = v39;
    *(_DWORD *)(v14 - 4) = v18 + 1;
    if ( v29 )
      v29 = *(_QWORD *)(v29 + 8);
    v30 = sub_15D2D10(v40[0], *(_DWORD *)(a1 + 1440), 0, 2, v29, v18 + 1, v14, 0);
    v53 = (struct _Unwind_Exception *)sub_15DC610(
                                        v40[0],
                                        v30,
                                        *(v12 - 1),
                                        (int)v12,
                                        v31,
                                        v32,
                                        v39,
                                        v40[0],
                                        v41,
                                        v44,
                                        v45,
                                        a5,
                                        (int)v47,
                                        (int)v52,
                                        v54,
                                        v55);
    sub_251FD0(a1, (__int64)v53);
    sub_24FE40(a1, (__int64)v53);
    if ( !v7 )
    {
      sub_186B220(v12 - 2);
      sub_186B220((void *)(v14 - 8));
      return v53;
    }
    sub_2BB620(v53);
    sub_186B220(v12 - 2);
    sub_186B220((void *)(v14 - 8));
LABEL_33:
    byte_1C7EBA0 = 1;
    return v53;
  }
  sub_24EA30(a1, 1u, nullptr);
  v53 = nullptr;
  if ( v7 )
  {
    sub_2BB620(0);
    v53 = nullptr;
    goto LABEL_33;
  }
  return v53;
}

