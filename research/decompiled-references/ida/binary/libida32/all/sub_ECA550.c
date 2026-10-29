unsigned __int64 __fastcall sub_ECA550(__int64 a1, unsigned int a2)
{
  unsigned __int64 result; // rax

  result = (2LL * a2) | *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF9LL;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}

