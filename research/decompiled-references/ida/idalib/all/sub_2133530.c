char __fastcall sub_2133530(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  _QWORD **v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64, __int64); // rax
  char v7; // al

  *a2 = 0;
  v5 = *(_QWORD ***)(a1 + 8);
  v6 = (__int64 (__fastcall *)(__int64, __int64, __int64))(*v5)[3];
  if ( v6 == sub_2128D30 )
    v7 = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64 *, __int64, _QWORD))(*v5[1] + 208LL))(v5[1], a2, a3, 0);
  else
    v7 = v6((__int64)v5, (__int64)a2, a3);
  if ( v7 || (unsigned __int8)sub_2133180(a1, 1u, (__int64 *)a2, a3) )
    return 1;
  else
    return sub_2133320(a1, a2);
}
