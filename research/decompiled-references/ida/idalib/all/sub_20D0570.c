__int64 __fastcall sub_20D0570(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rbp
  __int64 (__fastcall *v3)(__int64, __int64); // rax
  __int64 v4; // rdx
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  _BYTE *v7; // rbp
  __int64 result; // rax
  __int64 (__fastcall *v9)(__int64, __int64); // rax

  v2 = *(_BYTE **)(a1 + 16);
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
  if ( v3 == sub_20CEB40 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 64LL))(*(_QWORD *)(a1 + 16));
  else
    v3(a2, *(_QWORD *)(a1 + 16));
  v4 = *(_QWORD *)a2;
  if ( (v2[9] & 0xC0) != 0x40 )
  {
    v5 = *(__int64 (__fastcall **)(__int64, __int64))(v4 + 24);
    if ( v5 == sub_20CEB60 )
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v2 + 72LL))(v2, a2);
    else
      v5(a2, (__int64)v2);
    v4 = *(_QWORD *)a2;
  }
  v6 = *(__int64 (__fastcall **)(__int64, __int64))(v4 + 16);
  v7 = *(_BYTE **)(a1 + 24);
  if ( v6 == sub_20CEB40 )
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v7 + 64LL))(*(_QWORD *)(a1 + 24), a2);
  else
    v6(a2, *(_QWORD *)(a1 + 24));
  result = v7[9] & 0xC0;
  if ( (v7[9] & 0xC0) != 0x40 )
  {
    v9 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL);
    if ( v9 == sub_20CEB60 )
      return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v7 + 72LL))(v7, a2);
    else
      return v9(a2, (__int64)v7);
  }
  return result;
}
