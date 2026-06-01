__int64 __fastcall sub_571E00(__int64 a1, _BYTE *a2, _QWORD *a3, unsigned int a4, unsigned int a5)
{
  __int64 v7; // rax
  char *v8; // rbp
  unsigned int tinfo_size; // eax
  int v10; // ebx
  __int64 v11; // r14
  void (__fastcall ***v12)(_QWORD, __int64, _QWORD, _QWORD); // rdi
  __int64 v13; // rsi
  char tinfo_property; // al
  char v15; // cl
  char *v16; // rsi
  __int64 v17; // rbp
  int v18; // eax
  __int64 v19; // rdx
  char v20; // cl
  char v21; // al
  __int64 *v22; // rdx
  unsigned int v23; // ebx
  int v25; // eax
  int v26; // edx
  int v27; // eax
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  char v30; // al
  int v31; // eax
  int v32; // eax
  char v33; // al
  void *v34; // rdx
  const char *idcv_attr; // rax
  const char *v36; // r13
  size_t v37; // rax
  int v38; // ebx
  const char *v39; // rax
  const char *v40; // r13
  size_t v41; // rax
  unsigned int v42; // eax
  unsigned __int64 v43; // rax
  int v44; // eax
  int v45; // edx
  int v46; // eax
  int v47; // edx
  char v48; // al
  unsigned __int8 (__fastcall ***v49)(_QWORD, _QWORD, _QWORD, unsigned __int64); // rdi
  unsigned __int64 v50; // rcx
  int v51; // eax
  const char *v52; // rdx
  int qerrno; // eax
  int v55; // [rsp+Ch] [rbp-CCh]
  unsigned int v56; // [rsp+10h] [rbp-C8h]
  char v58; // [rsp+14h] [rbp-C4h]
  char v60; // [rsp+18h] [rbp-C0h]
  char v61; // [rsp+18h] [rbp-C0h]
  char v62; // [rsp+18h] [rbp-C0h]
  int v63; // [rsp+20h] [rbp-B8h] BYREF
  int v64; // [rsp+24h] [rbp-B4h] BYREF
  void *ptr; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v66; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v67; // [rsp+38h] [rbp-A0h]
  __int64 v68; // [rsp+48h] [rbp-90h] BYREF
  char v69[8]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v70; // [rsp+58h] [rbp-80h]
  __int64 v71; // [rsp+68h] [rbp-70h]
  _BYTE v72[40]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v73; // [rsp+98h] [rbp-40h]

  v73 = __readfsqword(0x28u);
  v7 = deref_idcv(a2, 0);
  if ( !v7 )
  {
    qerrno = get_qerrno();
    goto LABEL_97;
  }
  v8 = (char *)v7;
  tinfo_size = get_tinfo_size(0, *a3, 0);
  v56 = tinfo_size;
  v10 = tinfo_size;
  if ( tinfo_size == -1 )
  {
    qerrno = 1562;
LABEL_97:
    *(_DWORD *)(a1 + 48) = qerrno;
    return (unsigned int)-1;
  }
  v11 = *(_QWORD *)(a1 + 24);
  if ( !*(_BYTE *)(v11 + 12) )
  {
    v12 = *(void (__fastcall ****)(_QWORD, __int64, _QWORD, _QWORD))(a1 + 24);
    v13 = a4 + tinfo_size;
    if ( *(_DWORD *)(v11 + 8) < (unsigned int)v13 )
    {
      *(_DWORD *)(v11 + 8) = v13;
      v12 = *(void (__fastcall ****)(_QWORD, __int64, _QWORD, _QWORD))(a1 + 24);
    }
    (**v12)(v12, v13, 0, 0);
  }
  ptr = nullptr;
  copy_tinfo_t(&ptr);
  tinfo_property = get_tinfo_property(ptr, 2);
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
      v25 = *((_DWORD *)v8 + 2);
      v17 = v10;
      LODWORD(v68) = v25;
      if ( (unsigned __int64)v10 <= 4 )
        goto LABEL_14;
      v26 = 0;
      if ( v25 >= 0 )
        goto LABEL_26;
      goto LABEL_90;
    case 9:
      v69[0] = 2;
      v71 = 0;
      v70 = 0;
      if ( (unsigned __int64)v10 > 0x20 )
      {
        if ( !under_debugger )
          interr(22);
LABEL_104:
        BUG();
      }
      if ( *v8 == 3 )
        goto LABEL_31;
      copy_idcv(v69);
      v27 = idcv_float(v69);
      *(_DWORD *)(a1 + 48) = v27;
      if ( v27 )
      {
LABEL_38:
        free_idcv(v69);
LABEL_65:
        v23 = -1;
        goto LABEL_21;
      }
      v8 = v69;
LABEL_31:
      v28 = *(_QWORD *)(a1 + 40);
      if ( *(_QWORD *)(v28 + 1040) )
      {
        v29 = *(_QWORD *)(v28 + 880);
        if ( v29 < v10 )
        {
          if ( v10 > 16 )
            LODWORD(v29) = v56;
          v56 = v29;
        }
      }
      if ( (unsigned int)ieee2cpu(v72, v8 + 8, v56) != 1
        || !(***(unsigned __int8 (__fastcall ****)(_QWORD, _QWORD, _BYTE *, _QWORD))(a1 + 24))(
              *(_QWORD *)(a1 + 24),
              a4,
              v72,
              (int)v56) )
      {
        goto LABEL_38;
      }
      free_idcv(v69);
LABEL_20:
      v23 = 0;
LABEL_21:
      clear_tinfo_t(&ptr);
      return v23;
    case 0xA:
      v30 = *v8;
      if ( (*(_BYTE *)(a1 + 32) & 8) == 0 && (v30 != 9 && v30 != 2 || *a2 == 10) )
      {
        v66 = 0;
        v66 = get_tinfo_property(ptr, 9);
        copy_tinfo_t(&ptr);
        clear_tinfo_t(&v66);
        get_tinfo_size(&v63, ptr, 0);
        v31 = v63;
        if ( v63 <= 0 )
        {
          v31 = sub_54C1C0(*(_QWORD **)(*(_QWORD *)(a1 + 40) + 1480LL));
          v63 = v31;
        }
        v32 = (v31 + *(_DWORD *)(v11 + 8) - 1) & -v31;
        *(_DWORD *)(v11 + 8) = v32;
        v64 = v32;
        v33 = getinf_flag(3, 32);
        if ( v10 > 1 && v33 )
        {
          swap_value(&v66, &v64, v56);
          v34 = &v66;
        }
        else
        {
          v34 = &v64;
        }
        if ( (***(unsigned __int8 (__fastcall ****)(_QWORD, _QWORD, void *, _QWORD))(a1 + 24))(
               *(_QWORD *)(a1 + 24),
               a4,
               v34,
               v10) )
        {
          v58 = *(_BYTE *)(v11 + 12);
          if ( !v58 )
          {
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, a4, v56);
            v58 = *(_BYTE *)(v11 + 12);
          }
          *(_BYTE *)(v11 + 12) = 0;
          if ( *v8 == 7 )
          {
            if ( *((_QWORD *)v8 + 2) )
              v52 = *((const char **)v8 + 1);
            else
              v52 = haystack;
            v23 = (***(unsigned __int8 (__fastcall ****)(_QWORD, _QWORD, const char *))(a1 + 24))(
                    *(_QWORD *)(a1 + 24),
                    (unsigned int)v64,
                    v52)
                ^ 1;
          }
          else
          {
            idcv_attr = (const char *)first_idcv_attr(v8);
            v36 = idcv_attr;
            if ( idcv_attr && (v37 = strspn(idcv_attr, "0123456789")) != 0 && !v36[v37] )
            {
              v55 = strtol(v36, nullptr, 10);
              v38 = v55;
              while ( 1 )
              {
                v39 = (const char *)next_idcv_attr();
                v40 = v39;
                if ( !v39 )
                  break;
                v41 = strspn(v39, "0123456789");
                if ( !v41 || v40[v41] )
                  goto LABEL_58;
                v46 = strtol(v40, nullptr, 10);
                v47 = v46;
                if ( v55 <= v46 )
                  v47 = v55;
                if ( v38 < v46 )
                  v38 = v46;
                v55 = v47;
              }
              v42 = sub_571930(a1, v8, &ptr, v64, v55, v38 - v55 + 1);
            }
            else
            {
LABEL_58:
              v42 = sub_5712E0(a1, v8, &ptr, v64, 0);
            }
            v23 = v42;
          }
          *(_BYTE *)(v11 + 12) = v58;
          goto LABEL_21;
        }
        goto LABEL_65;
      }
      if ( v30 == 2 )
      {
LABEL_68:
        v44 = *((_DWORD *)v8 + 2);
        v17 = v10;
        LODWORD(v68) = v44;
        if ( (unsigned __int64)v10 <= 4 )
          goto LABEL_15;
        if ( v44 >= 0 )
        {
          HIDWORD(v68) = 0;
          goto LABEL_15;
        }
LABEL_90:
        v62 = v15;
        v51 = get_tinfo_property(ptr, 3);
        v15 = v62;
        v26 = -(v51 == 1);
LABEL_26:
        HIDWORD(v68) = v26;
      }
      else
      {
LABEL_10:
        v16 = v8;
        v60 = v15;
        v69[0] = 2;
        v71 = 0;
        v70 = 0;
        copy_idcv(v69);
        v17 = v10;
        if ( (unsigned __int64)v10 <= 4 )
        {
          v18 = idcv_long(v69, v16);
          v45 = v70;
          v20 = v60;
          *(_DWORD *)(a1 + 48) = v18;
          LODWORD(v68) = v45;
        }
        else
        {
          v18 = idcv_int64(v69, v16);
          v19 = v70;
          v20 = v60;
          *(_DWORD *)(a1 + 48) = v18;
          v68 = v19;
        }
        if ( v18 )
          goto LABEL_38;
        v61 = v20;
        free_idcv(v69);
        v15 = v61;
      }
