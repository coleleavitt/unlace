__int64 __fastcall sub_20D2880(__int64 a1, _QWORD *a2)
{
  _BYTE *v3; // rdi
  char v4; // al
  char v5; // al
  _BYTE *v6; // rdi
  char v7; // al
  char v8; // al
  __int64 (__fastcall *v9)(__int64, __int64); // rax

  v3 = *(_BYTE **)(a1 + 24);
  v4 = v3[10] & 3;
  if ( v4 == 2 )
    v5 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v3 + 8LL))(v3);
  else
    v5 = v4 == 0;
  if ( v5
    || ((v6 = *(_BYTE **)(a1 + 24), v7 = v6[10] & 0xC, v7 != 8)
      ? (v8 = v7 == 0)
      : (v8 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v6 + 16LL))(v6, a2)),
        v8) )
  {
    sub_20D1ED0(a2, 1u, ")");
  }
  v9 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
  if ( v9 == sub_20CEB60 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 24) + 72LL))(*(_QWORD *)(a1 + 24), a2);
  else
    return v9((__int64)a2, *(_QWORD *)(a1 + 24));
}
