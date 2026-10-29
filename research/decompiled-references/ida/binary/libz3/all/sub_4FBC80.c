_QWORD *__fastcall sub_4FBC80(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  _QWORD *result; // rax

  if ( *(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL) != 1 || *(_DWORD *)(*(_QWORD *)(a3 + 8) + 32LL) != 1 )
    return nullptr;
  v6 = sub_4C4F90(*(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a3 + 32), a4, a5, a6);
  if ( !v6 )
    return nullptr;
  result = (_QWORD *)sub_186B270(0x10u);
  *result = &off_1C50190;
  result[1] = v6;
  return result;
}

