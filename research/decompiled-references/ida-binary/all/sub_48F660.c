__int64 __fastcall sub_48F660(QT::QAbstractItemView *a1, __int64 a2)
{
  __m128i v3; // [rsp+0h] [rbp-38h] BYREF
  __m128i v4; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v3 = (__m128i)-1LL;
  *((_DWORD *)a1 + 54) = 15;
  if ( sub_48F550(a1, &v3, a2) )
    v4 = _mm_load_si128(&v3);
  else
    v4 = (__m128i)-1LL;
  sub_546800(a1, &v4);
  if ( *(char *)((*(__int64 (__fastcall **)(QT::QAbstractItemView *))(*(_QWORD *)a1 + 808LL))(a1) + 1680) >= 0 )
    return sub_531B30(6, a1, 0);
  else
    return v5 - __readfsqword(0x28u);
}
