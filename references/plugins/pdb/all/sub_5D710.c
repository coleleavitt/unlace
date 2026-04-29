__int64 __fastcall sub_5D710(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 88) & 0x14) != 0x10 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a2 + 56LL))(*a2, a1 + 24);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*a2 + 48LL))(*a2, a1 + 96, 4);
  if ( (_BYTE)result )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a2 + 56LL))(*a2, a1 + 24);
  return result;
}
