_QWORD *sub_D8B070(
        _QWORD *a1,
        __int64 (__fastcall *a2)(_BYTE *, __int64, __int64, __va_list_tag *),
        __int64 a3,
        __int64 a4,
        ...)
{
  void *v5; // rsp
  int v6; // eax
  void *v7; // rdi
  size_t v8; // r12
  void *v10; // rax
  _BYTE v11[8]; // [rsp+0h] [rbp-F0h] BYREF
  gcc_va_list va; // [rsp+8h] [rbp-E8h] BYREF

  va_start(va, a4);
  v5 = alloca(a3 + 8);
  v6 = a2(v11, a3, a4, va);
  v7 = a1 + 2;
  v8 = v6;
  *a1 = a1 + 2;
  if ( (unsigned __int64)v6 > 0xF )
  {
    if ( v6 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v10 = (void *)operator new(v6 + 1LL);
    a1[2] = v8;
    *a1 = v10;
    v7 = v10;
    goto LABEL_9;
  }
  if ( v6 != 1 )
  {
    if ( !v6 )
      goto LABEL_4;
LABEL_9:
    memcpy(v7, v11, v8);
    v7 = (void *)*a1;
    goto LABEL_4;
  }
  *((_BYTE *)a1 + 16) = v11[0];
LABEL_4:
  a1[1] = v8;
  *((_BYTE *)v7 + v8) = 0;
  return a1;
}
