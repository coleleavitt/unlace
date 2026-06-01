__int128 *__fastcall sub_283B00(__int64 a1, unsigned __int8 a2)
{
  __int128 *result; // rax

  result = (__int128 *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, 0, a2);
  if ( !result )
    return &xmmword_8C95C0;
  return result;
}
