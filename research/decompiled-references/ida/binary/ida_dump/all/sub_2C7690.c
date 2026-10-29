unsigned __int64 __fastcall sub_2C7690(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v4; // rcx
  __m128i v5; // xmm0
  __int64 v6; // rbx
  __m128i v7; // xmm0
  unsigned __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rdi
  __m128i v12; // xmm1
  __m128i v13; // xmm0
  unsigned __int64 v14; // rbx
  __m128i v15; // xmm0
  __int64 v16; // r14
  __m128i v17; // xmm0
  __int64 v18; // rdi
  __int64 (__fastcall **v19)(); // [rsp+10h] [rbp-E8h] BYREF
  __m128i v20; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+28h] [rbp-D0h] BYREF
  __int128 v22; // [rsp+30h] [rbp-C8h]
  char v23; // [rsp+40h] [rbp-B8h]
  __m128i v24; // [rsp+48h] [rbp-B0h] BYREF
  int v25; // [rsp+58h] [rbp-A0h]
  __int64 (__fastcall **v26)(); // [rsp+60h] [rbp-98h]
  __m128i v27; // [rsp+68h] [rbp-90h] BYREF
  __int64 v28; // [rsp+78h] [rbp-80h] BYREF
  __int128 v29; // [rsp+80h] [rbp-78h]
  char v30; // [rsp+90h] [rbp-68h]
  __m128i v31; // [rsp+98h] [rbp-60h] BYREF
  int v32; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v33; // [rsp+B8h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v23 = 0;
    v22 = 0;
    v20.m128i_i64[0] = -1;
    v20.m128i_i32[2] = 0;
    v21 = 0;
    v24.m128i_i64[0] = -1;
    v24.m128i_i32[2] = 0;
    v25 = -2;
    v19 = off_4E1280;
    if ( a2 < v2 )
    {
      v9 = a2;
      do
      {
        v10 = (_QWORD *)(*a1 + 80 * v9);
        v11 = v10[3];
        *v10 = off_4E1258;
        if ( v11 )
        {
          v10[4] = 0;
          qfree();
        }
        ++v9;
      }
      while ( v2 != v9 );
      a1[1] = a2;
    }
    else
    {
      v4 = a1[2];
      if ( (unsigned __int64)&v19 < *a1 || (unsigned __int64)&v19 >= *a1 + 80 * v4 )
      {
        if ( v4 < a2 )
        {
          *a1 = qvector_reserve();
          v2 = a1[1];
        }
        for ( ; v2 < a2; *(__m128i *)(v6 + 56) = v7 )
        {
          v5 = _mm_loadu_si128(&v20);
          v6 = *a1 + 80 * v2;
          *(_QWORD *)v6 = off_4E1258;
          *(_QWORD *)(v6 + 24) = 0;
          *(__m128i *)(v6 + 8) = v5;
          *(_OWORD *)(v6 + 32) = 0;
          sub_2AE320((_QWORD *)(v6 + 24), (__int64)&v21);
          v7 = _mm_loadu_si128(&v24);
          ++v2;
          *(_BYTE *)(v6 + 48) = 0;
          *(_DWORD *)(v6 + 72) = -2;
          *(_QWORD *)v6 = off_4E1280;
        }
        a1[1] = a2;
      }
      else
      {
        v12 = _mm_loadu_si128(&v20);
        v28 = 0;
        v26 = off_4E1258;
        v27 = v12;
        v29 = 0;
        sub_2AE320(&v28, (__int64)&v21);
        v13 = _mm_loadu_si128(&v24);
        v30 = 0;
        v32 = -2;
        v26 = off_4E1280;
        v31 = v13;
        if ( a1[2] < a2 )
          *a1 = qvector_reserve();
        v14 = a1[1];
        if ( v14 < a2 )
        {
          do
          {
            v15 = _mm_loadu_si128(&v27);
            v16 = *a1 + 80 * v14;
            *(_QWORD *)v16 = off_4E1258;
            *(_QWORD *)(v16 + 24) = 0;
            *(__m128i *)(v16 + 8) = v15;
            *(_OWORD *)(v16 + 32) = 0;
            sub_2AE320((_QWORD *)(v16 + 24), (__int64)&v28);
            v17 = _mm_loadu_si128(&v31);
            ++v14;
            *(_BYTE *)(v16 + 48) = 0;
            *(_DWORD *)(v16 + 72) = -2;
            *(_QWORD *)v16 = off_4E1280;
            *(__m128i *)(v16 + 56) = v17;
          }
          while ( a2 != v14 );
        }
        v18 = v28;
        a1[1] = a2;
        if ( v18 )
          qfree();
      }
    }
  }
  return v33 - __readfsqword(0x28u);
}
