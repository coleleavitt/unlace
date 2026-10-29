_QWORD *__fastcall sub_4FBE40(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  __int64 v4; // rbx
  _QWORD *result; // rax

  if ( *(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL) != 1 )
    return nullptr;
  v4 = sub_4C5780(*(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 32), a3, a4);
  result = (_QWORD *)sub_186B270(0x10u);
  *result = &off_1C50158;
  result[1] = v4;
  return result;
}

