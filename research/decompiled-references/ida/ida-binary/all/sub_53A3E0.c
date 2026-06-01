unsigned __int64 __fastcall sub_53A3E0(_QWORD *a1)
{
  void *ptr[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v3; // [rsp+10h] [rbp-48h]
  __m128i v4; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+30h] [rbp-28h]
  unsigned __int64 v6; // [rsp+38h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  sub_539EF0((__int64)&v4);
  v3 = v5;
  *(__m128i *)ptr = _mm_load_si128(&v4);
  if ( v5 )
    QT::QWidget::addActions(*a1, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v6 - __readfsqword(0x28u);
}
