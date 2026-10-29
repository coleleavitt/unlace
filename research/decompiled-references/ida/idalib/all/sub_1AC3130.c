__int64 __fastcall sub_1AC3130(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x600000000LL;
  if ( *(_DWORD *)(a2 + 8) )
    sub_1AC2FD0((void **)a1, (char **)a2);
  result = *(unsigned __int8 *)(a2 + 64);
  *(_BYTE *)(a1 + 64) = result;
  return result;
}
