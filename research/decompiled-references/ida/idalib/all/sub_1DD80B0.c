__int64 __fastcall sub_1DD80B0(__int64 a1, __int64 a2, int a3, int a4, unsigned __int8 a5, __m128 a6, __m128 a7)
{
  __int64 result; // rax
  __int64 v8; // [rsp+10h] [rbp-10h]

  result = sub_1DD7820(*(_QWORD *)a1, a2, *(_QWORD *)(a1 + 32), a3, a4, a5, a6, a7, *(unsigned __int8 *)(a1 + 56));
  if ( result )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 47LL) & 0x20) != 0 )
    {
      v8 = result;
      sub_17A40B0(*(_QWORD *)a1, result);
      return v8;
    }
  }
  return result;
}
