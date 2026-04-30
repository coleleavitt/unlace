unsigned __int64 __fastcall sub_17DA80(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r12
  __int64 v20; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rax
  signed int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rdx
  const char *v29; // rax
  _QWORD *v30; // rbp
  unsigned __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rax
  void *v34; // rax
  const void *v35; // rsi
  void *v36; // r13
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdi
  unsigned int v41; // [rsp+Ch] [rbp-CCh] BYREF
  int v42; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+18h] [rbp-C0h]
  __int64 v44; // [rsp+20h] [rbp-B8h]
  int v45; // [rsp+28h] [rbp-B0h]
  __int64 v46; // [rsp+30h] [rbp-A8h]
  __int128 v47; // [rsp+38h] [rbp-A0h]
  __m128i si128; // [rsp+48h] [rbp-90h] BYREF
  int v49; // [rsp+58h] [rbp-80h]
  char v50; // [rsp+60h] [rbp-78h]
  __int64 v51; // [rsp+68h] [rbp-70h]
  int v52; // [rsp+70h] [rbp-68h]
  __int64 v53; // [rsp+78h] [rbp-60h]
  __int128 v54; // [rsp+80h] [rbp-58h]
  __int64 v55; // [rsp+90h] [rbp-48h]
  char v56; // [rsp+98h] [rbp-40h]
  unsigned __int64 v57; // [rsp+A8h] [rbp-30h]

  v57 = __readfsqword(0x28u);
  sub_52F830(a1, a2, a3);
  v4 = *(_DWORD *)(a2 + 8);
  switch ( v4 )
  {
    case 38:
      v25 = QT::QMetaObject::cast((QT::QMetaObject *)&off_882B40, *(const QT::QObject **)a2);
      if ( v25 )
      {
        v41 = -1;
        v26 = sub_1E1410(v25, 0, &v41);
        if ( v26 >= 0 && v26 < (unsigned __int64)xmmword_8CC398 )
        {
          v27 = qword_8CC390;
          *(_QWORD *)(a2 + 220) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v26), _mm_cvtsi32_si128(v41)).m128i_u64[0];
          v28 = v27 + 56LL * v26;
          v29 = &s1;
          if ( *(_QWORD *)(v28 + 8) )
            v29 = *(const char **)v28;
          *(_QWORD *)(a2 + 160) = v29;
        }
      }
      break;
    case 58:
LABEL_6:
      v7 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87DE00, *(const QT::QObject **)(a2 + 232));
      if ( v7 )
        sub_3ACBC0(v7, a2);
      break;
    case 25:
      v5 = QT::QMetaObject::cast((QT::QMetaObject *)&off_884740, *(const QT::QObject **)(a2 + 232));
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 1016);
        *(_QWORD *)(a2 + 88) = v6;
        *(_QWORD *)(a2 + 104) = get_func(v6);
        *(_QWORD *)(a2 + 112) = get_fchunk(v6);
        *(_QWORD *)(a2 + 120) = getseg(v6);
      }
      goto LABEL_6;
    default:
      v22 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87BDA0, *(const QT::QObject **)a2);
      if ( v22 )
      {
        v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 720LL))(v22, 0);
        v24 = v23;
        if ( v23 != -1 )
        {
          *(_QWORD *)(a2 + 88) = v23;
          *(_QWORD *)(a2 + 104) = get_func(v23);
          *(_QWORD *)(a2 + 112) = get_fchunk(v24);
          *(_QWORD *)(a2 + 120) = getseg(v24);
        }
      }
      break;
  }
  v8 = *(_QWORD *)(a2 + 232);
  if ( v8 )
  {
    if ( (unsigned __int8)sub_1F07A0(v8, a2 + 128, a2 + 144, 0) )
      *(_DWORD *)(a2 + 80) |= 1u;
    if ( *(_BYTE *)(sub_1EB5B0(*(_QWORD *)(a2 + 232)) + 29) )
    {
      v12 = *(_QWORD *)(a2 + 232);
      v47 = 0;
      v42 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
      v43 = 0;
      v44 = -1;
      v45 = -1;
      v46 = 0;
      v49 = -1;
      v50 = 0;
      v51 = -1;
      v52 = -2;
      v53 = -1;
      v55 = 0xFFFFFFFFLL;
      v56 = 0;
      v54 = 0;
      if ( (unsigned int)sub_1ED900(v12, &v42, 4, v9, v10, v11) == 5 )
      {
        v33 = si128.m128i_i64[0];
        if ( si128.m128i_i64[0] == -1 )
          v33 = v51;
        *(_QWORD *)(a2 + 96) = v33;
      }
      if ( v52 >= -1 && v53 )
      {
        *(_QWORD *)&v54 = 0;
        qfree(v53, &v42, v13, v14, v15);
      }
      clear_tinfo_t(&si128.m128i_u64[1]);
      if ( v46 )
      {
        *(_QWORD *)&v47 = 0;
        qfree(v46, &v42, v16, v17, v18);
      }
    }
    v19 = *(_QWORD *)(a2 + 232);
    if ( (unsigned int)sub_1EB590(v19) == 2 && (v30 = *(_QWORD **)(v19 + 896)) != nullptr
      || (unsigned int)sub_1EB590(v19) == 3 && (v30 = *(_QWORD **)(v19 + 904)) != nullptr )
    {
      v31 = v30[25];
      if ( v31 )
      {
        v34 = (void *)qalloc_or_throw(20 * v31);
        v35 = (const void *)v30[24];
        v36 = v34;
        memcpy(v34, v35, 20 * v31);
        v40 = *(_QWORD *)(a2 + 264);
        if ( v40 )
        {
          *(_QWORD *)(a2 + 272) = 0;
          qfree(v40, v35, v37, v38, v39);
        }
        *(_QWORD *)(a2 + 264) = v36;
        *(_QWORD *)(a2 + 184) = a2 + 264;
        *(__m128i *)(a2 + 272) = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v31);
      }
      v32 = v30[55];
      if ( v32 )
        v32 = *(_QWORD *)(v32 + 8);
      *(_QWORD *)(a2 + 176) = v32;
      *(_QWORD *)(a2 + 192) = v30 + 33;
    }
  }
  v20 = *(_QWORD *)(a2 + 88);
  if ( v20 != -1 && (unsigned __int8)segtype(v20) == 1 )
    *(_DWORD *)(a2 + 80) |= 2u;
  return v57 - __readfsqword(0x28u);
}
