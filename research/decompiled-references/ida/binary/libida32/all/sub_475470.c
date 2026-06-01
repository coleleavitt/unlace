unsigned __int64 __fastcall sub_475470(__int64 a1, int *a2, __int64 a3)
{
  unsigned int v4; // r14d
  __int64 v5; // rax
  __m128i *v6; // r13
  __int64 *v7; // rbp
  unsigned int v8; // eax
  __int64 v9; // rdi
  __m128i si128; // xmm2
  unsigned int i; // r15d
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // r15
  __int64 v16; // rbp
  __int64 v17; // rax
  __m128i *v18; // rax
  __m128i *v19; // r12
  unsigned __int32 v20; // r15d
  unsigned __int32 v21; // ebp
  _DWORD *func; // rax
  __int64 v24; // rax
  unsigned int *v25; // rax
  unsigned __int32 v26; // r10d
  unsigned int v27; // r15d
  unsigned __int32 v28; // r14d
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int32 v31; // r14d
  unsigned int v32; // ebp
  unsigned int *v33; // r15
  unsigned int v34; // eax
  unsigned int v35; // r14d
  int v36; // ebp
  unsigned __int32 v37; // r15d
  _DWORD *v38; // rax
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
  _DWORD *v53; // rax
  unsigned __int32 v54; // r10d
  unsigned __int32 v55; // ebp
  _DWORD *v56; // rax
  __int64 v57; // rcx
  unsigned __int32 v58; // r10d
  _DWORD *v59; // r8
  char v60; // al
  unsigned __int32 v61; // r10d
  __int64 v62; // rcx
  __int64 v63; // r8
  int v64; // ebp
  unsigned int v65; // r15d
  __int64 v66; // rcx
  __int64 v67; // r8
  char v68; // al
  unsigned int *v69; // [rsp+8h] [rbp-140h]
  char *v71; // [rsp+28h] [rbp-120h]
  void *v72; // [rsp+28h] [rbp-120h]
  int v73[4]; // [rsp+30h] [rbp-118h] BYREF
  int v74[2]; // [rsp+40h] [rbp-108h]
  unsigned __int32 v75; // [rsp+4Ch] [rbp-FCh]
  char *s1; // [rsp+50h] [rbp-F8h] BYREF
  __int128 v77; // [rsp+58h] [rbp-F0h]
  char *v78; // [rsp+68h] [rbp-E0h] BYREF
  __int128 v79; // [rsp+70h] [rbp-D8h]
  char *s2; // [rsp+80h] [rbp-C8h] BYREF
  __int128 v81; // [rsp+88h] [rbp-C0h]
  __m256i v82; // [rsp+98h] [rbp-B0h] BYREF
  void *ptr; // [rsp+B8h] [rbp-90h]
  __int128 v84; // [rsp+C0h] [rbp-88h]
  __int64 v85; // [rsp+D0h] [rbp-78h]
  int v86; // [rsp+D8h] [rbp-70h]
  _QWORD v87[2]; // [rsp+E0h] [rbp-68h] BYREF
  __m128i v88; // [rsp+F0h] [rbp-58h]
  unsigned __int64 v89; // [rsp+108h] [rbp-40h]

  v89 = __readfsqword(0x28u);
  v69 = (unsigned int *)(**(_QWORD **)(a1 + 40) + 8 * a3);
  sub_473270(a1, (__int64)a2, v69);
  if ( *(_QWORD *)(a1 + 136) )
    sub_445720(*(_QWORD *)(a1 + 32), 1u, *(_DWORD *)(a1 + 12), 0xFFFFFFFF, a1 + 128);
  *(_QWORD *)v74 = *(_QWORD *)(switch_dbctx(*(int *)(a1 + 8)) + 1480);
  sub_474330((int *)a1, *(__int64 *)v74, v69, a2);
  v4 = v69[1];
  *(__m128i *)v73 = _mm_unpacklo_epi64(
                      _mm_loadl_epi64((const __m128i *)off_2B02450),
                      (__m128i)(unsigned __int64)sub_46AC70);
  if ( *v69 < v4 )
  {
    while ( 1 )
    {
      v5 = switch_dbctx(a2[2]);
      v6 = (__m128i *)sub_4EEB90(*(_QWORD *)(v5 + 1480) + 1552LL, v4);
      v71 = *(char **)(switch_dbctx(*(int *)(a1 + 8)) + 1480);
      if ( v6 )
      {
        v7 = *(__int64 **)(switch_dbctx(*(int *)(a1 + 8)) + 1480);
        sub_3D0670(v7, v6->m128i_i32[0]);
        sub_3D0670(v7, v6->m128i_u32[1]);
        v8 = *v69;
        if ( *v69 < v6->m128i_i32[1] )
          v8 = v6->m128i_u32[1];
      }
      else
      {
        v8 = *v69;
      }
      s1 = (char *)__PAIR64__(v4, v8);
      v9 = *(int *)(a1 + 8);
      s2 = (char *)&off_2B01710;
      v81 = 0u;
      v82.m256i_i64[0] = (__int64)&s1;
      memset(&v82.m256i_u64[1], 0, 24);
      ptr = nullptr;
      v85 = 0;
      v86 = -1;
      v84 = 0;
      *(_QWORD *)&v81 = switch_dbctx(v9);
      si128 = _mm_load_si128((const __m128i *)v73);
      *((_QWORD *)&v81 + 1) = a1;
      v87[0] = &s2;
      v87[1] = 0;
      v88 = si128;
      if ( sub_46BE20 )
      {
        for ( i = (unsigned int)s1;
              i < HIDWORD(s1);
              i = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 176LL))(a1, i) )
        {
          v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, i);
          if ( v12 )
          {
            if ( !v88.m128i_i64[0] )
              std::__throw_bad_function_call();
            if ( ((unsigned int (__fastcall *)(_QWORD *, __int64))v88.m128i_i64[1])(v87, v12) )
              break;
          }
        }
        if ( v88.m128i_i64[0] )
          ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v88.m128i_i64[0])(v87, v87, 3);
      }
      if ( v82.m256i_i64[2] )
      {
        v13 = switch_dbctx(*(int *)(a1 + 8));
        v14 = v82.m256i_i64[1];
        v15 = v13;
        v16 = v82.m256i_i64[1] + 8 * v82.m256i_i64[2];
        if ( v82.m256i_i64[1] != v16 )
        {
          do
          {
            sub_666DD0(*(_QWORD *)(v15 + 1480));
            v14 += 8;
          }
          while ( v16 != v14 );
        }
      }
      s2 = (char *)&off_2B01710;
      if ( ptr )
      {
        *(_QWORD *)&v84 = 0;
        qfree(ptr);
      }
      if ( v82.m256i_i64[1] )
      {
        v82.m256i_i64[2] = 0;
        qfree((void *)v82.m256i_i64[1]);
      }
      if ( !v6 || v6->m128i_i32[0] < *v69 )
        return sub_4745D0((int *)a1, *(_QWORD **)v74, v69, a2);
      v17 = switch_dbctx(*(int *)(a1 + 8));
      v18 = (__m128i *)sub_4EEB90(*(_QWORD *)(v17 + 1480) + 1552LL, v4);
      v19 = v18;
      if ( v18 )
      {
        if ( v6->m128i_i32[0] < (unsigned __int32)v18->m128i_i32[1]
          && v18->m128i_i32[0] < (unsigned __int32)v6->m128i_i32[1] )
        {
          break;
        }
      }
      sub_474EE0(a1, a2, v6, 0, 1);
