__int64 __fastcall sub_617020(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rax
  __m128i v8; // xmm0
  _QWORD v10[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v11; // [rsp+10h] [rbp-28h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v10[1] = 0xFFFFFFFFLL;
  v7 = (_QWORD *)(a1 + 40);
  v10[0] = 0;
  v11 = 0;
  if ( (*(_BYTE *)(a2 + 57) & 0x10) != 0 )
  {
    v8 = _mm_loadu_si128((const __m128i *)(a1 + 40));
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD, __int64, __int64, __int64, _QWORD, unsigned __int64))(**(_QWORD **)(a1 + 64) + 32LL))(
            *(_QWORD *)(a1 + 64),
            *(_QWORD *)(a1 + 32),
            *(unsigned int *)(a1 + 12),
            a2,
            **(_QWORD **)(a1 + 64),
            a6,
            v8.m128i_i64[0],
            v8.m128i_i64[1],
            *(_QWORD *)(a1 + 56),
            v12);
    v7 = v10;
  }
  return sub_614CE0((__int64)v7, a2, a3, a4, a5, a6);
}

