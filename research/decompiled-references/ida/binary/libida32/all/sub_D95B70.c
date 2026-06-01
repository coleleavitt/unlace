__int64 __fastcall sub_D95B70(_QWORD *a1)
{
  __int64 v1; // rbp
  char v2; // r12
  __int64 v3; // rbp
  _BYTE *v4; // rax
  __int64 v5; // rdi
  __m128i v7[2]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *a1;
  v2 = *(_BYTE *)sub_DFDA20(*a1, 8);
  sub_DFDA50(v1, 8);
  v3 = *a1;
  v7[0] = _mm_loadu_si128((const __m128i *)sub_DFDA20(*a1, 16));
  sub_DFDA50(v3, 16);
  v4 = (_BYTE *)sub_DFD980(*a1, 8);
  v5 = *a1;
  *v4 = v2;
  *(__m128i *)sub_DFD980(v5, 16) = _mm_load_si128(v7);
  return 1;
}

