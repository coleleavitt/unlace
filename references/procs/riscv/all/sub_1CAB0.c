__int64 __fastcall sub_1CAB0(const __m128i *a1, __int64 *a2)
{
  unsigned int v2; // r12d
  __m128i v3; // xmm0
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // [rsp+0h] [rbp-68h] BYREF
  __int128 v11; // [rsp+8h] [rbp-60h]
  _OWORD v12[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-20h]

  v3 = _mm_loadu_si128(a1);
  v13 = __readfsqword(0x28u);
  v10 = 0;
  v12[0] = v3;
  v12[1] = _mm_loadu_si128(a1 + 1);
  v11 = 0;
  v4 = sub_1C600(v12, &v10, a2, 0);
  v5 = v10;
  LOBYTE(v2) = v4 == 8;
  if ( v10 )
  {
    v6 = v11;
    if ( (_QWORD)v11 )
    {
      v7 = 0;
      do
      {
        v8 = v7++;
        clear_tinfo_t(v5 + 16 * v8 + 8);
        v5 = v10;
      }
      while ( v6 != v7 );
    }
    *(_QWORD *)&v11 = 0;
    qfree(v5);
  }
  return v2;
}
