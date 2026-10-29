void __fastcall sub_A64A0(void *a1)
{
  __m128i v1; // xmm2
  __m128i v2; // xmm1
  __m128i v3; // xmm0
  __int64 v4; // rbx
  void *v5; // rdi
  _OWORD v6[2]; // [rsp+0h] [rbp-58h] BYREF
  _OWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+48h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  if ( *((_QWORD *)a1 + 45) )
  {
    *((_QWORD *)a1 + 46) = 0;
    qfree();
  }
  if ( *((_QWORD *)a1 + 40) )
  {
    *((_QWORD *)a1 + 41) = 0;
    qfree();
  }
  if ( *((_QWORD *)a1 + 37) )
  {
    *((_QWORD *)a1 + 38) = 0;
    qfree();
  }
  if ( *((_QWORD *)a1 + 33) )
  {
    *((_QWORD *)a1 + 34) = 0;
    qfree();
  }
  if ( *((_QWORD *)a1 + 30) )
  {
    *((_QWORD *)a1 + 31) = 0;
    qfree();
  }
  sub_9C3C0(*((void **)a1 + 24));
  sub_9EE70((__int64)a1 + 144);
  v1 = _mm_loadu_si128((const __m128i *)a1 + 7);
  v2 = _mm_loadu_si128((const __m128i *)a1 + 4);
  v3 = _mm_loadu_si128((const __m128i *)a1 + 5);
  v6[0] = _mm_loadu_si128((const __m128i *)a1 + 6);
  v6[1] = v1;
  v7[0] = v2;
  v7[1] = v3;
  sub_9EFF0((__int64 *)v7, (__int64 *)v6);
  sub_A6430((__int64)a1 + 48);
  v4 = *((_QWORD *)a1 + 2);
  while ( v4 )
  {
    sub_9CD60(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x28u);
  }
}

