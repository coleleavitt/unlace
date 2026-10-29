__int64 __fastcall sub_21F9840(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64) >> 6;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64) <= 0x7F )
    return 1;
  return result;
}
