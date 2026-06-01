__int64 __fastcall sub_44EFF0(
        __int64 a1,
        unsigned int a2,
        char a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  unsigned int v12; // r12d
  int v13; // edx
  char v14; // r14
  const char *v15; // r8
  const char *v16; // rcx
  const char *v17; // rdx
  const char *v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r8
  __m128i si128; // xmm0
  __int64 v24; // rbx
  __int64 v25; // rbx
  __m128 v26; // xmm0
  __int64 v27; // rax
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __int64 v30; // rsi
  const QT::QObject *v31; // rax
  unsigned int v32; // r14d
  __int64 v33; // rdi
  __int64 v34; // r13
  __int64 v35; // r12
  __int64 v36; // r15
  __int64 *v37; // rbx
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rdi
  __m128 v42; // xmm4
  __m128 v43; // xmm5
  char *v44; // rbx
  __int64 v45; // rdi
  _QWORD *v46; // rax
  _QWORD *v47; // rbx
  __int64 (__fastcall *v48)(__int64); // rax
  __int64 *v49; // rdi
  __int64 v50; // rax
  __int64 (*v51)(); // rsi
  unsigned int v52; // eax
  __int64 v53; // r12
  __int64 v54; // r8
  unsigned __int64 v55; // rdx
  __int64 v56; // rsi
  __m128i v57; // xmm0
  __int64 v58; // r12
  __int64 v59; // rax
  char v60; // al
  __m128 v61; // xmm4
  __m128 v62; // xmm5
  const char *v63; // [rsp+0h] [rbp-1B0h]
  __int64 v64; // [rsp+8h] [rbp-1A8h]
  __int64 v65; // [rsp+8h] [rbp-1A8h]
  const char *v66; // [rsp+8h] [rbp-1A8h]
  __int64 v67; // [rsp+10h] [rbp-1A0h]
  unsigned __int64 v68; // [rsp+10h] [rbp-1A0h]
  unsigned int v69; // [rsp+10h] [rbp-1A0h]
  __int64 v71; // [rsp+30h] [rbp-180h] BYREF
  __int128 v72; // [rsp+38h] [rbp-178h]
  const char *v73; // [rsp+50h] [rbp-160h] BYREF
  __int128 v74; // [rsp+58h] [rbp-158h]
  __int64 v75; // [rsp+70h] [rbp-140h] BYREF
  __int128 v76; // [rsp+78h] [rbp-138h]
  __int64 v77; // [rsp+90h] [rbp-120h]
  __int128 v78; // [rsp+98h] [rbp-118h]
  _QWORD v79[10]; // [rsp+B0h] [rbp-100h] BYREF
  char v80; // [rsp+100h] [rbp-B0h] BYREF
  char v81; // [rsp+160h] [rbp-50h] BYREF
  unsigned __int64 v82; // [rsp+178h] [rbp-38h]

  v12 = a2;
  v13 = *(_DWORD *)(a1 + 84);
  v82 = __readfsqword(0x28u);
  v72 = 0;
  v71 = 0;
  v73 = nullptr;
  v74 = 0;
  sub_169A50((__int64 *)&v73, (__int64)"Worklist #%d", v13);
  v75 = 0;
  v76 = 0;
  if ( a2 != 3 )
  {
    v14 = 0;
    v15 = off_86B8E0[a2];
    v16 = off_86B900[a2];
    v17 = off_86B920[a2];
    goto LABEL_3;
  }
  v46 = sub_426230(&v73, "Worklist #%d");
  v47 = (_QWORD *)sub_417080((__int64)v46);
  v16 = &s1;
  v48 = *(__int64 (__fastcall **)(__int64))(*v47 + 304LL);
  v15 = (const char *)*(unsigned int *)(a1 + 84);
  if ( *(_QWORD *)(a1 + 32) )
    v16 = *(const char **)(a1 + 24);
  v17 = &s1;
  if ( *(_QWORD *)(a1 + 8) )
    v17 = *(const char **)a1;
  if ( v48 != vault_with_events_t__::vfunc_38 )
  {
    v52 = ((__int64 (__fastcall *)(_QWORD *, __int64 *, const char *, const char *, const char *))v48)(
            v47,
            &v75,
            v17,
            v16,
            v15);
LABEL_51:
    v12 = v52;
    v17 = "* Commit";
    v16 = " Save";
    v14 = 1;
    v15 = " Close";
    if ( !v52 )
      goto LABEL_3;
    goto LABEL_52;
  }
  v49 = (__int64 *)v47[1];
  if ( v49 )
  {
    v50 = *v49;
    v51 = *(__int64 (**)())(*v49 + 480);
    if ( v51 == sub_178B60 )
    {
LABEL_50:
      v52 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, const char *, const char *, const char *))(v50 + 272))(
              v49,
              &v75,
              v17,
              v16,
              v15);
      goto LABEL_51;
    }
    v63 = v16;
    v66 = v17;
    v69 = (unsigned int)v15;
    v60 = v51();
    v15 = (const char *)v69;
    v17 = v66;
    v16 = v63;
    if ( !v60 )
    {
      v49 = (__int64 *)v47[1];
      v50 = *v49;
      goto LABEL_50;
    }
  }
  v12 = 52;
