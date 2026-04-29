_QWORD *__fastcall sub_249060(__int64 a1, __int64 a2, _QWORD *a3, char a4, __int64 a5)
{
  _DWORD *exception; // rdi
  __int64 v6; // rax
  __int64 v7; // r12
  int v8; // eax
  __int64 v9; // r14
  int v10; // ebp
  _QWORD *v11; // rdx
  unsigned __int64 i; // rax
  char v13; // bl
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  char v24; // r9
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // r15
  __int64 v30; // rax
  int v31; // edx
  int v32; // edx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rbp
  __int64 v42; // r15
  _QWORD *v43; // rcx
  __int64 v44; // rax
  __int64 tinfo_size; // rax
  int v46; // ecx
  _QWORD *v47; // rax
  __int64 v48; // rdi
  __int64 v49; // r12
  __int64 v50; // rbp
  _QWORD *v51; // rbx
  __int64 v52; // rdi
  __int64 v53; // rdi
  __int64 v55; // rax
  __int64 *v56; // rdx
  __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  __int64 *v59; // rax
  unsigned __int64 v60; // rax
  __int64 v61; // rdi
  int v62; // r9d
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  int v66; // r9d
  __int64 v67; // rbx
  __int64 v68; // rax
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // rsi
  unsigned int v71; // eax
  __int64 v72; // rdi
  int v73; // r9d
  _QWORD *v74; // [rsp+8h] [rbp-170h]
  int v75; // [rsp+10h] [rbp-168h]
  __int64 *v76; // [rsp+18h] [rbp-160h]
  __int64 v77; // [rsp+20h] [rbp-158h]
  __int64 v78; // [rsp+28h] [rbp-150h]
  _QWORD *v79; // [rsp+38h] [rbp-140h]
  _QWORD *v80; // [rsp+60h] [rbp-118h]
  __int64 v83; // [rsp+88h] [rbp-F0h] BYREF
  __int64 v84; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v85; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v86[2]; // [rsp+A0h] [rbp-D8h] BYREF
  void *v87; // [rsp+B0h] [rbp-C8h] BYREF
  __int128 v88; // [rsp+B8h] [rbp-C0h]
  __int64 tinfo_property; // [rsp+D0h] [rbp-A8h] BYREF
  __int128 v90; // [rsp+D8h] [rbp-A0h]
  __int64 v91; // [rsp+E8h] [rbp-90h]
  __int64 v92; // [rsp+F0h] [rbp-88h] BYREF
  __int64 v93; // [rsp+F8h] [rbp-80h] BYREF
  __int128 v94; // [rsp+100h] [rbp-78h]
  __int64 v95; // [rsp+110h] [rbp-68h]
  __int128 v96; // [rsp+118h] [rbp-60h]
  char v97; // [rsp+128h] [rbp-50h]
  unsigned __int64 v98; // [rsp+138h] [rbp-40h]

  v78 = a2;
  v98 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 64) != 8 )
  {
    if ( !under_debugger )
      sub_37E160(50403);
    goto LABEL_108;
  }
  v7 = *(_QWORD *)(a2 + 72);
  v8 = *(_DWORD *)(v7 + 284);
  if ( v8 == 1 )
  {
    v68 = j__qalloc_or_throw(64);
    *(_QWORD *)(v68 + 8) = 0xFFFFFFFF00000000LL;
    v79 = (_QWORD *)v68;
    *(_QWORD *)v68 = -1;
    *(_QWORD *)(v68 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v68 + 40) = 0;
    *(_QWORD *)(v68 + 48) = 0;
    *(_DWORD *)(v68 + 56) = 0;
    *(_OWORD *)(v68 + 24) = 0;
    return v79;
  }
  v9 = a1;
  if ( v8 == 25 )
  {
    if ( *(_QWORD *)(v7 + 32) != 2 )
    {
      if ( !under_debugger )
        sub_37E160(51580);
      goto LABEL_108;
    }
    v55 = *(_QWORD *)(v7 + 24);
    if ( *(_BYTE *)(v55 + 80) == 9 )
    {
      v56 = *(__int64 **)(v55 + 88);
      v57 = *v56;
      v58 = *((int *)v56 + 4);
      if ( *(_QWORD *)(v57 + 440) < v58
        || (a1 = v55 + 104,
            a2 = *(_QWORD *)(v57 + 432) + 104 * v58 + 80,
            copy_tinfo_t(v55 + 104, a2),
            v58 = *(_QWORD *)(v7 + 24),
            v59 = *(__int64 **)(v58 + 88),
            v57 = *v59,
            v60 = *((int *)v59 + 4),
            *(_QWORD *)(v57 + 440) < v60) )
      {
        sub_239B00(a1, a2, v58, v57, a5);
      }
      *(_DWORD *)(v58 + 84) = *(_DWORD *)(*(_QWORD *)(v57 + 432) + 104 * v60 + 88);
      v7 = *(_QWORD *)(v78 + 72);
    }
  }
  v80 = *(_QWORD **)(*(_QWORD *)(v9 + 176) + 8LL);
  v10 = (*(int *)(v7 + 280) >> 1) & 4 | (*(int *)(v7 + 280) >> 2) & 1;
  if ( *(_BYTE *)(v78 + 32) == 11 )
  {
    v10 |= 2u;
    v83 = 0;
  }
  else
  {
    v83 = 0;
    if ( (v10 & 3) == 0 )
    {
      v11 = (_QWORD *)v80[172];
      if ( v11 )
      {
        i = *v11 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !i )
          goto LABEL_76;
        if ( (*(_BYTE *)i & 2) == 0 )
        {
          v69 = *(_QWORD *)(i + 24);
          v70 = *(_QWORD *)(v78 + 24);
          if ( v70 >= v69 )
            goto LABEL_83;
LABEL_80:
          for ( i = *(_QWORD *)(i + 8); ; i = *(_QWORD *)(i + 16) )
          {
            if ( (*(_BYTE *)i & 2) != 0 )
              goto LABEL_9;
            v69 = *(_QWORD *)(i + 24);
            if ( v70 < v69 )
              goto LABEL_80;
LABEL_83:
            if ( v69 >= v70 )
              break;
          }
          if ( v11 != (_QWORD *)i )
          {
LABEL_76:
            copy_tinfo_t(&v83, i + 32);
            if ( !*(_DWORD *)(v78 + 68) )
            {
LABEL_77:
              v13 = 1;
              goto LABEL_12;
            }
            tinfo_property = 0;
            tinfo_property = get_tinfo_property(v83, 24);
            if ( (get_tinfo_property(tinfo_property, 2) & 0x3F) != 1 )
            {
              clear_tinfo_t(&tinfo_property);
              goto LABEL_77;
            }
            clear_tinfo_t(&tinfo_property);
          }
        }
      }
    }
  }
