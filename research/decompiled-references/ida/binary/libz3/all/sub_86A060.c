__int64 __fastcall sub_86A060(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 904LL) + 16LL * *(unsigned int *)(a1 + 16);
  *(_BYTE *)(result + 12) = 0;
  return result;
}

