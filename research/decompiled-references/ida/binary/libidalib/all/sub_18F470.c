__int64 __fastcall sub_18F470(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  unsigned __int64 v5; // rsi

  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 40LL);
  if ( v4 == sub_18E7D0 )
    v5 = *(_QWORD *)(a1[1] + 8 * a3);
  else
    v5 = v4((__int64)a1, a3);
  if ( v5 == -1 )
    return 0;
  else
    return sub_180250(a2, v5);
}

