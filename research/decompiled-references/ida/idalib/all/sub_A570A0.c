__int64 __fastcall sub_A570A0(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // r13
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // rax

  if ( !a2 )
    return 0;
  v2 = a2;
  while ( v2 != a1 )
  {
    v3 = *(__int64 (__fastcall **)(__int64))(*a1 + 32LL);
    v4 = v3 == sub_A55E60 ? a1[12] : v3((__int64)a1);
    v5 = *(__int64 (__fastcall **)(__int64))(*v2 + 32LL);
    v6 = v5 == sub_A55E60 ? v2[12] : v5((__int64)v2);
    if ( v4 == v6 )
      break;
    v2 = (_QWORD *)sub_BAB630(v2);
    if ( !v2 )
      return 0;
  }
  return 1;
}
