unsigned __int8 __fastcall sub_20D3560(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  __int64 v5; // rdi
  unsigned __int8 result; // al
  size_t v7; // rax

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v4 == sub_20CEB40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
  else
    v4((__int64)a2, v3);
  v5 = *(_QWORD *)(a1 + 24);
  if ( (*(_BYTE *)(v5 + 9) & 0xC0) == 0x80 )
  {
    result = (**(__int64 (__fastcall ***)(__int64, _QWORD *))v5)(v5, a2);
    if ( result )
      return result;
LABEL_7:
    v7 = j__strlen(" ");
    return (unsigned __int8)sub_20D1ED0(a2, v7, " ");
  }
  result = (*(_BYTE *)(v5 + 9) & 0xC0) == 0;
  if ( (*(_BYTE *)(v5 + 9) & 0xC0) != 0 )
    goto LABEL_7;
  return result;
}