LABEL_52:
  sub_416980(v12, (__int64)"Failed to retrieve worklist files", v17, v16, v15);
  v17 = "* Commit";
  v16 = " Save";
  v12 = 0;
  v14 = 0;
  v15 = " Close";
LABEL_3:
  v18 = &s1;
  if ( (_QWORD)v74 )
    v18 = v73;
  sub_169A50(
    &v71,
    (__int64)"BUTTON YES%s\n"
             "BUTTON NO%s\n"
             "BUTTON CANCEL%s\n"
             "%s\n"
             "\n"
             "%%/%%*Worklist     %%D\n"
             "Last changed %%1q\n"
             "User         %%q\n"
             "Site         %%q\n"
             "<~D~escription:t2::200:::>",
    v17,
    v16,
    v15,
    v18);
  if ( v14 )
  {
    v19 = v72;
    if ( (_QWORD)v72 )
    {
      v22 = v72 + 24;
      v21 = v72 + 25;
      v20 = v71;
      v19 = v72 - 1;
      if ( *((_QWORD *)&v72 + 1) >= (unsigned __int64)(v72 + 25) )
        goto LABEL_8;
    }
    else
    {
      v20 = v71;
      v21 = 26;
      v22 = 25;
      if ( *((_QWORD *)&v72 + 1) >= 0x1Au )
      {
LABEL_8:
        si128 = _mm_load_si128((const __m128i *)&xmmword_5DDC30);
        *(_QWORD *)&v72 = v21;
        *(_BYTE *)(v20 + v22) = 0;
        v24 = v71 + v19;
        *(__m128i *)v24 = si128;
        *(__m128i *)(v24 + 9) = _mm_load_si128((const __m128i *)&xmmword_5DDC40);
        goto LABEL_9;
      }
    }
    v64 = v22;
    v67 = v21;
    v71 = qvector_reserve(&v71, v20, v21, 1);
    v22 = v64;
    v20 = v71;
    v21 = v67;
    goto LABEL_8;
  }
LABEL_9:
  v25 = operator new(0x68u);
  v26 = 0;
  *(_QWORD *)(v25 + 8) = 0;
  v27 = *(int *)(a1 + 84);
  *(_QWORD *)(v25 + 32) = 40;
  *(_QWORD *)(v25 + 40) = 0;
  *(_QWORD *)v25 = v27;
  *(_WORD *)(v25 + 66) = 0;
  *(_QWORD *)(v25 + 72) = 0;
  *(_BYTE *)(v25 + 97) = a3;
  *(_DWORD *)(v25 + 100) = 0;
  *(_OWORD *)(v25 + 16) = 0;
  *(_OWORD *)(v25 + 48) = 0;
  *(_OWORD *)(v25 + 80) = 0;
  *(_BYTE *)(v25 + 96) = v12 != 2;
  if ( v12 != 2 )
  {
    *(_WORD *)(v25 + 64) = 0;
    if ( !v12 )
    {
      v53 = v72;
      if ( (_QWORD)v72 )
      {
        v54 = v72 + 43;
        v55 = v72 + 44;
        v53 = v72 - 1;
      }
      else
      {
        v55 = 45;
        v54 = 44;
      }
      v56 = v71;
      if ( *((_QWORD *)&v72 + 1) < v55 )
      {
        v65 = v54;
        v68 = v55;
        v71 = qvector_reserve(&v71, v71, v55, 1);
        v54 = v65;
        v56 = v71;
        v55 = v68;
      }
      v57 = _mm_load_si128((const __m128i *)&xmmword_5DDC50);
      *(_QWORD *)&v72 = v55;
      *(_BYTE *)(v56 + v54) = 0;
      v58 = v71 + v53;
      *(__m128i *)v58 = v57;
      *(__m128i *)(v58 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DDC60);
      v26 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DDC70);
      *(__m128 *)(v58 + 28) = v26;
      sub_44DC90((__m128i *)v25, (_QWORD *)a1);
      if ( !a3 )
        goto LABEL_11;
      if ( v14 )
      {
        sub_44E690((__int64)v79, (const char *)&v75, 1);
        v26.m128_u64[0] = 0;
        v78 = 0;
        v30 = (__int64)sub_44E5A0;
        v77 = 0;
        v32 = sub_1697D0(
                v71,
                (__int64)sub_44E5A0,
                v25,
                v25,
                v25 + 8,
                a1,
                (__m128)0LL,
                a5,
                a6,
                a7,
                v61,
                v62,
                a10,
                a11,
                (unsigned __int8)a1 + 24);
        goto LABEL_34;
      }
      v30 = (__int64)sub_44E5A0;
      v32 = sub_1697D0(
              v71,
              (__int64)sub_44E5A0,
              v25,
              v25,
              v25 + 8,
              a1,
              v26,
              a5,
              a6,
              a7,
              v28,
              v29,
              a10,
              a11,
              (unsigned __int8)a1 + 24);
LABEL_60:
      LOBYTE(v32) = v32 <= 1;
      goto LABEL_14;
    }
    sub_44DC90((__m128i *)v25, (_QWORD *)a1);
    if ( !a3 )
      goto LABEL_11;
