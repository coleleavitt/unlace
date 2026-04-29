__int64 __fastcall sub_81540(__int64 a1)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 470) )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 123);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 5);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 125);
  }
  if ( (*(_BYTE *)(a1 + 497) & 4) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 123);
    (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "z", 32);
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 125);
  }
  return result;
}
