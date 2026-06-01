unsigned __int64 __fastcall sub_696920(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  const __m128i *v4; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __m128i v11; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v3 = *(unsigned int *)(a2 + 4);
  v4 = *(const __m128i **)(a1 + 1816);
  v12 = __readfsqword(0x28u);
  v11 = _mm_unpacklo_epi64(
          (__m128i)*(unsigned __int64 *)(a2 + 8),
          (__m128i)(unsigned __int64)(*(_QWORD *)(a2 + 8) + v3));
  v6 = unpack_dq(&v11);
  v7 = unpack_dq(&v11);
  v8 = unpack_dq(&v11);
  if ( a3 != 1 )
  {
    v9 = v7;
    v7 = v6;
    v6 = v9;
  }
  sub_6962C0(v4, v6, v7, v8);
  return v12 - __readfsqword(0x28u);
}
