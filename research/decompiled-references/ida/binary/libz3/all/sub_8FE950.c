__int64 __fastcall sub_8FE950(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8872LL) + 16LL * *(unsigned int *)(a1 + 16);
  *(_BYTE *)(result + 11) &= ~0x20u;
  return result;
}

