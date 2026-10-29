_QWORD *__fastcall sub_4FBE90(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned int a4)
{
  _QWORD *result; // rax
  __int64 v6; // rbx
  __int64 v7[6]; // [rsp+8h] [rbp-30h] BYREF

  result = nullptr;
  if ( *(_DWORD *)(a2[1] + 32LL) == 1 )
  {
    sub_4C4120(*(_QWORD *)(a1 + 24), a2[2] + 8LL * a4, a3, (__int64)v7);
    v6 = sub_4C4CE0(*(_QWORD *)(a1 + 24), a2[4], v7, a4);
    result = (_QWORD *)sub_186B270(0x10u);
    *result = &off_1C50158;
    result[1] = v6;
  }
  return result;
}

