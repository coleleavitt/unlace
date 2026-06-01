/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_473720
// Address: 0x0000000000473720

//----- (0000000000473720) ----------------------------------------------------
unsigned __int64 __fastcall sub_473720(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __m128 si128; // xmm0
  const char *v12; // r13
  _QWORD *v15; // rax
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __int64 v19; // rdx
  void *v20; // rsi
  int v21; // r13d
  const char *v22; // r8
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __m128 v35; // xmm4
  __m128 v36; // xmm5
  __int64 v38; // r13
  unsigned __int64 v39; // r14
  __int64 v40; // r8
  __int64 v41; // r13
  __int64 v42; // r8
  unsigned __int64 v43; // r14
  void *v44; // rsi
  __int64 v45; // r13
  void *v46; // rsi
  unsigned __int64 v47; // r14
  __int64 v48; // r8
  __int64 v49; // r13
  void *v50; // rsi
  unsigned __int64 v51; // r14
  __int64 v52; // r8
  __int64 v53; // r14
  __int64 v54; // r8
  unsigned __int64 v55; // rdx
  void *v56; // rsi
  __int64 v57; // r14
  __int64 v58; // r8
  unsigned __int64 v59; // rdx
  void *v60; // rsi
  char *v61; // r14
  __int64 v62; // r14
  void *v63; // rsi
  unsigned __int64 v64; // rdx
  __int64 v65; // r8
  char *v66; // r14
  unsigned __int64 v67; // [rsp+0h] [rbp-68h]
  char v68; // [rsp+0h] [rbp-68h]
  char v69; // [rsp+0h] [rbp-68h]
  __int64 v70; // [rsp+8h] [rbp-60h]
  __int64 v71; // [rsp+8h] [rbp-60h]
  __int64 v72; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v74; // [rsp+18h] [rbp-50h]
  unsigned __int64 v75; // [rsp+28h] [rbp-40h]

  si128 = 0;
  v12 = "SSL_connect: ";
  v75 = __readfsqword(0x28u);
  v74 = 0;
  ptr = nullptr;
  if ( (a2 & 0x1000) == 0 )
  {
    v12 = "SSL_???    : ";
    if ( (a2 & 0x2000) != 0 )
      v12 = "SSL_accept : ";
  }
  v15 = sub_481540((__int64)&ptr, nullptr, 0xEu, 1u);
  v19 = *(_QWORD *)v12;
  ptr = v15;
  *(_QWORD *)&v74 = 14;
  *v15 = v19;
  *(_QWORD *)((char *)v15 + 5) = *(_QWORD *)(v12 + 5);
  v20 = ptr;
  *((_BYTE *)ptr + 13) = 0;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) == 0 )
      goto LABEL_4;
    goto LABEL_21;
  }
  v38 = v74;
  if ( (_QWORD)v74 )
  {
    v40 = v74 + 11;
    v39 = v74 + 12;
    v38 = v74 - 1;
    if ( *((_QWORD *)&v74 + 1) >= (unsigned __int64)(v74 + 12) )
      goto LABEL_20;
  }
  else
  {
    v39 = 13;
    v40 = 12;
    if ( *((_QWORD *)&v74 + 1) >= 0xDu )
      goto LABEL_20;
  }
  v67 = v40;
  ptr = sub_481540((__int64)&ptr, v20, v39, 1u);
  v40 = v67;
  v20 = ptr;
LABEL_20:
  *(_QWORD *)&v74 = v39;
  *((_BYTE *)v20 + v40) = 0;
  qmemcpy((char *)ptr + v38, " SSL_CB_LOOP", 12);
  if ( (a2 & 2) == 0 )
  {
LABEL_4:
    if ( (a2 & 4) == 0 )
      goto LABEL_5;
    goto LABEL_24;
  }
LABEL_21:
  v41 = v74;
  if ( (_QWORD)v74 )
  {
    v42 = v74 + 11;
    v43 = v74 + 12;
    v44 = ptr;
    v41 = v74 - 1;
    if ( *((_QWORD *)&v74 + 1) >= (unsigned __int64)(v74 + 12) )
      goto LABEL_23;
  }
  else
  {
    v44 = ptr;
    v43 = 13;
    v42 = 12;
    if ( *((_QWORD *)&v74 + 1) >= 0xDu )
      goto LABEL_23;
  }
  v67 = v42;
  ptr = sub_481540((__int64)&ptr, v44, v43, 1u);
  v42 = v67;
  v44 = ptr;
