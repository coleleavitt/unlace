__int64 __fastcall sub_F1DDB0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  const char *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 (__fastcall *v10)(); // rsi
  __int64 result; // rax

  v3 = sub_971800(*(_QWORD *)(a1 + 1096), " ");
  v4 = "->";
  if ( (*(_QWORD *)a2 & 0x80000LL) == 0 )
    v4 = ".";
  v5 = sub_971800(v3, v4);
  sub_B4EFB0(*(_QWORD *)(a2 + 24), v5);
  sub_F05DA0(a1, *(_QWORD *)(a2 + 24));
  if ( (*(_QWORD *)a2 & 0x100000LL) != 0 )
  {
    v10 = *(__int64 (__fastcall **)())(a2 + 48);
    if ( v10 )
      sub_F1D820(a1, v10, v6, v7, v8, v9);
  }
  result = *(_BYTE *)(a2 + 3) & 3;
  if ( (_BYTE)result == 2 )
    return sub_971800(*(_QWORD *)(a1 + 1096), " non_odr_use_constant");
  if ( (*(_BYTE *)(a2 + 3) & 3) == 3 )
    return sub_971800(*(_QWORD *)(a1 + 1096), " non_odr_use_discarded");
  if ( (_BYTE)result == 1 )
    return sub_971800(*(_QWORD *)(a1 + 1096), " non_odr_use_unevaluated");
  return result;
}

