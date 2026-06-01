__int64 __fastcall sub_F54860(__int64 a1, unsigned __int64 *a2, const __m128i *a3)
{
  unsigned __int64 v4; // r8
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rsi

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v4 = *a2;
  if ( (a3->m128i_i8[5] & 1) != 0 )
    v4 = *(_QWORD *)&byte_8[v4 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
       | ((unsigned __int8)*(_QWORD *)&byte_8[v4 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v4) & 7;
  v5 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = v4 & 7;
  if ( (v4 & 8) != 0 )
  {
    v6 |= *(__int64 *)((char *)&qword_18 + (v4 & 0xFFFFFFFFFFFFFFF0LL));
    v5 = (_QWORD *)*v5;
  }
  sub_F54390((__int64)v5, v6, a1, a3);
  return a1;
}

