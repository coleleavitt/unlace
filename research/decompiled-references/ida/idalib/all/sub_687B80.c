__int64 __fastcall sub_687B80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __m128i v4; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 8);
  v5 = __readfsqword(0x28u);
  v4 = 0;
  v4.m128i_i8[0] = v2;
  *(_QWORD *)(a2 + 8) = (unsigned __int8)set_compiler(&v4, (_BYTE *)&dword_0 + 2, nullptr);
  return 0;
}
