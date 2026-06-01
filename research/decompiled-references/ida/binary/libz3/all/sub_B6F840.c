__int64 __fastcall sub_B6F840(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(result + 44) &= ~0x80u;
  return result;
}

