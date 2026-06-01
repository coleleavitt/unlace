__int64 __fastcall scan_action_t__::vfunc_0(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // rbx
  _WORD *v9; // rax
  const char *v10; // rsi
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  _QWORD *v19; // rax
  _QWORD *v20; // rbx
  __int64 (__fastcall *v21)(__int64); // rax
  __int64 *v22; // rdi
  __int64 v23; // rax
  __int64 (*v24)(); // rdx
  unsigned int v25; // eax
  __int64 (__fastcall *v26)(_QWORD *, unsigned int, __int64, __int64, __int64, __int64); // rax
  __int64 v27; // rdi
  __int64 (*v28)(); // rax
  __int64 v29; // rcx
  char *v30; // rdx
  __int64 v31; // r15
  char *v32; // rax
  __int64 v33; // rdi
  unsigned int v34; // r15d
  __int64 v35; // rdx
  __int64 v36; // r12
  __int64 v37; // rbx
  __int64 *v38; // rax
  __int64 v39; // rdi
  size_t v40; // rdx
  __int64 v41; // r12
  __int64 v42; // rbx
  __int64 *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // r12
  __int64 v47; // rbx
  __int64 *v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // r12
  __int64 v52; // rbx
  __int64 *v53; // rax
  __int64 v54; // rdi
  const char *error_string; // rax
  const char *v57; // r15
  __int64 v58; // rsi
  __int64 (__fastcall *v59)(__int64); // rax
  __int64 *v60; // rdi
  __int64 v61; // rax
  unsigned __int8 (*v62)(void); // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __m128 v67; // xmm4
  __m128 v68; // xmm5
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __m128 v72; // xmm4
  __m128 v73; // xmm5
  __int64 v74; // rdx
  size_t v75; // rbx
  char v76; // [rsp+0h] [rbp-100h]
  char v77; // [rsp+0h] [rbp-100h]
  unsigned int v78; // [rsp+14h] [rbp-ECh]
  size_t n; // [rsp+18h] [rbp-E8h]
  size_t nb; // [rsp+18h] [rbp-E8h]
  size_t na; // [rsp+18h] [rbp-E8h]
  unsigned int v82; // [rsp+2Ch] [rbp-D4h] BYREF
  __int64 v83; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v84; // [rsp+38h] [rbp-C8h]
  __int64 v85; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v86; // [rsp+58h] [rbp-A8h]
  size_t v87; // [rsp+70h] [rbp-90h] BYREF
  __int128 v88; // [rsp+78h] [rbp-88h]
  __int64 v89; // [rsp+90h] [rbp-70h] BYREF
  __int128 v90; // [rsp+98h] [rbp-68h]
  char *v91; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v92; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v93; // [rsp+C8h] [rbp-38h]

  v93 = __readfsqword(0x28u);
  v84 = 0;
  v83 = 0;
  v85 = 0;
  v87 = 0;
  v89 = 0;
  v86 = 0;
  v88 = 0;
  v90 = 0;
  v89 = qvector_reserve(&v89, 0, 1, 48);
  v8 = v89 + 48 * v90;
  *(_QWORD *)(v8 + 24) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)v8 = 0;
  *(_QWORD *)(v8 + 32) = 0xFFFFFFFCFFFFFFFCLL;
  *(_BYTE *)(v8 + 40) = 0;
  *(_OWORD *)(v8 + 8) = 0;
  *(_QWORD *)&v90 = v90 + 1;
  v9 = (_WORD *)qvector_reserve(v8, *(_QWORD *)v8, 3, 1);
  *(_QWORD *)v8 = v9;
  v10 = (const char *)&v83;
  *(_QWORD *)(v8 + 8) = 3;
  *v9 = 12079;
  *(_BYTE *)(*(_QWORD *)v8 + 2LL) = 0;
  if ( !(unsigned __int8)sub_435C20(
                           &v89,
                           (const char *)&v83,
                           1,
                           (__int64)&v85,
                           0.0,
                           a2,
                           a3,
                           *(double *)a4.m128_u64,
                           v11,
                           v12,
                           a7,
                           a8) )
  {
    sub_169700(
      (int)"The current operation was canceled\n",
      (__int64)&v83,
      v13,
      v14,
      v15,
      v16,
      (__m128)0LL,
      a2,
      a3,
      a4,
      v17,
      v18,
      a7,
      a8,
      v76);
    goto LABEL_18;
  }
  v19 = sub_426230(&v89, (const char *)&v83);
  v20 = (_QWORD *)sub_417080((__int64)v19);
  v21 = *(__int64 (__fastcall **)(__int64))(*v20 + 256LL);
  if ( v21 == vault_with_events_t__::vfunc_32 )
  {
    v22 = (__int64 *)v20[1];
    if ( v22 )
    {
      v23 = *v22;
      v24 = *(__int64 (**)())(*v22 + 480);
      if ( v24 == sub_178B60 )
      {
LABEL_5:
        v25 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *, _QWORD))(v23 + 224))(v22, &v82, 0);
        goto LABEL_6;
      }
      if ( !(unsigned __int8)v24() )
      {
        v22 = (__int64 *)v20[1];
        v23 = *v22;
        goto LABEL_5;
      }
    }
    v25 = 52;
    goto LABEL_50;
  }
  v25 = ((__int64 (__fastcall *)(_QWORD *, unsigned int *, _QWORD))v21)(v20, &v82, 0);
