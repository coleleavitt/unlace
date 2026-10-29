_BOOL8 (__fastcall *__fastcall sub_230AC0(__int64 a1))(__int64 a1)
{
  _BOOL8 (__fastcall *result)(__int64); // rax
  __int64 v3; // rdi

  result = *(_BOOL8 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 232LL);
  if ( result == sub_230230 )
  {
    v3 = *(_QWORD *)(a1 + 232);
    if ( (*(_BYTE *)(v3 + 123) & 0x20) != 0 )
      return result;
LABEL_6:
    *(_BYTE *)(a1 + 328) = 1;
    return (_BOOL8 (__fastcall *)(__int64))sub_EDBFA0(v3);
  }
  result = (_BOOL8 (__fastcall *)(__int64))result(a1 - 16);
  if ( !(_BYTE)result )
  {
    v3 = *(_QWORD *)(a1 + 232);
    goto LABEL_6;
  }
  return result;
}