LABEL_37:
      v4 = v6->m128i_i32[0];
LABEL_34:
      if ( *v69 >= v4 )
        return sub_4745D0((int *)a1, *(_QWORD **)v74, v69, a2);
    }
    if ( (unsigned __int8)sub_473700(a1, (__int64)v18, a2[2], (__int64)v6) )
    {
      v39 = a2[2];
      switch_dbctx(*(int *)(a1 + 8));
      v77 = 0;
      s1 = nullptr;
      v40 = qword_2CA1698;
      v79 = 0;
      v78 = nullptr;
      sub_4ECB80(&s1, *(_QWORD *)(qword_2CA1698 + 1480) + 1552LL, v19, 0);
      sub_4ECB80(&v78, *(_QWORD *)(v40 + 1480) + 1552LL, v19, 1);
      switch_dbctx(v39);
      v41 = qword_2CA1698;
      s2 = nullptr;
      memset(&v82, 0, 24);
      v81 = 0;
      sub_4ECB80(&s2, *(_QWORD *)(qword_2CA1698 + 1480) + 1552LL, v6, 0);
      sub_4ECB80(&v82, *(_QWORD *)(v41 + 1480) + 1552LL, v6, 1);
      if ( (_QWORD)v81 )
      {
        v42 = s2;
        if ( (_QWORD)v77 )
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
        v47 = (void *)v82.m256i_i64[0];
      }
      else
      {
        v42 = (char *)haystack;
        if ( (_QWORD)v77 )
          goto LABEL_54;
LABEL_55:
        v44 = (const char *)v82.m256i_i64[0];
        if ( !v82.m256i_i64[1] )
          v44 = haystack;
        v45 = (char *)haystack;
        if ( (_QWORD)v79 )
          v45 = v78;
        v72 = (void *)v82.m256i_i64[0];
        v46 = strcmp(v45, v44);
        v47 = v72;
        v43 = v46;
      }
      if ( v47 )
      {
        v82.m256i_i64[1] = 0;
        qfree(v47);
      }
      if ( s2 )
      {
        *(_QWORD *)&v81 = 0;
        qfree(s2);
      }
      if ( v78 )
      {
        *(_QWORD *)&v79 = 0;
        qfree(v78);
      }
      if ( s1 )
      {
        *(_QWORD *)&v77 = 0;
        qfree(s1);
      }
      if ( v43 )
      {
        switch_dbctx(a2[2]);
        v48 = qword_2CA1698;
        v81 = 0;
        s2 = nullptr;
        memset(&v82, 0, 24);
        sub_4ECB80(&s2, *(_QWORD *)(qword_2CA1698 + 1480) + 1552LL, v6, 0);
        sub_4ECB80(&v82, *(_QWORD *)(v48 + 1480) + 1552LL, v6, 1);
        switch_dbctx(*(int *)(a1 + 8));
        v49 = qword_2CA1698;
        v50 = (char *)haystack;
        if ( (_QWORD)v81 )
          v50 = s2;
        sub_4F0D50(*(_QWORD *)(qword_2CA1698 + 1480) + 1552LL, v19, v50, 0);
        v51 = haystack;
        if ( v82.m256i_i64[1] )
          v51 = (const char *)v82.m256i_i64[0];
        sub_4F0D50(*(_QWORD *)(v49 + 1480) + 1552LL, v19, v51, 1);
        if ( v82.m256i_i64[0] )
        {
          v82.m256i_i64[1] = 0;
          qfree((void *)v82.m256i_i64[0]);
        }
        if ( s2 )
        {
          *(_QWORD *)&v81 = 0;
          qfree(s2);
        }
      }
      goto LABEL_37;
    }
    v20 = v6->m128i_u32[1];
    v21 = v19->m128i_i32[0];
    if ( v19->m128i_i32[1] != v20 )
    {
      func = (_DWORD *)get_func(v20);
      if ( func && v20 != *func )
        sub_445720(*(_QWORD *)(a1 + 32), 3u, *(_DWORD *)(a1 + 12), 0xFFFFFFFF, func);
      set_segm_end(v21, v20, 5);
      sub_4EE820(v71 + 1552, v21);
      goto LABEL_34;
    }
    v24 = switch_dbctx(*(int *)(a1 + 8));
    v25 = (unsigned int *)sub_4EEB90(*(_QWORD *)(v24 + 1480) + 1552LL, v21);
    v26 = v19->m128i_i32[0];
    if ( v25 )
    {
      v27 = *v25;
      if ( *v25 >= v6->m128i_i32[0] && v6->m128i_i32[1] >= v25[1] )
      {
        v75 = v19->m128i_i32[0];
        v56 = (_DWORD *)get_func(v27);
        v58 = v75;
        v59 = v56;
        if ( v56 && v27 != *v56 )
        {
          sub_445720(*(_QWORD *)(a1 + 32), 3u, *(_DWORD *)(a1 + 12), 0xFFFFFFFF, v56);
          v58 = v75;
        }
        v75 = v58;
        v60 = move_segm_start(v58, v27, 4294967294LL, v57, v59);
        v61 = v75;
        if ( !v60 )
        {
          sub_666DD0((int)v71);
          v61 = v75;
        }
        sub_4EE820(v71 + 1552, v61);
        goto LABEL_34;
      }
    }
    v28 = v6->m128i_i32[0];
    if ( v6->m128i_i32[0] == v26 )
    {
LABEL_84:
      sub_474920(a1, v19, a2[2], v6);
      goto LABEL_37;
    }
    v75 = v19->m128i_i32[0];
    if ( v26 < v28 )
    {
      v52 = *(_DWORD *)(a1 + 168);
      v53 = (_DWORD *)get_func(v28);
      v54 = v75;
      if ( v53 && v28 != *v53 )
      {
        sub_445720(*(_QWORD *)(a1 + 32), 3u, *(_DWORD *)(a1 + 12), 0xFFFFFFFF, v53);
        v54 = v75;
      }
      set_segm_end(v54, v28, v52 | 4u);
    }
    else
    {
      v29 = switch_dbctx(*(int *)(a1 + 8));
      v30 = sub_4EEB90(*(_QWORD *)(v29 + 1480) + 1552LL, v75);
      v31 = v19->m128i_i32[0];
      v32 = v6->m128i_i32[0];
      v33 = (unsigned int *)v30;
      if ( v30 )
      {
        v34 = *(_DWORD *)(v30 + 4);
        if ( v34 == v31 )
        {
          v75 = v34;
          sub_473220(a1, v32);
          if ( (unsigned __int8)move_segm_start(v75, v32, 4294967294LL, v62, v63) )
            goto LABEL_82;
          v34 = v33[1];
          v32 = v6->m128i_i32[0];
        }
        v35 = v32;
        if ( v32 < v34 )
        {
          v64 = *(_DWORD *)(a1 + 168);
          v65 = *v33;
          sub_473220(a1, v35);
          set_segm_end(v65, v35, v64 | 4u);
          v35 = v6->m128i_i32[0];
        }
      }
      else
      {
        sub_473220(a1, v32);
        v68 = move_segm_start(v31, v32, 4294967294LL, v66, v67);
        v55 = v6->m128i_i32[0];
        v35 = v6->m128i_i32[0];
        if ( v68 )
        {
LABEL_83:
          v19 = (__m128i *)sub_4EE820(v71 + 1552, v55);
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
      v37 = v19->m128i_i32[0];
      v38 = (_DWORD *)get_func(v35);
      if ( v38 && v35 != *v38 )
        sub_445720(*(_QWORD *)(a1 + 32), 3u, *(_DWORD *)(a1 + 12), 0xFFFFFFFF, v38);
      if ( (unsigned __int8)set_segm_start(v37, v35, v36 | 4u) )
        goto LABEL_82;
      sub_666DD0((int)v71);
    }
    sub_474EE0(a1, a2, v6, 64, 0);
LABEL_82:
    v55 = v6->m128i_i32[0];
    goto LABEL_83;
  }
  return sub_4745D0((int *)a1, *(_QWORD **)v74, v69, a2);
}