LABEL_6:
  if ( !v25 )
  {
    v10 = (const char *)v82;
    v26 = *(__int64 (__fastcall **)(_QWORD *, unsigned int, __int64, __int64, __int64, __int64))(*v20 + 400LL);
    if ( v26 == vault_with_events_t__::vfunc_50 )
    {
      v27 = v20[1];
      if ( !v27
        || (v28 = *(__int64 (**)())(*(_QWORD *)v27 + 480LL), v28 != sub_178B60)
        && (LODWORD(v10) = v82, (unsigned __int8)v28()) )
      {
        v78 = 52;
LABEL_55:
        error_string = (const char *)get_error_string(0);
        v91 = nullptr;
        v57 = error_string;
        v92 = 0;
        if ( error_string )
        {
          nb = strlen(error_string);
          v91 = (char *)qvector_reserve(&v91, 0, nb + 1, 1);
          *(_QWORD *)&v92 = nb + 1;
          memmove(v91, v57, nb);
          v91[nb] = 0;
        }
        v58 = v82;
        v59 = *(__int64 (__fastcall **)(__int64))(*v20 + 264LL);
        if ( v59 == vault_with_events_t__::vfunc_33 )
        {
          v60 = (__int64 *)v20[1];
          if ( v60 )
          {
            v61 = *v60;
            v62 = *(unsigned __int8 (**)(void))(*v60 + 480);
            if ( (char *)v62 != (char *)sub_178B60 )
            {
              v58 = v82;
              if ( v62() )
                goto LABEL_61;
              v60 = (__int64 *)v20[1];
              v61 = *v60;
            }
            (*(void (__fastcall **)(__int64 *, __int64))(v61 + 232))(v60, v58);
          }
        }
        else
        {
          ((void (__fastcall *)(_QWORD *, _QWORD))v59)(v20, v82);
        }
LABEL_61:
        v10 = v91;
        set_error_string(0, v91);
        if ( v78 == 48 )
        {
          if ( (_QWORD)v88 )
          {
            sub_169700(
              (int)"The selected file(s) are up-to-date:\n",
              (__int64)v10,
              v63,
              v64,
              v65,
              v66,
              (__m128)0LL,
              a2,
              a3,
              a4,
              v67,
              v68,
              a7,
              a8,
              v76);
            v74 = v87;
            v75 = v87 + 24 * v88;
            if ( v75 != v87 )
            {
              na = v87;
              do
              {
                v10 = &s1;
                if ( *(_QWORD *)(na + 8) )
                  v10 = *(const char **)na;
                sub_169700(
                  (int)"  %s\n",
                  (__int64)v10,
                  v74,
                  v69,
                  v70,
                  v71,
                  (__m128)0LL,
                  a2,
                  a3,
                  a4,
                  v72,
                  v73,
                  a7,
                  a8,
                  v77);
                na += 24LL;
              }
              while ( v75 != na );
            }
          }
          else
          {
            sub_169700(
              (int)"All files are up-to-date.",
              (__int64)v10,
              v63,
              v64,
              v65,
              v66,
              (__m128)0LL,
              a2,
              a3,
              a4,
              v67,
              v68,
              a7,
              a8,
              v76);
          }
        }
        else
        {
          v10 = (const char *)v78;
          sub_169700((int)"Scan failed: %d", v78, v63, v64, v65, v66, (__m128)0LL, a2, a3, a4, v67, v68, a7, a8, v76);
        }
        if ( v91 )
        {
          *(_QWORD *)&v92 = 0;
          qfree(v91, v10);
        }
        goto LABEL_51;
      }
      v92 = 0;
      v91 = nullptr;
      v78 = (*(__int64 (__fastcall **)(_QWORD, char **, _QWORD, size_t *, __int64 *, __int64 *, __int64))(*(_QWORD *)v20[1] + 376LL))(
              v20[1],
              &v91,
              (unsigned int)v10,
              &v87,
              &v83,
              &v85,
              7);
      v10 = (const char *)v78;
      (*(void (__fastcall **)(_QWORD *, _QWORD, char **, __int64))(*v20 + 24LL))(v20, v78, &v91, v29);
      v30 = v91;
      if ( v91 )
      {
        v31 = v92;
        if ( (_QWORD)v92 )
        {
          n = 0;
          do
          {
            v32 = &v30[32 * n];
            v33 = *((_QWORD *)v32 + 1);
            if ( v33 )
            {
              *((_QWORD *)v32 + 2) = 0;
              qfree(v33, (const char *)v78);
              v30 = v91;
            }
            ++n;
          }
          while ( v31 != n );
        }
        *(_QWORD *)&v92 = 0;
        qfree(v30, (const char *)v78);
      }
    }
    else
    {
      v78 = v26(v20, v82, (__int64)&v87, (__int64)&v83, (__int64)&v85, 7);
    }
    if ( v78 )
      goto LABEL_55;
LABEL_18:
    v34 = 1;
    goto LABEL_19;
  }
