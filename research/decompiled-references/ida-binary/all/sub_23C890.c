__int64 __fastcall sub_23C890(__int64 a1, __int64 *a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  unsigned int v8; // r13d
  __int64 v9; // rax
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __int64 v12; // r12
  __int64 v13; // rbp
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v18; // [rsp+0h] [rbp-48h] BYREF
  __m128i v19; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v19 = 0;
  v18 = 0;
  v2 = sub_20CEA0(dbg, 21, &v18, 0);
  v7 = v18;
  v8 = v2;
  if ( v2 > 0 )
  {
    v9 = *a2;
    v10 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    *a2 = v18;
    v11 = _mm_loadu_si128(&v19);
    v18 = v9;
    v7 = v9;
    *(__m128i *)(a2 + 1) = v11;
    v19 = v10;
  }
  if ( v7 )
  {
    v12 = v19.m128i_i64[0];
    if ( v19.m128i_i64[0] )
    {
      v13 = 0;
      do
      {
        v14 = (_QWORD *)(v7 + 80 * v13);
        v15 = v14[5];
        if ( v15 )
        {
          v14[6] = 0;
          qfree(v15, (_BYTE *)&dword_14 + 1);
        }
        v16 = v14[2];
        if ( v16 )
        {
          v14[3] = 0;
          qfree(v16, (_BYTE *)&dword_14 + 1);
        }
        ++v13;
        v7 = v18;
      }
      while ( v12 != v13 );
    }
    qfree(v7, (_BYTE *)&dword_14 + 1, v3, v4, v5, v6, v18, 0, v19.m128i_i64[1]);
  }
  return v8;
}
