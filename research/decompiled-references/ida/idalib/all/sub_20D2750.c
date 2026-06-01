__int64 __fastcall sub_20D2750(__int64 a1, _QWORD *a2)
{
  size_t v2; // rax
  _BYTE *v3; // rbp
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  __int64 (__fastcall *v6)(__int64, __int64); // rax

  if ( *(_BYTE *)(a2[1] + a2[2] - 1LL) != 93 )
  {
    v2 = j__strlen(" ");
    sub_20D1ED0(a2, v2, " ");
  }
  sub_20D1ED0(a2, 1u, "[");
  v3 = *(_BYTE **)(a1 + 24);
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
    if ( v4 == sub_20CEB40 )
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v3 + 64LL))(*(_QWORD *)(a1 + 24), a2);
    else
      v4((__int64)a2, *(_QWORD *)(a1 + 24));
    if ( (v3[9] & 0xC0) != 0x40 )
    {
      v5 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
      if ( v5 == sub_20CEB60 )
        (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v3 + 72LL))(v3, a2);
      else
        v5((__int64)a2, (__int64)v3);
    }
  }
  sub_20D1ED0(a2, 1u, "]");
  v6 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
  if ( v6 == sub_20CEB60 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 16) + 72LL))(*(_QWORD *)(a1 + 16), a2);
  else
    return v6((__int64)a2, *(_QWORD *)(a1 + 16));
}
