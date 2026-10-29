unsigned __int64 __fastcall sub_162240(
        __int64 a1,
        const __m128i *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v6 = *(_QWORD *)(a1 + 96);
  v9 = __readfsqword(0x28u);
  v8[0] = 0;
  v8[1] = v6;
  sub_161FE0(a1, a2, v8, a3, 0, a6);
  return v9 - __readfsqword(0x28u);
}

