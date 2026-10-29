__int64 __fastcall sub_16B660(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __m128i v5; // [rsp+0h] [rbp-38h] BYREF
  __m128i v6; // [rsp+10h] [rbp-28h]
  __int64 v7; // [rsp+20h] [rbp-18h]
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  if ( !(a2 | a3) )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  if ( !*(_QWORD *)(a1 + 480) )
    sub_158B30(a1);
  v3 = *(_QWORD *)(a1 + 472);
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 440));
  v7 = v3;
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 456));
  if ( a2 )
    v6.m128i_i16[6] = *(_DWORD *)a2;
  if ( a3 )
    v6.m128i_i16[7] = *(_DWORD *)a3;
  sub_16B4D0((__int64 *)a1, (__int64)&v5, 0);
  return 1;
}

