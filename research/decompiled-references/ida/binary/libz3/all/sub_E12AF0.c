void __fastcall sub_E12AF0(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // rax
  void (__fastcall ***v4)(_QWORD); // rbx
  _QWORD *exception; // rbp
  void *ptr[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(_BYTE *)(a2 + 273) == 0;
  ptr[0] = nullptr;
  if ( v2 )
  {
    if ( !(unsigned __int8)sub_E02DB0(a2, (__int64 *****)ptr) || !*(_QWORD *)(a2 + 872) )
    {
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "model is not available");
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    if ( *(_DWORD *)(a1 + 24) && sub_DF79D0(a2) )
    {
      v3 = sub_DF79D0(a2);
      (*(void (__fastcall **)(__int64, void **, _QWORD))(*(_QWORD *)v3 + 144LL))(v3, ptr, *(unsigned int *)(a1 + 24));
    }
    sub_E05330((_QWORD *)a2, (__int64 *)ptr);
    v4 = (void (__fastcall ***)(_QWORD))ptr[0];
    if ( ptr[0] )
    {
      v2 = (*((_DWORD *)ptr[0] + 4))-- == 1;
      if ( v2 )
      {
        (**v4)(v4);
        sub_186B220(v4);
      }
    }
  }
}

