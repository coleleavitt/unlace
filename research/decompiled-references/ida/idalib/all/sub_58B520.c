__int64 __fastcall sub_58B520(__int64 a1, _BYTE *a2, _QWORD *a3, __int64 a4, int a5)
{
  __int64 v7; // rax
  char *v8; // rbp
  signed int tinfo_size; // eax
  int v10; // ebx
  __int64 v11; // r14
  void (__fastcall ***v12)(_QWORD, unsigned __int64, _QWORD, _QWORD); // rdi
  unsigned __int64 v13; // rsi
  char tinfo_property; // al
  char v15; // cl
  __int64 v16; // rbp
  int v17; // eax
  char v18; // al
  int *v19; // rdx
  unsigned int v20; // ebx
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  char v27; // al
  int v28; // eax
  __int64 v29; // rax
  char v30; // al
  int *v31; // rdx
  const char *idcv_attr; // rax
  const char *v33; // r13
  size_t v34; // rax
  int v35; // ebx
  const char *v36; // rax
  size_t v37; // rax
  unsigned int v38; // eax
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  int v41; // eax
  int v42; // edx
  char v43; // al
  unsigned __int8 (__fastcall ***v44)(_QWORD, __int64, _QWORD, unsigned __int64); // rdi
  unsigned __int64 v45; // rcx
  int v46; // eax
  const char *v47; // rdx
  int qerrno; // eax
  int v50; // [rsp+8h] [rbp-E0h]
  unsigned int v51; // [rsp+10h] [rbp-D8h]
  char v53; // [rsp+14h] [rbp-D4h]
  char v55; // [rsp+18h] [rbp-D0h]
  char v56; // [rsp+18h] [rbp-D0h]
  int v57; // [rsp+2Ch] [rbp-BCh] BYREF
  __int64 v58; // [rsp+30h] [rbp-B8h] BYREF
  int v59[2]; // [rsp+38h] [rbp-B0h] BYREF
  int v60[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v61; // [rsp+48h] [rbp-A0h]
  __int64 v62; // [rsp+50h] [rbp-98h] BYREF
  __int64 v63; // [rsp+58h] [rbp-90h]
  char v64[8]; // [rsp+60h] [rbp-88h] BYREF
  __int128 v65; // [rsp+68h] [rbp-80h]
  __int64 v66; // [rsp+78h] [rbp-70h]
  _BYTE v67[40]; // [rsp+80h] [rbp-68h] BYREF
  unsigned __int64 v68; // [rsp+A8h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  v7 = deref_idcv(a2, 0);
  if ( !v7 )
  {
    qerrno = get_qerrno();
    goto LABEL_97;
  }
  v8 = (char *)v7;
  tinfo_size = get_tinfo_size(0, *a3, 0);
  v51 = tinfo_size;
  v10 = tinfo_size;
  if ( tinfo_size == -1 )
  {
    qerrno = 1562;
LABEL_97:
    *(_DWORD *)(a1 + 48) = qerrno;
    return (unsigned int)-1;
  }
  v11 = *(_QWORD *)(a1 + 24);
  if ( !*(_BYTE *)(v11 + 16) )
  {
    v12 = *(void (__fastcall ****)(_QWORD, unsigned __int64, _QWORD, _QWORD))(a1 + 24);
    v13 = a4 + tinfo_size;
    if ( *(_QWORD *)(v11 + 8) < v13 )
    {
      *(_QWORD *)(v11 + 8) = v13;
      v12 = *(void (__fastcall ****)(_QWORD, unsigned __int64, _QWORD, _QWORD))(a1 + 24);
    }
    (**v12)(v12, v13, 0, 0);
  }
  v58 = 0;
  copy_tinfo_t(&v58);
  tinfo_property = get_tinfo_property(v58, 2);
  v15 = tinfo_property & 0xF;
  switch ( tinfo_property & 0xF )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 0xE:
      if ( *v8 != 2 )
        goto LABEL_10;
      v22 = *((_QWORD *)v8 + 1);
      v16 = v10;
      v62 = v22;
      if ( (unsigned __int64)v10 <= 8 )
        goto LABEL_14;
      v23 = 0;
      if ( v22 >= 0 )
        goto LABEL_26;
      goto LABEL_90;
    case 9:
      v64[0] = 2;
      v66 = 0;
      v65 = 0;
      if ( (unsigned __int64)v10 > 0x20 )
      {
        if ( !under_debugger )
          interr(22);
LABEL_104:
        BUG();
      }
      if ( *v8 == 3 )
        goto LABEL_31;
      copy_idcv(v64);
      v24 = idcv_float(v64);
      *(_DWORD *)(a1 + 48) = v24;
      if ( v24 )
      {
LABEL_38:
        free_idcv(v64);
LABEL_65:
        v20 = -1;
        goto LABEL_21;
      }
      v8 = v64;
LABEL_31:
      v25 = *(_QWORD *)(a1 + 40);
      if ( *(_QWORD *)(v25 + 1208) )
      {
        v26 = *(_QWORD *)(v25 + 1048);
        if ( v26 < v10 )
        {
          if ( v10 > 16 )
            LODWORD(v26) = v51;
          v51 = v26;
        }
      }
      if ( (unsigned int)ieee2cpu(v67, v8 + 8, v51) != 1
        || !(***(unsigned __int8 (__fastcall ****)(_QWORD, __int64, _BYTE *, _QWORD))(a1 + 24))(
              *(_QWORD *)(a1 + 24),
              a4,
              v67,
              (int)v51) )
      {
        goto LABEL_38;
      }
      free_idcv(v64);
LABEL_20:
      v20 = 0;
LABEL_21:
      clear_tinfo_t(&v58);
      return v20;
    case 0xA:
      v27 = *v8;
      if ( (*(_BYTE *)(a1 + 32) & 8) == 0 && (v27 != 9 && v27 != 2 || *a2 == 10) )
      {
        *(_QWORD *)v60 = 0;
        *(_QWORD *)v60 = get_tinfo_property(v58, 9);
        copy_tinfo_t(&v58);
        clear_tinfo_t(v60);
        get_tinfo_size(&v57, v58, 0);
        v28 = v57;
        if ( v57 <= 0 )
        {
          v28 = sub_565920(*(_QWORD **)(*(_QWORD *)(a1 + 40) + 1672LL));
          v57 = v28;
        }
        v29 = (*(_QWORD *)(v11 + 8) + v28 - 1) & -v28;
        *(_QWORD *)(v11 + 8) = v29;
        *(_QWORD *)v59 = v29;
        v30 = getinf_flag(3, 32);
        if ( v10 > 1 && v30 )
        {
          swap_value(v60, v59, v51);
          v31 = v60;
        }
        else
        {
          v31 = v59;
        }
        if ( (***(unsigned __int8 (__fastcall ****)(_QWORD, __int64, int *, _QWORD))(a1 + 24))(
               *(_QWORD *)(a1 + 24),
               a4,
               v31,
               v10) )
        {
          v53 = *(_BYTE *)(v11 + 16);
          if ( !v53 )
          {
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, a4, v51);
            v53 = *(_BYTE *)(v11 + 16);
          }
          *(_BYTE *)(v11 + 16) = 0;
          if ( *v8 == 7 )
          {
            if ( *((_QWORD *)v8 + 2) )
              v47 = *((const char **)v8 + 1);
            else
              v47 = haystack;
            v20 = (***(unsigned __int8 (__fastcall ****)(_QWORD, _QWORD, const char *))(a1 + 24))(
                    *(_QWORD *)(a1 + 24),
                    *(_QWORD *)v59,
                    v47)
                ^ 1;
          }
          else
          {
            idcv_attr = (const char *)first_idcv_attr(v8);
            v33 = idcv_attr;
            if ( idcv_attr && (v34 = strspn(idcv_attr, "0123456789")) != 0 && !v33[v34] )
            {
              v50 = strtol(v33, nullptr, 10);
              v35 = v50;
              while ( 1 )
              {
                v36 = (const char *)next_idcv_attr(v8, v33);
                v33 = v36;
                if ( !v36 )
                  break;
                v37 = strspn(v36, "0123456789");
                if ( !v37 || v33[v37] )
                  goto LABEL_58;
                v41 = strtol(v33, nullptr, 10);
                v42 = v41;
                if ( v50 <= v41 )
                  v42 = v50;
                if ( v35 < v41 )
                  v35 = v41;
                v50 = v42;
              }
              v38 = sub_58B050(a1, v8, &v58, *(__int64 *)v59, v50, v35 - v50 + 1);
            }
            else
            {
LABEL_58:
              v38 = sub_58A9F0(a1, v8, &v58, *(__int64 *)v59, 0);
            }
            v20 = v38;
          }
          *(_BYTE *)(v11 + 16) = v53;
          goto LABEL_21;
        }
        goto LABEL_65;
      }
      if ( v27 == 2 )
      {
LABEL_68:
        v40 = *((_QWORD *)v8 + 1);
        v16 = v10;
        v62 = v40;
        if ( (unsigned __int64)v10 <= 8 )
          goto LABEL_15;
        if ( v40 >= 0 )
        {
          v63 = 0;
          goto LABEL_15;
        }
LABEL_90:
        v56 = v15;
        v46 = get_tinfo_property(v58, 3);
        v15 = v56;
        v23 = -(__int64)(v46 == 1);
LABEL_26:
        v63 = v23;
      }
      else
      {
LABEL_10:
        v55 = v15;
        v64[0] = 2;
        v66 = 0;
        v65 = 0;
        copy_idcv(v64);
        v16 = v10;
        if ( (unsigned __int64)v10 <= 8 )
          v17 = idcv_long(v64);
        else
          v17 = idcv_int64(v64);
        *(_DWORD *)(a1 + 48) = v17;
        v62 = v65;
        if ( v17 )
          goto LABEL_38;
        free_idcv(v64);
        v15 = v55;
      }
LABEL_14:
      if ( v15 == 14 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64, int *, __int64))(**(_QWORD **)(a1 + 24) + 32LL))(
                *(_QWORD *)(a1 + 24),
                a4,
                v60,
                v16) )
          __memset_chk(v60, 0, v16, 8);
        v43 = getinf_flag(3, 32);
        if ( v10 > 1 && v43 )
          swap_value(v60, v60, v51);
        v62 = write_tinfo_bitfield_value(v58, *(__int64 *)v60, v62, a5);
        goto LABEL_16;
      }
