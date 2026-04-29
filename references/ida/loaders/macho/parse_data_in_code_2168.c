__int64 __fastcall sub_36B20(__int64 a1, __int64 a2)
{
  __int64 tinfo_tid; // r15
  __int64 tinfo_size; // rax
  __int64 v5; // r13
  char *v6; // rsi
  char *v7; // rsi
  const char *v8; // rsi
  unsigned __int64 v9; // r14
  __int64 v10; // rbx
  const char *v12; // r12
  __int64 v13; // r14
  char strlit; // al
  unsigned int v15; // r15d
  unsigned __int64 v16; // r8
  size_t v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  _WORD *v20; // rax
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  const char *v24; // rdx
  const char *v25; // rdi
  __int64 v26; // r14
  void *v27; // rax
  unsigned __int64 v28; // [rsp+0h] [rbp-178h]
  __int64 v29; // [rsp+0h] [rbp-178h]
  __int64 v30; // [rsp+0h] [rbp-178h]
  unsigned __int64 v31; // [rsp+8h] [rbp-170h]
  size_t v32; // [rsp+10h] [rbp-168h]
  unsigned __int64 v33; // [rsp+10h] [rbp-168h]
  unsigned __int64 v34; // [rsp+10h] [rbp-168h]
  __int64 v35; // [rsp+18h] [rbp-160h]
  __int64 v36; // [rsp+20h] [rbp-158h] BYREF
  const char *v37; // [rsp+28h] [rbp-150h] BYREF
  __int64 v38; // [rsp+30h] [rbp-148h] BYREF
  __int64 v39; // [rsp+38h] [rbp-140h] BYREF
  void *src; // [rsp+40h] [rbp-138h] BYREF
  __int128 v41; // [rsp+48h] [rbp-130h]
  __int64 v42; // [rsp+60h] [rbp-118h] BYREF
  __int128 v43; // [rsp+68h] [rbp-110h]
  const char *v44; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v45; // [rsp+88h] [rbp-F0h]
  __int128 v46; // [rsp+A0h] [rbp-D8h] BYREF
  char *v47; // [rsp+B0h] [rbp-C8h] BYREF
  __int128 v48; // [rsp+B8h] [rbp-C0h]
  __int64 v49; // [rsp+C8h] [rbp-B0h]
  __int128 v50; // [rsp+D0h] [rbp-A8h]
  __int128 v51[3]; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v52; // [rsp+110h] [rbp-68h]
  int v53; // [rsp+118h] [rbp-60h]
  __int64 v54; // [rsp+120h] [rbp-58h]
  char v55; // [rsp+128h] [rbp-50h]
  unsigned __int64 v56; // [rsp+138h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  v36 = 0;
  LOWORD(v47) = 256;
  *((_QWORD *)&v46 + 1) = "__CFString";
  *(_QWORD *)&v46 = get_idati();
  create_tinfo(&v36, 61, 61, &v46);
  if ( !(unsigned __int8)get_tinfo_property(v36, 2)
    || (tinfo_tid = get_tinfo_tid(&v36, 1), tinfo_size = get_tinfo_size(0, v36, 0), v5 = tinfo_size, tinfo_tid == -1)
    || tinfo_size == -1
    || !(unsigned __int8)is_loaded(a2)
    || !(unsigned __int8)create_data(a2, 1610612736, v5, tinfo_tid) )
  {
    v10 = -1;
    goto LABEL_21;
  }
  v47 = 0;
  v49 = 0;
  v52 = 1;
  v53 = -1;
  v54 = 0;
  v55 = 0;
  v46 = 0;
  v48 = 0;
  v50 = 0;
  v51[0] = 0;
  v47 = (char *)qvector_reserve(&v47, 0, 5, 1);
  *(_QWORD *)&v48 = 5;
  strcpy(v47, "data");
  if ( (unsigned int)find_tinfo_udt_member(&v46, v36, 3) == -1 )
    goto LABEL_63;
  v6 = v47;
  v28 = (unsigned __int64)v46 >> 3;
  if ( *((_QWORD *)&v48 + 1) <= 4u )
  {
    v47 = (char *)qvector_reserve(&v47, v47, 5, 1);
    v6 = v47;
  }
  *(_QWORD *)&v48 = 5;
  *(_DWORD *)v6 = 1868983913;
  v47[4] = 0;
  if ( (unsigned int)find_tinfo_udt_member(&v46, v36, 3) == -1 )
  {
LABEL_61:
    if ( under_debugger )
      goto LABEL_65;
    interr(20116);
LABEL_63:
    if ( !under_debugger )
      interr(20010);
LABEL_65:
    BUG();
  }
  v7 = v47;
  v31 = v46;
  if ( *((_QWORD *)&v48 + 1) <= 6u )
  {
    v47 = (char *)qvector_reserve(&v47, v47, 7, 1);
    v7 = v47;
  }
  *(_QWORD *)&v48 = 7;
  *(_DWORD *)v7 = 1735288172;
  *((_WORD *)v7 + 2) = 26740;
  v47[6] = 0;
  if ( (unsigned int)find_tinfo_udt_member(&v46, v36, 3) == -1 )
  {
    if ( under_debugger )
      goto LABEL_65;
    interr(20117);
    goto LABEL_61;
  }
  v8 = (const char *)&v37;
  v9 = v46;
  if ( (unsigned __int8)sub_1D300(a1, &v37, a2 + v28) )
  {
    v8 = (const char *)&v38;
    if ( (unsigned __int8)sub_1D300(a1, &v38, a2 + (v31 >> 3)) )
    {
      v8 = (const char *)&v39;
      if ( (unsigned __int8)sub_1D300(a1, &v39, (v9 >> 3) + a2) )
      {
        v12 = v37;
        if ( !(unsigned __int8)is_loaded(v37) )
        {
LABEL_26:
          v10 = v5 + a2;
          goto LABEL_16;
        }
        if ( v38 == 1992 )
        {
          v13 = v39;
          v8 = (const char *)(v39 + 1);
          strlit = create_strlit(v12, v39 + 1, 0);
          v15 = 0;
        }
        else
        {
          if ( v38 != 2000 )
            goto LABEL_26;
          v25 = "UTF-16LE";
          if ( (unsigned __int8)getinf_flag(3, 32) )
            v25 = "UTF-16BE";
          v15 = ((unsigned int)add_encoding(v25) << 24) | 1;
          v26 = 2 * v39 + 2;
          v8 = (const char *)v26;
          strlit = create_strlit(v12, v26, v15);
          v13 = v26 - 2;
        }
        if ( !strlit )
          goto LABEL_26;
        src = 0;
        v41 = 0;
        if ( get_ea_name(&src, v12, 1, 0) <= 0 )
        {
LABEL_41:
          v8 = v12;
          v42 = 0;
          v43 = 0;
          if ( get_strlit_contents(&v42, v12, v13, v15, 0, 1) > 0 )
          {
            v44 = 0;
            v24 = s1;
            v45 = 0;
            if ( (_QWORD)v43 )
              LODWORD(v24) = v42;
            sub_35470((unsigned int)&v44, (unsigned int)"\"%s\"", (_DWORD)v24, v21, v22, v23);
            v8 = s1;
            if ( (_QWORD)v45 )
              v8 = v44;
            set_cmt(a2, v8, 1);
            if ( v44 )
            {
              *(_QWORD *)&v45 = 0;
              qfree(v44, v8);
            }
          }
          if ( v42 )
          {
            *(_QWORD *)&v43 = 0;
            qfree(v42, v8);
          }
          if ( src )
          {
            *(_QWORD *)&v41 = 0;
            qfree(src, v8);
          }
          goto LABEL_26;
        }
        if ( !(_QWORD)v41 )
          goto LABEL_55;
        v16 = v41 - 1;
        if ( (_QWORD)v41 == 1 )
          goto LABEL_55;
        v29 = 0;
        if ( (_QWORD)v41 != 2 )
        {
          v34 = v41 - 1;
          v29 = v41 - 2;
          memmove(src, (char *)src + 1, v41 - 2);
          v16 = v34;
        }
        if ( *((_QWORD *)&v41 + 1) < v16 )
        {
          v33 = v16;
          src = (void *)qvector_reserve(&src, src, v16, 1);
          v16 = v33;
        }
        *(_QWORD *)&v41 = v16;
        *((_BYTE *)src + v29) = 0;
        if ( (_QWORD)v41 )
        {
          v17 = v41 - 1;
          v18 = v41 + 5;
          v19 = v41 + 6;
          if ( *((_QWORD *)&v41 + 1) >= (unsigned __int64)(v41 + 6) )
            goto LABEL_38;
        }
        else
        {
LABEL_55:
          if ( *((_QWORD *)&v41 + 1) > 6u )
          {
            *(_QWORD *)&v41 = 7;
            *((_BYTE *)src + 6) = 0;
LABEL_40:
            v20 = src;
            *(_DWORD *)src = 1953719907;
            v20[2] = 24434;
            set_name(a2, src, 6144);
            make_name_auto(a2);
            goto LABEL_41;
          }
          v19 = 7;
          v18 = 6;
          v17 = 0;
        }
        v35 = v18;
        v32 = v17;
        v30 = v19;
        v27 = (void *)qvector_reserve(&src, src, v19, 1);
        v18 = v35;
        v17 = v32;
        src = v27;
        v19 = v30;
LABEL_38:
        *(_QWORD *)&v41 = v19;
        *((_BYTE *)src + v18) = 0;
        if ( v17 )
          memmove((char *)src + 6, src, v17);
        goto LABEL_40;
      }
    }
  }
  v10 = -1;
LABEL_16:
  clear_tinfo_t(v51);
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49, v8);
  }
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(v47, v8);
  }
LABEL_21:
  clear_tinfo_t(&v36);
  return v10;
}