LABEL_23:
  *(_QWORD *)&v74 = v43;
  *((_BYTE *)v44 + v42) = 0;
  qmemcpy((char *)ptr + v41, " SSL_CB_EXIT", 12);
  if ( (a2 & 4) == 0 )
  {
LABEL_5:
    if ( (a2 & 8) == 0 )
      goto LABEL_6;
    goto LABEL_27;
  }
LABEL_24:
  v45 = v74;
  if ( (_QWORD)v74 )
  {
    v48 = v74 + 11;
    v47 = v74 + 12;
    v46 = ptr;
    v45 = v74 - 1;
    if ( *((_QWORD *)&v74 + 1) >= (unsigned __int64)(v74 + 12) )
      goto LABEL_26;
  }
  else
  {
    v46 = ptr;
    v47 = 13;
    v48 = 12;
    if ( *((_QWORD *)&v74 + 1) >= 0xDu )
      goto LABEL_26;
  }
  v67 = v48;
  ptr = sub_481540((__int64)&ptr, v46, v47, 1u);
  v48 = v67;
  v46 = ptr;
LABEL_26:
  *(_QWORD *)&v74 = v47;
  *((_BYTE *)v46 + v48) = 0;
  qmemcpy((char *)ptr + v45, " SSL_CB_READ", 12);
  if ( (a2 & 8) == 0 )
  {
LABEL_6:
    v21 = a2 & 0x4000;
    if ( (a2 & 0x4000) == 0 )
      goto LABEL_7;
    goto LABEL_30;
  }
LABEL_27:
  v49 = v74;
  if ( (_QWORD)v74 )
  {
    v52 = v74 + 12;
    v51 = v74 + 13;
    v50 = ptr;
    v49 = v74 - 1;
    if ( *((_QWORD *)&v74 + 1) >= (unsigned __int64)(v74 + 13) )
      goto LABEL_29;
  }
  else
  {
    v50 = ptr;
    v51 = 14;
    v52 = 13;
    if ( *((_QWORD *)&v74 + 1) >= 0xEu )
      goto LABEL_29;
  }
  v67 = v52;
  ptr = sub_481540((__int64)&ptr, v50, v51, 1u);
  v52 = v67;
  v50 = ptr;
LABEL_29:
  *(_QWORD *)&v74 = v51;
  *((_BYTE *)v50 + v52) = 0;
  qmemcpy((char *)ptr + v49, " SSL_CB_WRITE", 13);
  v21 = a2 & 0x4000;
  if ( (a2 & 0x4000) == 0 )
  {
LABEL_7:
    if ( (a2 & 0x10) == 0 )
      goto LABEL_8;
    goto LABEL_33;
  }
LABEL_30:
  v53 = v74;
  if ( (_QWORD)v74 )
  {
    v54 = v74 + 12;
    v55 = v74 + 13;
    v56 = ptr;
    v53 = v74 - 1;
    if ( *((_QWORD *)&v74 + 1) >= (unsigned __int64)(v74 + 13) )
      goto LABEL_32;
  }
  else
  {
    v56 = ptr;
    v55 = 14;
    v54 = 13;
    if ( *((_QWORD *)&v74 + 1) >= 0xEu )
      goto LABEL_32;
  }
  v72 = v54;
  v67 = v55;
  ptr = sub_481540((__int64)&ptr, v56, v55, 1u);
  v54 = v72;
  v56 = ptr;
  v55 = v67;
LABEL_32:
  *(_QWORD *)&v74 = v55;
  *((_BYTE *)v56 + v54) = 0;
  qmemcpy((char *)ptr + v53, " SSL_CB_ALERT", 13);
  if ( (a2 & 0x10) == 0 )
  {
LABEL_8:
    if ( (a2 & 0x20) == 0 )
      goto LABEL_9;
    goto LABEL_36;
  }
LABEL_33:
  v57 = v74;
  if ( (_QWORD)v74 )
  {
    v58 = v74 + 22;
    v59 = v74 + 23;
    v60 = ptr;
    v57 = v74 - 1;
    if ( *((_QWORD *)&v74 + 1) >= (unsigned __int64)(v74 + 23) )
      goto LABEL_35;
  }
  else
  {
    v60 = ptr;
    v59 = 24;
    v58 = 23;
    if ( *((_QWORD *)&v74 + 1) >= 0x18u )
      goto LABEL_35;
  }
  v71 = v58;
  v67 = v59;
  ptr = sub_481540((__int64)&ptr, v60, v59, 1u);
  v58 = v71;
  v60 = ptr;
  v59 = v67;
