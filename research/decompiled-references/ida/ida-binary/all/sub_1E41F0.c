unsigned __int64 __fastcall sub_1E41F0(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        int a10)
{
  __int64 v10; // rbp
  const char *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __m128 v20; // xmm0
  __m128i inserted; // xmm0
  const char *v22; // rdx
  const char *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  _BYTE *v30; // rsi
  __int64 v31; // r13
  size_t v32; // r14
  __int64 v33; // r15
  char v34; // [rsp+0h] [rbp-D8h]
  char v35; // [rsp+0h] [rbp-D8h]
  int v36; // [rsp+Ch] [rbp-CCh] BYREF
  void *src; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v38; // [rsp+18h] [rbp-C0h]
  __int64 v39; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v40; // [rsp+38h] [rbp-A0h]
  const char *v41; // [rsp+50h] [rbp-88h] BYREF
  __int128 v42; // [rsp+58h] [rbp-80h]
  int v43; // [rsp+70h] [rbp-68h] BYREF
  __int64 v44; // [rsp+78h] [rbp-60h]
  __int128 v45; // [rsp+80h] [rbp-58h]
  unsigned __int64 v46; // [rsp+98h] [rbp-40h]

  v10 = 0;
  v46 = __readfsqword(0x28u);
  if ( a10 >= 0 && a10 < (unsigned __int64)xmmword_8CC398 )
    v10 = qword_8CC390 + 56LL * a10;
  if ( sub_1DED40(v10) )
  {
    v43 = -2;
    v44 = -1;
    v45 = 0;
    if ( sub_234FE0((unsigned int)dword_8CC428) )
      sub_23F750((unsigned int)a10, &v43);
    v38 = 0;
    src = nullptr;
    sub_24B690(&src, &v43, (unsigned int)a10);
    if ( !(unsigned __int8)sub_235DE0(v10) )
      goto LABEL_9;
    v30 = src;
    if ( (_QWORD)v38 )
    {
      v31 = v38 + 2;
      v32 = v38 - 1;
      v33 = v38 + 1;
      if ( *((_QWORD *)&v38 + 1) >= (unsigned __int64)(v38 + 2) )
        goto LABEL_38;
    }
    else
    {
      if ( *((_QWORD *)&v38 + 1) > 2u )
      {
        *(_QWORD *)&v38 = 3;
        *((_BYTE *)src + 2) = 0;
LABEL_40:
        *(_WORD *)src = 30768;
LABEL_9:
        v13 = &s1;
        v39 = 0;
        v40 = 0;
        if ( *(_QWORD *)(v10 + 8) )
          v13 = *(const char **)v10;
        sub_169A50(&v39, (__int64)"Modify register value\n<New ~va~lue of %s:q:1000:50::>\n\n", v13);
        if ( (unsigned int)sub_1697D0(
                             v39,
                             (__int64)&src,
                             v14,
                             v15,
                             v16,
                             v17,
                             (__m128)0LL,
                             a2,
                             a3,
                             a4,
                             v18,
                             v19,
                             a7,
                             a8,
                             v34) )
        {
          v20 = 0;
          v36 = 0;
          v41 = nullptr;
          v42 = 0;
          if ( *(_DWORD *)(v10 + 44) != a10 )
          {
            inserted = _mm_insert_epi16((__m128i)0LL, *(unsigned __int16 *)(v10 + 32), 0);
            a2 = (__m128)_mm_cmpgt_epi8((__m128i)0LL, inserted);
            v20 = (__m128)_mm_unpacklo_epi8(inserted, (__m128i)a2);
            v36 = _mm_cvtsi128_si32((__m128i)v20);
          }
          v22 = &s1;
          if ( (_QWORD)v38 )
            v22 = (const char *)src;
          v23 = (const char *)&v36;
          if ( !(unsigned __int8)sub_1E1DC0(v10, (const char *)&v36, (__int64)v22, (__int64)&v41) )
          {
            if ( (unsigned __int64)v42 > 1 )
            {
              v23 = v41;
              sub_169630((int)"%s", (__int64)v41, v24, v25, v26, v27, v20, a2, a3, a4, v28, v29, a7, a8, v35);
            }
            sub_169700(
              (int)"Command \"ModifyRegister\" failed\n",
              (__int64)v23,
              v24,
              v25,
              v26,
              v27,
              v20,
              a2,
              a3,
              a4,
              v28,
              v29,
              a7,
              a8,
              v35);
          }
          if ( v41 )
          {
            *(_QWORD *)&v42 = 0;
            qfree(v41, v23);
          }
          if ( v39 )
          {
            *(_QWORD *)&v40 = 0;
            qfree(v39, v23);
          }
          if ( src )
          {
            *(_QWORD *)&v38 = 0;
            qfree(src, v23);
          }
          if ( v43 >= -1 && v44 )
          {
            *(_QWORD *)&v45 = 0;
            qfree(v44, v23);
          }
        }
        else
        {
          if ( v39 )
          {
            *(_QWORD *)&v40 = 0;
            qfree(v39, (const char *)&src);
          }
          if ( src )
          {
            *(_QWORD *)&v38 = 0;
            qfree(src, (const char *)&src);
          }
          if ( v43 >= -1 && v44 )
          {
            *(_QWORD *)&v45 = 0;
            qfree(v44, (const char *)&src);
          }
        }
        return v46 - __readfsqword(0x28u);
      }
      v32 = 0;
      v31 = 3;
      v33 = 2;
    }
    src = (void *)qvector_reserve(&src, src, v31, 1);
    v30 = src;
LABEL_38:
    *(_QWORD *)&v38 = v31;
    v30[v33] = 0;
    if ( v32 )
      memmove((char *)src + 2, src, v32);
    goto LABEL_40;
  }
  return v46 - __readfsqword(0x28u);
}
