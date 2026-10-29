_BYTE *__fastcall sub_10404F0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 (__fastcall *v7)(__int64, __int64, __int64, __int64 *); // rax

  sub_108F4C0();
  v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)a1 + 984LL);
  if ( (char *)v7 == (char *)sub_1040150 )
    return sub_1040320(a2, a3, (__int64)sub_1040150, v4, v5, v6);
  else
    return (_BYTE *)v7(a1, a2, a1 + 216, a3);
}
