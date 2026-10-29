unsigned __int64 __fastcall sub_489E10(__int64 a1, int *a2, __int64 a3)
{
  __int64 *v4; // r14
  __int64 v5; // rax
  __int64 **v6; // r13
  __m128i *v7; // rbp
  char *v8; // rax
  __int64 v9; // rdi
  __m128i si128; // xmm2
  char *i; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // r15
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 **v18; // rax
  __int64 **v19; // r12
  __int64 *v20; // r15
  __int64 *v21; // rbp
  __int64 **func; // rax
  __int64 v24; // rax
  __int64 *v25; // rax
  __int64 *v26; // r10
  __int64 v27; // r15
  __int64 *v28; // r14
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 *v31; // r14
  __int64 *v32; // rbp
  __int64 *v33; // r15
  unsigned __int64 v34; // rax
  __int64 *v35; // r14
  int v36; // ebp
  __int64 *v37; // r15
  __int64 **v38; // rax
  int v39; // ebp
  __int64 v40; // r14
  __int64 v41; // rbp
  char *v42; // rsi
  int v43; // ebp
  const char *v44; // rsi
  char *v45; // rdi
  int v46; // eax
  void *v47; // rdx
  __int64 v48; // rbp
  __int64 v49; // rbp
  char *v50; // rdx
  const char *v51; // rdx
  int v52; // ebp
  __int64 **v53; // rax
  unsigned __int64 v54; // r10
  __int64 *v55; // rbp
  _QWORD *v56; // rax
  __int64 v57; // rcx
  unsigned __int64 v58; // r10
  _QWORD *v59; // r8
  char v60; // al
  unsigned __int64 v61; // r10
  __int64 *v62; // rsi
  __int64 v63; // rcx
  __int64 v64; // r8
  int v65; // ebp
  __int64 v66; // r15
  __int64 v67; // rcx
  __int64 v68; // r8
  char v69; // al
  unsigned __int64 *v70; // [rsp+8h] [rbp-140h]
  char *v72; // [rsp+28h] [rbp-120h]
  void *v73; // [rsp+28h] [rbp-120h]
  int v74[4]; // [rsp+30h] [rbp-118h] BYREF
  int v75[2]; // [rsp+40h] [rbp-108h]
  unsigned __int64 v76; // [rsp+48h] [rbp-100h]
  char *s1; // [rsp+50h] [rbp-F8h] BYREF
  __int128 v78; // [rsp+58h] [rbp-F0h]
  char *v79; // [rsp+68h] [rbp-E0h] BYREF
  __int128 v80; // [rsp+70h] [rbp-D8h]
  char *s2; // [rsp+80h] [rbp-C8h] BYREF
  __int128 v82; // [rsp+88h] [rbp-C0h]
  __m256i v83; // [rsp+98h] [rbp-B0h] BYREF
  void *ptr; // [rsp+B8h] [rbp-90h]
  __int128 v85; // [rsp+C0h] [rbp-88h]
  __int64 v86; // [rsp+D0h] [rbp-78h]
  int v87; // [rsp+D8h] [rbp-70h]
  _QWORD v88[2]; // [rsp+E0h] [rbp-68h] BYREF
  __m128i v89; // [rsp+F0h] [rbp-58h]
  int v90[2]; // [rsp+108h] [rbp-40h]

  *(_QWORD *)v90 = __readfsqword(0x28u);
  v70 = (unsigned __int64 *)(16 * a3 + **(_QWORD **)(a1 + 40));
  sub_487AD0(a1, (__int64)a2, v70);
  if ( *(_QWORD *)(a1 + 136) )
    sub_459560(*(_QWORD *)(a1 + 32), 1u, *(_DWORD *)(a1 + 12), 0xFFFFFFFF, a1 + 128);
  *(_QWORD *)v75 = *(_QWORD *)(switch_dbctx(*(int *)(a1 + 8)) + 1672);
  sub_488C00((int *)a1, *(__int64 *)v75, v70, a2);
  v4 = (__int64 *)v70[1];
  *(__m128i *)v74 = _mm_unpacklo_epi64(
                      _mm_loadl_epi64((const __m128i *)off_2B2C410),
                      (__m128i)(unsigned __int64)sub_47F1C0);
  if ( *v70 < (unsigned __int64)v4 )
  {
    while ( 1 )
    {
      v5 = switch_dbctx(a2[2]);
      v6 = (__int64 **)sub_5060F0(*(_QWORD *)(v5 + 1672) + 1624LL, v4);
      v72 = *(char **)(switch_dbctx(*(int *)(a1 + 8)) + 1672);
      if ( v6 )
      {
        v7 = *(__m128i **)(switch_dbctx(*(int *)(a1 + 8)) + 1672);
        sub_3D6230(v7, *v6);
        sub_3D6230(v7, v6[1]);
        v8 = (char *)*v70;
        if ( *v70 < (unsigned __int64)v6[1] )
          v8 = (char *)v6[1];
      }
      else
      {
        v8 = (char *)*v70;
      }
      s1 = v8;
      v9 = *(int *)(a1 + 8);
      s2 = (char *)&off_2B2B6D0;
      *(_QWORD *)&v78 = v4;
      v82 = 0u;
      v83.m256i_i64[0] = (__int64)&s1;
      memset(&v83.m256i_u64[1], 0, 24);
      ptr = nullptr;
      v86 = 0;
      v87 = -1;
      v85 = 0;
      *(_QWORD *)&v82 = switch_dbctx(v9);
      si128 = _mm_load_si128((const __m128i *)v74);
      *((_QWORD *)&v82 + 1) = a1;
      v88[0] = &s2;
      v88[1] = 0;
      v89 = si128;
      if ( sub_4803E0 )
      {
        for ( i = s1;
              (unsigned __int64)i < (unsigned __int64)v78;
              i = (char *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 176LL))(a1, i) )
        {
          v12 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 168LL))(a1, i);
          if ( v12 )
          {
            if ( !v89.m128i_i64[0] )
              std::__throw_bad_function_call();
            if ( ((unsigned int (__fastcall *)(_QWORD *, __int64))v89.m128i_i64[1])(v88, v12) )
              break;
          }
        }
        if ( v89.m128i_i64[0] )
          ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v89.m128i_i64[0])(v88, v88, 3);
      }
      if ( v83.m256i_i64[2] )
      {
        v13 = switch_dbctx(*(int *)(a1 + 8));
        v14 = v83.m256i_i64[1];
        v15 = v13;
        v16 = v83.m256i_i64[1] + 16 * v83.m256i_i64[2];
        if ( v83.m256i_i64[1] != v16 )
        {
          do
          {
            sub_685C90(*(_QWORD *)(v15 + 1672));
            v14 += 16;
          }
          while ( v16 != v14 );
        }
      }
      s2 = (char *)&off_2B2B6D0;
      if ( ptr )
      {
        *(_QWORD *)&v85 = 0;
        qfree(ptr);
      }
      if ( v83.m256i_i64[1] )
      {
        v83.m256i_i64[2] = 0;
        qfree((void *)v83.m256i_i64[1]);
      }
      if ( !v6 || (unsigned __int64)*v6 < *v70 )
        return sub_488EA0((int *)a1, v75[0], v70, a2);
      v17 = switch_dbctx(*(int *)(a1 + 8));
      v18 = (__int64 **)sub_5060F0(*(_QWORD *)(v17 + 1672) + 1624LL, v4);
      v19 = v18;
      if ( v18 )
      {
        if ( *v6 < v18[1] && *v18 < v6[1] )
          break;
      }
      sub_489810(a1, a2, (__m128i *)v6, 0, 1);
