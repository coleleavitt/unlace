bool __fastcall sub_32CB80(_BYTE *a1, __int64 a2)
{
  char tinfo_property; // al
  char tinfo_details; // r15
  unsigned int v5; // eax
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // r15
  int tinfo_size; // eax
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // r12
  _QWORD *v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // r12
  __int64 v19; // r14
  _QWORD *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rdi
  unsigned int v23; // eax
  unsigned int v24; // r13d
  int v25; // eax
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // [rsp+24h] [rbp-16Ch]
  __int64 v29; // [rsp+60h] [rbp-130h] BYREF
  __int64 v30; // [rsp+68h] [rbp-128h]
  __int64 v31; // [rsp+78h] [rbp-118h]
  __int64 v32; // [rsp+80h] [rbp-110h]
  _UNKNOWN **v33; // [rsp+A0h] [rbp-F0h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-E8h]
  __int64 v35; // [rsp+B0h] [rbp-E0h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-D8h]
  __int64 v37; // [rsp+C0h] [rbp-D0h]
  __int64 v38; // [rsp+C8h] [rbp-C8h]
  __int128 v39; // [rsp+D0h] [rbp-C0h]
  __int64 v40; // [rsp+E0h] [rbp-B0h]
  int v41; // [rsp+E8h] [rbp-A8h]
  char v42; // [rsp+ECh] [rbp-A4h]
  __int64 v43; // [rsp+F0h] [rbp-A0h] BYREF
  __int128 v44; // [rsp+F8h] [rbp-98h]
  __int64 v45; // [rsp+108h] [rbp-88h]
  __int64 v46; // [rsp+110h] [rbp-80h] BYREF
  __int64 v47; // [rsp+118h] [rbp-78h] BYREF
  __int128 v48; // [rsp+120h] [rbp-70h]
  __int64 v49; // [rsp+130h] [rbp-60h]
  __int128 v50; // [rsp+138h] [rbp-58h]
  char v51; // [rsp+148h] [rbp-48h]
  unsigned __int64 v52; // [rsp+158h] [rbp-38h]

  v52 = __readfsqword(0x28u);
  if ( (get_tinfo_property() & 0xF) != 0xC )
  {
    if ( (*a1 & 0x3F) == 0x3D )
    {
      tinfo_property = get_tinfo_property();
      if ( (tinfo_property & 0xE) != 0 || (tinfo_property & 0x30) == 0 )
        return (unsigned int)verify_tinfo() == 0;
    }
    else if ( (unsigned __int8)print_tinfo() )
    {
      return (unsigned int)verify_tinfo() == 0;
    }
    return 0;
  }
  get_func();
  if ( (int)lower_type() < 0 )
    return 0;
  v51 = 16;
  v46 = 0;
  v47 = 0;
  v43 = 0;
  v45 = 0;
  v49 = 0;
  v44 = 0;
  v48 = 0;
  v50 = 0;
  tinfo_details = get_tinfo_details();
  if ( tinfo_details && (unsigned __int64)v44 < *(int *)(a2 + 656) )
  {
    v5 = v51 & 0xF0;
    if ( v5 <= 0x10 )
    {
      v5 = getinf();
      v34 = a2;
      v33 = &off_4E3668;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      v38 = 0;
      v40 = 0;
      v41 = v5;
      v39 = 0;
      if ( v5 <= 0x10 )
        v5 = getinf();
    }
    else
    {
      v34 = a2;
      v33 = &off_4E3668;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      v38 = 0;
      v40 = 0;
      v41 = v51 & 0xF0;
      v39 = 0;
    }
    if ( v5 != 176 )
    {
      if ( v5 != 256 )
        goto LABEL_15;
      goto LABEL_68;
    }
    if ( (unsigned __int64)getinf() <= 0x397 )
    {
      if ( !(unsigned __int8)getinf_flag() )
        goto LABEL_68;
      netnode_check();
      v24 = netnode_altval();
      if ( v24 <= 0x74 )
        goto LABEL_68;
      v25 = *(_DWORD *)(get_ph() + 4);
      if ( !v25 )
        goto LABEL_15;
      v26 = (unsigned int)(v25 - 13);
      if ( (unsigned int)v26 > 0x3B || (v27 = 0x800000000000005LL, !_bittest64(&v27, v26)) )
      {
LABEL_68:
        tinfo_details = 0;
        goto LABEL_15;
      }
      tinfo_details = v24 != 117;
    }
LABEL_15:
    v42 = tinfo_details;
    if ( (get_tinfo_property() & 0x3F) == 1
      || sub_32C920((__int64)&v33, (__int64)&v46, (__int64)&v47) && ((v46 & 0xF) != 0xD || (v46 & 0x100) != 0) )
    {
      sub_1C44E0((__int64)&v29, a2, (__int64)&v43);
      v6 = 0;
      v7 = 0;
      if ( !(_QWORD)v44 )
      {
LABEL_36:
        if ( v31 )
        {
          v32 = 0;
          qfree(v31);
        }
        qfree(v30);
        v33 = &off_4E3668;
        qfree(v37);
        qfree(v35);
        if ( v49 )
        {
          *(_QWORD *)&v50 = 0;
          qfree(v49);
        }
        cleanup_argloc();
        clear_tinfo_t();
        v11 = v43;
        if ( v43 )
        {
          v12 = v44;
          v13 = 0;
          if ( (_QWORD)v44 )
          {
            do
            {
              v14 = (_QWORD *)(v11 + 80 * v13);
              clear_tinfo_t();
              v15 = v14[5];
              if ( v15 )
              {
                v14[6] = 0;
                qfree(v15);
              }
              v16 = v14[2];
              if ( v16 )
              {
                v14[3] = 0;
                qfree(v16);
              }
              ++v13;
              cleanup_argloc();
              v11 = v43;
            }
            while ( v12 != v13 );
          }
          *(_QWORD *)&v44 = 0;
          qfree(v11);
        }
        return (unsigned int)verify_tinfo() == 0;
      }
      while ( 1 )
      {
        *(_QWORD *)&v39 = &v35;
        v8 = v43 + 80 * v7;
        if ( !v42 && (unsigned int)(*(_DWORD *)(v43 + 80 * v7) - 3) <= 1 )
          break;
        tinfo_size = get_tinfo_size();
        v28 = tinfo_size;
        if ( tinfo_size <= 0 || tinfo_size > 0xFFFF && *(_DWORD *)v8 == 2 )
          break;
        if ( (get_tinfo_property() & 0xF) == 9 && !sub_11CB40(v28) )
          break;
        if ( (unsigned int)verify_argloc() )
          break;
        *((_QWORD *)&v39 + 1) = v8 + 64;
        v40 = v8;
        if ( (unsigned int)for_all_arglocs() )
          break;
        v10 = v51 & 0xF0;
        if ( (v51 & 0xF0) == 0xC0 )
          v10 = HIDWORD(v45);
        if ( v10 <= 0x10 )
          v10 = getinf();
        if ( v10 - 208 <= 0x2F )
        {
          v23 = get_tinfo_size();
          if ( !(unsigned __int8)sub_1C6910(&v29, v8, v8 + 64, v23) )
            break;
        }
        if ( (*(_BYTE *)(v8 + 64) & 0xF) == 0xD && (*(_QWORD *)(v8 + 64) & 0x100LL) == 0
          || !(unsigned __int8)print_tinfo() )
        {
          break;
        }
        v7 = ++v6;
        if ( v6 >= (unsigned __int64)v44 )
          goto LABEL_36;
      }
      if ( v31 )
      {
        v32 = 0;
        qfree(v31);
      }
      qfree(v30);
    }
    v33 = &off_4E3668;
    qfree(v37);
    qfree(v35);
  }
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v17 = v43;
  if ( !v43 )
    return 0;
  v18 = v44;
  if ( (_QWORD)v44 )
  {
    v19 = 0;
    do
    {
      v20 = (_QWORD *)(v17 + 80 * v19);
      clear_tinfo_t();
      v21 = v20[5];
      if ( v21 )
      {
        v20[6] = 0;
        qfree(v21);
      }
      v22 = v20[2];
      if ( v22 )
      {
        v20[3] = 0;
        qfree(v22);
      }
      cleanup_argloc();
      v17 = v43;
      ++v19;
    }
    while ( v18 != v19 );
  }
  *(_QWORD *)&v44 = 0;
  qfree(v17);
  return 0;
}
