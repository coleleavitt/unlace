_BOOL8 (__fastcall *__fastcall sub_230960(__int64 a1, _QWORD *a2))(__int64 a1)
{
  _BOOL8 (__fastcall *result)(__int64); // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx

  result = *(_BOOL8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 232LL);
  if ( result == sub_230230 )
  {
    v4 = *(_QWORD *)(a1 + 248);
    if ( (*(_BYTE *)(v4 + 123) & 0x20) != 0 )
      return result;
LABEL_6:
    v5 = a2[3];
    v6 = a2[2];
    *(_BYTE *)(a1 + 344) = 1;
    return (_BOOL8 (__fastcall *)(__int64))sub_EDB570(v4, a2[1], v6, v5);
  }
  result = (_BOOL8 (__fastcall *)(__int64))((__int64 (*)(void))result)();
  if ( !(_BYTE)result )
  {
    v4 = *(_QWORD *)(a1 + 248);
    goto LABEL_6;
  }
  return result;
}

