__int64 __fastcall sub_169B10(
        __int64 a1,
        unsigned int a2,
        __int64 *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  char *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 item_end; // rbx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r14
  int v21; // eax
  int v22; // edx
  int v23; // eax
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // r15
  int flags; // eax
  __int64 v27; // rax
  bool v28; // r15
  __int64 v29; // rdi
  int v30; // eax
  unsigned int str_type; // eax
  unsigned int v32; // ebx
  __int64 strid; // rax
  unsigned __int64 tinfo_size; // r15
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rtt
  char v39; // r15
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // r15d
  int v44; // eax
  __int64 errdesc; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __m128 v49; // xmm4
  __m128 v50; // xmm5
  __int64 eah; // rax
  __int64 v52; // rsi
  const char *v53; // rdx
  __int64 v54; // r15
  __int64 v55; // r8
  unsigned __int64 v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // r15
  __int64 v59; // rsi
  __int64 v60; // [rsp+0h] [rbp-100h]
  unsigned __int64 v61; // [rsp+8h] [rbp-F8h]
  char v62; // [rsp+1Fh] [rbp-E1h]
  unsigned int v63; // [rsp+28h] [rbp-D8h]
  __int64 v65; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int8 *v66; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v67; // [rsp+48h] [rbp-B8h]
  __int64 v68; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v69; // [rsp+68h] [rbp-98h]
  _BYTE v70[24]; // [rsp+80h] [rbp-80h] BYREF
  int v71; // [rsp+98h] [rbp-68h]
  char v72[8]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v73; // [rsp+A8h] [rbp-58h]
  __int128 v74; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v75; // [rsp+C8h] [rbp-38h]

  v75 = __readfsqword(0x28u);
  dword_8C80C4 = 0;
  v66 = nullptr;
  v67 = 0;
  v14 = nullptr;
  v66 = (unsigned __int8 *)qvector_reserve(&v66, 0, 4096, 1);
  memset(&v66[v67], 0, 4096 - v67);
  *(_QWORD *)&v67 = 4096;
  v63 = a2 - 3;
  if ( a2 - 3 <= 1 )
  {
    v52 = *a3;
    v68 = 0;
    v69 = 0;
    if ( !(unsigned __int8)sub_168D40(&v68, v52) )
    {
      v59 = v68;
      if ( *((_QWORD *)&v69 + 1) <= 9u )
      {
        v68 = qvector_reserve(&v68, v68, 10, 1);
        v59 = v68;
      }
      *(_QWORD *)&v69 = 10;
      *(_QWORD *)v59 = 0x726168635F616469LL;
      *(_BYTE *)(v59 + 8) = 115;
      *(_BYTE *)(v68 + 9) = 0;
    }
    memset(v70, 0, sizeof(v70));
    v53 = &s1;
    if ( (_QWORD)v69 )
      v53 = (const char *)v68;
    sub_169A50((__int64 *)v70, (__int64)"unsigned char %s[] =\n{", v53);
    v14 = (char *)&s1;
    if ( *(_QWORD *)&v70[8] )
      v14 = *(char **)v70;
    if ( (*(unsigned int (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 16LL))(a1, v14) )
    {
      if ( *(_QWORD *)v70 )
      {
        *(_QWORD *)&v70[8] = 0;
        qfree(*(_QWORD *)v70, v14, v15, v16, v17);
      }
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree(v68, v14, v15, v16, v17);
      }
      goto LABEL_32;
    }
    if ( *(_QWORD *)v70 )
    {
      *(_QWORD *)&v70[8] = 0;
      qfree(*(_QWORD *)v70, v14, v15, v16, v17);
    }
    if ( v68 )
    {
      *(_QWORD *)&v69 = 0;
      qfree(v68, v14, v15, v16, v17);
    }
  }
  byte_8C80C8 = 0;
  item_end = *a3;
LABEL_3:
  v19 = a3[1];
  if ( item_end >= v19 )
  {
LABEL_27:
    v32 = 1;
    if ( v63 <= 1 )
    {
      v14 = "\n};";
      LOBYTE(v32) = (*(unsigned int (__fastcall **)(__int64, const char *))(*(_QWORD *)a1 + 16LL))(a1, "\n};") == 0;
    }
    goto LABEL_33;
  }
  while ( 1 )
  {
    v20 = v19 - item_end;
    v21 = nbits(item_end);
    v22 = v21 + 14;
    v23 = v21 + 7;
    if ( v23 >= 0 )
      v22 = v23;
    v24 = (v22 >> 3) * v20;
    if ( v24 > 0x1000 )
      v24 = 4096;
    get_bytes(v66, v24, item_end, 1, 0);
    v25 = v24 + item_end;
    if ( a2 != 2 )
    {
      if ( a2 == 5 )
      {
        v65 = 0;
        if ( (unsigned __int8)get_tinfo(&v65, item_end)
          || (flags = get_flags_ex(item_end, 4), (flags & 0x600) == 0x400)
          && (flags & 0xF0000000) == 0x60000000
          && (strid = get_strid(item_end), (unsigned __int8)get_type_by_tid(&v65, strid))
          && (get_tinfo_property(v65, 2) & 0x2F) == 0xD
          && (tinfo_size = get_tinfo_size(0, v65, 0), tinfo_size - 1 <= 0xFFFFFFFFFFFFFFFDLL)
          && ((v38 = get_item_end(item_end) - item_end,
               v36 = v38 / tinfo_size,
               v37 = v38 % tinfo_size,
               (int)(v38 / tinfo_size) <= 1)
           || (*(_DWORD *)&v70[8] = 0,
               *(_DWORD *)&v70[12] = v36,
               *(_QWORD *)v70 = 0,
               copy_tinfo_t(v70, &v65, v37),
               v39 = create_tinfo(&v65, 11, 11, v70),
               clear_tinfo_t(v70),
               v39)) )
        {
          v14 = (_BYTE *)(&dword_0 + 2);
          if ( (get_tinfo_property(v65, 2) & 0xF) == 0xC )
          {
LABEL_60:
            clear_tinfo_t(&v65);
LABEL_18:
            item_end = get_item_end(item_end);
            goto LABEL_3;
          }
          v62 = is_loaded(item_end);
          v68 = 0;
          v69 = 0;
          if ( get_ea_name(&v68, item_end, 1, 0) <= 0 )
          {
            eah = get_eah();
            sub_169A50(&v68, (__int64)"v%0*a", 2 * *(_DWORD *)(eah + 24), 0.0);
          }
          memset(v70, 0, sizeof(v70));
          print_tinfo(v70, 0, 0, 0, 0, &v65, v68, 0);
          if ( v62 )
          {
            v54 = *(_QWORD *)&v70[8];
            if ( *(_QWORD *)&v70[8] )
            {
              v55 = *(_QWORD *)&v70[8] + 2LL;
              v56 = *(_QWORD *)&v70[8] + 3LL;
              v54 = *(_QWORD *)&v70[8] - 1LL;
            }
            else
            {
              v56 = 4;
              v55 = 3;
            }
            v57 = *(_QWORD *)v70;
            if ( *(_QWORD *)&v70[16] < v56 )
            {
              v60 = v55;
              v61 = v56;
              *(_QWORD *)v70 = qvector_reserve(v70, *(_QWORD *)v70, v56, 1);
              v55 = v60;
              v57 = *(_QWORD *)v70;
              v56 = v61;
            }
            *(_QWORD *)&v70[8] = v56;
            *(_BYTE *)(v57 + v55) = 0;
            v58 = *(_QWORD *)v70 + v54;
            *(_WORD *)v58 = 15648;
            *(_BYTE *)(v58 + 2) = 10;
          }
          v14 = (char *)&s1;
          if ( *(_QWORD *)&v70[8] )
            v14 = *(char **)v70;
          v43 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 16LL))(a1, v14);
          if ( *(_QWORD *)v70 )
          {
            *(_QWORD *)&v70[8] = 0;
            qfree(*(_QWORD *)v70, v14, v40, v41, v42);
          }
          if ( v68 )
          {
            *(_QWORD *)&v69 = 0;
            qfree(v68, v14, v40, v41, v42);
          }
          if ( v43 )
          {
            clear_tinfo_t(&v65);
            goto LABEL_32;
          }
          v72[0] = 2;
          v71 = 2;
          *(_QWORD *)&v70[16] = 0x5000000000LL;
          *(__m128i *)v70 = _mm_load_si128((const __m128i *)&xmmword_5DC130);
          v73 = item_end;
          v74 = 0;
          if ( v62 )
          {
            v14 = v72;
            v44 = print_cdata(a1, v72, &v65, v70);
            if ( v44 > 0 )
            {
              free_idcv(v72);
              clear_tinfo_t(&v65);
              goto LABEL_32;
            }
            if ( v44 == -1 )
            {
              errdesc = get_errdesc(&unk_8C80E0, 0xFFFFFFFFLL);
              v14 = (char *)item_end;
              sub_169700(
                (int)"%a: %s, skipping...\n",
                item_end,
                errdesc,
                v46,
                v47,
                v48,
                (__m128)0LL,
                a5,
                a6,
                a7,
                v49,
                v50,
                a10,
                a11,
                v60);
              free_idcv(v72);
              goto LABEL_60;
            }
          }
          v14 = ";\n\n";
          v28 = (*(unsigned int (__fastcall **)(__int64, const char *))(*(_QWORD *)a1 + 16LL))(a1, ";\n\n") == 0;
          free_idcv(v72);
        }
        else
        {
          v27 = *(_QWORD *)a1;
          byte_8C80C8 = 1;
          v14 = nullptr;
          v28 = (*(unsigned int (__fastcall **)(__int64, _QWORD))(v27 + 16))(a1, 0) == 0;
        }
        clear_tinfo_t(&v65);
        if ( !v28 )
          goto LABEL_32;
        goto LABEL_18;
      }
      v14 = (char *)&v66;
      if ( !(unsigned __int8)sub_1691D0(a1, &v66, (unsigned int)v24, a2, v25 < a3[1], 0.0) )
        goto LABEL_32;
LABEL_6:
      v19 = a3[1];
      if ( v25 >= v19 )
        goto LABEL_27;
      goto LABEL_7;
    }
    v29 = *a3;
    memset(v70, 0, sizeof(v70));
    v68 = 4096;
    v30 = get_flags_ex(v29, 4);
    if ( (v30 & 0x600) == 0x400 && (v30 & 0xF0000000) == 0x50000000 )
      str_type = get_str_type(*a3);
    else
      str_type = (unsigned int)get_default_encoding_idx(1) << 24;
    get_strlit_contents(v70, *a3, a3[1] - *a3, str_type, &v68, 1);
    v14 = (char *)&s1;
    if ( *(_QWORD *)&v70[8] )
      v14 = *(char **)v70;
    if ( (*(unsigned int (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 16LL))(a1, v14) )
      goto LABEL_30;
    if ( !v68 )
      break;
    if ( !*(_QWORD *)v70 )
      goto LABEL_6;
    *(_QWORD *)&v70[8] = 0;
    qfree(*(_QWORD *)v70, v14, v15, v16, v17);
    v19 = a3[1];
    if ( v25 >= v19 )
      goto LABEL_27;
LABEL_7:
    item_end = v25;
  }
  set_qerrno(25);
LABEL_30:
  if ( *(_QWORD *)v70 )
  {
    *(_QWORD *)&v70[8] = 0;
    qfree(*(_QWORD *)v70, v14, v15, v16, v17);
  }
LABEL_32:
  v32 = 0;
LABEL_33:
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v66, v14, v15, v16, v17);
  }
  return v32;
}
