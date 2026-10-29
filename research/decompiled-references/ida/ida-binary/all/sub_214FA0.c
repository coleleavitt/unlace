void __fastcall sub_214FA0(void *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __m128i v8; // xmm2
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  __int64 v11; // rbx
  void *v12; // rdi
  _OWORD v13[2]; // [rsp+0h] [rbp-58h] BYREF
  _OWORD v14[2]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-10h]

  v15 = __readfsqword(0x28u);
  v3 = *((_QWORD *)a1 + 46);
  if ( v3 )
  {
    *((_QWORD *)a1 + 47) = 0;
    qfree(v3, a2);
  }
  v4 = *((_QWORD *)a1 + 41);
  if ( v4 )
  {
    *((_QWORD *)a1 + 42) = 0;
    qfree(v4, a2);
  }
  v5 = *((_QWORD *)a1 + 38);
  if ( v5 )
  {
    *((_QWORD *)a1 + 39) = 0;
    qfree(v5, a2);
  }
  v6 = *((_QWORD *)a1 + 33);
  if ( v6 )
  {
    *((_QWORD *)a1 + 34) = 0;
    qfree(v6, a2);
  }
  v7 = *((_QWORD *)a1 + 30);
  if ( v7 )
  {
    *((_QWORD *)a1 + 31) = 0;
    qfree(v7, a2);
  }
  sub_20B4A0(*((void **)a1 + 24), a2);
  sub_20DAF0((__int64)a1 + 144, a2);
  v8 = _mm_loadu_si128((const __m128i *)a1 + 7);
  v9 = _mm_loadu_si128((const __m128i *)a1 + 4);
  v10 = _mm_loadu_si128((const __m128i *)a1 + 5);
  v13[0] = _mm_loadu_si128((const __m128i *)a1 + 6);
  v13[1] = v8;
  v14[0] = v9;
  v14[1] = v10;
  sub_20DC70((__int64 *)v14, (const char *)v13);
  sub_214F30((__int64)a1 + 48);
  v11 = *((_QWORD *)a1 + 2);
  while ( v11 )
  {
    sub_20BCB0(*(_QWORD **)(v11 + 24));
    v12 = (void *)v11;
    v11 = *(_QWORD *)(v11 + 16);
    operator delete(v12, 0x30u);
  }
}
