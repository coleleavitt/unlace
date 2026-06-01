unsigned __int64 __fastcall sub_23C3F0(const __m128i *a1, const char *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  __m128i v8; // xmm0
  __int64 v9; // rax
  __m128i v10; // xmm1
  __int64 v11; // r12
  __int64 v12; // rbp
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v17; // [rsp+0h] [rbp-8h] BYREF
  __m128i vars0; // [rsp+8h] [rbp+0h] BYREF
  unsigned __int64 vars10; // [rsp+18h] [rbp+10h]

  vars10 = __readfsqword(0x28u);
  v17 = 0;
  vars0 = 0;
  dbg_restore_manual_regions(&v17);
  v8 = _mm_loadu_si128(a1 + 1);
  v9 = v17;
  v10 = _mm_loadu_si128(&vars0);
  v17 = a1->m128i_i64[1];
  v7 = v17;
  a1->m128i_i64[1] = v9;
  a1[1] = v10;
  vars0 = v8;
  if ( v7 )
  {
    v11 = v8.m128i_i64[0];
    if ( v8.m128i_i64[0] )
    {
      v12 = 0;
      do
      {
        v13 = (_QWORD *)(v7 + 80 * v12);
        v14 = v13[5];
        if ( v14 )
        {
          v13[6] = 0;
          *(double *)v8.m128i_i64 = qfree(v14, a2);
        }
        v15 = v13[2];
        if ( v15 )
        {
          v13[3] = 0;
          *(double *)v8.m128i_i64 = qfree(v15, a2, *(double *)v8.m128i_i64);
        }
        ++v12;
        v7 = v17;
      }
      while ( v11 != v12 );
    }
    qfree(v7, a2, v3, v4, v5, v6, v17, 0, vars0.m128i_i64[1]);
  }
  return vars10 - __readfsqword(0x28u);
}
