__int64 __fastcall GraphRenderer::find_item_at(
        __int64 a1,
        int a2,
        int *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  int v11; // eax
  int v12; // ecx
  int v15; // edi
  int v16; // r8d
  int v17; // edx
  int v18; // eax
  bool v19; // zf
  char v20; // dl
  __m128i *v21; // rax
  _DWORD *v22; // r12
  __int64 v23; // r14
  int v24; // ebp
  unsigned int v25; // r15d
  __int64 v26; // r13
  __int64 (*v27)(); // rax
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __m128i *v30; // rax
  int v31; // r8d
  __int64 v32; // r14
  int v33; // ebp
  unsigned int v34; // r15d
  __int64 v35; // r12
  __int64 (*v36)(); // rax
  __m128 v37; // xmm4
  __m128 v38; // xmm5
  __m128i *v39; // rax
  int v40; // r8d
  _QWORD *v41; // rdi
  QT::QFontMetricsF *v42[2]; // [rsp+0h] [rbp-C8h] BYREF
  QT::QFontMetricsF *v43[2]; // [rsp+10h] [rbp-B8h] BYREF
  int v44; // [rsp+20h] [rbp-A8h]
  int v45[4]; // [rsp+30h] [rbp-98h] BYREF
  int v46[4]; // [rsp+40h] [rbp-88h] BYREF
  int v47[4]; // [rsp+50h] [rbp-78h] BYREF
  int v48[4]; // [rsp+60h] [rbp-68h] BYREF
  int v49[4]; // [rsp+70h] [rbp-58h] BYREF
  int v50[2]; // [rsp+88h] [rbp-40h]

  *(_QWORD *)v50 = __readfsqword(0x28u);
  v11 = a3[2];
  if ( *(_DWORD *)(a1 + 104) >= v11 )
    return 0;
  v12 = *a3;
  if ( *(_DWORD *)(a1 + 112) <= *a3 )
    return 0;
  v15 = a3[3];
  if ( *(_DWORD *)(a1 + 108) >= v15 )
    return 0;
  v16 = a3[1];
  if ( *(_DWORD *)(a1 + 116) <= v16 )
    return 0;
  v17 = *(_DWORD *)(a1 + 40);
  if ( v12 > v17 )
    return 0;
  if ( v11 <= v17 )
    return 0;
  v18 = *(_DWORD *)(a1 + 44);
  if ( v16 > v18 || v15 <= v18 )
    return 0;
  v19 = *(_BYTE *)(a1 + 72) == 0;
  LOBYTE(v43[0]) = 1;
  HIDWORD(v43[0]) = a2;
  v43[1] = (QT::QFontMetricsF *)-1LL;
  v44 = -1;
  if ( !v19 )
  {
    v20 = sub_2B7F20(*(_QWORD **)(a1 + 16), (unsigned __int8 *)v43);
    v21 = *(__m128i **)(a1 + 48);
    if ( v20 )
    {
      v22 = *(_DWORD **)(a1 + 56);
      if ( !v21 )
        goto LABEL_14;
      goto LABEL_13;
    }
    if ( v21 )
    {
      *v21 = _mm_load_si128((const __m128i *)v43);
      v21[1].m128i_i32[0] = v44;
    }
    v32 = *(_QWORD *)(a1 + 16);
    v33 = HIDWORD(v43[0]);
    v34 = 0;
    *(_OWORD *)v45 = 0;
    v35 = *(_QWORD *)(a1 + 24);
    *(_OWORD *)v46 = 0;
    *(_OWORD *)v47 = 0;
    *(_OWORD *)v48 = 0;
    *(_OWORD *)v49 = 0;
    v36 = *(__int64 (**)())(*(_QWORD *)v32 + 640LL);
    if ( v36 != sub_2B2460 )
      v34 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))v36)(v32, v35, HIDWORD(v43[0]));
    if ( v33 >= 0 )
    {
      if ( v35 )
      {
        *(__m128i *)v42 = _mm_loadu_si128((const __m128i *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v35 + 152LL))(
                                                             v35,
                                                             (unsigned int)v33));
        if ( (unsigned __int8)sub_2B9380(
                                v32,
                                (__int64)v45,
                                (const __m128i *)v42,
                                (unsigned int)v33,
                                1,
                                v34,
                                *(double *)v42,
                                a5,
                                a6,
                                a7,
                                v37,
                                v38,
                                a10,
                                a11) )
        {
          v39 = *(__m128i **)(a1 + 64);
          if ( v39 )
          {
            *v39 = _mm_load_si128((const __m128i *)v45);
            v39[1] = _mm_load_si128((const __m128i *)v46);
            v39[2] = _mm_load_si128((const __m128i *)v47);
            v39[3] = _mm_load_si128((const __m128i *)v48);
            v39[4] = _mm_load_si128((const __m128i *)v49);
          }
          v40 = HIDWORD(v43[0]);
          v41 = *(_QWORD **)(a1 + 16);
          *(_DWORD *)(a1 + 76) = HIDWORD(v43[0]);
          if ( !(unsigned __int8)sub_2B5A50(v41, a1 + 76, v45, (_DWORD *)(a1 + 40), v40) )
            *(_DWORD *)(a1 + 80) = -1;
        }
      }
    }
    return 0;
  }
  v21 = *(__m128i **)(a1 + 48);
  v22 = *(_DWORD **)(a1 + 56);
  if ( v21 )
  {
LABEL_13:
    *v21 = _mm_load_si128((const __m128i *)v43);
    v21[1].m128i_i32[0] = v44;
  }
LABEL_14:
  if ( v22 || *(_QWORD *)(a1 + 64) )
  {
    v23 = *(_QWORD *)(a1 + 16);
    v24 = HIDWORD(v43[0]);
    v25 = 0;
    *(_OWORD *)v45 = 0;
    v26 = *(_QWORD *)(a1 + 24);
    *(_OWORD *)v46 = 0;
    *(_OWORD *)v47 = 0;
    *(_OWORD *)v48 = 0;
    *(_OWORD *)v49 = 0;
    v27 = *(__int64 (**)())(*(_QWORD *)v23 + 640LL);
    if ( v27 != sub_2B2460 )
      v25 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))v27)(v23, v26, HIDWORD(v43[0]));
    if ( v24 >= 0 )
    {
      if ( v26 )
      {
        *(__m128i *)v42 = _mm_loadu_si128((const __m128i *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 152LL))(
                                                             v26,
                                                             (unsigned int)v24));
        if ( (unsigned __int8)sub_2B9380(
                                v23,
                                (__int64)v45,
                                (const __m128i *)v42,
                                (unsigned int)v24,
                                1,
                                v25,
                                *(double *)v42,
                                a5,
                                a6,
                                a7,
                                v28,
                                v29,
                                a10,
                                a11) )
        {
          v30 = *(__m128i **)(a1 + 64);
          if ( v30 )
          {
            *v30 = _mm_load_si128((const __m128i *)v45);
            v30[1] = _mm_load_si128((const __m128i *)v46);
            v30[2] = _mm_load_si128((const __m128i *)v47);
            v30[3] = _mm_load_si128((const __m128i *)v48);
            v30[4] = _mm_load_si128((const __m128i *)v49);
          }
          if ( v22 )
          {
            v31 = HIDWORD(v43[0]);
            *v22 = HIDWORD(v43[0]);
            if ( !(unsigned __int8)sub_2B5A50(*(_QWORD **)(a1 + 16), (__int64)v22, v45, (_DWORD *)(a1 + 40), v31) )
              v22[1] = -1;
          }
        }
      }
    }
  }
  return 1;
}
