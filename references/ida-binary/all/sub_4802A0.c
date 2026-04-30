void __fastcall sub_4802A0(
        __int64 a1,
        _QWORD *a2,
        int a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 (__fastcall **v11)(_QWORD *); // rax
  QT::QMetaObject *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __m128 v18; // xmm2
  __int64 v19; // r12
  void *v20; // rcx
  int *v21; // rax
  __int64 v22; // r15
  __m128i v23; // xmm1
  __m128 si128; // xmm0
  __m128 v25; // xmm5
  __int64 v26; // rdx
  unsigned int v27; // r10d
  __m128i v28; // xmm4
  __m128 v29; // xmm3
  __int64 v30; // rsi
  int *v31; // rsi
  __m128i v32; // [rsp+0h] [rbp-88h] BYREF
  int v33; // [rsp+1Ch] [rbp-6Ch]
  void *v34; // [rsp+20h] [rbp-68h]
  __int64 v35; // [rsp+28h] [rbp-60h]
  void *ptr[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v37; // [rsp+40h] [rbp-48h]
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]

  v11 = (__int64 (__fastcall **)(_QWORD *))*a2;
  v38 = __readfsqword(0x28u);
  v13 = (QT::QMetaObject *)(*v11)(a2);
  if ( (unsigned int)QT::QMetaObject::indexOfMethod(v13, "form_activate()") != -1 )
  {
    v31 = *(int **)(a1 + 16);
    ptr[0] = a2;
    sub_47F620((int **)a1, v31, (__int64 *)ptr, v14, v15, v16);
    if ( !*(_QWORD *)a1 || **(int **)a1 > 1 )
      sub_1A2030(a1, 0, 0, 0, v15, v16);
  }
  if ( a3 == 2 )
    return;
  v17 = a2[1];
  v18 = (__m128)_mm_loadu_si128((const __m128i *)(v17 + 24));
  v19 = *(_QWORD *)(v17 + 40);
  v20 = *(void **)(v17 + 24);
  v21 = (int *)v18.m128_u64[0];
  v33 = v19;
  v32 = (__m128i)v18;
  if ( v18.m128_u64[0] )
  {
    _InterlockedAdd((volatile signed __int32 *)v18.m128_u64[0], 1u);
    if ( (int)v19 <= 0 )
    {
      v20 = (void *)v18.m128_u64[0];
LABEL_20:
      if ( !_InterlockedSub((volatile signed __int32 *)v20, 1u) )
        free(v20);
      return;
    }
  }
  else if ( (int)v19 <= 0 )
  {
    return;
  }
  v22 = 0;
  if ( v18.m128_u64[0] && *(int *)v18.m128_u64[0] <= 1 )
    goto LABEL_12;
LABEL_8:
  v23 = _mm_load_si128(&v32);
  v37 = v19;
  *(__m128i *)ptr = v23;
  sub_47FEC0((__int64)ptr, 0, 0, 0, v15, v16);
  si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
  v20 = ptr[0];
  v16 = 8 * v22;
  v19 = v37;
  v32 = (__m128i)si128;
  v26 = _mm_movehl_ps(v25, si128).m128_u64[0];
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v26 + 8 * v22) + 8LL) + 48LL) & 1) != 0 )
  {
    v21 = (int *)si128.m128_u64[0];
    v27 = a3 + 1;
    if ( si128.m128_u64[0] )
    {
      while ( *v21 <= 1 )
      {
LABEL_18:
        v30 = *(_QWORD *)(v26 + v16);
        v34 = v20;
        sub_4802A0(a1, v30, v27);
        v20 = v34;
        if ( v33 <= (int)++v22 )
          goto LABEL_19;
LABEL_10:
        v21 = (int *)v32.m128i_i64[0];
        if ( !v32.m128i_i64[0] || *(int *)v32.m128i_i64[0] > 1 )
          goto LABEL_8;
LABEL_12:
        v26 = v32.m128i_i64[1];
        v16 = 8 * v22;
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v32.m128i_i64[1] + 8 * v22) + 8LL) + 48LL) & 1) == 0 )
          goto LABEL_9;
        v27 = a3 + 1;
      }
    }
    v28 = _mm_load_si128(&v32);
    v35 = v16;
    LODWORD(v34) = v27;
    v37 = v19;
    *(__m128i *)ptr = v28;
    sub_47FEC0((__int64)ptr, 0, 0, 0, v15, v16);
    v29 = (__m128)_mm_load_si128((const __m128i *)ptr);
    v27 = (unsigned int)v34;
    v16 = v35;
    v20 = ptr[0];
    a10 = _mm_movehl_ps(a10, v29);
    v19 = v37;
    v32 = (__m128i)v29;
    v26 = a10.m128_u64[0];
    goto LABEL_18;
  }
LABEL_9:
  if ( v33 > (int)++v22 )
    goto LABEL_10;
LABEL_19:
  if ( v20 )
    goto LABEL_20;
}
