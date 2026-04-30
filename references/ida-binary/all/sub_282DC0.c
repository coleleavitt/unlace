__int64 __fastcall sub_282DC0(__int64 a1, __int64 a2, __m128i *a3, double a4, double a5, double a6, __m128 a7)
{
  double v8; // xmm0_8
  __int64 v9; // rax
  __int64 v10; // rcx
  __m128i v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // rcx
  const __m128i *v14; // rbp
  __m128i v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // rdx
  __m128i si128; // xmm1
  __m128 v19; // xmm0
  __int64 v20; // rcx
  __int64 v21; // rax
  void *v22; // rdx
  __int64 v23; // r13
  void *v25; // [rsp+8h] [rbp-C0h]
  int v26; // [rsp+1Ch] [rbp-ACh]
  int v27; // [rsp+2Ch] [rbp-9Ch]
  void *v28[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v29; // [rsp+40h] [rbp-88h]
  void *ptr[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v31; // [rsp+60h] [rbp-68h]
  void *v32[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v33; // [rsp+80h] [rbp-48h]
  unsigned __int64 v34; // [rsp+88h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v8 = QT::QString::fromUtf8(v32, 1, "*");
  v27 = QT::QString::indexOf(a3, v32, 0, 1, v8);
  if ( v32[0] && !_InterlockedSub((volatile signed __int32 *)v32[0], 1u) )
    free(v32[0]);
  v9 = a3[1].m128i_i64[0];
  v26 = v9;
  if ( v27 != -1 )
  {
    v26 = v9 - 1;
    v10 = (int)v9 - 1;
    if ( v27 )
      QT::QString::mid(v32, a3, 0, v10);
    else
      QT::QString::mid(v32, a3, 1, v10);
    v11 = _mm_loadu_si128(a3);
    v12 = a3[1].m128i_i64[0];
    v13 = v33;
    *a3 = _mm_load_si128((const __m128i *)v32);
    a3[1].m128i_i64[0] = v13;
    v33 = v12;
    *(__m128i *)v32 = v11;
    if ( v11.m128i_i64[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v11.m128i_i64[0], 1u) )
        free(v32[0]);
    }
  }
  v14 = *(const __m128i **)a2;
  if ( 72LL * *(_QWORD *)(a2 + 8) )
  {
    while ( !a3[1].m128i_i64[0] )
    {
      sub_282AB0((volatile signed __int32 *)a1, (__int64)v14);
LABEL_13:
      v14 = (const __m128i *)((char *)v14 + 72);
      if ( v14 == (const __m128i *)(*(_QWORD *)a2 + 72LL * *(_QWORD *)(a2 + 8)) )
        return a1;
    }
    v15 = _mm_loadu_si128(v14);
    v16 = v14[1].m128i_i64[0];
    v29 = v16;
    *(__m128i *)v28 = v15;
    if ( v15.m128i_i64[0] )
    {
      _InterlockedAdd((volatile signed __int32 *)v15.m128i_i64[0], 1u);
      LODWORD(v16) = v29;
    }
    v31 = 0;
    *(_OWORD *)ptr = 0;
    if ( v26 == (_DWORD)v16 )
    {
      QT::QString::operator=(ptr, v28);
      v22 = ptr[1];
      v21 = v31;
    }
    else
    {
      if ( v26 >= (int)v16 || v27 == -1 )
      {
        v23 = a3->m128i_i64[1];
        v21 = 0;
        v25 = nullptr;
        if ( a3[1].m128i_i64[0] )
        {
LABEL_27:
          if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
            free(ptr[0]);
          if ( v28[0] && !_InterlockedSub((volatile signed __int32 *)v28[0], 1u) )
            free(v28[0]);
          goto LABEL_13;
        }
LABEL_34:
        if ( (unsigned __int8)QT::QtPrivate::equalStrings(v21, v25, v21, v23) )
          sub_282AB0((volatile signed __int32 *)a1, (__int64)v14);
        goto LABEL_27;
      }
      v17 = (int)v16 - v26;
      if ( v27 )
        v17 = 0;
      QT::QString::mid(v32, v28, v17, v26);
      si128 = _mm_load_si128((const __m128i *)ptr);
      v19 = (__m128)_mm_load_si128((const __m128i *)v32);
      v20 = v31;
      v21 = v33;
      *(__m128 *)ptr = v19;
      v31 = v33;
      v33 = v20;
      *(__m128i *)v32 = si128;
      if ( si128.m128i_i64[0] )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)si128.m128i_i64[0], 1u) )
          free(v32[0]);
        v22 = ptr[1];
        v21 = v31;
      }
      else
      {
        a7 = _mm_movehl_ps(a7, v19);
        v22 = (void *)a7.m128_u64[0];
      }
    }
    v25 = v22;
    v23 = a3->m128i_i64[1];
    if ( a3[1].m128i_i64[0] != v21 )
      goto LABEL_27;
    goto LABEL_34;
  }
  return a1;
}
