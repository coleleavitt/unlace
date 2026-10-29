__int64 __fastcall sub_15F2460(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)result )
  {
    result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * result - 8);
    *(_BYTE *)(result + 8) |= 0x10u;
  }
  return result;
}
