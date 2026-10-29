_QWORD *__fastcall sub_1E02D10(__int64 a1, __int64 a2)
{
  unsigned __int64 (__fastcall *v2)(__int64); // rax
  int v3; // edx
  __int64 v4; // rcx
  _QWORD *v5; // rsi

  v2 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL);
  if ( v2 == sub_B70840 )
    v3 = *(_DWORD *)(a2 + 24);
  else
    v3 = v2(a2);
  v4 = *(_QWORD *)(a2 + 16);
  v5 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v4 & 4) != 0 )
    v5 = (_QWORD *)*v5;
  return sub_B978D0(*(_QWORD **)(*(_QWORD *)a1 + 248LL), (__int64)v5, v3);
}
