_QWORD *__fastcall sub_24D8E0(__int64 a1, __int64 a2, _QWORD *a3, char a4)
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
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rbp
  unsigned __int64 v19; // rbx
  char v20; // r9
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rsi
  unsigned __int64 v25; // r15
  __int64 v26; // rax
  int v27; // edx
  int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rbp
  __int64 v38; // r15
  _QWORD *v39; // rcx
  __int64 tinfo_size; // rax
  int v41; // ecx
  _QWORD *v42; // rax
  __int64 v43; // rdi
  __int64 v44; // r12
  __int64 v45; // rbp
  _QWORD *v46; // rbx
  __int64 v48; // rax
  __int64 *v49; // rdx
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 *v53; // rax
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  __int64 v56; // rdi
  int v57; // r9d
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  int v61; // r9d
  __int64 v62; // rbx
  __int64 v63; // rax
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rsi
  unsigned int v66; // eax
  __int64 v67; // rdi
  int v68; // r9d
  _QWORD *v69; // [rsp+8h] [rbp-170h]
  int v70; // [rsp+10h] [rbp-168h]
  __int64 *v71; // [rsp+18h] [rbp-160h]
  __int64 v72; // [rsp+20h] [rbp-158h]
  __int64 v73; // [rsp+28h] [rbp-150h]
  _QWORD *v74; // [rsp+38h] [rbp-140h]
  _QWORD *v75; // [rsp+60h] [rbp-118h]
  __int64 v78; // [rsp+88h] [rbp-F0h] BYREF
  __int64 v79; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v80; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v81[2]; // [rsp+A0h] [rbp-D8h] BYREF
  void *v82; // [rsp+B0h] [rbp-C8h] BYREF
  __int128 v83; // [rsp+B8h] [rbp-C0h]
  __int64 tinfo_property; // [rsp+D0h] [rbp-A8h] BYREF
  __int128 v85; // [rsp+D8h] [rbp-A0h]
  __int64 v86; // [rsp+E8h] [rbp-90h]
  __int64 v87; // [rsp+F0h] [rbp-88h]
  __int64 v88; // [rsp+F8h] [rbp-80h]
  __int128 v89; // [rsp+100h] [rbp-78h]
  __int64 v90; // [rsp+110h] [rbp-68h]
  __int128 v91; // [rsp+118h] [rbp-60h]
  char v92; // [rsp+128h] [rbp-50h]
  unsigned __int64 v93; // [rsp+138h] [rbp-40h]

  v73 = a2;
  v93 = __readfsqword(0x28u);
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
    v63 = j__qalloc_or_throw();
    *(_QWORD *)(v63 + 8) = 0xFFFFFFFF00000000LL;
    v74 = (_QWORD *)v63;
    *(_QWORD *)v63 = -1;
    *(_QWORD *)(v63 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v63 + 40) = 0;
    *(_QWORD *)(v63 + 48) = 0;
    *(_DWORD *)(v63 + 56) = 0;
    *(_OWORD *)(v63 + 24) = 0;
    return v74;
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
    v48 = *(_QWORD *)(v6 + 24);
    if ( *(_BYTE *)(v48 + 80) == 9 )
    {
      v49 = *(__int64 **)(v48 + 88);
      v50 = *v49;
      v51 = *((int *)v49 + 4);
      if ( *(_QWORD *)(v50 + 440) < v51
        || (a1 = v48 + 104,
            a2 = *(_QWORD *)(v50 + 432) + 104 * v51 + 80,
            copy_tinfo_t(),
            v52 = *(_QWORD *)(v6 + 24),
            v53 = *(__int64 **)(v52 + 88),
            v54 = *v53,
            v55 = *((int *)v53 + 4),
            *(_QWORD *)(v54 + 440) < v55) )
      {
        sub_23E380(a1, a2);
      }
      *(_DWORD *)(v52 + 84) = *(_DWORD *)(*(_QWORD *)(v54 + 432) + 104 * v55 + 88);
      v6 = *(_QWORD *)(v73 + 72);
    }
  }
  v75 = *(_QWORD **)(*(_QWORD *)(v8 + 176) + 8LL);
  v9 = (*(int *)(v6 + 280) >> 1) & 4 | (*(int *)(v6 + 280) >> 2) & 1;
  if ( *(_BYTE *)(v73 + 32) == 11 )
  {
    v78 = 0;
    goto LABEL_9;
  }
  v78 = 0;
  if ( (v9 & 3) != 0 )
    goto LABEL_9;
  v10 = (_QWORD *)v75[172];
  if ( !v10 )
    goto LABEL_9;
  i = *v10 & 0xFFFFFFFFFFFFFFFCLL;
  if ( i )
  {
    if ( (*(_BYTE *)i & 2) != 0 )
      goto LABEL_9;
    v64 = *(_QWORD *)(i + 24);
    v65 = *(_QWORD *)(v73 + 24);
    if ( v65 >= v64 )
      goto LABEL_81;
LABEL_78:
    for ( i = *(_QWORD *)(i + 8); ; i = *(_QWORD *)(i + 16) )
    {
      if ( (*(_BYTE *)i & 2) != 0 )
        goto LABEL_9;
      v64 = *(_QWORD *)(i + 24);
      if ( v65 < v64 )
        goto LABEL_78;
LABEL_81:
      if ( v64 >= v65 )
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
  if ( *(_DWORD *)(v73 + 68) )
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
  v79 = get_tinfo_property();
  v12 = *(_DWORD *)(v73 + 68);
  if ( v12 )
  {
    if ( get_tinfo_size() < (unsigned __int64)v12 && (get_tinfo_property() & 0xF) != 9 )
    {
      v66 = get_tinfo_property();
      sub_32C430(&tinfo_property, *(_QWORD *)(*(_QWORD *)(v8 + 328) + 112LL), *(unsigned int *)(v73 + 68), v66);
      copy_tinfo_t();
      clear_tinfo_t();
      v67 = *(_QWORD *)(v8 + 328);
      tinfo_property = 0;
      *(_QWORD *)&v85 = 0;
      sub_32DC20(v67, (unsigned int)&v78, -1, (unsigned int)&v79, (unsigned int)&tinfo_property, v68);
      cleanup_argloc();
    }
  }
  else if ( (get_tinfo_property() & 0x3F) != 1 )
  {
    tinfo_property = 1;
    copy_tinfo_t();
    clear_tinfo_t();
    v56 = *(_QWORD *)(v8 + 328);
    tinfo_property = 0;
    *(_QWORD *)&v85 = 0;
    sub_32DC20(v56, (unsigned int)&v78, -1, (unsigned int)&v79, (unsigned int)&tinfo_property, v57);
    cleanup_argloc();
  }
  sub_32C540(&v80, *(_QWORD *)(*(_QWORD *)(v8 + 328) + 112LL), &v78);
  if ( *(_DWORD *)v73 == 57 )
  {
    v13 = sub_24D0D0(v8, v73 + 32, v73 + 48, &v78);
    if ( (get_tinfo_property() & 0xF) != 0xA )
      sub_244E70(v13);
  }
  else
  {
    v13 = sub_249AF0(v8, *(__int64 **)(v73 + 24), v73 + 32, &v80, &v80, 16);
  }
  v14 = j__qalloc_or_throw();
  *(_QWORD *)v14 = -1;
  v15 = v14;
  *(_QWORD *)(v14 + 24) = v13;
  *(_DWORD *)(v14 + 8) = 57;
  *(_QWORD *)(v14 + 12) = -1;
  *(_QWORD *)(v14 + 32) = 0;
  *(_QWORD *)(v14 + 40) = 0;
  *(_QWORD *)(v14 + 48) = 0;
  *(_DWORD *)(v14 + 56) = 0;
  v74 = (_QWORD *)v14;
  *(_QWORD *)v14 = *(_QWORD *)(v73 + 24);
  v16 = v79;
  v79 = 0;
  *(_QWORD *)(v15 + 48) = v16;
  v17 = qalloc_or_throw();
  tinfo_property = 0;
  tinfo_property = get_tinfo_property();
  *(_QWORD *)v17 = 0;
  *(_QWORD *)(v17 + 24) = 0;
  *(_OWORD *)(v17 + 8) = 0;
  copy_tinfo_t();
  *(_DWORD *)(v17 + 32) = v9;
  v74[4] = v17;
  clear_tinfo_t();
  v18 = *(_QWORD *)(v6 + 32);
  v71 = (__int64 *)v74[4];
  sub_246200(v71, (int)v18);
  tinfo_property = 0;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v90 = 0;
  v92 = 16;
  v85 = 0;
  v89 = 0;
  v91 = 0;
  v81[0] = 0;
  v81[0] = get_tinfo_property();
  LOBYTE(v17) = get_tinfo_details();
  clear_tinfo_t();
  if ( !(_BYTE)v17 )
    get_tinfo_details();
  v19 = 0;
  v72 = (unsigned int)(v18 - 1);
  if ( (int)v18 > 0 )
  {
    while ( 1 )
    {
      v37 = 80 * v19 + *(_QWORD *)(v6 + 24);
      v69 = (_QWORD *)(v37 + 24);
      if ( v19 < (unsigned __int64)v85 )
        v69 = (_QWORD *)(tinfo_property + 80 * v19 + 64);
      v38 = *(int *)(v37 + 4);
      if ( v38 != get_tinfo_size() )
        break;
      v39 = (_QWORD *)(v37 + 24);
      if ( *(_BYTE *)v37 == 10 && **(_BYTE **)(v37 + 8) == 6 )
      {
        sub_E7D60();
        v39 = (_QWORD *)(v37 + 24);
      }
      v20 = 2;
      if ( (*(_BYTE *)(v6 + 281) & 1) != 0 )
        v20 = 4 * (*(_DWORD *)(v6 + 8) - 1 == (_DWORD)v19) + 2;
      v21 = sub_249AF0(v8, (__int64 *)0xFFFFFFFFFFFFFFFFLL, v37, v39, v39, v20);
      v22 = v21;
      if ( !v21 )
      {
        if ( !under_debugger )
          sub_383060(50405);
        goto LABEL_106;
      }
      v23 = *v71;
      *(_BYTE *)(v23 + 72 * v19 + 60) = *(_DWORD *)(v6 + 8) <= (int)v19;
      v24 = *(_QWORD *)(v8 + 328);
      v25 = v23 + 72 * v19;
      v70 = *(_DWORD *)(*(_QWORD *)(v24 + 112) + 80LL);
      if ( !(unsigned __int8)sub_246B40(v21, v24, v69) )
      {
        if ( *(_BYTE *)(v25 + 60) )
        {
          if ( (get_tinfo_property() & 0xF) != 0xB )
          {
            tinfo_size = get_tinfo_size();
            v41 = v70;
            if ( (((v70 - 1 + tinfo_size) ^ (v70 - 1 + get_tinfo_size())) & -v41) != 0 )
              v22 = sub_244E70(v22);
          }
        }
      }
      v26 = *(_QWORD *)v22;
      *(_QWORD *)v22 = *(_QWORD *)v25;
      v27 = *(_DWORD *)(v25 + 8);
      *(_QWORD *)v25 = v26;
      LODWORD(v26) = *(_DWORD *)(v22 + 8);
      *(_DWORD *)(v22 + 8) = v27;
      v28 = *(_DWORD *)(v25 + 12);
      *(_DWORD *)(v25 + 8) = v26;
      LODWORD(v26) = *(_DWORD *)(v22 + 12);
      *(_DWORD *)(v22 + 12) = v28;
      v29 = *(_QWORD *)(v25 + 24);
      *(_DWORD *)(v25 + 12) = v26;
      v30 = *(_QWORD *)(v22 + 24);
      *(_QWORD *)(v22 + 24) = v29;
      v31 = *(_QWORD *)(v25 + 32);
      *(_QWORD *)(v25 + 24) = v30;
      v32 = *(_QWORD *)(v22 + 32);
      *(_QWORD *)(v22 + 32) = v31;
      v33 = *(_QWORD *)(v25 + 40);
      *(_QWORD *)(v25 + 32) = v32;
      v34 = *(_QWORD *)(v22 + 40);
      *(_QWORD *)(v22 + 40) = v33;
      v35 = *(_QWORD *)(v25 + 48);
      *(_QWORD *)(v25 + 40) = v34;
      v36 = *(_QWORD *)(v22 + 48);
      *(_QWORD *)(v22 + 48) = v35;
      LODWORD(v35) = *(_DWORD *)(v25 + 56);
      *(_QWORD *)(v25 + 48) = v36;
      LODWORD(v36) = *(_DWORD *)(v22 + 56);
      *(_DWORD *)(v22 + 56) = v35;
      *(_DWORD *)(v25 + 56) = v36;
      if ( v22 )
      {
        sub_255630(v22);
        clear_tinfo_t();
        j__qfree();
      }
      copy_tinfo_t();
      if ( *(_QWORD *)v25 == -1 )
        *(_QWORD *)v25 = *(_QWORD *)(v37 + 16);
      if ( v19 == v72 )
        goto LABEL_38;
      ++v19;
    }
    if ( !under_debugger )
      sub_383060(50404);
LABEL_106:
    BUG();
  }
LABEL_38:
  if ( a4 )
  {
    sub_64000(v81, v6 + 96);
    v82 = nullptr;
    v83 = 0;
    v62 = *(_QWORD *)(v6 + 120);
    if ( v62 )
    {
      v82 = (void *)qalloc_or_throw();
      *((_QWORD *)&v83 + 1) = v62;
      memcpy(v82, *(const void **)(v6 + 112), 16 * v62);
      *(_QWORD *)&v83 = v62;
    }
    sub_64640(v81, (__int64 *)(v6 + 240), v58, v59, v60, v61);
    sub_317C60(&v82, v6 + 256);
    if ( !(unsigned __int8)sub_64880(v81) || (_QWORD)v83 )
    {
      if ( v82 )
      {
        *(_QWORD *)&v83 = 0;
        qfree();
      }
      qfree();
      if ( *(_QWORD *)(v6 + 56) != 1 )
      {
        if ( !under_debugger )
          sub_383060(50406);
        goto LABEL_106;
      }
      sub_32C270(v81, *(_QWORD *)(*(_QWORD *)(v8 + 328) + 112LL), *(unsigned int *)(*(_QWORD *)(v6 + 48) + 4LL));
      v74 = sub_24AA50(v8, *(__int64 **)(v73 + 24), *(_QWORD *)(v6 + 48), v81, (__int64)v74);
      clear_tinfo_t();
    }
    else
    {
      if ( v82 )
        qfree();
      qfree();
    }
  }
  v42 = sub_1CE9E0((__int64)v75);
  if ( v42 && v42[4] != v75[11] )
  {
    if ( v74 )
    {
      sub_255630(v74);
      clear_tinfo_t();
      j__qfree();
    }
    exception = __cxa_allocate_exception(0x30u);
    v5 = v75[5];
    *(_QWORD *)exception = off_4DBCD0;
    exception[2] = -17;
    *((_QWORD *)exception + 2) = v5;
    *((_QWORD *)exception + 3) = 0;
    *((_OWORD *)exception + 2) = 0;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_7A4C0);
  }
  sub_246B40((__int64)v74, *(_QWORD *)(v8 + 328), a3);
  if ( v90 )
  {
    *(_QWORD *)&v91 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v43 = tinfo_property;
  if ( tinfo_property )
  {
    v44 = v85;
    if ( (_QWORD)v85 )
    {
      v45 = 0;
      do
      {
        v46 = (_QWORD *)(v43 + 80 * v45);
        clear_tinfo_t();
        if ( v46[5] )
        {
          v46[6] = 0;
          qfree();
        }
        if ( v46[2] )
        {
          v46[3] = 0;
          qfree();
        }
        ++v45;
        cleanup_argloc();
        v43 = tinfo_property;
      }
      while ( v44 != v45 );
    }
    *(_QWORD *)&v85 = 0;
    qfree();
  }
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  return v74;
}
