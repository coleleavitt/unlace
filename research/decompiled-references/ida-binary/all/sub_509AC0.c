unsigned __int64 __fastcall sub_509AC0(__int64 a1)
{
  int v1; // eax
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // eax
  int v5; // r14d
  float v6; // xmm1_4
  int v7; // eax
  __m128 v8; // xmm0
  int v9; // edx
  __m128 v11; // xmm1
  float v12; // [rsp+8h] [rbp-90h]
  void *v13[4]; // [rsp+10h] [rbp-88h] BYREF
  void *v14[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v15; // [rsp+40h] [rbp-58h]
  void *ptr[3]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp-30h]

  v1 = *(unsigned __int8 *)(a1 + 16);
  v17 = __readfsqword(0x28u);
  if ( !(_BYTE)v1
    || (v2 = (unsigned int)(v1 - 67), (unsigned __int8)v2 <= 0x2Fu) && (v3 = 0x800100008001LL, _bittest64(&v3, v2)) )
  {
    QT::QString::trimmed_helper((QT::QString *)ptr, (const QT::QString *)(a1 + 56));
    QT::QString::toUtf8_helper((QT::QString *)v13, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    if ( !v13[0] || *(int *)v13[0] > 1 )
      QT::QByteArray::reallocData(v13, v13[2], 1);
    sub_4F9030((const char *)v13[1], 0);
    sub_518A60((QT::QString *)v14);
    QT::QString::remove(v14, 38, 1);
    v4 = sub_4F9CA0((QT::QString *)v14, 1);
    v5 = v15;
    v12 = (float)v4;
    QT::QString::fromUtf8(ptr, 1, "X");
    v6 = (float)(int)sub_4F9CA0((QT::QString *)ptr, v5);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v7 = *(_DWORD *)(a1 + 8);
    v8 = 0;
    v8.m128_f32[0] = (float)((float)v7 * v12) / v6;
    if ( fabs(v8.m128_f32[0]) < 8388608.0 )
    {
      v11.m128_f32[0] = (float)(int)v8.m128_f32[0];
      v8.m128_i32[0] = COERCE_UNSIGNED_INT(v11.m128_f32[0] + COERCE_FLOAT(_mm_cmpgt_ss(v8, v11).m128_u32[0] & 0x3F800000))
                     | _mm_andnot_ps((__m128)0x7FFFFFFFu, v8).m128_u32[0];
    }
    v9 = (int)v8.m128_f32[0];
    if ( (int)v8.m128_f32[0] > v7 )
      v9 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 8) = v9;
    *(_DWORD *)(a1 + 84) = v7 - v9;
    if ( v14[0] && !_InterlockedSub((volatile signed __int32 *)v14[0], 1u) )
      free(v14[0]);
    if ( v13[0] && !_InterlockedSub((volatile signed __int32 *)v13[0], 1u) )
      free(v13[0]);
  }
  return v17 - __readfsqword(0x28u);
}
