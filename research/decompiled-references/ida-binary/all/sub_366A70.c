__int64 __fastcall sub_366A70(
        int a1,
        __int64 *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 (__fastcall *v14)(__int64); // rdx
  void (__fastcall **v16)(_QWORD, _QWORD, _QWORD); // rax
  __int64 (__fastcall *v18)(__int64); // rax
  unsigned __int64 v19; // r12
  __int64 v20; // rbx
  __int64 v21; // rax
  unsigned int v22; // r13d
  __int64 v23; // rsi
  double v25; // xmm0_8
  __int64 v26; // rdx
  char *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128 v30; // xmm4
  __m128 v31; // xmm5
  int v32; // eax
  const char *v33; // rdx
  void **v34; // rsi
  __int64 v35; // rdx
  char *v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __m128 v39; // xmm4
  __m128 v40; // xmm5
  void (__fastcall **v41)(__int64 *, __int64, void **); // rax
  const char *v42; // rdi
  __int64 v43; // rax
  __int64 srclang_parser; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rbx
  void (*v48)(void); // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __m128 v54; // xmm4
  __m128 v55; // xmm5
  const char *v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned int v59; // r13d
  const char *cc_parm; // rax
  const char *v61; // rax
  unsigned __int64 v62; // rsi
  unsigned __int8 v63; // al
  double v64; // xmm4_8
  double v65; // xmm5_8
  int v66; // eax
  const char *v67; // rdx
  char v68; // [rsp+0h] [rbp-A8h]
  size_t n; // [rsp+8h] [rbp-A0h]
  size_t na; // [rsp+8h] [rbp-A0h]
  const char *src; // [rsp+18h] [rbp-90h]
  const char *srca; // [rsp+18h] [rbp-90h]
  int v73; // [rsp+2Ch] [rbp-7Ch] BYREF
  void *v74; // [rsp+30h] [rbp-78h] BYREF
  __int128 v75; // [rsp+38h] [rbp-70h]
  void *v76; // [rsp+50h] [rbp-58h] BYREF
  __int128 v77; // [rsp+58h] [rbp-50h]
  unsigned __int64 v78; // [rsp+68h] [rbp-40h]

  v14 = form_actions_impl_t__::vfunc_9;
  v16 = (void (__fastcall **)(_QWORD, _QWORD, _QWORD))*a2;
  v78 = __readfsqword(0x28u);
  v18 = (__int64 (__fastcall *)(__int64))v16[9];
  if ( v18 == form_actions_impl_t__::vfunc_9 )
  {
    v19 = (unsigned int)(a1 + 1);
    v20 = a2[4];
    goto LABEL_3;
  }
  v19 = (unsigned int)(a1 + 1);
  v20 = v18((__int64)a2);
  if ( (unsigned int)v19 <= 0x18 )
  {
LABEL_3:
    switch ( (int)v19 )
    {
      case 0:
      case 2:
      case 20:
        (*(void (__fastcall **)(__int64 *, __int64, int *))*a2)(a2, 1, &v73);
        v21 = v73;
        if ( !v73 )
        {
          sub_34D7A0((__int64 *)v20, (_BYTE *)&dword_0 + 1);
          v21 = v73;
        }
        if ( a1 == 1 )
        {
          v59 = *(unsigned __int8 *)(**(_QWORD **)(v20 + 152) + v21);
          cc_parm = (const char *)cfg_get_cc_parm(
                                    *(unsigned __int8 *)(**(_QWORD **)(v20 + 152) + v21),
                                    "PREDEFINED_MACROS");
          v74 = nullptr;
          v75 = 0;
          if ( cc_parm )
          {
            src = cc_parm;
            n = strlen(cc_parm);
            v74 = (void *)qvector_reserve(&v74, 0, n + 1, 1);
            *(_QWORD *)&v75 = n + 1;
            memmove(v74, src, n);
            *((_BYTE *)v74 + n) = 0;
          }
          (*(void (__fastcall **)(__int64 *, __int64, void **))(*a2 + 8))(a2, 13, &v74);
          v61 = (const char *)cfg_get_cc_parm(v59, "HEADER_PATH");
          a3 = 0.0;
          v76 = nullptr;
          v77 = 0;
          if ( v61 )
          {
            srca = v61;
            na = strlen(v61);
            v76 = (void *)qvector_reserve(&v76, 0, na + 1, 1);
            *(_QWORD *)&v77 = na + 1;
            memmove(v76, srca, na);
            *((_BYTE *)v76 + na) = 0;
          }
          (*(void (__fastcall **)(__int64 *, __int64, void **))(*a2 + 8))(a2, 14, &v76);
          v62 = (unsigned int)v73;
          if ( v73 > 0 )
          {
            v63 = calc_default_sizeof_ldbl(v59);
            setinf(66, v63);
            v62 = v59;
            if ( (unsigned __int8)sub_34E6D0((__int64 *)v20, (const char *)v59, 0.0, a4, a5, a6, v64, v65, a9, a10) )
            {
              (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 56))(a2, 16);
              v66 = *(_DWORD *)(v20 + 144);
              v67 = nullptr;
              if ( v66 >= 0 && v66 < *(_DWORD *)(v20 + 8) )
              {
                v67 = &s1;
                if ( *(_QWORD *)(v20 + 104) )
                  v67 = *(const char **)(v20 + 96);
              }
              v62 = v59;
              sub_34A980((__int64)a2, v59, (__int64)v67);
            }
            sub_34ABA0((__int64)a2);
          }
          if ( v76 )
          {
            *(_QWORD *)&v77 = 0;
            a3 = qfree(v76, (const char *)v62);
          }
          if ( v74 )
          {
            *(_QWORD *)&v75 = 0;
            a3 = qfree(v74, (const char *)v62);
          }
          LODWORD(v21) = v73;
        }
        v22 = 2;
        while ( 1 )
        {
          v23 = v22++;
          (*(void (__fastcall **)(__int64 *, __int64, bool))(*a2 + 16))(a2, v23, (int)v21 > 0);
          if ( v22 == 16 )
            break;
          LODWORD(v21) = v73;
        }
        sub_3647B0(v20, a2, a1, a3);
        if ( a1 == 1 )
          goto LABEL_11;
        goto LABEL_12;
      case 17:
        v25 = (*(double (__fastcall **)(__int64 *, __int64, void **))*a2)(a2, 16, &v74);
        if ( (unsigned __int8)sub_34E490(v20, (int)v74, v25, a4, a5, a6, v30, v31, a9, a10, v26, v27, v28, v29) )
        {
          (*(void (__fastcall **)(__int64 *, __int64, void **))*a2)(a2, 1, &v76);
          v32 = *(_DWORD *)(v20 + 144);
          v33 = nullptr;
          if ( v32 >= 0 && v32 < *(_DWORD *)(v20 + 8) )
          {
            v33 = &s1;
            if ( *(_QWORD *)(v20 + 104) )
              v33 = *(const char **)(v20 + 96);
          }
          sub_34A980((__int64)a2, *(_BYTE *)(**(_QWORD **)(v20 + 152) + (int)v76), (__int64)v33);
          sub_34ABA0((__int64)a2);
        }
        goto LABEL_11;
      case 18:
        v34 = &v76;
        v76 = nullptr;
        v77 = 0;
        if ( (unsigned __int8)sub_366880(
                                (_QWORD *)v20,
                                (__int64 *)&v76,
                                0.0,
                                a4,
                                a5,
                                a6,
                                a7,
                                a8,
                                a9,
                                a10,
                                (__int64)v14,
                                a12,
                                a13,
                                a14) )
        {
          LOWORD(v74) = sub_34EBF0(v20, (const char *)&v76, v35, v36, v37, v38, 0.0, a4, a5, a6, v39, v40, a9, a10);
          v56 = &s1;
          if ( (_QWORD)v77 )
            LODWORD(v56) = (_DWORD)v76;
          v34 = &v74;
          if ( (unsigned int)sub_1697D0(
                               (int)v56,
                               (__int64)&v74,
                               v50,
                               v51,
                               v52,
                               v53,
                               (__m128)0LL,
                               a4,
                               a5,
                               a6,
                               v54,
                               v55,
                               a9,
                               a10,
                               v68) )
          {
            v34 = (void **)(unsigned __int16)v74;
            sub_34EF80(v20, (unsigned __int16)v74, v57, v58, 0.0);
          }
        }
        if ( v76 )
        {
          *(_QWORD *)&v77 = 0;
          qfree(v76, (const char *)v34);
        }
LABEL_11:
        (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a2 + 8))(a2, 18, v20 + 120);
LABEL_12:
        if ( (unsigned int)v19 <= 0x11 )
          goto LABEL_13;
        return 1;
      case 23:
        v41 = (void (__fastcall **)(__int64 *, __int64, void **))*a2;
        LODWORD(v76) = 0;
        (*v41)(a2, 19, &v76);
        v42 = &s1;
        v43 = **(_QWORD **)(v20 + 160) + 24LL * (int)v76;
        if ( *(_QWORD *)(v43 + 8) )
          v42 = *(const char **)v43;
        srclang_parser = find_srclang_parser(v42, 1);
        v47 = srclang_parser;
        if ( !srclang_parser )
          goto LABEL_58;
        v48 = *(void (**)(void))(srclang_parser + 56);
        if ( !v48 )
        {
          if ( !under_debugger )
          {
            interr(41116, 1, v45, v46, a3);
LABEL_58:
            if ( !under_debugger )
              interr(41115, 1, v45, v46, a3);
          }
          BUG();
        }
        v48();
        --*(_DWORD *)(v47 + 12);
        break;
      case 24:
        sub_3647B0(v20, a2, 23, a3);
        return 1;
      default:
        goto LABEL_32;
    }
    return 1;
  }
LABEL_32:
  if ( (unsigned int)v19 <= 0x11 )
  {
    v49 = 131077;
    if ( _bittest64(&v49, v19) )
    {
LABEL_13:
      (*(void (__fastcall **)(__int64 *, __int64, bool))(*a2 + 16))(a2, 16, *(_QWORD *)(v20 + 32) != 0);
      (*(void (__fastcall **)(__int64 *, __int64, bool))(*a2 + 16))(a2, 17, *(_QWORD *)(v20 + 80) != 0);
      if ( a1 == 1 )
        (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a2 + 8))(a2, 16, v20 + 144);
    }
  }
  return 1;
}
