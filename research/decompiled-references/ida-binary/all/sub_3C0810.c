__int64 __fastcall sub_3C0810(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  int v13; // eax
  unsigned int v15; // r12d
  __int64 v17; // rbp
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // r13
  __int64 v24; // rbp
  _QWORD *v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // r13d
  __m128 v33; // xmm4
  __m128 v34; // xmm5
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __m128 v40; // xmm4
  __m128 v41; // xmm5
  double v42; // xmm0_8
  char tinfo_property; // al
  char *v44; // rdx
  const char *v45; // rcx
  unsigned int v46; // eax
  double v47; // xmm4_8
  double v48; // xmm5_8
  __int64 v49; // rax
  double v50; // xmm4_8
  double v51; // xmm5_8
  _QWORD *v52; // r12
  __int64 v53; // rsi
  char v54; // [rsp+0h] [rbp-108h]
  __int64 v55; // [rsp+18h] [rbp-F0h] BYREF
  const char *v56; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v57; // [rsp+28h] [rbp-E0h]
  __int64 v58; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v59; // [rsp+48h] [rbp-C0h]
  __int64 v60; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v61; // [rsp+68h] [rbp-A0h]
  __int128 v62; // [rsp+78h] [rbp-90h]
  __int64 v63; // [rsp+90h] [rbp-78h] BYREF
  __int128 v64; // [rsp+98h] [rbp-70h]
  __int128 v65; // [rsp+A8h] [rbp-60h]
  __int64 v66; // [rsp+B8h] [rbp-50h]
  int v67; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v68; // [rsp+C8h] [rbp-40h]

  v13 = *((_DWORD *)a1 + 2);
  v68 = __readfsqword(0x28u);
  if ( v13 != 58 )
  {
    v15 = 0;
    if ( v13 != 25 )
      return v15;
  }
  v17 = *a1;
  if ( !*a1 )
    return 0;
  v18 = sub_3C5BC0(*a1, a2, a3, a4, a5);
  if ( !v18 )
    return 0;
  v19 = a1[26];
  v66 = 0;
  v64 = 0;
  v20 = 13;
  v67 = 1;
  v65 = 0;
  v21 = *(_QWORD *)(v19 + 8);
  v63 = 0;
  if ( (unsigned __int8)get_tinfo_details(v21, 13, &v63) )
  {
    v20 = 1;
    v32 = alloc_type_ordinals(v18, 1);
    if ( v32 )
    {
      v35 = 13;
      v55 = 0;
      if ( HIBYTE(v67) )
        v35 = 29;
      if ( (unsigned __int8)create_tinfo(&v55, v35, 13, &v63) )
      {
        v42 = 0.0;
        v56 = nullptr;
        v57 = 0;
        tinfo_property = get_tinfo_property(v55, 2);
        v44 = "struc";
        if ( (tinfo_property & 0x3F) == 0x1D )
          v44 = "union";
        sub_169A50((__int64 *)&v56, (__int64)"%s_%u", v44, v32);
        v45 = &s1;
        if ( (_QWORD)v57 )
          v45 = v56;
        v46 = save_tinfo(&v55, v18, v32, v45, 1);
        v20 = v46;
        v15 = 0;
        if ( (unsigned __int8)sub_3AC490(
                                a1,
                                v46,
                                (__int64)"Failed to save type",
                                (__m128)0LL,
                                a7,
                                a8,
                                a9,
                                v47,
                                v48,
                                a12,
                                a13) )
        {
          v49 = sub_3C5C20(v17);
          if ( v49 )
          {
            if ( !*(_BYTE *)(v49 + 80) )
            {
              v52 = *(_QWORD **)(v49 + 72);
              if ( v52 )
              {
                v58 = 0;
                v59 = 0;
                v58 = qvector_reserve(&v58, 0, 1, 4);
                *(_DWORD *)(v58 + 4 * v59) = v32;
                v61 = 0;
                v42 = NAN;
                v60 = 0;
                v62 = -1;
                v53 = v52[311];
                *(_QWORD *)&v59 = v59 + 1;
                sub_3C5CD0(&v60, v53, &v58, v32);
                (*(void (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, __int64))(*v52 + 792LL))(
                  v52,
                  &v60,
                  0,
                  2055,
                  1);
                if ( v60 )
                {
                  *(_QWORD *)&v61 = 0;
                  v42 = qfree(v60, (const char *)&v60);
                }
                if ( v58 )
                {
                  *(_QWORD *)&v59 = 0;
                  v42 = qfree(v58, (const char *)&v60);
                }
              }
            }
          }
          v20 = (__int64)&v60;
          LODWORD(v60) = v32;
          *(_QWORD *)&v61 = -2;
          sub_3ACC30(v17, (__int64)&v60, 1u, v42, *(double *)a7.m128_u64, a8, a9, v50, v51, a12, a13);
          v15 = 1;
        }
        if ( v56 )
        {
          *(_QWORD *)&v57 = 0;
          qfree(v56, (const char *)v20);
        }
      }
      else
      {
        v20 = (__int64)"structure";
        if ( HIBYTE(v67) )
          v20 = (__int64)"union";
        sub_169630(
          (int)"AUTOHIDE NONE\nCould not create %s.",
          v20,
          v36,
          v37,
          v38,
          v39,
          (__m128)0LL,
          a7,
          a8,
          a9,
          v40,
          v41,
          a12,
          a13,
          v54);
        v15 = 0;
      }
      clear_tinfo_t(&v55);
      goto LABEL_8;
    }
    sub_169630(
      (int)"AUTOHIDE NONE\nCannot allocate new type ordinal",
      1,
      v28,
      v29,
      v30,
      v31,
      (__m128)0LL,
      a7,
      a8,
      a9,
      v33,
      v34,
      a12,
      a13,
      v54);
  }
  v15 = 0;
LABEL_8:
  v22 = v63;
  if ( v63 )
  {
    v23 = v64;
    if ( (_QWORD)v64 )
    {
      v24 = 0;
      do
      {
        v25 = (_QWORD *)(v22 + 144 * v24);
        clear_tinfo_t(v25 + 8);
        v26 = v25[5];
        if ( v26 )
        {
          v25[6] = 0;
          qfree(v26, (const char *)v20);
        }
        v27 = v25[2];
        if ( v27 )
        {
          v25[3] = 0;
          qfree(v27, (const char *)v20);
        }
        ++v24;
        v22 = v63;
      }
      while ( v23 != v24 );
    }
    *(_QWORD *)&v64 = 0;
    qfree(v22, (const char *)v20);
  }
  return v15;
}
