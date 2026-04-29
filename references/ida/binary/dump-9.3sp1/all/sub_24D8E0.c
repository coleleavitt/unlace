_QWORD *__fastcall sub_24D8E0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  _DWORD *exception; // rdi
  __int64 v5; // rax
  __int64 v6; // r12
  int v7; // eax
  __int64 v8; // r14
  int v9; // ebp
  _QWORD *v10; // rdx
  unsigned __int64 i; // rax
  int v12; // eax
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rbp
  unsigned __int64 v24; // rbx
  char v25; // r9
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rsi
  unsigned __int64 v30; // r15
  __int64 v31; // rax
  int v32; // edx
  int v33; // edx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rbp
  __int64 v43; // r15
  _QWORD *v44; // rcx
  __int64 tinfo_size; // rax
  int v46; // ecx
  __int64 v47; // rdx
  _QWORD *v48; // rax
  __int64 v49; // rdi
  __int64 v50; // r12
  __int64 v51; // rbp
  _QWORD *v52; // rbx
  __int64 v53; // rdi
  __int64 v54; // rdi
  __int64 v56; // rax
  __int64 *v57; // rdx
  __int64 v58; // rcx
  unsigned __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 *v61; // rax
  __int64 v62; // rcx
  unsigned __int64 v63; // rax
  __int64 v64; // rdi
  int v65; // r9d
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  int v69; // r9d
  __int64 v70; // rbx
  __int64 v71; // rax
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rsi
  unsigned int v74; // eax
  __int64 v75; // rdi
  int v76; // r9d
  _QWORD *v77; // [rsp+8h] [rbp-170h]
  int v78; // [rsp+10h] [rbp-168h]
  __int64 v79; // [rsp+10h] [rbp-168h]
  __int64 *v80; // [rsp+18h] [rbp-160h]
  __int64 v81; // [rsp+20h] [rbp-158h]
  __int64 v82; // [rsp+28h] [rbp-150h]
  _QWORD *v83; // [rsp+38h] [rbp-140h]
  __int64 v84; // [rsp+50h] [rbp-128h]
  _QWORD *v85; // [rsp+60h] [rbp-118h]
  char v86; // [rsp+6Ch] [rbp-10Ch]
  __int64 v88; // [rsp+88h] [rbp-F0h] BYREF
  __int64 v89; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v90; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v91[2]; // [rsp+A0h] [rbp-D8h] BYREF
  void *v92; // [rsp+B0h] [rbp-C8h] BYREF
  __int128 v93; // [rsp+B8h] [rbp-C0h]
  __int64 tinfo_property; // [rsp+D0h] [rbp-A8h] BYREF
  __int128 v95; // [rsp+D8h] [rbp-A0h]
  __int64 v96; // [rsp+E8h] [rbp-90h]
  __int64 v97; // [rsp+F0h] [rbp-88h]
  __int64 v98; // [rsp+F8h] [rbp-80h]
  __int128 v99; // [rsp+100h] [rbp-78h]
  __int64 v100; // [rsp+110h] [rbp-68h]
  __int128 v101; // [rsp+118h] [rbp-60h]
  char v102; // [rsp+128h] [rbp-50h]
  unsigned __int64 v103; // [rsp+138h] [rbp-40h]

  v82 = a2;
  v86 = a4;
  v103 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 64) != 8 )
  {
    if ( !under_debugger )
      sub_383060(50403);
    goto LABEL_106;
  }
  v6 = *(_QWORD *)(a2 + 72);
  v7 = *(_DWORD *)(v6 + 284);
  if ( v7 == 1 )
  {
    v71 = j__qalloc_or_throw(64, a2, (__int64)a3, a4);
    *(_QWORD *)(v71 + 8) = 0xFFFFFFFF00000000LL;
    v83 = (_QWORD *)v71;
    *(_QWORD *)v71 = -1;
    *(_QWORD *)(v71 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v71 + 40) = 0;
    *(_QWORD *)(v71 + 48) = 0;
    *(_DWORD *)(v71 + 56) = 0;
    *(_OWORD *)(v71 + 24) = 0;
    return v83;
  }
  v8 = a1;
  if ( v7 == 25 )
  {
    if ( *(_QWORD *)(v6 + 32) != 2 )
    {
      if ( !under_debugger )
        sub_383060(51580);
      goto LABEL_106;
    }
    v56 = *(_QWORD *)(v6 + 24);
    if ( *(_BYTE *)(v56 + 80) == 9 )
    {
      v57 = *(__int64 **)(v56 + 88);
      v58 = *v57;
      v59 = *((int *)v57 + 4);
      if ( *(_QWORD *)(v58 + 440) < v59
        || (a1 = v56 + 104,
            a2 = *(_QWORD *)(v58 + 432) + 104 * v59 + 80,
            copy_tinfo_t(),
            v60 = *(_QWORD *)(v6 + 24),
            v61 = *(__int64 **)(v60 + 88),
            v62 = *v61,
            v63 = *((int *)v61 + 4),
            *(_QWORD *)(v62 + 440) < v63) )
      {
        sub_23E380(a1, a2);
      }
      *(_DWORD *)(v60 + 84) = *(_DWORD *)(*(_QWORD *)(v62 + 432) + 104 * v63 + 88);
      v6 = *(_QWORD *)(v82 + 72);
    }
  }
  v85 = *(_QWORD **)(*(_QWORD *)(v8 + 176) + 8LL);
  v9 = (*(int *)(v6 + 280) >> 1) & 4 | (*(int *)(v6 + 280) >> 2) & 1;
  if ( *(_BYTE *)(v82 + 32) == 11 )
  {
    v88 = 0;
    goto LABEL_9;
  }
  v88 = 0;
  if ( (v9 & 3) != 0 )
    goto LABEL_9;
  v10 = (_QWORD *)v85[172];
  if ( !v10 )
    goto LABEL_9;
  i = *v10 & 0xFFFFFFFFFFFFFFFCLL;
  if ( i )
  {
    if ( (*(_BYTE *)i & 2) != 0 )
      goto LABEL_9;
    v72 = *(_QWORD *)(i + 24);
    v73 = *(_QWORD *)(v82 + 24);
    if ( v73 >= v72 )
      goto LABEL_81;
LABEL_78:
    for ( i = *(_QWORD *)(i + 8); ; i = *(_QWORD *)(i + 16) )
    {
      if ( (*(_BYTE *)i & 2) != 0 )
        goto LABEL_9;
      v72 = *(_QWORD *)(i + 24);
      if ( v73 < v72 )
        goto LABEL_78;
LABEL_81:
      if ( v72 >= v73 )
        break;
    }
    if ( v10 == (_QWORD *)i )
    {
LABEL_9:
      sub_336290(&tinfo_property, v6);
      copy_tinfo_t();
      clear_tinfo_t();
      if ( !under_debugger )
        sub_383060(52359);
      goto LABEL_106;
    }
  }
  copy_tinfo_t();
  if ( *(_DWORD *)(v82 + 68) )
  {
    tinfo_property = get_tinfo_property();
    if ( (get_tinfo_property() & 0x3F) != 1 )
    {
      clear_tinfo_t();
      goto LABEL_10;
    }
    clear_tinfo_t();
    goto LABEL_9;
  }
