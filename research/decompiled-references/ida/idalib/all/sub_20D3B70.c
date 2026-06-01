__int64 __fastcall sub_20D3B70(__int64 a1, _QWORD *a2)
{
  _BYTE *v2; // rbp
  __int64 (__fastcall *v3)(__int64, __int64); // rax
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  _BYTE *v5; // rbp
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  __int64 result; // rax
  __int64 (__fastcall *v8)(__int64, __int64); // rax

  v2 = *(_BYTE **)(a1 + 16);
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v3 == sub_20CEB40 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 64LL))(*(_QWORD *)(a1 + 16));
  else
    v3((__int64)a2, *(_QWORD *)(a1 + 16));
  if ( (v2[9] & 0xC0) != 0x40 )
  {
    v4 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
    if ( v4 == sub_20CEB60 )
      (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v2 + 72LL))(v2, a2);
    else
      v4((__int64)a2, (__int64)v2);
  }
  sub_20D1ED0(a2, 9u, "::friend ");
  v5 = *(_BYTE **)(a1 + 24);
  v6 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v6 == sub_20CEB40 )
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v5 + 64LL))(*(_QWORD *)(a1 + 24), a2);
  else
    v6((__int64)a2, *(_QWORD *)(a1 + 24));
  result = v5[9] & 0xC0;
  if ( (v5[9] & 0xC0) != 0x40 )
  {
    v8 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
    if ( v8 == sub_20CEB60 )
      return (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v5 + 72LL))(v5, a2);
    else
      return v8((__int64)a2, (__int64)v5);
  }
  return result;
}
