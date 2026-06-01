__int64 __fastcall sub_4F2F80(
        _QWORD *a1,
        const char *a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rbp
  int v14; // eax
  const char **v15; // r12
  unsigned __int64 v16; // rcx
  const char *v17; // r15
  __m128i v18; // xmm0
  __int64 v19; // rax
  double v20; // xmm4_8
  double v21; // xmm5_8
  __int64 v22; // rdi
  void (*v23)(); // rax
  void *v25; // rax
  void *v26; // rax
  __int64 v27; // rdx
  size_t n; // [rsp+8h] [rbp-70h]
  unsigned __int64 v29; // [rsp+10h] [rbp-68h] BYREF
  __m128i v30; // [rsp+18h] [rbp-60h]
  __int64 v31; // [rsp+28h] [rbp-50h]
  unsigned __int64 v32; // [rsp+38h] [rbp-40h]

  v10 = a1[6];
  v11 = a1[7];
  v32 = __readfsqword(0x28u);
  v12 = v10 + 8 * v11;
  if ( v10 != v12 )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)v10 + 32LL);
      v14 = *(_DWORD *)(v13 + 8);
      if ( v14 != 8 )
        break;
      v15 = *(const char ***)(v13 + 112);
      if ( !v15[1] )
        goto LABEL_6;
      v31 = -1;
      v16 = 0;
      v30 = 0;
      v17 = v15[1];
      v29 = 0;
      if ( v17 )
      {
        v25 = (void *)qalloc_or_throw(8LL * (_QWORD)v17);
        a2 = *v15;
        v26 = memcpy(v25, *v15, 8LL * (_QWORD)v17);
        v16 = (unsigned __int64)v26;
        if ( v29 )
        {
          n = (size_t)v26;
          v30.m128i_i64[0] = 0;
          qfree(v29, a2, v27, v26);
          v15 = *(const char ***)(v13 + 112);
          v16 = n;
        }
        else
        {
          v15 = *(const char ***)(v13 + 112);
        }
      }
      v29 = v16;
      v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)(unsigned __int64)v17);
      v30 = v18;
      v31 = *(_QWORD *)*v15;
      v19 = sub_49EE00(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 32LL) + 104LL));
      if ( v19 )
      {
        a2 = (const char *)&v29;
        sub_4A8920(v19, &v29, 7, *(double *)v18.m128i_i64, (__m128)0LL, a5, a6, v20, v21, a9, a10);
      }
      if ( v29 )
      {
        v30.m128i_i64[0] = 0;
        v10 += 8;
        qfree(v29, a2);
        if ( v12 == v10 )
          goto LABEL_14;
      }
      else
      {
LABEL_6:
        v10 += 8;
        if ( v12 == v10 )
          goto LABEL_14;
      }
    }
    if ( v14 == 9 && (*(_BYTE *)(v13 + 120) & 2) != 0 )
    {
      a2 = *(const char **)(v13 + 112);
      sub_493F70(*(QT::QAbstractItemView **)(v13 + 104), (__int64)a2);
    }
    goto LABEL_6;
  }
LABEL_14:
  v22 = a1[5];
  v23 = *(void (**)())(*(_QWORD *)v22 + 24LL);
  if ( v23 == nullsub_38 )
    return v32 - __readfsqword(0x28u);
  else
    return ((__int64 (__fastcall *)(__int64, __int64))v23)(v22, 2);
}
