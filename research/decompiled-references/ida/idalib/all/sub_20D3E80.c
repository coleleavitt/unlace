__int64 __fastcall sub_20D3E80(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  __int64 v5; // rdi
  _BYTE *v6; // rbp
  __int64 result; // rax
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  size_t v9; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( !v3 )
    goto LABEL_7;
  if ( v4 == sub_20CEB40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
  else
    v4((__int64)a2, v3);
  v5 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(v5 + 9) & 0xC0) != 0x80 )
  {
    if ( (*(_BYTE *)(v5 + 9) & 0xC0) == 0 )
      goto LABEL_6;
LABEL_13:
    v9 = j__strlen(" ");
    sub_20D1ED0(a2, v9, " ");
    goto LABEL_6;
  }
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64, _QWORD *))v5)(v5, a2) )
    goto LABEL_13;
LABEL_6:
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
LABEL_7:
  v6 = *(_BYTE **)(a1 + 24);
  if ( v4 == sub_20CEB40 )
    (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v6 + 64LL))(v6, a2);
  else
    v4((__int64)a2, (__int64)v6);
  result = v6[9] & 0xC0;
  if ( (v6[9] & 0xC0) != 0x40 )
  {
    v8 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
    if ( v8 == sub_20CEB60 )
      return (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v6 + 72LL))(v6, a2);
    else
      return v8((__int64)a2, (__int64)v6);
  }
  return result;
}