LABEL_37:
      v4 = *v6;
LABEL_34:
      if ( *v70 >= (unsigned __int64)v4 )
        return sub_488EA0((int *)a1, v75[0], v70, a2);
    }
    if ( (unsigned __int8)sub_487F60(a1, (__int64)v18, a2[2], (__int64)v6) )
    {
      v39 = a2[2];
      switch_dbctx(*(int *)(a1 + 8));
      v78 = 0;
      s1 = nullptr;
      v40 = qword_2CCB598;
      v80 = 0;
      v79 = nullptr;
      sub_504090(&s1, *(_QWORD *)(qword_2CCB598 + 1672) + 1624LL, v19, 0);
      sub_504090(&v79, *(_QWORD *)(v40 + 1672) + 1624LL, v19, 1);
      switch_dbctx(v39);
      v41 = qword_2CCB598;
      s2 = nullptr;
      memset(&v83, 0, 24);
      v82 = 0;
      sub_504090(&s2, *(_QWORD *)(qword_2CCB598 + 1672) + 1624LL, v6, 0);
      sub_504090(&v83, *(_QWORD *)(v41 + 1672) + 1624LL, v6, 1);
      if ( (_QWORD)v82 )
      {
        v42 = s2;
        if ( (_QWORD)v78 )
        {
LABEL_54:
          v43 = strcmp(s1, v42);
          if ( !v43 )
            goto LABEL_55;
        }
        else
        {
          v43 = strcmp(haystack, s2);
          if ( !v43 )
            goto LABEL_55;
        }
        v47 = (void *)v83.m256i_i64[0];
      }
      else
      {
        v42 = (char *)haystack;
        if ( (_QWORD)v78 )
          goto LABEL_54;
LABEL_55:
        v44 = (const char *)v83.m256i_i64[0];
        if ( !v83.m256i_i64[1] )
          v44 = haystack;
        v45 = (char *)haystack;
        if ( (_QWORD)v80 )
          v45 = v79;
        v73 = (void *)v83.m256i_i64[0];
        v46 = strcmp(v45, v44);
        v47 = v73;
        v43 = v46;
      }
      if ( v47 )
      {
        v83.m256i_i64[1] = 0;
        qfree(v47);
      }
      if ( s2 )
      {
        *(_QWORD *)&v82 = 0;
        qfree(s2);
      }
      if ( v79 )
      {
        *(_QWORD *)&v80 = 0;
        qfree(v79);
      }
      if ( s1 )
      {
        *(_QWORD *)&v78 = 0;
        qfree(s1);
      }
      if ( v43 )
      {
        switch_dbctx(a2[2]);
        v48 = qword_2CCB598;
        v82 = 0;
        s2 = nullptr;
        memset(&v83, 0, 24);
        sub_504090(&s2, *(_QWORD *)(qword_2CCB598 + 1672) + 1624LL, v6, 0);
        sub_504090(&v83, *(_QWORD *)(v48 + 1672) + 1624LL, v6, 1);
        switch_dbctx(*(int *)(a1 + 8));
        v49 = qword_2CCB598;
        v50 = (char *)haystack;
        if ( (_QWORD)v82 )
          v50 = s2;
        sub_5083D0(*(_QWORD *)(qword_2CCB598 + 1672) + 1624LL, v19, v50, 0);
        v51 = haystack;
        if ( v83.m256i_i64[1] )
          v51 = (const char *)v83.m256i_i64[0];
        sub_5083D0(*(_QWORD *)(v49 + 1672) + 1624LL, v19, v51, 1);
        if ( v83.m256i_i64[0] )
        {
          v83.m256i_i64[1] = 0;
          qfree((void *)v83.m256i_i64[0]);
        }
        if ( s2 )
        {
          *(_QWORD *)&v82 = 0;
          qfree(s2);
        }
      }
      goto LABEL_37;
    }
    v20 = v6[1];
    v21 = *v19;
    if ( v19[1] != v20 )
    {
      func = (__int64 **)get_func(v6[1]);
      if ( func && v20 != *func )
        sub_459560(*(_QWORD *)(a1 + 32), 3u, *(_DWORD *)(a1 + 12), 0xFFFFFFFF, func);
      set_segm_end(v21, v20, 5);
      sub_505D70(v72 + 1624, v21);
      goto LABEL_34;
    }
    v24 = switch_dbctx(*(int *)(a1 + 8));
    v25 = (__int64 *)sub_5060F0(*(_QWORD *)(v24 + 1672) + 1624LL, v21);
    v26 = *v19;
    if ( v25 )
    {
      v27 = *v25;
      if ( *v25 >= (unsigned __int64)*v6 && (unsigned __int64)v6[1] >= v25[1] )
      {
        v76 = (unsigned __int64)*v19;
        v56 = (_QWORD *)get_func(v27);
        v58 = v76;
        v59 = v56;
        if ( v56 && v27 != *v56 )
        {
          sub_459560(*(_QWORD *)(a1 + 32), 3u, *(_DWORD *)(a1 + 12), 0xFFFFFFFF, v56);
          v58 = v76;
        }
        v76 = v58;
        v60 = move_segm_start(v58, v27, 4294967294LL, v57, v59);
        v61 = v76;
        if ( !v60 )
        {
          sub_685C90((int)v72);
          v61 = v76;
        }
        sub_505D70(v72 + 1624, v61);
        goto LABEL_34;
      }
    }
    v28 = *v6;
    if ( *v6 == v26 )
    {
LABEL_84:
      sub_489200(a1, (__int64)v19, a2[2], v6);
      goto LABEL_37;
    }
    v76 = (unsigned __int64)*v19;
    if ( v26 < v28 )
    {
      v52 = *(_DWORD *)(a1 + 168);
      v53 = (__int64 **)get_func(v28);
      v54 = v76;
      if ( v53 && v28 != *v53 )
      {
        sub_459560(*(_QWORD *)(a1 + 32), 3u, *(_DWORD *)(a1 + 12), 0xFFFFFFFF, v53);
        v54 = v76;
      }
      set_segm_end(v54, v28, v52 | 4u);
    }
    else
    {
      v29 = switch_dbctx(*(int *)(a1 + 8));
      v30 = sub_5060F0(*(_QWORD *)(v29 + 1672) + 1624LL, v76);
      v31 = *v19;
      v32 = *v6;
      v33 = (__int64 *)v30;
      if ( v30 )
      {
        v34 = *(_QWORD *)(v30 + 8);
        if ( (__int64 *)v34 == v31 )
        {
          v62 = *v6;
          v76 = v34;
          sub_487A80(a1, (__int64)v62);
          if ( (unsigned __int8)move_segm_start(v76, v32, 4294967294LL, v63, v64) )
            goto LABEL_82;
          v34 = v33[1];
          v32 = *v6;
        }
        v35 = v32;
        if ( (unsigned __int64)v32 < v34 )
        {
          v65 = *(_DWORD *)(a1 + 168);
          v66 = *v33;
          sub_487A80(a1, (__int64)v35);
          set_segm_end(v66, v35, v65 | 4u);
          v35 = *v6;
        }
      }
      else
      {
        sub_487A80(a1, (__int64)*v6);
        v69 = move_segm_start(v31, v32, 4294967294LL, v67, v68);
        v55 = *v6;
        v35 = *v6;
        if ( v69 )
        {
LABEL_83:
          v19 = (__int64 **)sub_505D70(v72 + 1624, v55);
          if ( !v19 )
          {
            if ( !under_debugger )
              interr(2061);
            BUG();
          }
          goto LABEL_84;
        }
      }
      v36 = *(_DWORD *)(a1 + 168);
      v37 = *v19;
      v38 = (__int64 **)get_func(v35);
      if ( v38 && v35 != *v38 )
        sub_459560(*(_QWORD *)(a1 + 32), 3u, *(_DWORD *)(a1 + 12), 0xFFFFFFFF, v38);
      if ( (unsigned __int8)set_segm_start(v37, v35, v36 | 4u) )
        goto LABEL_82;
      sub_685C90((int)v72);
    }
    sub_489810(a1, a2, (__m128i *)v6, 64, 0);
LABEL_82:
    v55 = *v6;
    goto LABEL_83;
  }
  return sub_488EA0((int *)a1, v75[0], v70, a2);
}
