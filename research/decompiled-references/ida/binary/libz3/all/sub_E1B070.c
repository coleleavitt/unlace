void __fastcall sub_E1B070(__int64 a1, _QWORD *a2)
{
  bool v2; // zf
  unsigned int v4; // r12d
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // r14d
  __int64 v8; // rax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  std::chrono::_V2::steady_clock *v12; // r14
  __int64 v13; // rdx
  void (__fastcall *v14)(_QWORD *, __int64, __int64, _QWORD); // r13
  __int64 (__fastcall *v15)(__int64); // rax
  __int64 v16; // rsi
  __int64 (__fastcall *v17)(__int64); // rax
  std::ostream *v18; // rbp
  _BYTE *v19; // rbx
  char v20; // si
  std::ostream *v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rdi
  void (__fastcall ***v24)(_QWORD); // rbx
  __int64 (__fastcall *v25)(__int64, unsigned int); // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rbp
  _QWORD *exception; // rbp
  __int64 v31; // [rsp+10h] [rbp-D8h]
  unsigned int v32; // [rsp+1Ch] [rbp-CCh]
  void *ptr; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v34[8]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v35[8]; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-A0h]
  _BYTE v38[16]; // [rsp+50h] [rbp-98h] BYREF
  int *v39; // [rsp+60h] [rbp-88h] BYREF
  int v40; // [rsp+68h] [rbp-80h]
  __int128 v41; // [rsp+70h] [rbp-78h]
  __int128 v42; // [rsp+80h] [rbp-68h]
  __int64 v43; // [rsp+90h] [rbp-58h]
  __int16 v44; // [rsp+98h] [rbp-50h]
  __int64 v45; // [rsp+A0h] [rbp-48h]

  v2 = *((_BYTE *)a2 + 273) == 0;
  ptr = nullptr;
  if ( v2 )
  {
    if ( !(unsigned __int8)sub_E02DB0((__int64)a2, (__int64 *****)&ptr) )
    {
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "model is not available");
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    if ( !*(_QWORD *)(a1 + 56) )
    {
      v29 = __cxa_allocate_exception(0x30u);
      sub_305660(v29, "no arguments passed to eval");
      __cxa_throw(v29, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    v4 = sub_1859960(a1 + 40, "model_index", 0);
    if ( v4 && sub_DF79D0((__int64)a2) )
    {
      v5 = sub_DF79D0((__int64)a2);
      (*(void (__fastcall **)(__int64, void **, _QWORD))(*(_QWORD *)v5 + 144LL))(v5, &ptr, v4);
    }
    sub_DFBCB0(a2);
    v6 = a2[37];
    v36 = 0;
    v37 = v6;
    v7 = sub_1859960(a1 + 40, "timeout", 0xFFFFFFFFLL);
    v32 = sub_1859960(a1 + 40, "rlimit", 0);
    sub_1360C00(v34, ptr, a1 + 40);
    sub_DFBCB0(a2);
    v8 = a2[37];
    v44 = 0;
    v40 = 0;
    v39 = &off_1C4C9C8;
    v43 = 0;
    v45 = v8;
    v41 = 0;
    v42 = 0;
    sub_18086F0(v38, &v39, 1);
    sub_18561B0((unsigned int)v35, v7, (unsigned int)&v39, v9, v10, v11);
    sub_DFBCB0(a2);
    v12 = (std::chrono::_V2::steady_clock *)a2[37];
    sub_1829790(v12, v32);
    v2 = *((_BYTE *)a2 + 904) == 0;
    a2[112] = 0;
    if ( v2 )
    {
      v27 = std::chrono::_V2::steady_clock::now(v12);
      *((_BYTE *)a2 + 904) = 1;
      a2[111] = v27;
    }
    sub_1361190(v34, *(_QWORD *)(a1 + 56), &v36);
    if ( *((_BYTE *)a2 + 904) )
    {
      v26 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)v34);
      *((_BYTE *)a2 + 904) = 0;
      a2[112] += v26 - a2[111];
    }
    sub_1829100(v12);
    sub_1856400(v35);
    sub_1808900(v38);
    v13 = v36;
    v14 = *(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*a2 + 104LL);
    v15 = *(__int64 (__fastcall **)(__int64))(*a2 + 40LL);
    if ( v15 == sub_305010 )
    {
      v16 = a2[51];
    }
    else
    {
      v31 = v36;
      v28 = v15((__int64)a2);
      v13 = v31;
      v16 = v28;
    }
    v14(a2, v16, v13, 0);
    v17 = *(__int64 (__fastcall **)(__int64))(*a2 + 40LL);
    if ( v17 == sub_305010 )
      v18 = (std::ostream *)a2[51];
    else
      v18 = (std::ostream *)v17((__int64)a2);
    v19 = *(_BYTE **)((char *)v18 + *(_QWORD *)(*(_QWORD *)v18 - 24LL) + 240);
    if ( !v19 )
      std::__throw_bad_cast();
    if ( v19[56] )
    {
      v20 = v19[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v20 = 10;
      v25 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v19 + 48LL);
      if ( v25 != sub_26BE90 )
        v20 = v25((__int64)v19, 10u);
    }
    v21 = (std::ostream *)std::ostream::put(v18, v20);
    std::ostream::flush(v21);
    v39 = &off_1C4C9C8;
    if ( (_BYTE)v44 )
      sub_18296D0(v45);
    if ( HIBYTE(v44) )
      sub_1829760(v45);
    sub_13606C0(v34);
    v22 = v36;
    if ( v36 )
    {
      v23 = v37;
      v2 = (*(_DWORD *)(v36 + 8))-- == 1;
      if ( v2 )
        sub_15D7BC0(v23, v22);
    }
    v24 = (void (__fastcall ***)(_QWORD))ptr;
    if ( ptr )
    {
      v2 = (*((_DWORD *)ptr + 4))-- == 1;
      if ( v2 )
      {
        (**v24)(v24);
        sub_186B220(v24);
      }
    }
  }
}