LABEL_35:
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_48F5E0);
  *(_QWORD *)&v74 = v59;
  *((_BYTE *)v60 + v58) = 0;
  v61 = (char *)ptr + v57;
  *(__m128 *)v61 = si128;
  *(_QWORD *)(v61 + 15) = 0x54524154535F454BLL;
  if ( (a2 & 0x20) == 0 )
    goto LABEL_9;
LABEL_36:
  v62 = v74;
  if ( (_QWORD)v74 )
  {
    v65 = v74 + 21;
    v64 = v74 + 22;
    v63 = ptr;
    v62 = v74 - 1;
    if ( *((_QWORD *)&v74 + 1) >= (unsigned __int64)(v74 + 22) )
      goto LABEL_38;
LABEL_46:
    v70 = v65;
    v67 = v64;
    ptr = sub_481540((__int64)&ptr, v63, v64, 1u);
    v65 = v70;
    v63 = ptr;
    v64 = v67;
    goto LABEL_38;
  }
  v63 = ptr;
  v64 = 23;
  v65 = 22;
  if ( *((_QWORD *)&v74 + 1) < 0x17u )
    goto LABEL_46;
LABEL_38:
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_48F5E0);
  *(_QWORD *)&v74 = v64;
  *((_BYTE *)v63 + v65) = 0;
  v66 = (char *)ptr + v62;
  *(__m128 *)v66 = si128;
  *(_QWORD *)(v66 + 14) = 0x454E4F445F454B41LL;
LABEL_9:
  v22 = s1;
  if ( (_QWORD)v74 )
    v22 = (const char *)ptr;
  *(double *)si128.m128_u64 = sub_410EA0(
                                (int)"TLS: info_callback(%p, %08X, %08X): %s\n",
                                a1,
                                a2,
                                a3,
                                (__int64)v22,
                                v16,
                                si128,
                                a5,
                                a6,
                                a7,
                                v17,
                                v18,
                                a10,
                                a11,
                                v67);
  v23 = (*(__int64 (__fastcall **)(__int64, double))(qword_4C83E0 + 304))(a1, *(double *)si128.m128_u64);
  *(double *)si128.m128_u64 = sub_410EA0(
                                (int)"TLS:  [state] %s\n",
                                v23,
                                v24,
                                v25,
                                v26,
                                v27,
                                si128,
                                a5,
                                a6,
                                a7,
                                v28,
                                v29,
                                a10,
                                a11,
                                v68);
  if ( v21 )
  {
    v30 = (*(__int64 (__fastcall **)(_QWORD, double))(qword_4C83E0 + 200))(a3, *(double *)si128.m128_u64);
    v31 = (*(__int64 (__fastcall **)(_QWORD))(qword_4C83E0 + 192))(a3);
    sub_410EA0((int)"TLS:  %s: %s\n", v30, v31, v32, v33, v34, si128, a5, a6, a7, v35, v36, a10, a11, v69);
  }
  if ( ptr )
  {
    *(_QWORD *)&v74 = 0;
    j__free(ptr);
  }
  return v75 - __readfsqword(0x28u);
}
// 47380E: variable 'v16' is possibly undefined
// 47380E: variable 'v17' is possibly undefined
// 47380E: variable 'v18' is possibly undefined
// 47380E: variable 'v67' is possibly undefined
// 47382F: variable 'v24' is possibly undefined
// 47382F: variable 'v25' is possibly undefined
// 47382F: variable 'v26' is possibly undefined
// 47382F: variable 'v27' is possibly undefined
// 47382F: variable 'v28' is possibly undefined
// 47382F: variable 'v29' is possibly undefined
// 47382F: variable 'v68' is possibly undefined
// 473869: variable 'v32' is possibly undefined
// 473869: variable 'v33' is possibly undefined
// 473869: variable 'v34' is possibly undefined
// 473869: variable 'v35' is possibly undefined
// 473869: variable 'v36' is possibly undefined
// 473869: variable 'v69' is possibly undefined
// 48F5E0: using guessed type __int128 xmmword_48F5E0;
// 4C83E0: using guessed type __int64 qword_4C83E0;
