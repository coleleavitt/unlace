/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A6A0
// Address: 0x000000000042A6A0

//----- (000000000042A6A0) ----------------------------------------------------
void **__fastcall sub_42A6A0(void **a1, const char *a2, const __m128i *a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  void *v6; // rsi
  __int64 v7; // r13
  char *v8; // r14
  void *v10; // rax
  __m128i v11; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v11 = _mm_loadu_si128(a3);
  v12 = a3[1].m128i_i64[0];
  v4 = (int)sub_4850F0(nullptr, 0, a2, (__int64)a3);
  if ( (_DWORD)v4 )
  {
    v5 = (int)v4 + 1LL;
    v6 = *a1;
    v7 = (__int64)a1[1] + (a1[1] == nullptr) - 1;
    v8 = (char *)a1[1] + (a1[1] == nullptr) + (int)v4;
    if ( a1[2] < v8 )
    {
      v10 = sub_481540((__int64)a1, v6, (unsigned __int64)a1[1] + (a1[1] == nullptr) + v4, 1u);
      *a1 = v10;
      v6 = v10;
    }
    a1[1] = v8;
    sub_4850F0((char *)v6 + v7, v5, a2, (__int64)&v11);
  }
  return a1;
}
