void __fastcall sub_4F73A0(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 *v9; // rbp
  volatile signed __int32 *v10; // rax
  void **v11; // rbx
  void **i; // r15
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  __m128i v16; // xmm0
  void *v17; // rdi
  __m128i v18[4]; // [rsp+0h] [rbp-48h] BYREF

  v18[0].m128i_i64[1] = __readfsqword(0x28u);
  v6 = qword_8D1EC0;
  if ( (int)qword_8D1EC0 > 0 )
  {
    v7 = 0;
    v8 = 8LL * (unsigned int)(qword_8D1EC0 - 1) + 8;
    do
    {
      if ( !xmmword_8D1EB0 || *(int *)xmmword_8D1EB0 > 1 )
      {
        a2 = nullptr;
        sub_4F6CE0((__int64)&xmmword_8D1EB0, 0, 0, 0, a5, a6);
      }
      v9 = *(__int64 **)((char *)*(&xmmword_8D1EB0 + 1) + v7);
      if ( v9 )
      {
        v10 = (volatile signed __int32 *)v9[3];
        if ( v10 && !_InterlockedSub(v10, 1u) )
        {
          v11 = (void **)v9[4];
          for ( i = &v11[3 * v9[5]]; i != v11; v11 += 3 )
          {
            if ( *v11 && !_InterlockedSub((volatile signed __int32 *)*v11, 1u) )
              free(*v11);
          }
          free((void *)v9[3]);
        }
        v13 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v13, a2);
        }
        a2 = (const char *)&dword_30;
        operator delete(v9, 0x30u);
      }
      v7 += 8;
    }
    while ( v8 != v7 );
    v6 = qword_8D1EC0;
  }
  if ( v6 )
  {
    v14 = 0;
    if ( xmmword_8D1EB0 )
    {
      if ( *(int *)xmmword_8D1EB0 <= 1 )
      {
        qword_8D1EC0 = 0;
        return;
      }
      v14 = *((_QWORD *)xmmword_8D1EB0 + 1);
    }
    v15 = QT::QArrayData::allocate(v18, 8, 16, v14, 1, a6);
    v16 = _mm_loadl_epi64(v18);
    v17 = xmmword_8D1EB0;
    qword_8D1EC0 = 0;
    *(__m128i *)&xmmword_8D1EB0 = _mm_unpacklo_epi64(v16, (__m128i)(unsigned __int64)v15);
    if ( v17 )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v17, 1u) )
        free(v17);
    }
  }
}
