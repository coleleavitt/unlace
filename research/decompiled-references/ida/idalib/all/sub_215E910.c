char *__fastcall sub_215E910(__int64 a1, __int64 a2, __int64 a3)
{
  char *result; // rax

  result = (char *)a2;
  if ( a3 == 7 && *(_DWORD *)a2 == 1717528677 && *(_WORD *)(a2 + 4) == 24946 && *(_BYTE *)(a2 + 6) == 109 )
    return "eh_frame";
  return result;
}
