void __fastcall sub_4D1B30(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 (__fastcall **v10)(__int64); // rax
  QT::QMetaObject *v12; // rax
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ebp
  QT::QMetaObject *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  __int64 v23; // rdx
  __m128 si128; // xmm0
  __int64 v25; // r13
  int *v26; // rax
  __int64 v27; // rbp
  char *v28; // r12
  __int64 v29; // r9
  int *v30; // rbx
  __int64 i; // r14
  __int64 v32; // r15
  __int64 v33; // rcx
  char *v34; // rsi
  __int64 v35; // rdx
  char *v36; // rcx
  size_t v37; // rdx
  char *v38; // rax
  char *v39; // rax
  unsigned __int64 v40; // rax
  char *v41; // r15
  void *v42; // rax
  __int64 v43; // rsi
  __int64 v44; // [rsp-10h] [rbp-108h]
  char v45; // [rsp+0h] [rbp-F8h]
  __m128 v46; // [rsp+10h] [rbp-E8h] BYREF
  __m128 *v47; // [rsp+20h] [rbp-D8h]
  __int64 v48; // [rsp+28h] [rbp-D0h]
  __m128i ptr; // [rsp+30h] [rbp-C8h]
  __m128 v50; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+50h] [rbp-A8h]
  __int64 v52; // [rsp+58h] [rbp-A0h]
  int *v53; // [rsp+60h] [rbp-98h] BYREF
  char *v54; // [rsp+68h] [rbp-90h]
  __int64 v55; // [rsp+70h] [rbp-88h]
  __m128 v56; // [rsp+80h] [rbp-78h] BYREF
  __int64 v57; // [rsp+90h] [rbp-68h]
  __int128 v58; // [rsp+A0h] [rbp-58h] BYREF
  _QWORD v59[9]; // [rsp+B0h] [rbp-48h] BYREF

  v10 = *(__int64 (__fastcall ***)(__int64))a2;
  v51 = a1;
  v59[1] = __readfsqword(0x28u);
  v12 = (QT::QMetaObject *)(*v10)(a2);
  v13 = QT::QMetaObject::indexOfSlot(v12, "on_layout_performed()");
  if ( v13 >= 0 )
  {
    v16 = v13;
    v17 = (QT::QMetaObject *)(**(__int64 (__fastcall ***)(__int64))a2)(a2);
    v18 = QT::QMetaObject::method(v17, v16);
    v59[0] = 0;
    v20 = v19;
    v58 = 0;
    if ( !(unsigned __int8)QT::QMetaMethod::invokeImpl(v18, v19, a2, 0, 1, &v58, (char *)&v58 + 8) )
      sub_169700(
        (int)"Coherency check failed: m.invoke(node)\n",
        v20,
        v44,
        (__int64)v59,
        v14,
        v15,
        (__m128)0LL,
        a4,
        a5,
        a6,
        v21,
        v22,
        a9,
        a10,
        v45);
  }
  v23 = *(_QWORD *)(a2 + 8);
  si128 = (__m128)_mm_loadu_si128((const __m128i *)(v23 + 24));
  v25 = *(_QWORD *)(v23 + 40);
  v26 = (int *)si128.m128_u64[0];
  if ( !si128.m128_u64[0]
    || (ptr = *(__m128i *)(v23 + 24),
        _InterlockedAdd((volatile signed __int32 *)si128.m128_u64[0], 1u),
        *(int *)si128.m128_u64[0] > 1) )
  {
    v57 = v25;
    v56 = si128;
    sub_47FEC0((__int64)&v56, 0, 0, 0, v14, v15);
    v25 = v57;
    si128 = (__m128)_mm_load_si128((const __m128i *)&v56);
    ptr = (__m128i)v56;
    v26 = (int *)si128.m128_u64[0];
  }
  v27 = 0;
  v28 = nullptr;
  v29 = _mm_movehl_ps(a5, si128).m128_u64[0];
  v47 = &v56;
  v30 = nullptr;
  for ( i = v29; ; i += 8 )
  {
    if ( !v26 || *v26 > 1 )
    {
      v57 = v25;
      v56 = si128;
      sub_47FEC0((__int64)v47, 0, 0, 0, v14, v29);
      v25 = v57;
      si128 = (__m128)_mm_load_si128((const __m128i *)&v56);
      ptr = (__m128i)v56;
      a4 = _mm_movehl_ps(a4, si128);
      v29 = a4.m128_u64[0];
    }
    if ( i == v29 + 8 * v25 )
      break;
    v32 = *(_QWORD *)i;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)i + 8LL) + 48LL) & 1) == 0 )
      goto LABEL_8;
    if ( v30 )
    {
      if ( *v30 <= 1 )
      {
        v40 = ((unsigned __int64)v30 + 31) & 0xFFFFFFFFFFFFFFF0LL;
        if ( *((_QWORD *)v30 + 1) - ((__int64)&v28[-v40] >> 3) != v27 )
        {
          *(_QWORD *)&v28[8 * v27++] = v32;
          goto LABEL_31;
        }
        if ( !v27 && (char *)v40 != v28 )
        {
          *((_QWORD *)v28 - 1) = v32;
          v27 = 1;
          v28 -= 8;
          goto LABEL_31;
        }
      }
      if ( *v30 <= 1 )
      {
        v35 = (__int64)&v28[-(((unsigned __int64)v30 + 31) & 0xFFFFFFFFFFFFFFF0LL)] >> 3;
        if ( *((_QWORD *)v30 + 1) - v27 - v35 > 0 )
        {
          v39 = &v28[8 * v27];
LABEL_30:
          *(_QWORD *)v39 = v32;
          ++v27;
          goto LABEL_31;
        }
        if ( (__int64)&v28[-(((unsigned __int64)v30 + 31) & 0xFFFFFFFFFFFFFFF0LL)] > 0
          && 3 * v27 < 2LL * *((_QWORD *)v30 + 1) )
        {
          v36 = &v28[-8 * v35];
          v37 = 8 * v27;
          if ( v27 && v36 != v28 && v28 && v36 )
          {
            v48 = v29;
            v46 = si128;
            v38 = (char *)memmove(v36, v28, v37);
            v29 = v48;
            si128 = (__m128)_mm_load_si128((const __m128i *)&v46);
            v37 = 8 * v27;
            v36 = v38;
          }
          v39 = &v36[v37];
          v28 = v36;
          goto LABEL_30;
        }
      }
    }
    v48 = v29;
    v53 = v30;
    v54 = v28;
    v55 = v27;
    v46 = si128;
    sub_1A2030((__int64)&v53, 0, 1, 0, v14, v29);
    v28 = v54;
    v33 = v55;
    si128 = (__m128)_mm_load_si128((const __m128i *)&v46);
    v29 = v48;
    v30 = v53;
    v34 = &v54[8 * v27];
    if ( v27 < v55 )
    {
      v52 = v48;
      v48 = v55;
      v46.m128_u64[0] = (unsigned __int64)&v54[8 * v27];
      v50 = si128;
      memmove(v34 + 8, v34, 8 * (v55 - v27));
      v29 = v52;
      si128 = (__m128)_mm_load_si128((const __m128i *)&v50);
      v33 = v48;
      v34 = (char *)v46.m128_u64[0];
    }
    *(_QWORD *)v34 = v32;
    v27 = v33 + 1;
    if ( !v30 )
    {
LABEL_20:
      v48 = v29;
      v53 = v30;
      v54 = v28;
      v55 = v27;
      v46 = si128;
      sub_1A2030((__int64)&v53, 0, 0, 0, v14, v29);
      si128 = (__m128)_mm_load_si128((const __m128i *)&v46);
      v29 = v48;
      v30 = v53;
      v28 = v54;
      v27 = v55;
      goto LABEL_8;
    }