LABEL_10:
  tinfo_property = get_tinfo_property();
  copy_tinfo_t();
  clear_tinfo_t();
  v89 = get_tinfo_property();
  v12 = *(_DWORD *)(v82 + 68);
  if ( v12 )
  {
    if ( get_tinfo_size() < (unsigned __int64)v12 && (get_tinfo_property() & 0xF) != 9 )
    {
      v74 = get_tinfo_property();
      sub_32C430(&tinfo_property, *(_QWORD *)(*(_QWORD *)(v8 + 328) + 112LL), *(unsigned int *)(v82 + 68), v74);
      copy_tinfo_t();
      clear_tinfo_t();
      v75 = *(_QWORD *)(v8 + 328);
      tinfo_property = 0;
      *(_QWORD *)&v95 = 0;
      sub_32DC20(v75, (unsigned int)&v88, -1, (unsigned int)&v89, (unsigned int)&tinfo_property, v76);
      cleanup_argloc();
    }
  }
  else if ( (get_tinfo_property() & 0x3F) != 1 )
  {
    tinfo_property = 1;
    copy_tinfo_t();
    clear_tinfo_t();
    v64 = *(_QWORD *)(v8 + 328);
    tinfo_property = 0;
    *(_QWORD *)&v95 = 0;
    sub_32DC20(v64, (unsigned int)&v88, -1, (unsigned int)&v89, (unsigned int)&tinfo_property, v65);
    cleanup_argloc();
  }
  sub_32C540(&v90, *(_QWORD *)(*(_QWORD *)(v8 + 328) + 112LL), &v88);
  if ( *(_DWORD *)v82 == 57 )
  {
    v13 = (_QWORD *)&word_2;
    v16 = sub_24D0D0(v8, v82 + 32, v82 + 48, (__int64)&v88);
    if ( (get_tinfo_property() & 0xF) != 0xA )
    {
      v13 = &v90;
      sub_244E70(v16, (__int64)&v90, v14, v15);
    }
  }
  else
  {
    v13 = *(__int64 **)(v82 + 24);
    v16 = sub_249AF0(v8, v13, v82 + 32, &v90, &v90, 16);
  }
  v17 = j__qalloc_or_throw(64, (__int64)v13, v14, v15);
  *(_QWORD *)v17 = -1;
  v18 = v17;
  *(_QWORD *)(v17 + 24) = v16;
  *(_DWORD *)(v17 + 8) = 57;
  *(_QWORD *)(v17 + 12) = -1;
  *(_QWORD *)(v17 + 32) = 0;
  *(_QWORD *)(v17 + 40) = 0;
  *(_QWORD *)(v17 + 48) = 0;
  *(_DWORD *)(v17 + 56) = 0;
  v83 = (_QWORD *)v17;
  *(_QWORD *)v17 = *(_QWORD *)(v82 + 24);
  v19 = v89;
  v89 = 0;
  *(_QWORD *)(v18 + 48) = v19;
  v22 = qalloc_or_throw(40, (__int64)v13, v20, v21);
  tinfo_property = 0;
  tinfo_property = get_tinfo_property();
  *(_QWORD *)v22 = 0;
  *(_QWORD *)(v22 + 24) = 0;
  *(_OWORD *)(v22 + 8) = 0;
  copy_tinfo_t();
  *(_DWORD *)(v22 + 32) = v9;
  v83[4] = v22;
  clear_tinfo_t();
  v23 = *(_QWORD *)(v6 + 32);
  v80 = (__int64 *)v83[4];
  sub_246200(v80, (int)v23);
  tinfo_property = 0;
  v96 = 0;
  v97 = 0;
  v98 = 0;
  v100 = 0;
  v102 = 16;
  v95 = 0;
  v99 = 0;
  v101 = 0;
  v91[0] = 0;
  v91[0] = get_tinfo_property();
  LOBYTE(v22) = get_tinfo_details();
  clear_tinfo_t();
  if ( !(_BYTE)v22 )
    get_tinfo_details();
  v24 = 0;
  v81 = (unsigned int)(v23 - 1);
  if ( (int)v23 > 0 )
  {
    while ( 1 )
    {
      v42 = 80 * v24 + *(_QWORD *)(v6 + 24);
      v77 = (_QWORD *)(v42 + 24);
      if ( v24 < (unsigned __int64)v95 )
        v77 = (_QWORD *)(tinfo_property + 80 * v24 + 64);
      v43 = *(int *)(v42 + 4);
      if ( v43 != get_tinfo_size() )
        break;
      v44 = (_QWORD *)(v42 + 24);
      if ( *(_BYTE *)v42 == 10 && **(_BYTE **)(v42 + 8) == 6 )
      {
        sub_E7D60();
        v44 = (_QWORD *)(v42 + 24);
      }
      v25 = 2;
      if ( (*(_BYTE *)(v6 + 281) & 1) != 0 )
        v25 = 4 * (*(_DWORD *)(v6 + 8) - 1 == (_DWORD)v24) + 2;
      v26 = sub_249AF0(v8, (__int64 *)0xFFFFFFFFFFFFFFFFLL, v42, v44, v44, v25);
      v27 = v26;
      if ( !v26 )
      {
        if ( !under_debugger )
          sub_383060(50405);
        goto LABEL_106;
      }
      v28 = *v80;
      *(_BYTE *)(v28 + 72 * v24 + 60) = *(_DWORD *)(v6 + 8) <= (int)v24;
      v29 = *(_QWORD *)(v8 + 328);
      v30 = v28 + 72 * v24;
      v78 = *(_DWORD *)(*(_QWORD *)(v29 + 112) + 80LL);
      if ( !(unsigned __int8)sub_246B40(v26, v29, v77) )
      {
        if ( *(_BYTE *)(v30 + 60) )
        {
          if ( (get_tinfo_property() & 0xF) != 0xB )
          {
            tinfo_size = get_tinfo_size();
            v46 = v78;
            v84 = v78 - 1;
            v79 = v84 + tinfo_size;
            if ( (((v84 + tinfo_size) ^ (v84 + get_tinfo_size())) & -v46) != 0 )
              v27 = sub_244E70(v27, (__int64)v77, v47, v79);
          }
        }
      }
      v31 = *(_QWORD *)v27;
      *(_QWORD *)v27 = *(_QWORD *)v30;
      v32 = *(_DWORD *)(v30 + 8);
      *(_QWORD *)v30 = v31;
      LODWORD(v31) = *(_DWORD *)(v27 + 8);
      *(_DWORD *)(v27 + 8) = v32;
      v33 = *(_DWORD *)(v30 + 12);
      *(_DWORD *)(v30 + 8) = v31;
      LODWORD(v31) = *(_DWORD *)(v27 + 12);
      *(_DWORD *)(v27 + 12) = v33;
      v34 = *(_QWORD *)(v30 + 24);
      *(_DWORD *)(v30 + 12) = v31;
      v35 = *(_QWORD *)(v27 + 24);
      *(_QWORD *)(v27 + 24) = v34;
      v36 = *(_QWORD *)(v30 + 32);
      *(_QWORD *)(v30 + 24) = v35;
      v37 = *(_QWORD *)(v27 + 32);
      *(_QWORD *)(v27 + 32) = v36;
      v38 = *(_QWORD *)(v30 + 40);
      *(_QWORD *)(v30 + 32) = v37;
      v39 = *(_QWORD *)(v27 + 40);
      *(_QWORD *)(v27 + 40) = v38;
      v40 = *(_QWORD *)(v30 + 48);
      *(_QWORD *)(v30 + 40) = v39;
      v41 = *(_QWORD *)(v27 + 48);
      *(_QWORD *)(v27 + 48) = v40;
      LODWORD(v40) = *(_DWORD *)(v30 + 56);
      *(_QWORD *)(v30 + 48) = v41;
      LODWORD(v41) = *(_DWORD *)(v27 + 56);
      *(_DWORD *)(v27 + 56) = v40;
      *(_DWORD *)(v30 + 56) = v41;
      if ( v27 )
      {
        sub_255630(v27);
        clear_tinfo_t();
        j__qfree(v27);
      }
      copy_tinfo_t();
      if ( *(_QWORD *)v30 == -1 )
        *(_QWORD *)v30 = *(_QWORD *)(v42 + 16);
      if ( v24 == v81 )
        goto LABEL_38;
      ++v24;
    }
    if ( !under_debugger )
      sub_383060(50404);
LABEL_106:
    BUG();
  }