LABEL_14:
      if ( v15 == 14 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 24) + 32LL))(
                *(_QWORD *)(a1 + 24),
                a4,
                &v66,
                v17) )
          __memset_chk();
        v48 = getinf_flag(3, 32);
        if ( v10 > 1 && v48 )
          swap_value(&v66, &v66, v56);
        v68 = write_tinfo_bitfield_value(ptr, v66, v68, a5);
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
      v21 = getinf_flag(3, 32);
      if ( v10 > 1 && v21 )
      {
        swap_value(&v66, &v68, v56);
        v22 = &v66;
      }
      else
      {
        v22 = &v68;
      }
      if ( !(***(unsigned __int8 (__fastcall ****)(_QWORD, _QWORD, __int64 *, __int64))(a1 + 24))(
              *(_QWORD *)(a1 + 24),
              a4,
              v22,
              v17) )
        goto LABEL_65;
      goto LABEL_20;
    case 0xB:
      v66 = 0;
      v67 = 0;
      get_tinfo_details(ptr, 11, &v66);
      v43 = HIDWORD(v67);
      if ( !HIDWORD(v67) || *v8 != 7 )
      {
        clear_tinfo_t(&v66);
        goto LABEL_20;
      }
      v49 = *(unsigned __int8 (__fastcall ****)(_QWORD, _QWORD, _QWORD, unsigned __int64))(a1 + 24);
      *(_DWORD *)(a1 + 32) |= 2u;
      v50 = *((_QWORD *)v8 + 2);
      if ( v50 )
      {
        if ( --v50 > v43 )
          v50 = v43;
      }
      v23 = (**v49)(v49, a4, *((_QWORD *)v8 + 1), v50) ^ 1;
      clear_tinfo_t(&v66);
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