LABEL_32:
    if ( v14 )
    {
      sub_44E690((__int64)v79, (const char *)&v75, 1);
      v26.m128_u64[0] = 0;
      v78 = 0;
      v30 = (__int64)sub_44E5A0;
      v77 = 0;
      v32 = sub_1697D0(
              v71,
              (__int64)sub_44E5A0,
              v25,
              v25,
              v25 + 8,
              a1,
              (__m128)0LL,
              a5,
              a6,
              a7,
              v42,
              v43,
              a10,
              a11,
              (unsigned __int8)a1 + 24);
LABEL_34:
      if ( v77 )
      {
        *(_QWORD *)&v78 = 0;
        *(double *)v26.m128_u64 = qfree(v77, (const char *)sub_44E5A0);
      }
      v44 = &v81;
      v79[0] = &stru_86F6A0;
      do
      {
        v45 = *((_QWORD *)v44 - 3);
        v44 -= 24;
        if ( v45 )
        {
          *((_QWORD *)v44 + 1) = 0;
          *(double *)v26.m128_u64 = qfree(v45, (const char *)sub_44E5A0);
        }
      }
      while ( v44 != &v80 );
      goto LABEL_60;
    }
    v30 = (__int64)sub_44E5A0;
    v32 = sub_1697D0(
            v71,
            (__int64)sub_44E5A0,
            v25,
            v25,
            v25 + 8,
            a1,
            (__m128)0LL,
            a5,
            a6,
            a7,
            v28,
            v29,
            a10,
            a11,
            (unsigned __int8)a1 + 24);
    goto LABEL_60;
  }
  *(_WORD *)(v25 + 64) = 4;
  sub_44DC90((__m128i *)v25, (_QWORD *)a1);
  if ( a3 )
    goto LABEL_32;
LABEL_11:
  v30 = 4194308;
  v31 = (const QT::QObject *)sub_2EF360(
                               v71,
                               4194308,
                               (__int64)sub_44E5A0,
                               v25,
                               v25,
                               v25 + 8,
                               v26,
                               a5,
                               a6,
                               a7,
                               v28,
                               v29,
                               a10,
                               a11,
                               a1);
  if ( !*(_DWORD *)(v25 + 100) )
  {
    v59 = QT::QMetaObject::cast((QT::QMetaObject *)&off_89B6C0, v31);
    v30 = 0xFFFFFFFFLL;
    *(_DWORD *)(*(_QWORD *)(v59 + 120) + 100LL) = 1;
    sub_4F9A60(v59, 0xFFFFFFFFLL);
  }
  v32 = 0;
LABEL_14:
  v33 = v75;
  if ( v75 )
  {
    v34 = v76;
    if ( (_QWORD)v76 )
    {
      v35 = 0;
      v36 = 0;
      do
      {
        v37 = (__int64 *)(v33 + v35);
        v38 = *(_QWORD *)(v33 + v35 + 48);
        if ( v38 )
        {
          v37[7] = 0;
          *(double *)v26.m128_u64 = qfree(v38, (const char *)v30);
        }
        v39 = v37[3];
        if ( v39 )
        {
          v37[4] = 0;
          *(double *)v26.m128_u64 = qfree(v39, (const char *)v30, *(double *)v26.m128_u64);
        }
        v40 = *v37;
        if ( *v37 )
        {
          v37[1] = 0;
          *(double *)v26.m128_u64 = qfree(v40, (const char *)v30, *(double *)v26.m128_u64);
        }
        v33 = v75;
        v35 += 88;
        ++v36;
      }
      while ( v34 != v36 );
    }
    *(_QWORD *)&v76 = 0;
    *(double *)v26.m128_u64 = qfree(v33, (const char *)v30);
  }
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    *(double *)v26.m128_u64 = qfree(v73, (const char *)v30, *(double *)v26.m128_u64);
  }
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    qfree(v71, (const char *)v30, *(double *)v26.m128_u64);
  }
  return v32;
}
