__int64 __fastcall sub_3EEB70(__int64 a1, double a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v5; // r14
  int v6; // eax
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rbx
  const char *v11; // r13
  __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r13
  __int128 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  int v19; // eax
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r8
  __m128i v24; // xmm0
  __int64 v25; // rdi
  __int64 v26; // r8
  __int64 v27; // r8
  char v28; // al
  int v29; // eax
  char v30; // al
  const char *v31; // rbp
  _QWORD *v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rbp
  unsigned __int8 *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // r8
  __m128i v38; // xmm0
  __int64 v39; // rdi
  __int64 v40; // [rsp+8h] [rbp-E0h]
  __int64 v41; // [rsp+8h] [rbp-E0h]
  __int64 v42; // [rsp+8h] [rbp-E0h]
  __int64 v43; // [rsp+8h] [rbp-E0h]
  __int64 v44; // [rsp+8h] [rbp-E0h]
  __int64 v45; // [rsp+8h] [rbp-E0h]
  __int64 v46; // [rsp+8h] [rbp-E0h]
  __int64 v47; // [rsp+10h] [rbp-D8h]
  char v48; // [rsp+10h] [rbp-D8h]
  __int64 v49; // [rsp+18h] [rbp-D0h]
  __int64 v50; // [rsp+18h] [rbp-D0h]
  __int64 v51; // [rsp+18h] [rbp-D0h]
  __int64 v52; // [rsp+18h] [rbp-D0h]
  __int64 v53; // [rsp+18h] [rbp-D0h]
  __int64 v54; // [rsp+18h] [rbp-D0h]
  __m128i v55; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+38h] [rbp-B0h] BYREF
  char v57[16]; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int8 v58[16]; // [rsp+50h] [rbp-98h] BYREF
  __m128i si128; // [rsp+60h] [rbp-88h] BYREF
  __int64 v60; // [rsp+70h] [rbp-78h]
  __m128i v61; // [rsp+78h] [rbp-70h] BYREF
  int v62; // [rsp+88h] [rbp-60h] BYREF
  __int64 v63; // [rsp+90h] [rbp-58h]
  int v64; // [rsp+98h] [rbp-50h]
  unsigned __int64 v65; // [rsp+A8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 32);
  v65 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(*(_QWORD *)(v2 + 64) + 1496LL);
  if ( !(unsigned __int8)sub_11FFA0(v3, nullptr) )
    goto LABEL_2;
  v10 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(*(_QWORD *)(v5 + 112) + 80LL) == 8 && *(_BYTE *)(v5 + 144) )
  {
    v29 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4LL);
    if ( v29 )
    {
      v11 = *(const char **)(v10 + 40);
      if ( v29 != 13 || strncmp(*(const char **)(v10 + 40), "__readx18", 9u) )
        goto LABEL_14;
      if ( (unsigned __int8)getinf_flag(3, 2048) )
      {
        v28 = sub_3ECF30(v5, (__int64)"_KPCR", v10, (__int64)off_4E5FA0, 2, a2);
        goto LABEL_42;
      }
    }
    else
    {
      v30 = getinf_flag(3, 2048);
      v31 = *(const char **)(v10 + 40);
      if ( v30 && !strcmp(*(const char **)(v10 + 40), "__readcr8") )
      {
        qfree(v31);
        *(_QWORD *)(v10 + 40) = qstrdup("KeGetCurrentIrql");
        v32 = (_QWORD *)j__qalloc_or_throw(80);
        v33 = *(_QWORD *)(v10 + 24);
        v34 = (__int64)v32;
        v32[4] = 0xFFFFFFFF00000000LL;
        v32[5] = 0;
        v32[6] = 0xFFFFFFFF00000000LL;
        v32[7] = 0;
        v32[8] = 0xFFFFFFFF00000000LL;
        v32[9] = 0;
        sub_330C90((__int64)v32, v33);
        sub_11D2D0(v34, v10);
        *(_DWORD *)v10 = 9;
        *(_BYTE *)(v10 + 32) = 4;
        *(_QWORD *)(v10 + 40) = v34;
        *(_DWORD *)(v10 + 36) = 1;
        *(_DWORD *)(v10 + 68) = *(_DWORD *)(v34 + 68);
        *(_DWORD *)(v34 + 68) = 1;
        *(_QWORD *)v58 = 34;
        copy_tinfo_t(*(_QWORD *)(v34 + 72) + 72LL, v58);
        clear_tinfo_t(v58);
        goto LABEL_43;
      }
      if ( strncmp(v31, "__readgs", 8u) )
      {
LABEL_60:
        v10 = *(_QWORD *)(a1 + 32);
        v11 = *(const char **)(v10 + 40);
        goto LABEL_14;
      }
      if ( (unsigned __int8)getinf_flag(3, 2048) )
      {
        v28 = sub_3ECF30(v5, (__int64)"_KPCR", v10, (__int64)&off_4E5FE0, 4, a2);
        goto LABEL_42;
      }
    }
    v28 = sub_3ECF30(v5, (__int64)"_TEB", v10, (__int64)off_4E5F60, 2, a2);
