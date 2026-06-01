_BYTE *__fastcall sub_101C7B0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 (__fastcall *v7)(__int64, __int64, __int64, __int64 *); // rax

  sub_106B780();
  v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)a1 + 984LL);
  if ( (char *)v7 == (char *)sub_101C410 )
    return sub_101C5E0(a2, a3, (__int64)sub_101C410, v4, v5, v6);
  else
    return (_BYTE *)v7(a1, a2, a1 + 216, a3);
}

