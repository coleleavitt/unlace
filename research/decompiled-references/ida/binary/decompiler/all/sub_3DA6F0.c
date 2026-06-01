__int64 __fastcall sub_3DA6F0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 i; // rbx
  __int64 v6; // rdx
  __m128i v7; // xmm1
  __m128i v9; // [rsp+0h] [rbp-58h] BYREF
  __int64 v10; // [rsp+10h] [rbp-48h] BYREF
  __m128i v11; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  sub_3D9AB0((__int64)&v10);
  v2 = v10;
  v3 = *(_QWORD *)(a1 + 248);
  v9 = _mm_loadu_si128(&v11);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 256);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = v3 + 32 * i;
        if ( *(_QWORD *)(v6 + 8) )
        {
          *(_QWORD *)(v6 + 16) = 0;
          qfree();
          v3 = *(_QWORD *)(a1 + 248);
        }
      }
    }
    *(_QWORD *)(a1 + 256) = 0;
    qfree();
  }
  v7 = _mm_load_si128(&v9);
  *(_QWORD *)(a1 + 248) = v2;
  *(__m128i *)(a1 + 256) = v7;
  return a2;
}
