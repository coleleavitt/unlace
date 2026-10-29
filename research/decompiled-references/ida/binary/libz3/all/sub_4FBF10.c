_QWORD *__fastcall sub_4FBF10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *result; // rax

  if ( *(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL) != 1 )
    return nullptr;
  v3 = sub_4C4D50(*(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 32), a3);
  result = (_QWORD *)sub_186B270(0x10u);
  *result = &off_1C50158;
  result[1] = v3;
  return result;
}

