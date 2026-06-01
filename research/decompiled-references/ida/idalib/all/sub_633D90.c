__int64 __fastcall sub_633D90(__int64 a1, __int64 a2, const char *a3, size_t a4, __int64 a5, __int64 a6)
{
  size_t v7; // rax
  int v8; // edx
  size_t v9; // rbp
  _QWORD *v10; // rdi
  __m128i v12; // xmm0
  __int64 v13; // rax
  _QWORD v14[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v15; // [rsp+10h] [rbp-28h]
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v7 = *(_QWORD *)(a2 + 16);
  v8 = *(_DWORD *)(a2 + 56);
  v16 = __readfsqword(0x28u);
  v9 = a4;
  if ( v7 && v7 < a4 && (v8 & 0x20) == 0 )
    v9 = v7;
  v14[0] = 0;
  v14[1] = -1;
  if ( (v8 & 0x1000) != 0 )
  {
    v12 = _mm_loadu_si128((const __m128i *)(a1 + 40));
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD, __int64, __int64, __int64, _QWORD, unsigned __int64))(**(_QWORD **)(a1 + 64) + 32LL))(
            *(_QWORD *)(a1 + 64),
            *(_QWORD *)(a1 + 32),
            *(unsigned int *)(a1 + 12),
            a2,
            **(_QWORD **)(a1 + 64),
            a6,
            v12.m128i_i64[0],
            v12.m128i_i64[1],
            *(_QWORD *)(a1 + 56),
            v16);
    v10 = v14;
    v15 = v13;
  }
  else
  {
    v15 = 0;
    v10 = (_QWORD *)(a1 + 40);
  }
  return sub_6327E0((__int64)v10, a2, a3, v9, 100, a6);
}
