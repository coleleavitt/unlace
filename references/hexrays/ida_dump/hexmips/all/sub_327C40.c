bool __fastcall sub_327C40(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  char tinfo_property; // al
  __int64 func; // rax
  int v9; // edx
  __int64 v10; // rdi
  char tinfo_details; // r15
  unsigned int v12; // eax
  int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r15
  int tinfo_size; // eax
  unsigned int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // r13
  __int64 v21; // r12
  _QWORD *v22; // r14
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // r12
  __int64 v27; // r14
  _QWORD *v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rdi
  int v31; // eax
  __int64 v32; // rdi
  unsigned int v33; // r13d
  int v34; // eax
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // [rsp+18h] [rbp-178h]
  unsigned int v38; // [rsp+24h] [rbp-16Ch]
  __int64 v39; // [rsp+38h] [rbp-158h] BYREF
  _QWORD v40[3]; // [rsp+40h] [rbp-150h] BYREF
  int v41; // [rsp+58h] [rbp-138h]
  __int64 v42; // [rsp+60h] [rbp-130h] BYREF
  __int64 v43; // [rsp+68h] [rbp-128h]
  __int64 v44; // [rsp+78h] [rbp-118h]
  __int64 v45; // [rsp+80h] [rbp-110h]
  _UNKNOWN **v46; // [rsp+A0h] [rbp-F0h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-E8h]
  __int64 v48; // [rsp+B0h] [rbp-E0h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-D8h]
  __int64 v50; // [rsp+C0h] [rbp-D0h]
  __int64 v51; // [rsp+C8h] [rbp-C8h]
  __int128 v52; // [rsp+D0h] [rbp-C0h]
  __int64 v53; // [rsp+E0h] [rbp-B0h]
  unsigned int v54; // [rsp+E8h] [rbp-A8h]
  char v55; // [rsp+ECh] [rbp-A4h]
  __int64 v56; // [rsp+F0h] [rbp-A0h] BYREF
  __int128 v57; // [rsp+F8h] [rbp-98h]
  __int64 v58; // [rsp+108h] [rbp-88h]
  __int64 v59; // [rsp+110h] [rbp-80h] BYREF
  __int64 v60; // [rsp+118h] [rbp-78h] BYREF
  __int128 v61; // [rsp+120h] [rbp-70h]
  __int64 v62; // [rsp+130h] [rbp-60h]
  __int128 v63; // [rsp+138h] [rbp-58h]
  char v64; // [rsp+148h] [rbp-48h]
  unsigned __int64 v65; // [rsp+158h] [rbp-38h]

  v4 = *a1;
  v65 = __readfsqword(0x28u);
  if ( (get_tinfo_property(v4, 2) & 0xF) != 0xC )
  {
    if ( (*(_BYTE *)a1 & 0x3F) == 0x3D )
    {
      tinfo_property = get_tinfo_property(*a1, 2);
      if ( (tinfo_property & 0xE) != 0 || (tinfo_property & 0x30) == 0 )
        return (unsigned int)verify_tinfo(*a1) == 0;
    }
    else if ( (unsigned __int8)print_tinfo(0, 0, 0, 0, 0, a1, 0, 0) )
    {
      return (unsigned int)verify_tinfo(*a1) == 0;
    }
    return 0;
  }
  func = get_func(a3);
  v9 = -1;
  if ( func )
    v9 = *(_DWORD *)(func + 48);
  v41 = v9;
  v40[1] = a1;
  v40[0] = off_4C3D28;
  v40[2] = a3;
  if ( (int)lower_type(0, a1, 0, v40) < 0 )
    return 0;
  v10 = *a1;
  v64 = 16;
  v59 = 0;
  v60 = 0;
  v56 = 0;
  v58 = 0;
  v62 = 0;
  v57 = 0;
  v61 = 0;
  v63 = 0;
  tinfo_details = get_tinfo_details(v10, 12, &v56);
  if ( tinfo_details && (unsigned __int64)v57 < *(int *)(a2 + 656) )
  {
    v12 = v64 & 0xF0;
    if ( (v64 & 0xF0) == 0xC0 )
      v12 = HIDWORD(v58);
    if ( v12 <= 0x10 )
    {
      v12 = getinf(99);
      v47 = a2;
      v46 = &off_4C3D88;
      v48 = 0;
      v49 = 0;
      v50 = 0;
      v51 = 0;
      v53 = 0;
      v54 = v12;
      v52 = 0;
      if ( v12 <= 0x10 )
        v12 = getinf(99);
    }
    else
    {
      v47 = a2;
      v46 = &off_4C3D88;
      v48 = 0;
      v49 = 0;
      v50 = 0;
      v51 = 0;
      v53 = 0;
      v54 = v12;
      v52 = 0;
    }
    if ( v12 != 176 )
    {
      if ( v12 != 256 )
        goto LABEL_19;
      goto LABEL_72;
    }
    if ( (unsigned __int64)getinf(88) <= 0x397 )
    {
      if ( !(unsigned __int8)getinf_flag(3, 4) )
        goto LABEL_72;
      netnode_check(&v39, "$ golang", 0, 0);
      v32 = v39;
      v33 = netnode_altval(v39, 0, 65);
      if ( v33 <= 0x74 )
        goto LABEL_72;
      v34 = *(_DWORD *)(get_ph(v32) + 4);
      if ( !v34 )
        goto LABEL_19;
      v35 = (unsigned int)(v34 - 13);
      if ( (unsigned int)v35 > 0x3B || (v36 = 0x800000000000005LL, !_bittest64(&v36, v35)) )
      {
LABEL_72:
        tinfo_details = 0;
        goto LABEL_19;
      }
      tinfo_details = v33 != 117;
    }
LABEL_19:
    v55 = tinfo_details;
    if ( (get_tinfo_property(v59, 2) & 0x3F) == 1
      || sub_3279E0((__int64)&v46, &v59, (__int64)&v60) && ((v59 & 0xF) != 0xD || (v59 & 0x100) != 0) )
    {
      sub_1C0120((__int64)&v42, a2, (__int64)&v56);
      v13 = 0;
      v14 = 0;
      if ( !(_QWORD)v57 )
      {
LABEL_40:
        if ( v44 )
        {
          v45 = 0;
          qfree(v44);
        }
        qfree(v43);
        v46 = &off_4C3D88;
        qfree(v50);
        qfree(v48);
        if ( v62 )
        {
          *(_QWORD *)&v63 = 0;
          qfree(v62);
        }
        cleanup_argloc(&v60);
        clear_tinfo_t(&v59);
        v19 = v56;
        if ( v56 )
        {
          v20 = v57;
          v21 = 0;
          if ( (_QWORD)v57 )
          {
            do
            {
              v22 = (_QWORD *)(v19 + 80 * v21);
              clear_tinfo_t(v22 + 8);
              v23 = v22[5];
              if ( v23 )
              {
                v22[6] = 0;
                qfree(v23);
              }
              v24 = v22[2];
              if ( v24 )
              {
                v22[3] = 0;
                qfree(v24);
              }
              ++v21;
              cleanup_argloc(v22);
              v19 = v56;
            }
            while ( v20 != v21 );
          }
          *(_QWORD *)&v57 = 0;
          qfree(v19);
        }
        return (unsigned int)verify_tinfo(*a1) == 0;
      }
      while ( 1 )
      {
        v15 = v56 + 80 * v14;
        *(_QWORD *)&v52 = &v48;
        v16 = v15;
        if ( !v55 && (unsigned int)(*(_DWORD *)v15 - 3) <= 1 )
          break;
        tinfo_size = get_tinfo_size(0, *(_QWORD *)(v15 + 64), 0);
        v38 = tinfo_size;
        if ( tinfo_size <= 0 || tinfo_size > 0xFFFF && *(_DWORD *)v16 == 2 )
          break;
        if ( (get_tinfo_property(*(_QWORD *)(v16 + 64), 2) & 0xF) == 9 && !sub_118940(v38) )
          break;
        if ( (unsigned int)verify_argloc(v16, v38, 0) )
          break;
        v37 = (_QWORD *)(v16 + 64);
        *((_QWORD *)&v52 + 1) = v16 + 64;
        v53 = v16;
        if ( (unsigned int)for_all_arglocs(&v46, v16, v38, 0) )
          break;
        v18 = v64 & 0xF0;
        if ( (v64 & 0xF0) == 0xC0 )
          v18 = HIDWORD(v58);
        if ( v18 <= 0x10 )
          v18 = getinf(99);
        if ( v18 - 208 <= 0x2F )
        {
          v31 = get_tinfo_size(0, *(_QWORD *)(v16 + 64), 0);
          if ( !(unsigned __int8)sub_1C2550(&v42, v16, v37, v31) )
            break;
        }
        if ( (*(_BYTE *)(v16 + 64) & 0xF) == 0xD && (*(_QWORD *)(v16 + 64) & 0x100LL) == 0
          || !(unsigned __int8)print_tinfo(0, 0, 0, 0, 0, v37, 0, 0) )
        {
          break;
        }
        v14 = ++v13;
        if ( v13 >= (unsigned __int64)v57 )
          goto LABEL_40;
      }
      if ( v44 )
      {
        v45 = 0;
        qfree(v44);
      }
      qfree(v43);
    }
    v46 = &off_4C3D88;
    qfree(v50);
    qfree(v48);
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62);
  }
  cleanup_argloc(&v60);
  clear_tinfo_t(&v59);
  v25 = v56;
  if ( !v56 )
    return 0;
  v26 = v57;
  if ( (_QWORD)v57 )
  {
    v27 = 0;
    do
    {
      v28 = (_QWORD *)(v25 + 80 * v27);
      clear_tinfo_t(v28 + 8);
      v29 = v28[5];
      if ( v29 )
      {
        v28[6] = 0;
        qfree(v29);
      }
      v30 = v28[2];
      if ( v30 )
      {
        v28[3] = 0;
        qfree(v30);
      }
      cleanup_argloc(v28);
      v25 = v56;
      ++v27;
    }
    while ( v26 != v27 );
  }
  *(_QWORD *)&v57 = 0;
  qfree(v25);
  return 0;
}
