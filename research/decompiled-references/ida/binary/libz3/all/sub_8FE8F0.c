__int64 __fastcall sub_8FE8F0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8872LL) + 16LL * *(unsigned int *)(a1 + 16);
  *(_BYTE *)(result + 15) = 0;
  *(_BYTE *)(result + 14) = (((*(_QWORD *)(result + 8) & 0xFF000000D0000000LL) != 0) << 7)
                          | *(_BYTE *)(result + 14) & 0x7F;
  return result;
}

