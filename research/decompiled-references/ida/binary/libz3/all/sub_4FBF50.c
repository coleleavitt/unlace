_QWORD *__fastcall sub_4FBF50(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5, unsigned int *a6)
{
  _QWORD *result; // rax
  char *v7; // rbx

  result = nullptr;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL) == 1 && *(_DWORD *)(*(_QWORD *)(a3 + 8) + 32LL) == 1 )
  {
    v7 = sub_4C67E0(*(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a3 + 32), a4, a5, a6);
    result = (_QWORD *)sub_186B270(0x10u);
    *result = &off_1C50190;
    result[1] = v7;
  }
  return result;
}

