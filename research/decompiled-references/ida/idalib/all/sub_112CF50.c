_QWORD *__fastcall sub_112CF50(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rdi
  _QWORD *v4; // [rsp+0h] [rbp-10h]

  result = *(_QWORD **)(a1 + 1720);
  if ( !result )
  {
    v4 = (_QWORD *)operator new(0x20u);
    sub_112B250(v4, (__int64)"IFS::Merger", (__int64)"llvm-ifs", a1);
    result = v4;
    v3 = *(_QWORD *)(a1 + 1720);
    *v4 = &off_2C427B0;
    *(_QWORD *)(a1 + 1720) = v4;
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      return *(_QWORD **)(a1 + 1720);
    }
  }
  return result;
}