LABEL_9:
  sub_331070(&tinfo_property, v7);
  copy_tinfo_t(&v83, &tinfo_property);
  clear_tinfo_t(&tinfo_property);
  if ( !(_BYTE)v83 || (unsigned int)verify_tinfo(v83) )
  {
    if ( !under_debugger )
      sub_37E160(52359);
    goto LABEL_108;
  }
  v13 = 0;
LABEL_12:
  tinfo_property = 0;
  tinfo_property = get_tinfo_property(v83, 10);
  copy_tinfo_t(&v83, &tinfo_property);
  clear_tinfo_t(&tinfo_property);
  v84 = 0;
  v84 = get_tinfo_property(v83, 24);
  v14 = *(_DWORD *)(v78 + 68);
  if ( v14 )
  {
    if ( v13 && get_tinfo_size(0, v84, 0) < (unsigned __int64)v14 && (get_tinfo_property(v84, 2) & 0xF) != 9 )
    {
      v71 = get_tinfo_property(v84, 3);
      sub_327500(&tinfo_property, *(_QWORD *)(*(_QWORD *)(v9 + 328) + 112LL), *(unsigned int *)(v78 + 68), v71);
      copy_tinfo_t(&v84, &tinfo_property);
      clear_tinfo_t(&tinfo_property);
      v72 = *(_QWORD *)(v9 + 328);
      tinfo_property = 0;
      *(_QWORD *)&v90 = 0;
      sub_328CE0(v72, (unsigned int)&v83, -1, (unsigned int)&v84, (unsigned int)&tinfo_property, v73);
      cleanup_argloc(&tinfo_property);
    }
  }
  else if ( (get_tinfo_property(v84, 2) & 0x3F) != 1 )
  {
    tinfo_property = 1;
    copy_tinfo_t(&v84, &tinfo_property);
    clear_tinfo_t(&tinfo_property);
    v61 = *(_QWORD *)(v9 + 328);
    tinfo_property = 0;
    *(_QWORD *)&v90 = 0;
    sub_328CE0(v61, (unsigned int)&v83, -1, (unsigned int)&v84, (unsigned int)&tinfo_property, v62);
    cleanup_argloc(&tinfo_property);
  }
  sub_327610(&v85, *(_QWORD *)(*(_QWORD *)(v9 + 328) + 112LL), &v83);
  if ( *(_DWORD *)v78 == 57 )
  {
    v15 = sub_248850(v9, v78 + 32, v78 + 48, &v83);
    if ( (get_tinfo_property(*(_QWORD *)(v15 + 48), 2) & 0xF) != 0xA )
      sub_2405F0(v15, &v85);
  }
  else
  {
    v15 = sub_245270(v9, *(__int64 **)(v78 + 24), v78 + 32, &v85, &v85, 16);
  }
  v16 = j__qalloc_or_throw(64);
  *(_QWORD *)v16 = -1;
  v17 = v16;
  *(_QWORD *)(v16 + 24) = v15;
  *(_DWORD *)(v16 + 8) = 57;
  *(_QWORD *)(v16 + 12) = -1;
  *(_QWORD *)(v16 + 32) = 0;
  *(_QWORD *)(v16 + 40) = 0;
  *(_QWORD *)(v16 + 48) = 0;
  *(_DWORD *)(v16 + 56) = 0;
  v79 = (_QWORD *)v16;
  *(_QWORD *)v16 = *(_QWORD *)(v78 + 24);
  v18 = v84;
  v84 = 0;
  *(_QWORD *)(v17 + 48) = v18;
  v19 = qalloc_or_throw(40);
  v20 = *(_QWORD *)(v17 + 24);
  tinfo_property = 0;
  tinfo_property = get_tinfo_property(*(_QWORD *)(v20 + 48), 10);
  *(_QWORD *)v19 = 0;
  *(_QWORD *)(v19 + 24) = 0;
  *(_OWORD *)(v19 + 8) = 0;
  copy_tinfo_t(v19 + 24, &tinfo_property);
  *(_DWORD *)(v19 + 32) = v10;
  v79[4] = v19;
  clear_tinfo_t(&tinfo_property);
  v21 = *(_QWORD *)(v7 + 32);
  v76 = (__int64 *)v79[4];
  sub_241980(v76, (int)v21);
  tinfo_property = 0;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  v95 = 0;
  v97 = 16;
  v90 = 0;
  v94 = 0;
  v96 = 0;
  v22 = v79[3];
  v86[0] = 0;
  v86[0] = get_tinfo_property(*(_QWORD *)(v22 + 48), 9);
  LOBYTE(v19) = get_tinfo_details(v86[0], 12, &tinfo_property);
  clear_tinfo_t(v86);
  if ( !(_BYTE)v19 )
    get_tinfo_details(v83, 12, &tinfo_property);
  v23 = 0;
  v77 = (unsigned int)(v21 - 1);
  if ( (int)v21 > 0 )
  {
    while ( 1 )
    {
      v41 = 80 * v23 + *(_QWORD *)(v7 + 24);
      v74 = (_QWORD *)(v41 + 24);
      if ( v23 < (unsigned __int64)v90 )
        v74 = (_QWORD *)(tinfo_property + 80 * v23 + 64);
      v42 = *(int *)(v41 + 4);
      if ( v42 != get_tinfo_size(0, *(_QWORD *)(v41 + 24), 0) )
        break;
      v43 = (_QWORD *)(v41 + 24);
      if ( *(_BYTE *)v41 == 10 )
      {
        v44 = *(_QWORD *)(v41 + 8);
        if ( *(_BYTE *)v44 == 6 )
        {
          sub_E3B60(*(_QWORD *)(v44 + 8), (_QWORD *)(v41 + 24));
          v43 = (_QWORD *)(v41 + 24);
        }
      }
      v24 = 2;
      if ( (*(_BYTE *)(v7 + 281) & 1) != 0 )
        v24 = 4 * (*(_DWORD *)(v7 + 8) - 1 == (_DWORD)v23) + 2;
      v25 = sub_245270(v9, (__int64 *)0xFFFFFFFFFFFFFFFFLL, v41, v43, v43, v24);
      v26 = v25;
      if ( !v25 )
      {
        if ( !under_debugger )
          sub_37E160(50405);
        goto LABEL_108;
      }
      v27 = *v76;
      *(_BYTE *)(v27 + 72 * v23 + 60) = *(_DWORD *)(v7 + 8) <= (int)v23;
      v28 = *(_QWORD *)(v9 + 328);
      v29 = v27 + 72 * v23;
      v75 = *(_DWORD *)(*(_QWORD *)(v28 + 112) + 80LL);
      if ( !(unsigned __int8)sub_2422C0(v25, v28, v74) )
      {
        if ( *(_BYTE *)(v29 + 60) )
        {
          if ( (get_tinfo_property(*(_QWORD *)(v26 + 48), 2) & 0xF) != 0xB )
          {
            tinfo_size = get_tinfo_size(0, *(_QWORD *)(v41 + 24), 0);
            v46 = v75;
            if ( (((v75 - 1 + tinfo_size) ^ (v75 - 1 + get_tinfo_size(0, *(_QWORD *)(v26 + 48), 0))) & -v46) != 0 )
              v26 = sub_2405F0(v26, v74);
          }
        }
      }
      v30 = *(_QWORD *)v26;
      *(_QWORD *)v26 = *(_QWORD *)v29;
      v31 = *(_DWORD *)(v29 + 8);
      *(_QWORD *)v29 = v30;
      LODWORD(v30) = *(_DWORD *)(v26 + 8);
      *(_DWORD *)(v26 + 8) = v31;
      v32 = *(_DWORD *)(v29 + 12);
      *(_DWORD *)(v29 + 8) = v30;
      LODWORD(v30) = *(_DWORD *)(v26 + 12);
      *(_DWORD *)(v26 + 12) = v32;
      v33 = *(_QWORD *)(v29 + 24);
      *(_DWORD *)(v29 + 12) = v30;
      v34 = *(_QWORD *)(v26 + 24);
      *(_QWORD *)(v26 + 24) = v33;
      v35 = *(_QWORD *)(v29 + 32);
      *(_QWORD *)(v29 + 24) = v34;
      v36 = *(_QWORD *)(v26 + 32);
      *(_QWORD *)(v26 + 32) = v35;
      v37 = *(_QWORD *)(v29 + 40);
      *(_QWORD *)(v29 + 32) = v36;
      v38 = *(_QWORD *)(v26 + 40);
      *(_QWORD *)(v26 + 40) = v37;
      v39 = *(_QWORD *)(v29 + 48);
      *(_QWORD *)(v29 + 40) = v38;
      v40 = *(_QWORD *)(v26 + 48);
      *(_QWORD *)(v26 + 48) = v39;
      LODWORD(v39) = *(_DWORD *)(v29 + 56);
      *(_QWORD *)(v29 + 48) = v40;
      LODWORD(v40) = *(_DWORD *)(v26 + 56);
      *(_DWORD *)(v26 + 56) = v39;
      *(_DWORD *)(v29 + 56) = v40;
      if ( v26 )
      {
        sub_250DB0(v26);
        clear_tinfo_t(v26 + 48);
        j__qfree(v26);
      }
      copy_tinfo_t(v29 + 64, v74);
      if ( *(_QWORD *)v29 == -1 )
        *(_QWORD *)v29 = *(_QWORD *)(v41 + 16);
      if ( v23 == v77 )
        goto LABEL_40;
      ++v23;
    }
    if ( !under_debugger )
      sub_37E160(50404);
LABEL_108:
    BUG();
  }
