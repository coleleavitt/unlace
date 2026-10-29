unsigned __int64 __fastcall sub_54A400(__int64 a1)
{
  __m128i si128; // xmm0
  __int64 v3; // rax
  void *v4; // rdi
  void *ptr[2]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v7; // [rsp+10h] [rbp-18h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  QT::QSplitter::sizes((QT::QSplitter *)ptr);
  si128 = _mm_load_si128((const __m128i *)ptr);
  v3 = v7;
  v4 = *(void **)(a1 + 56);
  *(_OWORD *)ptr = 0;
  v7 = 0;
  *(_QWORD *)(a1 + 72) = v3;
  *(__m128i *)(a1 + 56) = si128;
  if ( v4 )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)v4, 1u) )
      free(v4);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return v8 - __readfsqword(0x28u);
}
