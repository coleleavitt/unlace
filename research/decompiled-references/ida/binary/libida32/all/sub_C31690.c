__int64 __fastcall sub_C31690(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  result = sub_C31220(*(_QWORD *)a1, (__m128i *)((char *)&dword_0 + 1), *(_DWORD *)(a1 + 8), a4, a5);
  *(_DWORD *)(a1 + 8) = -1;
  return result;
}

