__int64 __fastcall lsl::CRC32c::operator()(unsigned int *a1, __int64 a2)
{
  __int64 result; // x0

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)a1 + 16LL))(*(_QWORD *)a1, a1[2], a2);
  a1[2] = result;
  return result;
}