LABEL_42:
    if ( v28 )
      goto LABEL_43;
    goto LABEL_60;
  }
  v11 = *(const char **)(v10 + 40);
  if ( !strncmp(v11, "__readfs", 8u) )
  {
    if ( (unsigned __int8)getinf_flag(3, 2048) )
      v28 = sub_3ECF30(v5, (__int64)"_KPCR", v10, (__int64)&off_4E60A0, 4, a2);
    else
      v28 = sub_3ECF30(v5, (__int64)"_TEB", v10, (__int64)off_4E6060, 2, a2);
    goto LABEL_42;
  }
LABEL_14:
  v12 = *(_QWORD *)(a1 + 16);
  v56 = *(_QWORD *)(a1 + 24);
  if ( !strcmp(v11, "ptrauth_sign_unauthenticated") )
  {
    v13 = *(_QWORD *)(v10 + 72);
    if ( *(_QWORD *)(v13 + 32) != 3 )
    {
      if ( !under_debugger )
        sub_3835A0(0xCAF5u, (__int64)"ptrauth_sign_unauthenticated", a2);
      BUG();
    }
    v14 = *(_QWORD *)(v13 + 24);
    if ( *(_BYTE *)(v14 + 160) == 10 )
    {
      *((_QWORD *)&v15 + 1) = *(_QWORD *)(v14 + 168);
      if ( **((_BYTE **)&v15 + 1) == 1 )
      {
        *(_QWORD *)&v15 = v12;
        v40 = *(_QWORD *)(v10 + 72);
        v16 = sub_128E80(v15, (__int64)&v56, 1);
        if ( v16 )
        {
          if ( v16 == v56 )
          {
            v47 = v40;
            v41 = v16;
            if ( sub_1255A0((unsigned __int8 *)(v16 + 64), *(_QWORD *)(v14 + 168), 0) )
            {
              v17 = v47;
              v18 = v41;
              v48 = **(_BYTE **)(v47 + 24);
              v19 = *(_DWORD *)v41;
              if ( *(_DWORD *)v41 == 2 )
              {
                v35 = (unsigned __int8 *)(v41 + 48);
                v45 = v17;
                sub_123480((__int64)v58, v35);
                v62 = 0;
                v63 = 0;
                si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
                v60 = 0;
                v64 = 0;
                v61 = 0;
                sub_124BC0(v14 + 160, v58);
                *(_QWORD *)(v14 + 176) = si128.m128i_i64[0];
                copy_tinfo_t(v14 + 184, &si128.m128i_u64[1]);
                v36 = v60;
                v37 = v45;
                v60 = 0;
                v38 = _mm_loadu_si128(&v61);
                v61 = 0;
                v39 = *(_QWORD *)(v14 + 192);
                if ( v39 )
                {
                  v52 = v36;
                  *(_QWORD *)(v14 + 200) = 0;
                  v55 = v38;
                  qfree(v39);
                  v38 = _mm_load_si128(&v55);
                  v36 = v52;
                  v37 = v45;
                }
                *(_QWORD *)(v14 + 192) = v36;
                *(__m128i *)(v14 + 200) = v38;
                v53 = v37;
                copy_argloc(v14 + 216, &v62);
                *(_DWORD *)(v14 + 232) = v64;
                cleanup_argloc(&v62);
                v26 = v53;
                if ( v60 )
                {
                  v61.m128i_i64[0] = 0;
                  qfree(v60);
                  v26 = v53;
                }
                goto LABEL_33;
              }
              if ( v19 == 4
                || v19 == 20
                && (v49 = v17, (unsigned __int8)sub_11F7C0((char *)(v41 + 48), v58, 1u))
                && (v18 = v41, v17 = v49, *(_QWORD *)v58 == 0xFFFFFFFFFFFFLL) )
              {
                v20 = *(unsigned __int8 *)(v18 + 32);
                if ( (unsigned __int8)v20 <= 0xAu )
                {
                  v21 = 1124;
                  if ( _bittest64(&v21, v20) )
                  {
                    if ( (v20 & 0xF7) != 2 )
                    {
                      v54 = v17;
                      sub_123480((__int64)v58, (unsigned __int8 *)(v18 + 32));
                      si128.m128i_i64[0] = -1;
                      v46 = *(_QWORD *)(v14 + 168);
                      sub_123480((__int64)v57, v58);
                      sub_124BC0(v46, (unsigned __int8 *)v57);
                      sub_11C7E0((__int64)v57);
                      *(_QWORD *)(v46 + 16) = si128.m128i_i64[0];
                      sub_11C7E0((__int64)v58);
                      v27 = v54;
                      *(_DWORD *)(*(_QWORD *)(v14 + 168) + 4LL) = -1;
                      goto LABEL_34;
                    }
                    v42 = v17;
                    sub_123480((__int64)v58, (unsigned __int8 *)(v18 + 32));
                    v60 = 0;
                    v62 = 0;
                    si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
                    v63 = 0;
                    v64 = 0;
                    v61 = 0;
                    sub_124BC0(v14 + 160, v58);
                    *(_QWORD *)(v14 + 176) = si128.m128i_i64[0];
                    copy_tinfo_t(v14 + 184, &si128.m128i_u64[1]);
                    v22 = v60;
                    v23 = v42;
                    v60 = 0;
                    v24 = _mm_loadu_si128(&v61);
                    v61 = 0;
                    v25 = *(_QWORD *)(v14 + 192);
                    if ( v25 )
                    {
                      v50 = v22;
                      *(_QWORD *)(v14 + 200) = 0;
                      v55 = v24;
                      qfree(v25);
                      v24 = _mm_load_si128(&v55);
                      v22 = v50;
                      v23 = v42;
                    }
                    *(_QWORD *)(v14 + 192) = v22;
                    *(__m128i *)(v14 + 200) = v24;
                    v51 = v23;
                    copy_argloc(v14 + 216, &v62);
                    *(_DWORD *)(v14 + 232) = v64;
                    cleanup_argloc(&v62);
                    v26 = v51;
                    if ( v60 )
                    {
                      v61.m128i_i64[0] = 0;
                      qfree(v60);
                      v26 = v51;
                    }
LABEL_33:
                    v43 = v26;
                    clear_tinfo_t(&si128.m128i_u64[1]);
                    sub_11C7E0((__int64)v58);
                    v27 = v43;
LABEL_34:
                    v44 = v27;
                    sub_32C5A0(
                      v58,
                      *(_QWORD *)(*(_QWORD *)(v12 + 480) + 112LL),
                      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 64) + 1504LL) + 80LL));
                    copy_tinfo_t(*(_QWORD *)(v44 + 24) + 184LL, v58);
                    clear_tinfo_t(v58);
                    if ( (v48 & 0xF7) == 2 && (*(_BYTE *)(v14 + 160) & 0xF7) == 2 )
                      sub_11CEE0(v10 + 32, (__int64)"ptrauth_sign_constant");
                    goto LABEL_43;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_2:
  v6 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 == 12 )
  {
    if ( *(_BYTE *)(v3 + 32) != 4 )
      return 0;
    if ( (unsigned __int8)sub_11FFA0(*(_QWORD *)(v3 + 40), "KeGetPcr")
      && (unsigned __int8)sub_11F7C0((char *)(v3 + 48), v58, 0)
      && *(_QWORD *)v58 == 2432
      && (unsigned __int8)sub_3EA5C0(*(_QWORD *)(v3 + 40), (__int64)"KeGetCurrentPrcb", (__int64)"struct _KPRCB *;", 1) )
    {
      *(_DWORD *)v3 = 4;
      sub_11C7E0(v3 + 48);
      ++*(_DWORD *)(a1 + 40);
      return 0;
    }
    v6 = *(_DWORD *)v3;
  }
  if ( v6 == 23
    && *(_BYTE *)(v3 + 32) == 4
    && (unsigned __int8)sub_11FFA0(*(_QWORD *)(v3 + 40), "__clz")
    && (unsigned __int8)sub_152070(v3, v57) )
  {
    v8 = 1 << v57[0];
    if ( (unsigned __int64)*(int *)v57 >= 0x20 )
      v8 = 0;
    if ( 8 * *(_DWORD *)(v3 + 36) == v8 )
    {
      v9 = *(_QWORD *)(v3 + 40);
      sub_11C450((char *)(v9 + 32), *(char **)(*(_QWORD *)(v9 + 72) + 24LL));
      sub_120450(v9 + 48, *(_QWORD *)(v5 + 112), 0, *(_DWORD *)(v9 + 36), *(_QWORD *)(v9 + 24), 0);
      sub_11C7E0(v9 + 64);
      *(_DWORD *)v9 = 33;
      *(_DWORD *)(v9 + 68) = 1;
      *(_DWORD *)(v3 + 36) = 1;
      *(_DWORD *)v3 = 9;
      sub_11C7E0(v3 + 48);
LABEL_43:
      ++*(_DWORD *)(a1 + 40);
    }
  }
  return 0;
}
