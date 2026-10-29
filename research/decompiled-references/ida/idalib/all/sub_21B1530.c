__int64 __fastcall sub_21B1530(__int64 a1, __int64 a2, const void *a3)
{
  bool (__fastcall *v4)(__int64); // rax
  _BYTE *v5; // rax
  __int64 v6; // rdx

  v4 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
  if ( v4 != sub_21B1110 )
    v4(a2);
  v5 = memchr(a3, 0, 8u);
  *(_QWORD *)a1 = a3;
  v6 = v5 - (_BYTE *)a3;
  if ( !v5 )
    v6 = 8;
  *(_BYTE *)(a1 + 16) &= ~1u;
  *(_QWORD *)(a1 + 8) = v6;
  return a1;
}
