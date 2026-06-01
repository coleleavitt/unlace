__int64 __fastcall sub_166A90(__int64 a1, int a2, __int64 a3)
{
  const char *item_end; // rbx
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r14
  int v7; // eax
  int v8; // edx
  int v9; // eax
  unsigned __int64 v10; // r14
  const char *v11; // r15
  int flags; // eax
  __int64 v13; // rax
  bool v14; // r15
  int v15; // eax
  const char *v16; // rsi
  unsigned int v17; // ebx
  unsigned __int64 tinfo_size; // r15
  unsigned __int64 v20; // rax
  char tinfo; // r15
  const char *v22; // rsi
  int v23; // r15d
  int v24; // eax
  const char *v25; // rsi
  __int64 v26; // r15
  __int64 v27; // r8
  unsigned __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // r15
  __int64 v31; // rsi
  __int64 v32; // [rsp+0h] [rbp-100h]
  unsigned __int64 v33; // [rsp+8h] [rbp-F8h]
  char v34; // [rsp+1Fh] [rbp-E1h]
  unsigned int v35; // [rsp+28h] [rbp-D8h]
  char *v37; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v38; // [rsp+48h] [rbp-B8h]
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v40; // [rsp+68h] [rbp-98h]
  _BYTE v41[24]; // [rsp+80h] [rbp-80h] BYREF
  int v42; // [rsp+98h] [rbp-68h]
  char v43; // [rsp+A0h] [rbp-60h]
  const char *v44; // [rsp+A8h] [rbp-58h]
  __int128 v45; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v46; // [rsp+C8h] [rbp-38h]

  v46 = __readfsqword(0x28u);
  dword_2544F8 = 0;
  v38 = 0;
  v37 = (char *)qvector_reserve();
  memset(v37, 0, 0x1000u);
  *(_QWORD *)&v38 = 4096;
  v35 = a2 - 3;
  if ( (unsigned int)(a2 - 3) <= 1 )
  {
    v39 = 0;
    v40 = 0;
    if ( !(unsigned __int8)sub_159200(&v39) )
    {
      v31 = v39;
      if ( *((_QWORD *)&v40 + 1) <= 9u )
      {
        v39 = qvector_reserve();
        v31 = v39;
      }
      *(_QWORD *)&v40 = 10;
      *(_QWORD *)v31 = 0x726168635F616469LL;
      *(_BYTE *)(v31 + 8) = 115;
      *(_BYTE *)(v39 + 9) = 0;
    }
    memset(v41, 0, sizeof(v41));
    sub_94440((__int64 *)v41);
    v25 = s1;
    if ( *(_QWORD *)&v41[8] )
      v25 = *(const char **)v41;
    if ( (*(unsigned int (__fastcall **)(__int64, const char *))(*(_QWORD *)a1 + 16LL))(a1, v25) )
    {
      if ( *(_QWORD *)v41 )
      {
        *(_QWORD *)&v41[8] = 0;
        qfree();
      }
      if ( v39 )
      {
        *(_QWORD *)&v40 = 0;
        qfree();
      }
      goto LABEL_32;
    }
    if ( *(_QWORD *)v41 )
    {
      *(_QWORD *)&v41[8] = 0;
      qfree();
    }
    if ( v39 )
    {
      *(_QWORD *)&v40 = 0;
      qfree();
    }
  }
  byte_2544FC = 0;
  item_end = *(const char **)a3;
LABEL_3:
  v5 = *(_QWORD *)(a3 + 8);
  if ( (unsigned __int64)item_end >= v5 )
  {
LABEL_27:
    v17 = 1;
    if ( v35 <= 1 )
      LOBYTE(v17) = (*(unsigned int (__fastcall **)(__int64, const char *))(*(_QWORD *)a1 + 16LL))(a1, "\n};") == 0;
    goto LABEL_33;
  }
  while ( 1 )
  {
    v6 = v5 - (_QWORD)item_end;
    v7 = nbits();
    v8 = v7 + 14;
    v9 = v7 + 7;
    if ( v9 >= 0 )
      v8 = v9;
    v10 = (v8 >> 3) * v6;
    if ( v10 > 0x1000 )
      v10 = 4096;
    get_bytes();
    v11 = &item_end[v10];
    if ( a2 != 2 )
    {
      if ( a2 == 5 )
      {
        if ( (unsigned __int8)get_tinfo()
          || (flags = get_flags_ex(), (flags & 0x600) == 0x400)
          && (flags & 0xF0000000) == 0x60000000
          && (get_strid(), (unsigned __int8)get_type_by_tid())
          && (get_tinfo_property() & 0x2F) == 0xD
          && (tinfo_size = get_tinfo_size(), tinfo_size - 1 <= 0xFFFFFFFFFFFFFFFDLL)
          && ((v20 = (get_item_end() - (__int64)item_end) / tinfo_size, (int)v20 <= 1)
           || (*(_DWORD *)&v41[8] = 0,
               *(_DWORD *)&v41[12] = v20,
               *(_QWORD *)v41 = 0,
               copy_tinfo_t(),
               tinfo = create_tinfo(),
               clear_tinfo_t(),
               tinfo)) )
        {
          if ( (get_tinfo_property() & 0xF) == 0xC )
          {
LABEL_60:
            clear_tinfo_t();
LABEL_18:
            item_end = (const char *)get_item_end();
            goto LABEL_3;
          }
          v34 = is_loaded();
          v39 = 0;
          v40 = 0;
          if ( get_ea_name() <= 0 )
          {
            get_eah();
            sub_94440(&v39);
          }
          memset(v41, 0, sizeof(v41));
          print_tinfo();
          if ( v34 )
          {
            v26 = *(_QWORD *)&v41[8];
            if ( *(_QWORD *)&v41[8] )
            {
              v27 = *(_QWORD *)&v41[8] + 2LL;
              v28 = *(_QWORD *)&v41[8] + 3LL;
              v26 = *(_QWORD *)&v41[8] - 1LL;
            }
            else
            {
              v28 = 4;
              v27 = 3;
            }
            v29 = *(_QWORD *)v41;
            if ( *(_QWORD *)&v41[16] < v28 )
            {
              v32 = v27;
              v33 = v28;
              *(_QWORD *)v41 = qvector_reserve();
              v27 = v32;
              v29 = *(_QWORD *)v41;
              v28 = v33;
            }
            *(_QWORD *)&v41[8] = v28;
            *(_BYTE *)(v29 + v27) = 0;
            v30 = *(_QWORD *)v41 + v26;
            *(_WORD *)v30 = 15648;
            *(_BYTE *)(v30 + 2) = 10;
          }
          v22 = s1;
          if ( *(_QWORD *)&v41[8] )
            v22 = *(const char **)v41;
          v23 = (*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)a1 + 16LL))(a1, v22);
          if ( *(_QWORD *)v41 )
          {
            *(_QWORD *)&v41[8] = 0;
            qfree();
          }
          if ( v39 )
          {
            *(_QWORD *)&v40 = 0;
            qfree();
          }
          if ( v23 )
          {
            clear_tinfo_t();
            goto LABEL_32;
          }
          v43 = 2;
          v42 = 2;
          *(_QWORD *)&v41[16] = 0x5000000000LL;
          *(__m128i *)v41 = _mm_load_si128((const __m128i *)&xmmword_1D39D0);
          v44 = item_end;
          v45 = 0;
          if ( v34 )
          {
            v24 = print_cdata();
            if ( v24 > 0 )
            {
              free_idcv();
              clear_tinfo_t();
              goto LABEL_32;
            }
            if ( v24 == -1 )
            {
              get_errdesc();
              sub_8F740((__int64)"%a: %s, skipping...\n", 0.0, item_end);
              free_idcv();
              goto LABEL_60;
            }
          }
          v14 = (*(unsigned int (__fastcall **)(__int64, const char *))(*(_QWORD *)a1 + 16LL))(a1, ";\n\n") == 0;
          free_idcv();
        }
        else
        {
          v13 = *(_QWORD *)a1;
          byte_2544FC = 1;
          v14 = (*(unsigned int (__fastcall **)(__int64, _QWORD))(v13 + 16))(a1, 0) == 0;
        }
        clear_tinfo_t();
        if ( !v14 )
          goto LABEL_32;
        goto LABEL_18;
      }
      if ( !(unsigned __int8)sub_15A970(a1, &v37, v10, a2) )
        goto LABEL_32;
LABEL_6:
      v5 = *(_QWORD *)(a3 + 8);
      if ( (unsigned __int64)v11 >= v5 )
        goto LABEL_27;
      goto LABEL_7;
    }
    memset(v41, 0, sizeof(v41));
    v39 = 4096;
    v15 = get_flags_ex();
    if ( (v15 & 0x600) == 0x400 && (v15 & 0xF0000000) == 0x50000000 )
      get_str_type();
    else
      get_default_encoding_idx();
    get_strlit_contents();
    v16 = s1;
    if ( *(_QWORD *)&v41[8] )
      v16 = *(const char **)v41;
    if ( (*(unsigned int (__fastcall **)(__int64, const char *))(*(_QWORD *)a1 + 16LL))(a1, v16) )
      goto LABEL_30;
    if ( !v39 )
      break;
    if ( !*(_QWORD *)v41 )
      goto LABEL_6;
    *(_QWORD *)&v41[8] = 0;
    qfree();
    v5 = *(_QWORD *)(a3 + 8);
    if ( (unsigned __int64)v11 >= v5 )
      goto LABEL_27;
LABEL_7:
    item_end = v11;
  }
  set_qerrno();
LABEL_30:
  if ( *(_QWORD *)v41 )
  {
    *(_QWORD *)&v41[8] = 0;
    qfree();
  }
LABEL_32:
  v17 = 0;
LABEL_33:
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree();
  }
  return v17;
}

