bool __fastcall sub_57650(__int64 a1, __int64 a2)
{
  unsigned __int8 (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax

  hexdsp = (unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(a1, a2);
  return hexdsp(205, a1, (unsigned int)a2) != 0;
}
