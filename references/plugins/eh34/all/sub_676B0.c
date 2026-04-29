unsigned __int64 __fastcall sub_676B0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v10; // rbp
  _QWORD *v11; // r15
  __int64 v12; // rdi
  _QWORD *v13; // rbp
  int v14; // eax
  __int64 v15; // rbx
  _QWORD *v16; // rdx
  _QWORD **v17; // rbx
  void *v18; // rdi
  size_t v20; // rbp
  void *v21; // r13
  void *v22; // r12
  bool v23; // zf
  __m128i v24; // xmm0
  __int64 v25; // rdi
  __m128i v26; // [rsp+0h] [rbp-C8h] BYREF
  void *src; // [rsp+10h] [rbp-B8h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-B0h] BYREF
  char v29; // [rsp+28h] [rbp-A0h]
  __int64 v30; // [rsp+30h] [rbp-98h] BYREF
  int v31; // [rsp+38h] [rbp-90h] BYREF
  char v32; // [rsp+3Ch] [rbp-8Ch]
  void *v33; // [rsp+40h] [rbp-88h]
  _BYTE v34[40]; // [rsp+48h] [rbp-80h] BYREF
  _BYTE *v35; // [rsp+70h] [rbp-58h]
  __int128 v36; // [rsp+78h] [rbp-50h]
  unsigned __int64 v37; // [rsp+88h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 508) = a5;
  *(_DWORD *)(a1 + 512) = a6;
  sub_60880((_QWORD *)a1, *(_QWORD *)(a2 + 8));
  if ( *(_BYTE *)(a1 + 188) )
    JUMPOUT(0x60510);
  if ( *(_QWORD *)(a1 + 472) )
  {
    v30 = *(_QWORD *)(a1 + 472);
    *(_OWORD *)&v34[20] = 0;
    v31 = a3 + 1;
    v32 = 1;
    v33 = (void *)__PAIR64__(a6, a5);
    *(_DWORD *)v34 = a6;
    v26.m128i_i64[0] = (__int64)&v30;
    *(_QWORD *)&v34[32] = &v34[16];
    v35 = &v34[16];
    *(_OWORD *)&v34[4] = 0;
    v36 = 0;
    sub_670B0((unsigned __int64 *)(a1 + 480), (unsigned __int64)&v30);
    v10 = *(_QWORD *)&v34[24];
    while ( v10 )
    {
      v11 = (_QWORD *)v10;
      sub_65640(*(_QWORD **)(v10 + 24));
      v12 = *(_QWORD *)(v10 + 64);
      v10 = *(_QWORD *)(v10 + 16);
      if ( v12 )
      {
        v11[9] = 0;
        qfree(v12);
      }
      operator delete(v11, 0x58u);
    }
    sub_62C60(v26.m128i_i64[0], (const char *)a1, *(_QWORD *)(a2 + 8), *(_QWORD *)(a1 + 472) + 296LL, a5, a6);
    v13 = (_QWORD *)(*(_QWORD *)(a1 + 472) + 296LL);
    v14 = sub_26300((__int64)v13);
    sub_269C0((bool *)&src, v13, v26.m128i_i64[0], v14);
    if ( v29 )
    {
      v20 = n[0];
      v21 = nullptr;
      if ( n[0] )
      {
        v21 = (void *)qalloc_or_throw(n[0]);
        memcpy(v21, src, v20);
      }
      v22 = src;
      v23 = *(_BYTE *)(a1 + 168) == 0;
      src = nullptr;
      v24 = (__m128i)_mm_loadh_ps((const double *)&n[1]);
      *(_OWORD *)n = 0;
      if ( !v23 )
      {
        v25 = *(_QWORD *)(a1 + 144);
        *(_BYTE *)(a1 + 168) = 0;
        if ( v25 )
        {
          *(_QWORD *)(a1 + 152) = 0;
          v26 = v24;
          qfree(v25);
          v24 = _mm_load_si128(&v26);
        }
      }
      *(_QWORD *)(a1 + 144) = v22;
      *(_BYTE *)(a1 + 168) = 1;
      *(__m128i *)(a1 + 152) = v24;
      if ( v21 )
        qfree(v21);
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 472);
      sub_65380(*(_QWORD **)(v15 + 376));
      *(_QWORD *)(v15 + 376) = 0;
      *(_QWORD *)(v15 + 384) = v15 + 368;
      *(_QWORD *)(v15 + 392) = v15 + 368;
      *(_QWORD *)(v15 + 400) = 0;
      v16 = v33;
      if ( v33 )
      {
        *(_DWORD *)(v15 + 368) = v31;
        *(__m128 *)(v15 + 376) = _mm_loadh_ps((const double *)v34);
        *(_QWORD *)(v15 + 392) = *(_QWORD *)&v34[8];
        v16[1] = v15 + 368;
        *(_QWORD *)(v15 + 400) = *(_QWORD *)&v34[16];
        v33 = nullptr;
        *(_QWORD *)v34 = &v31;
        *(_QWORD *)&v34[8] = &v31;
        *(_QWORD *)&v34[16] = 0;
      }
    }
    if ( v29 && src )
    {
      n[0] = 0;
      qfree(src);
    }
    v17 = (_QWORD **)v33;
    if ( v33 )
    {
      do
      {
        sub_65380(v17[3]);
        v18 = v17;
        v17 = (_QWORD **)v17[2];
        operator delete(v18, 0x28u);
      }
      while ( v17 );
    }
  }
  return v37 - __readfsqword(0x28u);
}