LABEL_40:
  if ( a4 )
  {
    sub_5FE00(v86, v7 + 96);
    v87 = nullptr;
    v88 = 0;
    v67 = *(_QWORD *)(v7 + 120);
    if ( v67 )
    {
      v87 = (void *)qalloc_or_throw(16 * v67);
      *((_QWORD *)&v88 + 1) = v67;
      memcpy(v87, *(const void **)(v7 + 112), 16 * v67);
      *(_QWORD *)&v88 = v67;
    }
    sub_60440(v86, (__int64 *)(v7 + 240), v63, v64, v65, v66);
    sub_312EE0(&v87, v7 + 256);
    if ( !(unsigned __int8)sub_60680(v86) || (_QWORD)v88 )
    {
      if ( v87 )
      {
        *(_QWORD *)&v88 = 0;
        qfree(v87);
      }
      qfree(v86[0]);
      if ( *(_QWORD *)(v7 + 56) != 1 )
      {
        if ( !under_debugger )
          sub_37E160(50406);
        goto LABEL_108;
      }
      sub_327340(v86, *(_QWORD *)(*(_QWORD *)(v9 + 328) + 112LL), *(unsigned int *)(*(_QWORD *)(v7 + 48) + 4LL));
      v79 = sub_2461D0(v9, *(__int64 **)(v78 + 24), *(_QWORD *)(v7 + 48), v86, (__int64)v79);
      clear_tinfo_t(v86);
    }
    else
    {
      if ( v87 )
        qfree(v87);
      qfree(v86[0]);
    }
  }
  v47 = sub_1CA620((__int64)v80);
  if ( v47 && v47[4] != v80[11] )
  {
    if ( v79 )
    {
      sub_250DB0(v79);
      clear_tinfo_t(v79 + 6);
      j__qfree(v79);
    }
    exception = __cxa_allocate_exception(0x30u);
    v6 = v80[5];
    *(_QWORD *)exception = off_4BC450;
    exception[2] = -17;
    *((_QWORD *)exception + 2) = v6;
    *((_QWORD *)exception + 3) = 0;
    *((_OWORD *)exception + 2) = 0;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_762C0);
  }
  sub_2422C0((__int64)v79, *(_QWORD *)(v9 + 328), a3);
  if ( v95 )
  {
    *(_QWORD *)&v96 = 0;
    qfree(v95);
  }
  cleanup_argloc(&v93);
  clear_tinfo_t(&v92);
  v48 = tinfo_property;
  if ( tinfo_property )
  {
    v49 = v90;
    if ( (_QWORD)v90 )
    {
      v50 = 0;
      do
      {
        v51 = (_QWORD *)(v48 + 80 * v50);
        clear_tinfo_t(v51 + 8);
        v52 = v51[5];
        if ( v52 )
        {
          v51[6] = 0;
          qfree(v52);
        }
        v53 = v51[2];
        if ( v53 )
        {
          v51[3] = 0;
          qfree(v53);
        }
        ++v50;
        cleanup_argloc(v51);
        v48 = tinfo_property;
      }
      while ( v49 != v50 );
    }
    *(_QWORD *)&v90 = 0;
    qfree(v48);
  }
  clear_tinfo_t(&v85);
  clear_tinfo_t(&v84);
  clear_tinfo_t(&v83);
  return v79;
}
