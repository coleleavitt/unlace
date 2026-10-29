/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_474C30
// Address: 0x0000000000474C30

//----- (0000000000474C30) ----------------------------------------------------
__int64 __fastcall sub_474C30(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rbp
  unsigned int v19; // r15d
  __int64 v20; // r14
  unsigned int v21; // eax
  int v22; // r13d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __m128 v36; // xmm4
  __m128 v37; // xmm5
  __int64 *v38; // rax
  __int64 v39; // r13
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __m128 v44; // xmm4
  __m128 v45; // xmm5
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __m128 v50; // xmm4
  __m128 v51; // xmm5
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __m128 v58; // xmm4
  __m128 v59; // xmm5
  char v60; // [rsp+0h] [rbp-E8h]
  char v62[136]; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v63; // [rsp+A8h] [rbp-40h]

  v14 = *a1;
  v63 = __readfsqword(0x28u);
  v15 = *v14;
  if ( a3 )
    v16 = (*(__int64 (**)(void))(v15 + 32))();
  else
    v16 = (*(__int64 (**)(void))(v15 + 40))();
  if ( !v16 )
    return 0;
  v17 = ((__int64 (*)(void))(*a1)[18])();
  v18 = v17;
  if ( !v17 )
    return 0;
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(**a1 + 48))(*a1, v17, 1459617792);
  if ( ((unsigned int (__fastcall *)(__int64, const char *))(*a1)[19])(
         v18,
         "DEFAULT:!MEDIUM:!SSLv2:!SSLv3:!TLSv1.0:!DSS:!PSK:!kRSA:!kDHr:!kDHd:!kDH:!kECDHr:!kECDHe:!kECDH:@STRENGTH") != 1 )
  {
LABEL_21:
    ((void (__fastcall *)(__int64))(*a1)[15])(v18);
    return 0;
  }
  if ( (dword_4C94E4 & 0x100000) != 0 )
  {
    v19 = 0;
    v20 = (*(__int64 (__fastcall **)(__int64 *, __int64))(**a1 + 72))(*a1, v18);
    *(double *)a5.m128_u64 = (*(double (__fastcall **)(__int64 *, __int64))(**a1 + 80))(*a1, v20);
    v22 = v21;
    *(double *)a5.m128_u64 = sub_410EA0(
                               (int)"TLS: num ciphers: %d\n",
                               v21,
                               v23,
                               v24,
                               v25,
                               v26,
                               a5,
                               a6,
                               a7,
                               a8,
                               v27,
                               v28,
                               a11,
                               a12,
                               v60);
    if ( v22 > 0 )
    {
      do
      {
        v29 = v19++;
        v30 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, double))(**a1 + 88))(
                *a1,
                v20,
                v29,
                *(double *)a5.m128_u64);
        v31 = ((__int64 (__fastcall *)(__int64, char *, __int64))(*a1)[12])(v30, v62, 128);
        *(double *)a5.m128_u64 = sub_410EA0(
                                   (int)"TLS:  %s",
                                   v31,
                                   v32,
                                   v33,
                                   v34,
                                   v35,
                                   a5,
                                   a6,
                                   a7,
                                   a8,
                                   v36,
                                   v37,
                                   a11,
                                   a12,
                                   v60);
      }
      while ( v22 != v19 );
    }
    ((void (__fastcall *)(__int64, unsigned __int64 (__fastcall *)(__int64, unsigned int, unsigned int, double, __m128, __m128, __m128, double, double, __m128, __m128), double))(*a1)[20])(
      v18,
      sub_473720,
      *(double *)a5.m128_u64);
  }
  v38 = *a1;
  if ( a3 )
  {
    if ( *((_DWORD *)v38 + 92) > 0x10001FFu )
    {
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(*v38 + 64))(*a1, v18, 1);
    }
    else
    {
      v39 = ((__int64 (__fastcall *)(__int64))v38[8])(415);
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(**a1 + 56))(*a1, v18, v39);
      ((void (__fastcall *)(__int64))(*a1)[7])(v39);
    }
    if ( (dword_4C94E4 & 0x100000) != 0 )
      *(double *)a5.m128_u64 = sub_470E00(
                                 (int)"TLS: using certificate chain file \"%s\"\n",
                                 a3,
                                 v40,
                                 v41,
                                 v42,
                                 v43,
                                 a5,
                                 a6,
                                 a7,
                                 a8,
                                 v44,
                                 v45,
                                 a11,
                                 a12,
                                 v60);
    if ( ((unsigned int (__fastcall *)(__int64, __int64))(*a1)[22])(v18, a3) == 1 )
    {
      if ( (dword_4C94E4 & 0x100000) != 0 )
        sub_470E00(
          (int)"TLS: using private key file \"%s\"\n",
          a4,
          v46,
          v47,
          v48,
          v49,
          a5,
          a6,
          a7,
          a8,
          v50,
          v51,
          a11,
          a12,
          v60);
      if ( ((unsigned int (__fastcall *)(__int64, __int64, __int64))(*a1)[21])(v18, a4, 1) == 1
        && ((unsigned int (__fastcall *)(__int64))(*a1)[13])(v18) == 1 )
      {
        return v18;
      }
    }
    goto LABEL_21;
  }
  v53 = ((__int64 (__fastcall *)(__int64))v38[16])(v18);
  if ( ((unsigned int (__fastcall *)(__int64, __int64))(*a1)[41])(v53, a2) != 1 && (dword_4C94E4 & 0x100000) != 0 )
    sub_470E00(
      (int)"TLS: failed to add Root CA certificate to store\n",
      a2,
      v54,
      v55,
      v56,
      v57,
      a5,
      a6,
      a7,
      a8,
      v58,
      v59,
      a11,
      a12,
      v60);
  return v18;
}
// 474D03: variable 'v21' is possibly undefined
// 474D08: variable 'v23' is possibly undefined
// 474D08: variable 'v24' is possibly undefined
// 474D08: variable 'v25' is possibly undefined
// 474D08: variable 'v26' is possibly undefined
// 474D08: variable 'v27' is possibly undefined
// 474D08: variable 'v28' is possibly undefined
// 474D08: variable 'v60' is possibly undefined
// 474D52: variable 'v32' is possibly undefined
// 474D52: variable 'v33' is possibly undefined
// 474D52: variable 'v34' is possibly undefined
// 474D52: variable 'v35' is possibly undefined
// 474D52: variable 'v36' is possibly undefined
// 474D52: variable 'v37' is possibly undefined
// 474EFC: variable 'v40' is possibly undefined
// 474EFC: variable 'v41' is possibly undefined
// 474EFC: variable 'v42' is possibly undefined
// 474EFC: variable 'v43' is possibly undefined
// 474EFC: variable 'v44' is possibly undefined
// 474EFC: variable 'v45' is possibly undefined
// 474EDE: variable 'v46' is possibly undefined
// 474EDE: variable 'v47' is possibly undefined
// 474EDE: variable 'v48' is possibly undefined
// 474EDE: variable 'v49' is possibly undefined
// 474EDE: variable 'v50' is possibly undefined
// 474EDE: variable 'v51' is possibly undefined
// 474EC0: variable 'v54' is possibly undefined
// 474EC0: variable 'v55' is possibly undefined
// 474EC0: variable 'v56' is possibly undefined
// 474EC0: variable 'v57' is possibly undefined
// 474EC0: variable 'v58' is possibly undefined
// 474EC0: variable 'v59' is possibly undefined
// 4C94E4: using guessed type int dword_4C94E4;
