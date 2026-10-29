_WORD *__fastcall sub_E0E3B0(__int64 a1)
{
  __int64 v1; // rax
  _WORD *result; // rax

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( !v1 )
    return nullptr;
  if ( (v1 & 4) == 0 )
    return nullptr;
  result = (_WORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
  if ( !result || ((*result + 509) & 0x1FFu) > 0x7E )
    return nullptr;
  return result;
}

