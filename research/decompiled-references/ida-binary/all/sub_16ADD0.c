__int64 __fastcall sub_16ADD0(
        int a1,
        _QWORD *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  double v18; // xmm4_8
  double v19; // xmm5_8
  unsigned int v20; // ebp
  __int64 v21; // rax
  __int64 (__fastcall *v22)(__int64); // rax
  __m128i v23; // xmm0
  __int64 *v24; // r14
  void (__fastcall **v25)(_QWORD *, __int64, unsigned __int16 *); // rax
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __m128i v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  void **p_ptr; // rsi
  double v36; // xmm4_8
  double v37; // xmm5_8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 v43; // rdx
  __int64 v44; // rsi
  __m128i v45; // xmm0
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned __int64 v49; // rdx
  __int64 v50; // rsi
  __m128i v51; // xmm0
  __int64 v52; // r8
  __int64 v53; // rbp
  size_t v54; // rax
  char *v55; // r12
  unsigned __int64 v56; // rdx
  __int64 v57; // rax
  __m128i si128; // xmm0
  char v59; // [rsp+0h] [rbp-118h]
  unsigned __int64 v60; // [rsp+8h] [rbp-110h]
  unsigned __int64 v61; // [rsp+8h] [rbp-110h]
  __int64 v62; // [rsp+10h] [rbp-108h]
  __int64 v63; // [rsp+10h] [rbp-108h]
  __int64 v64; // [rsp+18h] [rbp-100h]
  __int64 v65; // [rsp+18h] [rbp-100h]
  unsigned __int16 v66; // [rsp+2Eh] [rbp-EAh] BYREF
  __int64 v67; // [rsp+30h] [rbp-E8h] BYREF
  __m128i v68; // [rsp+38h] [rbp-E0h] BYREF
  __m128i v69; // [rsp+50h] [rbp-C8h] BYREF
  Elf64_Sym *v70; // [rsp+60h] [rbp-B8h]
  char *s; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v72; // [rsp+78h] [rbp-A0h]
  __m128i v73; // [rsp+90h] [rbp-88h] BYREF
  __int64 v74; // [rsp+A0h] [rbp-78h]
  void *ptr; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v76; // [rsp+B8h] [rbp-60h]
  __m128i v77; // [rsp+C0h] [rbp-58h]
  int v78; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v79; // [rsp+D8h] [rbp-40h]

  v79 = __readfsqword(0x28u);
  if ( a1 == 3 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64, void *, __int64))(*a2 + 80LL))(a2, 3, &unk_8C80E0, 4096);
    return 1;
  }
  if ( a1 > 3 )
  {
    if ( a1 != 4 )
      return 1;
    (*(void (__fastcall **)(_QWORD *, __int64, void **))*a2)(a2, 4, &ptr);
    if ( (_WORD)ptr )
      sub_169630(
        (int)"The data in clipboard will be overwritten each time\nthe dialog will be opened",
        4,
        v12,
        v13,
        v14,
        v15,
        a3,
        a4,
        a5,
        a6,
        v16,
        v17,
        a9,
        a10,
        v59);
  }
  else if ( ((a1 + 1) & 0xFFFFFFFD) != 0 )
  {
    return 1;
  }
  (*(void (__fastcall **)(_QWORD *, __int64, unsigned __int16 *))*a2)(a2, 1, &v66);
  v20 = v66;
  v67 = 0;
  v68 = 0;
  if ( v66 == 6 )
  {
    v57 = qvector_reserve(&v67, 0, 27, 1);
    v67 = v57;
    v68.m128i_i64[0] = 27;
    *(__m128i *)v57 = _mm_load_si128((const __m128i *)&xmmword_5DC1D0);
    si128 = _mm_load_si128(xmmword_5DC1E0);
    *(_BYTE *)(v57 + 26) = 0;
    *(__m128i *)(v57 + 10) = si128;
  }
  else
  {
    v21 = *a2;
    v70 = &stru_10000;
    v22 = *(__int64 (__fastcall **)(__int64))(v21 + 72);
    v23 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)exp_string_sink_t___vtable, (__m128i)(unsigned __int64)&v67);
    v69 = v23;
    if ( v22 == form_actions_impl_t__::vfunc_9 )
      v24 = (__int64 *)a2[4];
    else
      v24 = (__int64 *)v22((__int64)a2);
    if ( !(unsigned __int8)sub_169B10(
                             (__int64)&v69,
                             v20,
                             v24,
                             *(double *)v23.m128i_i64,
                             (__m128)(unsigned __int64)&v67,
                             a5,
                             a6,
                             v18,
                             v19,
                             a9,
                             a10) )
    {
      v47 = v68.m128i_i64[0];
      if ( v68.m128i_i64[0] )
      {
        v48 = v68.m128i_i64[0] + 24;
        v49 = v68.m128i_i64[0] + 25;
        v47 = v68.m128i_i64[0] - 1;
      }
      else
      {
        v49 = 26;
        v48 = 25;
      }
      v50 = v67;
      if ( v68.m128i_i64[1] < v49 )
      {
        v65 = v47;
        v63 = v48;
        v61 = v49;
        v67 = qvector_reserve(&v67, v67, v49, 1);
        v47 = v65;
        v50 = v67;
        v48 = v63;
        v49 = v61;
      }
      v51 = _mm_load_si128((const __m128i *)&xmmword_5DC150);
      v68.m128i_i64[0] = v49;
      *(_BYTE *)(v50 + v48) = 0;
      v52 = v67 + v47;
      *(__m128i *)v52 = v51;
      *(__m128i *)(v52 + 9) = _mm_load_si128((const __m128i *)&xmmword_5DC160);
    }
    if ( byte_8C80C8 )
    {
      v41 = v68.m128i_i64[0];
      if ( v68.m128i_i64[0] )
      {
        v42 = v68.m128i_i64[0] + 92;
        v43 = v68.m128i_i64[0] + 93;
        v41 = v68.m128i_i64[0] - 1;
      }
      else
      {
        v43 = 94;
        v42 = 93;
      }
      v44 = v67;
      if ( v68.m128i_i64[1] < v43 )
      {
        v64 = v41;
        v62 = v42;
        v60 = v43;
        v67 = qvector_reserve(&v67, v67, v43, 1);
        v41 = v64;
        v44 = v67;
        v42 = v62;
        v43 = v60;
      }
      v68.m128i_i64[0] = v43;
      v45 = _mm_load_si128((const __m128i *)&xmmword_5DC170);
      *(_BYTE *)(v44 + v42) = 0;
      v46 = v41 + v67;
      *(__m128i *)v46 = v45;
      *(__m128i *)(v46 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DC180);
      *(__m128i *)(v46 + 32) = _mm_load_si128((const __m128i *)&xmmword_5DC190);
      *(__m128i *)(v46 + 48) = _mm_load_si128((const __m128i *)&xmmword_5DC1A0);
      *(__m128i *)(v46 + 64) = _mm_load_si128((const __m128i *)&xmmword_5DC1B0);
      *(__m128i *)(v46 + 77) = _mm_load_si128((const __m128i *)&xmmword_5DC1C0);
    }
    v25 = (void (__fastcall **)(_QWORD *, __int64, unsigned __int16 *))*a2;
    v66 = 0;
    (*v25)(a2, 4, &v66);
    if ( v66 )
    {
      sub_1C76F0((unsigned int)"Copying data to clipboard...", 4, v26, v27, v28, v29, v59);
      p_ptr = (void **)v20;
      v72 = 0;
      s = nullptr;
      v74 = 0xFFFFFFFFLL;
      v73 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)exp_string_sink_t___vtable, (__m128i)(unsigned __int64)&s);
      if ( (unsigned __int8)sub_169B10(
                              (__int64)&v73,
                              v20,
                              v24,
                              *(double *)v73.m128i_i64,
                              (__m128)(unsigned __int64)&v67,
                              (__m128)(unsigned __int64)&s,
                              a6,
                              v36,
                              v37,
                              a9,
                              a10)
        && (unsigned __int64)v72 > 1 )
      {
        v53 = QT::QGuiApplication::clipboard((QT::QGuiApplication *)&v73);
        if ( (_QWORD)v72 )
        {
          v54 = v72 - 1;
          v55 = s;
          v56 = (unsigned __int64)(v72 - 1) >> 63;
        }
        else
        {
          LOBYTE(v56) = 0;
          v54 = 0;
          v55 = (char *)&s1;
        }
        if ( !v55 || (_BYTE)v56 )
        {
          v54 = 0;
          if ( v55 )
            v54 = strlen(v55);
        }
        QT::QString::fromUtf8(&ptr, v54, v55);
        p_ptr = &ptr;
        QT::QClipboard::setText(v53, &ptr, 0);
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
      }
      sub_1C78D0();
      if ( s )
      {
        *(_QWORD *)&v72 = 0;
        qfree(s, p_ptr, v38, v39, v40);
      }
    }
  }
  v30 = _mm_loadu_si128(&v68);
  ptr = &qword_28;
  v78 = 4;
  v76 = v67;
  v31 = *a2;
  v77 = v30;
  v67 = 0;
  v68 = 0;
  (*(void (__fastcall **)(_QWORD *, __int64, void **))(v31 + 8))(a2, 2, &ptr);
  if ( v76 )
  {
    v77.m128i_i64[0] = 0;
    qfree(v76, 2, v32, v33, v34);
  }
  if ( v67 )
  {
    v68.m128i_i64[0] = 0;
    qfree(v67, 2, v32, v33, v34);
  }
  return 1;
}
