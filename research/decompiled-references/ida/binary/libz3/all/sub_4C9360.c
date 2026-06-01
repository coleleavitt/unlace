_QWORD *__fastcall sub_4C9360(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  _QWORD *result; // rax
  __int64 v12; // rdi

  result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 8) + 176LL))(*(_QWORD *)(a2 + 8));
  if ( !result )
  {
    v12 = *(_QWORD *)(a3 + 8);
    if ( *(_QWORD *)(a2 + 8) == v12 )
      return sub_4C9190(a1, (_QWORD *)a2, a3, a4, a5, a6);
    result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v12 + 176LL))(
                         v12,
                         a2,
                         a3,
                         a4,
                         a5,
                         a6);
    if ( !result )
      return sub_4C9190(a1, (_QWORD *)a2, a3, a4, a5, a6);
  }
  return result;
}