LABEL_50:
  v10 = "Failed to add worklist";
  sub_4168C0(v25, (__int64)"Failed to add worklist");
LABEL_51:
  v34 = 0;
LABEL_19:
  v35 = v89;
  if ( v89 )
  {
    v36 = v90;
    if ( (_QWORD)v90 )
    {
      v37 = 0;
      do
      {
        v38 = (__int64 *)(v35 + 48 * v37);
        v39 = *v38;
        if ( *v38 )
        {
          v38[1] = 0;
          qfree(v39, v10);
          v35 = v89;
        }
        ++v37;
      }
      while ( v36 != v37 );
    }
    *(_QWORD *)&v90 = 0;
    qfree(v35, v10);
  }
  v40 = v87;
  if ( v87 )
  {
    v41 = v88;
    if ( (_QWORD)v88 )
    {
      v42 = 0;
      do
      {
        v43 = (__int64 *)(v40 + 24 * v42);
        v44 = *v43;
        if ( *v43 )
        {
          v43[1] = 0;
          qfree(v44, v10);
          v40 = v87;
        }
        ++v42;
      }
      while ( v41 != v42 );
    }
    *(_QWORD *)&v88 = 0;
    qfree(v40, v10);
  }
  v45 = v85;
  if ( v85 )
  {
    v46 = v86;
    if ( (_QWORD)v86 )
    {
      v47 = 0;
      do
      {
        v48 = (__int64 *)(v45 + 24 * v47);
        v49 = *v48;
        if ( *v48 )
        {
          v48[1] = 0;
          qfree(v49, v10);
          v45 = v85;
        }
        ++v47;
      }
      while ( v46 != v47 );
    }
    *(_QWORD *)&v86 = 0;
    qfree(v45, v10);
  }
  v50 = v83;
  if ( v83 )
  {
    v51 = v84;
    if ( (_QWORD)v84 )
    {
      v52 = 0;
      do
      {
        v53 = (__int64 *)(v50 + 24 * v52);
        v54 = *v53;
        if ( *v53 )
        {
          v53[1] = 0;
          qfree(v54, v10);
          v50 = v83;
        }
        ++v52;
      }
      while ( v51 != v52 );
    }
    *(_QWORD *)&v84 = 0;
    qfree(v50, v10);
  }
  return v34;
}
