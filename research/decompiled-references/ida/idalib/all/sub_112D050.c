_QWORD *__fastcall sub_112D050(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rdi
  _QWORD *v4; // [rsp+0h] [rbp-10h]

  result = *(_QWORD **)(a1 + 1736);
  if ( !result )
  {
    v4 = (_QWORD *)operator new(0x20u);
    sub_112B250(v4, (__int64)"Offload::Packager", (__int64)"clang-offload-packager", a1);
    result = v4;
    v3 = *(_QWORD *)(a1 + 1736);
    *v4 = &off_2C37DC0;
    *(_QWORD *)(a1 + 1736) = v4;
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      return *(_QWORD **)(a1 + 1736);
    }
  }
  return result;
}
