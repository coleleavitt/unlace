__int64 __fastcall sub_690250(__int64 a1, unsigned int a2, __m128i *a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __m128i v7; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+10h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 56);
  v4 = *(_QWORD *)(v3 + 80) + ((unsigned __int64)a2 << 6);
  if ( a3 )
  {
    sub_602210(&v7, *(_QWORD *)(v3 + 16), *(_QWORD *)(a1 + 64), v4);
    *a3 = _mm_loadu_si128(&v7);
    a3[1].m128i_i64[0] = v8;
  }
  return sub_6905C0(*(void **)(v4 + 24), *(_QWORD *)(v4 + 32));
}

