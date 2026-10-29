unsigned __int64 __fastcall sub_5BF8F0(_QWORD *a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // eax
  int v11; // r8d
  __int64 v13; // [rsp+0h] [rbp-68h] BYREF
  __m128i si128; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+18h] [rbp-50h]
  __int128 v16; // [rsp+20h] [rbp-48h]
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_2383D00);
  v13 = 48;
  ptr = nullptr;
  v16 = 0;
  sub_5BF350(a1, (__int64)&v13, a2, a3);
  v8 = (unsigned int)sub_3B90A0(a1, a2);
  v9 = a3 << 16;
  if ( a3 >= 0x10000 )
    v9 = 0xFFFFFFFFLL;
  netnode_delblob(v8, v9, 103);
  v10 = si128.m128i_i32[0] != -1;
  if ( si128.m128i_i32[1] != -1 )
    v10 |= 2u;
  if ( si128.m128i_i32[3] != -1 )
    v10 |= 4u;
  if ( (unsigned __int64)v16 > 1 )
    v10 |= 8u;
  if ( si128.m128i_i32[2] )
    v10 |= 0x10u;
  v11 = v10 & ~a4;
  if ( v11 )
    sub_5BF530(a1, (const char *)a2, a3, (__int64)&v13, v11);
  if ( ptr )
  {
    *(_QWORD *)&v16 = 0;
    qfree(ptr);
  }
  return v17 - __readfsqword(0x28u);
}