LABEL_38:
  if ( v86 )
  {
    sub_64000(v91, v6 + 96);
    v92 = nullptr;
    v93 = 0;
    v70 = *(_QWORD *)(v6 + 120);
    if ( v70 )
    {
      v92 = (void *)qalloc_or_throw(16 * v70, v6 + 96, v66, v67);
      *((_QWORD *)&v93 + 1) = v70;
      memcpy(v92, *(const void **)(v6 + 112), 16 * v70);
      *(_QWORD *)&v93 = v70;
    }
    sub_64640(v91, (__int64 *)(v6 + 240), v66, v67, v68, v69);
    sub_317C60(&v92, v6 + 256);
    if ( !(unsigned __int8)sub_64880(v91) || (_QWORD)v93 )
    {
      if ( v92 )
      {
        *(_QWORD *)&v93 = 0;
        qfree((__int64)v92);
      }
      qfree(v91[0]);
      if ( *(_QWORD *)(v6 + 56) != 1 )
      {
        if ( !under_debugger )
          sub_383060(50406);
        goto LABEL_106;
      }
      sub_32C270(v91, *(_QWORD *)(*(_QWORD *)(v8 + 328) + 112LL), *(unsigned int *)(*(_QWORD *)(v6 + 48) + 4LL));
      v83 = sub_24AA50(v8, *(__int64 **)(v82 + 24), *(_QWORD *)(v6 + 48), v91, (__int64)v83);
      clear_tinfo_t();
    }
    else
    {
      if ( v92 )
        qfree((__int64)v92);
      qfree(v91[0]);
    }
  }
  v48 = sub_1CE9E0((__int64)v85);
  if ( v48 && v48[4] != v85[11] )
  {
    if ( v83 )
    {
      sub_255630(v83);
      clear_tinfo_t();
      j__qfree((__int64)v83);
    }
    exception = __cxa_allocate_exception(0x30u);
    v5 = v85[5];
    *(_QWORD *)exception = off_4DBCD0;
    exception[2] = -17;
    *((_QWORD *)exception + 2) = v5;
    *((_QWORD *)exception + 3) = 0;
    *((_OWORD *)exception + 2) = 0;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_7A4C0);
  }
  sub_246B40((__int64)v83, *(_QWORD *)(v8 + 328), a3);
  if ( v100 )
  {
    *(_QWORD *)&v101 = 0;
    qfree(v100);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v49 = tinfo_property;
  if ( tinfo_property )
  {
    v50 = v95;
    if ( (_QWORD)v95 )
    {
      v51 = 0;
      do
      {
        v52 = (_QWORD *)(v49 + 80 * v51);
        clear_tinfo_t();
        v53 = v52[5];
        if ( v53 )
        {
          v52[6] = 0;
          qfree(v53);
        }
        v54 = v52[2];
        if ( v54 )
        {
          v52[3] = 0;
          qfree(v54);
        }
        ++v51;
        cleanup_argloc();
        v49 = tinfo_property;
      }
      while ( v50 != v51 );
    }
    *(_QWORD *)&v95 = 0;
    qfree(v49);
  }
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  return v83;
}
