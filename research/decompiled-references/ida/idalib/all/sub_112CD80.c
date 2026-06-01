_QWORD *__fastcall sub_112CD80(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rdi
  _QWORD *v4; // [rsp+0h] [rbp-10h]

  result = *(_QWORD **)(a1 + 1696);
  if ( !result )
  {
    v4 = (_QWORD *)operator new(0x20u);
    sub_112B250(v4, (__int64)"clang::as", (__int64)"clang integrated assembler", a1);
    result = v4;
    v3 = *(_QWORD *)(a1 + 1696);
    *v4 = &off_2C37D58;
    *(_QWORD *)(a1 + 1696) = v4;
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      return *(_QWORD **)(a1 + 1696);
    }
  }
  return result;
}
