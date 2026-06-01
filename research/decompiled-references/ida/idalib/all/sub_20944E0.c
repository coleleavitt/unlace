_QWORD *__fastcall sub_20944E0(_QWORD *a1, _QWORD *a2)
{
  _BYTE *v2; // rax
  __int64 v3; // rdx

  v2 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  *a1 = a1 + 2;
  sub_2094420(a1, v2, (__int64)&v2[v3]);
  return a1;
}
