char *__fastcall sub_2196560(__int64 a1, __int64 a2, __int64 a3)
{
  char *result; // rax

  result = (char *)a2;
  if ( a3 == 14
    && *(_QWORD *)a2 == 0x74735F6775626564LL
    && *(_DWORD *)(a2 + 8) == 1718574962
    && *(_WORD *)(a2 + 12) == 29542 )
  {
    return "debug_str_offsets";
  }
  return result;
}
