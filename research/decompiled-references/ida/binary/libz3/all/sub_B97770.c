__int64 __fastcall sub_B97770(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(a1 - 40) + 8872LL) + 16LL * (a2 >> 1);
  *(_BYTE *)(result + 11) = *(_BYTE *)(result + 11) & 0xF3 | (8 * !(a2 & 1) + 4);
  return result;
}