LABEL_31:
    if ( *v30 > 1 )
      goto LABEL_20;
LABEL_8:
    v26 = (int *)si128.m128_u64[0];
  }
  if ( !v30 || *v30 > 1 )
  {
    v53 = v30;
    v54 = v28;
    v55 = v27;
    sub_1A2030((__int64)&v53, 0, 0, 0, v14, v29);
    v30 = v53;
    v28 = v54;
    v27 = v55;
  }
  v41 = v28;
  if ( v30 )
    goto LABEL_41;
LABEL_42:
  v53 = v30;
  v54 = v28;
  v55 = v27;
  sub_1A2030((__int64)&v53, 0, 0, 0, v14, v29);
  v30 = v53;
  v28 = v54;
  v27 = v55;
  while ( v41 != &v28[8 * v27] )
  {
    if ( (unsigned __int8)sub_519200(*(_QWORD *)v41) )
    {
      v43 = *(_QWORD *)v41;
      ++dword_8D1DD4;
      sub_4D1B30(v51, v43);
      --dword_8D1DD4;
    }
    v41 += 8;
    if ( !v30 )
      goto LABEL_42;
LABEL_41:
    if ( *v30 > 1 )
      goto LABEL_42;
  }
  v42 = (void *)ptr.m128i_i64[0];
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
    free(v42);
  if ( v30 && !_InterlockedSub(v30, 1u) )
    free(v30);
}
