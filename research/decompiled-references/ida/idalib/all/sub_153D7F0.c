__int64 __fastcall sub_153D7F0(__int64 a1, __m128i a2, __m128 a3)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  v3 = *(__int64 **)(a1 + 8);
  result = sub_153CA60(*(_QWORD *)a1, **(_BYTE **)(a1 + 16), a2, a3);
  *v3 = result;
  return result;
}
