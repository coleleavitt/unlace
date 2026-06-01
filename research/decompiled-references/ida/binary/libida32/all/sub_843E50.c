__int64 __fastcall sub_843E50(
        _QWORD *a1,
        __int64 (__fastcall *a2)(_QWORD *, _QWORD, __int64, __int64),
        __int64 a3,
        __int64 a4)
{
  _OWORD v5[2]; // [rsp+0h] [rbp-8038h] BYREF
  _BYTE v6[32768]; // [rsp+20h] [rbp-8018h] BYREF
  char v7; // [rsp+8020h] [rbp-18h] BYREF
  unsigned __int64 v8; // [rsp+8028h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  *a1 = v5;
  v5[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)(unsigned __int64)v6);
  v5[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v7, (__m128i)(unsigned __int64)&v7);
  return a2(a1, a2, a3, a4);
}

