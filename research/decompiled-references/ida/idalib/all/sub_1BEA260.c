__int64 __fastcall sub_1BEA260(unsigned __int8 **a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64); // rdx
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 (__fastcall *v9)(__int64); // rax
  __int64 v10; // rax

  v5 = sub_E900C0(a2);
  if ( !v5 || !a3 )
    return sub_AE9DF0(a1, a3[6] & 0xFFFFFFFFFFFFFFF0LL, 8u);
  if ( (_QWORD *)v5 == a3 )
    return sub_AE9DF0(a1, a2, 0xBu);
  v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL);
  if ( v6 == sub_A01140 )
  {
    v7 = (__int64)a3;
    v8 = sub_B70A60(v5);
    v9 = *(__int64 (__fastcall **)(__int64))(*a3 + 32LL);
    if ( v9 == sub_A01140 )
    {
LABEL_6:
      v10 = sub_B70A60(v7);
      goto LABEL_7;
    }
  }
  else
  {
    v7 = (__int64)a3;
    v8 = v6(v5);
    v9 = *(__int64 (__fastcall **)(__int64))(*a3 + 32LL);
    if ( v9 == sub_A01140 )
      goto LABEL_6;
  }
  v10 = v9(v7);
LABEL_7:
  if ( v8 == v10 )
    return sub_AE9DF0(a1, a2, 0xBu);
  return sub_AE9DF0(a1, a3[6] & 0xFFFFFFFFFFFFFFF0LL, 8u);
}