LABEL_15:
      if ( a5 )
      {
        if ( !under_debugger )
          interr(899);
        goto LABEL_104;
      }
LABEL_16:
      v18 = getinf_flag(3, 32);
      if ( v10 > 1 && v18 )
      {
        swap_value(v60, &v62, v51);
        v19 = v60;
      }
      else
      {
        v19 = (int *)&v62;
      }
      if ( !(***(unsigned __int8 (__fastcall ****)(_QWORD, __int64, int *, __int64))(a1 + 24))(
              *(_QWORD *)(a1 + 24),
              a4,
              v19,
              v16) )
        goto LABEL_65;
      goto LABEL_20;
    case 0xB:
      *(_QWORD *)v60 = 0;
      v61 = 0;
      get_tinfo_details(v58, 11, v60);
      v39 = HIDWORD(v61);
      if ( !HIDWORD(v61) || *v8 != 7 )
      {
        clear_tinfo_t(v60);
        goto LABEL_20;
      }
      v44 = *(unsigned __int8 (__fastcall ****)(_QWORD, __int64, _QWORD, unsigned __int64))(a1 + 24);
      *(_DWORD *)(a1 + 32) |= 2u;
      v45 = *((_QWORD *)v8 + 2);
      if ( v45 )
      {
        if ( --v45 > v39 )
          v45 = v39;
      }
      v20 = (**v44)(v44, a4, *((_QWORD *)v8 + 1), v45) ^ 1;
      clear_tinfo_t(v60);
      goto LABEL_21;
    case 0xC:
      *(_DWORD *)(a1 + 48) = 1569;
      goto LABEL_65;
    case 0xD:
      if ( (tinfo_property & 0x30) != 0x20 )
        goto LABEL_20;
      if ( *v8 != 2 )
        goto LABEL_10;
      goto LABEL_68;
    default:
      goto LABEL_20;
  }
}
