/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90010
// Address: 0x0000000000090010

//----- (0000000000090010) ----------------------------------------------------
unsigned __int64 __fastcall sub_90010(__m128i *a1, _QWORD *a2, _QWORD *a3)
{
  void *v4; // rbx
  char *v5; // rax
  int v6; // eax
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  const void *v10; // r15
  size_t v11; // rax
  size_t v12; // r14
  void *v13; // r12
  void *v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rax
  void *dest[2]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+10h] [rbp-38h]
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  *(_OWORD *)dest = 0;
  v19 = 0;
  dest[0] = qvector_reserve((__int64)dest, nullptr, 9u, 1u);
  dest[1] = byte_9;
  *(_QWORD *)dest[0] = *a2;
  *((_BYTE *)dest[0] + 8) = 0;
  v4 = dest[1];
  v5 = byte_155771;
  if ( dest[1] )
    v5 = (char *)dest[0];
  if ( *v5 == 47 )
  {
    v6 = atoi((const char *)dest[0] + 1);
    if ( v6 > 0 )
    {
      v7 = v6;
      v8 = a3[1];
      v9 = v8 - 1;
      if ( !v8 )
        v9 = 0;
      if ( v9 > v7 )
      {
        v10 = (const void *)(*a3 + v7);
        if ( v10 && (v11 = strlen((const char *)v10)) != 0 )
        {
          v12 = v11;
          v13 = (void *)(v11 + 1);
          v14 = dest[0];
          if ( v19 < (unsigned __int64)v13 )
          {
            v14 = qvector_reserve((__int64)dest, (char *)dest[0], (unsigned __int64)v13, 1u);
            dest[0] = v14;
          }
          dest[1] = v13;
          memmove(v14, v10, v12);
          *((_BYTE *)dest[0] + v12) = 0;
          v4 = dest[1];
        }
        else
        {
          dest[1] = nullptr;
          v4 = nullptr;
        }
      }
    }
  }
  v15 = _mm_loadu_si128(a1);
  v16 = a1[1].m128i_i64[0];
  a1->m128i_i64[0] = (__int64)dest[0];
  a1->m128i_i64[1] = (__int64)v4;
  a1[1].m128i_i64[0] = v19;
  *(__m128i *)dest = v15;
  v19 = v16;
  if ( v15.m128i_i64[0] )
  {
    dest[1] = nullptr;
    qfree((void *)v15.m128i_i64[0]);
    dest[0] = nullptr;
    v19 = 0;
  }
  return __readfsqword(0x28u);
}
