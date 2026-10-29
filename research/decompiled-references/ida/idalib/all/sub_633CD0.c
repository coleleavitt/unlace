__int64 __fastcall sub_633CD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v8; // rdi
  __m128i v10; // xmm0
  _QWORD v11[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+10h] [rbp-28h]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v8 = (_QWORD *)(a2 + 40);
  v11[0] = 0;
  v11[1] = -1;
  v12 = 0;
  if ( (*(_BYTE *)(a3 + 57) & 0x10) != 0 )
  {
    v10 = _mm_loadu_si128((const __m128i *)(a2 + 40));
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64, __int64, __int64, __int64, _QWORD, unsigned __int64))(**(_QWORD **)(a2 + 64) + 32LL))(
            *(_QWORD *)(a2 + 64),
            *(_QWORD *)(a2 + 32),
            *(unsigned int *)(a2 + 12),
            a3,
            a5,
            a6,
            v10.m128i_i64[0],
            v10.m128i_i64[1],
            *(_QWORD *)(a2 + 56),
            v13);
    v8 = v11;
  }
  sub_631310(v8, a3, (__int64 *)a1, a4, a5, a6);
  return a1;
}
