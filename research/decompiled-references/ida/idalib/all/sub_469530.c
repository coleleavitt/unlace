unsigned __int64 __fastcall sub_469530(__m128i *a1)
{
  _QWORD *v1; // rax
  __m128i v3; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v1 = *(_QWORD **)(switch_dbctx(a1->m128i_i32[2]) + 1672);
  v3 = 0;
  sub_630CA0(*v1, 26, &v3, 16);
  a1[3] = _mm_load_si128(&v3);
  return v4 - __readfsqword(0x28u);
}
