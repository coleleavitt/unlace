__int64 __fastcall sub_26E3D0(__m128i *a1, __int64 a2, __int64 *a3, int a4, __int64 a5, _BYTE *a6, int a7, __int64 a8)
{
  __int64 v11; // r13
  __int8 *v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  __m128i v15; // xmm1
  const char *v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // r15
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // edx
  char tinfo_property; // al
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rsi
  char v28; // al
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 tinfo_size; // rax
  __int64 v33; // r15
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rsi
  int v38; // r9d
  const char *v39; // r8
  const char *v40; // rcx
  int v41; // eax
  __int64 v42; // rdi
  char tinfo_details; // al
  __int64 v44; // rdi
  int v45; // r14d
  _QWORD *v46; // r15
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 *v49; // r12
  _QWORD *v50; // r14
  __int64 v51; // rdi
  __int64 v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // r15
  __int64 v55; // rax
  int v58; // [rsp+24h] [rbp-1ACh]
  char v61; // [rsp+37h] [rbp-199h]
  unsigned int v62; // [rsp+48h] [rbp-188h]
  int v63; // [rsp+48h] [rbp-188h]
  __int8 *v64; // [rsp+50h] [rbp-180h]
  __int64 *v65; // [rsp+58h] [rbp-178h]
  __int64 v66; // [rsp+58h] [rbp-178h]
  __int64 v67; // [rsp+60h] [rbp-170h] BYREF
  __int64 v68; // [rsp+68h] [rbp-168h] BYREF
  __int64 v69[2]; // [rsp+70h] [rbp-160h] BYREF
  const char *v70; // [rsp+80h] [rbp-150h]
  __m128i v71; // [rsp+88h] [rbp-148h] BYREF
  __int64 v72; // [rsp+98h] [rbp-138h]
  __int128 v73; // [rsp+A0h] [rbp-130h]
  _OWORD v74[3]; // [rsp+B0h] [rbp-120h] BYREF
  __int64 v75; // [rsp+E0h] [rbp-F0h]
  int v76; // [rsp+E8h] [rbp-E8h]
  __int64 v77; // [rsp+F0h] [rbp-E0h]
  char v78; // [rsp+F8h] [rbp-D8h]
  _BYTE v79[24]; // [rsp+100h] [rbp-D0h] BYREF
  __int128 v80; // [rsp+118h] [rbp-B8h]
  __int64 v81; // [rsp+128h] [rbp-A8h]
  __int128 v82; // [rsp+130h] [rbp-A0h]
  _OWORD v83[3]; // [rsp+140h] [rbp-90h] BYREF
  __int64 v84; // [rsp+170h] [rbp-60h]
  int v85; // [rsp+178h] [rbp-58h]
  __int64 v86; // [rsp+180h] [rbp-50h]
  char v87; // [rsp+188h] [rbp-48h]
  unsigned __int64 v88; // [rsp+198h] [rbp-38h]

  v65 = (__int64 *)a1;
  v88 = __readfsqword(0x28u);
  v11 = *a3;
  v75 = 1;
  v69[1] = 0;
  v70 = nullptr;
  v72 = 0;
  v71 = 0;
  v73 = 0;
  v74[0] = 0;
  v76 = -1;
  v69[0] = 8 * a5;
  v12 = &a1[8].m128i_i8[8];
  v13 = a1[8].m128i_i64[1];
  v77 = 0;
  v78 = 0;
  v64 = v12;
  v61 = get_tinfo_property(v13, 2) & 0x3F;
  if ( v61 != 29 )
  {
    v62 = 0x20000000;
LABEL_5:
    LODWORD(v14) = find_tinfo_udt_member(v69, v65[17], v62);
    if ( (_DWORD)v14 != -1 )
      goto LABEL_6;
    goto LABEL_54;
  }
  v62 = sub_26DCC0(a1, v69, a6, a5);
  if ( v62 != -1 )
  {
    v62 = 1;
    goto LABEL_5;
  }
LABEL_54:
  tinfo_size = get_tinfo_size(0, v65[17], 0);
  if ( a5 - 1 <= tinfo_size )
    tinfo_size = a5 - 1;
  v33 = tinfo_size;
  if ( tinfo_size < 0 )
    v33 = 0;
  while ( 1 )
  {
    LODWORD(v14) = sub_3288D0(v69, v64, v33, 0);
    if ( (_DWORD)v14 != -1 )
      break;
    if ( v33-- == 0 )
      goto LABEL_60;
  }
LABEL_6:
  if ( !v65[8]
    || (get_tinfo_property(*(_QWORD *)&v74[0], 2) & 0x2F) == 0xD
    || (get_tinfo_property(*(_QWORD *)&v74[0], 2) & 0xF) == 0xB )
  {
    goto LABEL_7;
  }
  v35 = v65[15];
  if ( !v35 )
  {
    memset(v79, 0, sizeof(v79));
    v42 = v65[17];
    v81 = 0;
    LODWORD(v82) = 1;
    v80 = 0;
    tinfo_details = get_tinfo_details(v42, 13, v79);
    v44 = *(_QWORD *)v79;
    if ( !tinfo_details )
      goto LABEL_122;
    if ( (int)v14 > 0 )
    {
      v45 = v14 - 1;
      v46 = (_QWORD *)(*(_QWORD *)v79 + 144LL * ((int)v14 - 1));
      if ( v46[1] )
      {
        if ( (get_tinfo_property(v46[8], 2) & 0xF) == 0xB )
          goto LABEL_121;
        v44 = *(_QWORD *)v79;
      }
    }
    v45 = v14 + 1;
    if ( (unsigned __int64)((int)v14 + 1) >= *(_QWORD *)&v79[8] )
      goto LABEL_122;
    v46 = (_QWORD *)(v44 + 144LL * v45);
    if ( (unsigned __int64)v65[11] < *v46 >> 3 )
    {
      if ( !v44 )
        goto LABEL_7;
      v47 = *(_QWORD *)&v79[8];
      goto LABEL_97;
    }
    if ( (get_tinfo_property(v46[8], 2) & 0xF) != 0xB )
    {
      v44 = *(_QWORD *)v79;
LABEL_122:
      if ( !v44 )
        goto LABEL_7;
      v47 = *(_QWORD *)&v79[8];
      if ( !*(_QWORD *)&v79[8] )
      {
LABEL_104:
        *(_QWORD *)&v79[8] = 0;
        qfree(v44);
        goto LABEL_7;
      }
LABEL_97:
      v63 = v14;
      v48 = v47;
      v49 = v65;
      v66 = 0;
      do
      {
        v50 = (_QWORD *)(v44 + 144 * v66);
        clear_tinfo_t(v50 + 8);
        v51 = v50[5];
        if ( v51 )
        {
          v50[6] = 0;
          qfree(v51);
        }
        v52 = v50[2];
        if ( v52 )
        {
          v50[3] = 0;
          qfree(v52);
        }
        ++v66;
        v44 = *(_QWORD *)v79;
      }
      while ( v66 != v48 );
      LODWORD(v14) = v63;
      v65 = v49;
      goto LABEL_104;
    }
LABEL_121:
    sub_265B50((__int64)v69, (__int64)v46);
    v44 = *(_QWORD *)v79;
    LODWORD(v14) = v45;
    goto LABEL_122;
  }
  v36 = a5 - v35;
  if ( v65[11] >= v36 )
  {
    v37 = v65[17];
    v69[0] = 8 * v36;
    LODWORD(v14) = find_tinfo_udt_member(v69, v37, v62);
    if ( (_DWORD)v14 == -1 )
      goto LABEL_60;
  }
LABEL_7:
  if ( (get_tinfo_property(*(_QWORD *)&v74[0], 2) & 0xF) == 0xE )
  {
LABEL_60:
    v11 = 0;
    clear_tinfo_t(v74);
    goto LABEL_47;
  }
  if ( (v77 & 0x2000000000LL) != 0 )
  {
    print_tinfo(a8, 0, 0, 0, 0, v74, 0, 0);
  }
  else
  {
    v15 = _mm_loadu_si128(&v71);
    v16 = *(const char **)a8;
    v17 = _mm_loadu_si128((const __m128i *)(a8 + 8));
    *(_QWORD *)a8 = v70;
    *(__m128i *)(a8 + 8) = v15;
    v70 = v16;
    v71 = v17;
  }
  v67 = 0;
  copy_tinfo_t(&v67, v74);
  lower_type(0, &v67, 0, 0);
  v18 = v11;
  if ( *(_DWORD *)(v11 + 8) == 52 )
    v18 = *(_QWORD *)(v11 + 24);
  if ( (get_tinfo_property(*(_QWORD *)(v18 + 48), 2) & 0xF) == 0xA )
  {
    if ( v69[0] || *(_QWORD *)(a8 + 8) <= 1u )
    {
      if ( *((_BYTE *)v65 + 453) )
      {
LABEL_53:
        v11 = 0;
        goto LABEL_46;
      }
      v58 = 60;
      goto LABEL_32;
    }
    v58 = 60;
  }
  else
  {
    if ( v69[0] || *(_QWORD *)(a8 + 8) <= 1u )
    {
      if ( !*((_BYTE *)v65 + 453) )
      {
LABEL_31:
        v58 = 59;
        goto LABEL_32;
      }
LABEL_29:
      tinfo_property = get_tinfo_property(v67, 2);
      if ( (tinfo_property & 0xFu) <= 0xA || (tinfo_property & 0x3F) == 0x2D )
        goto LABEL_53;
      goto LABEL_31;
    }
    v58 = 59;
  }
  v68 = 0;
  copy_tinfo_t(&v68, a6);
  v19 = v65[2];
  v20 = *(_DWORD *)(v19 + 8) - 1;
  if ( v20 >= 0 )
  {
    v21 = *(_QWORD *)v19 + 8LL * (unsigned int)v20;
    while ( *(_QWORD *)v21 )
    {
      v22 = *(_DWORD *)(*(_QWORD *)v21 + 8LL);
      if ( v22 == 51 )
      {
        *(_QWORD *)v79 = 0;
        *(_QWORD *)v79 = get_tinfo_property(v68, 10);
        copy_tinfo_t(&v68, v79);
        clear_tinfo_t(v79);
        a7 = get_tinfo_size(0, v68, 0);
        break;
      }
      if ( v22 == 48 )
      {
        --v20;
        v21 -= 8;
        if ( v20 != -1 )
          continue;
      }
      break;
    }
  }
  if ( (a7 == a4 || *((_DWORD *)v65 + 109) == a4) && (_BYTE)v67 )
  {
    v41 = a4;
    if ( a7 <= a4 )
    {
      if ( a7 != -1 )
        v41 = a7;
      a4 = v41;
    }
    if ( !(unsigned __int8)sub_265CD0(*v65, &v67, (__int64)&v68, a4) )
    {
      if ( !*((_BYTE *)v65 + 453) )
        *a3 = sub_268E30((__int64)v65, a2, v11, &v68);
      clear_tinfo_t(&v68);
      goto LABEL_53;
    }
  }
  clear_tinfo_t(&v68);
  if ( *((_BYTE *)v65 + 453) )
  {
    if ( v58 == 60 )
      goto LABEL_53;
    goto LABEL_29;
  }
LABEL_32:
  if ( !(unsigned __int8)sub_327C40(&v67, *v65, -1) )
  {
    memset(v79, 0, sizeof(v79));
    print_tinfo(v79, 0, 0, 0, 0, v64, 0, 0);
    v39 = s1;
    if ( *(_QWORD *)(a8 + 8) )
      v39 = *(const char **)a8;
    v40 = s1;
    if ( *(_QWORD *)&v79[8] )
      LODWORD(v40) = *(_DWORD *)v79;
    sub_32C190(*(_QWORD *)(*(_QWORD *)(v65[1] + 64) + 8LL), -1, 23, (_DWORD)v40, (_DWORD)v39, v38);
    if ( *(_QWORD *)v79 )
    {
      *(_QWORD *)&v79[8] = 0;
      qfree(*(_QWORD *)v79);
    }
    goto LABEL_53;
  }
  v24 = j__qalloc_or_throw(64);
  *(_QWORD *)v24 = -1;
  v25 = v24;
  *(_QWORD *)(v24 + 12) = -1;
  *(_DWORD *)(v24 + 8) = v58;
  *(_QWORD *)(v24 + 24) = v18;
  *(_QWORD *)(v24 + 32) = 0;
  *(_QWORD *)(v24 + 40) = 0;
  if ( v61 != 29 )
    v14 = (unsigned __int64)v69[0] >> 3;
  v26 = v67;
  *(_DWORD *)(v25 + 32) = v14;
  *(_DWORD *)(v25 + 56) = 1;
  *(_QWORD *)(v25 + 48) = v26;
  v27 = *(_QWORD *)(v11 + 48);
  v67 = 0;
  *(_DWORD *)(v25 + 40) = get_tinfo_size(0, v27, 0);
  copy_tinfo_t(v64, v25 + 48);
  if ( *(_DWORD *)(v11 + 8) == 52 )
  {
    *(_QWORD *)(v11 + 24) = v25;
    sub_327610(v79, *(_QWORD *)(*v65 + 112), v25 + 48);
    copy_tinfo_t(v11 + 48, v79);
    clear_tinfo_t(v79);
    copy_tinfo_t(v64, v11 + 48);
  }
  else
  {
    v28 = get_tinfo_property(v65[17], 2);
    if ( (v28 & 0xFu) <= 0xA || (v28 & 0x3F) == 0x2D )
    {
      if ( *((_BYTE *)v65 + 453) )
      {
        if ( !under_debugger )
          sub_37E160(50209);
LABEL_135:
        BUG();
      }
      *((_BYTE *)v65 + 453) = 1;
    }
    if ( v58 == 60 )
      ++*((_DWORD *)v65 + 110);
    v11 = v25;
  }
  if ( v61 == 29 )
    goto LABEL_46;
  v29 = *(unsigned int *)(v25 + 32);
  v30 = v65[11];
  if ( v29 > v30 )
  {
    if ( !under_debugger )
      sub_37E160(50183);
    goto LABEL_135;
  }
  v65[11] = v30 - v29;
  if ( (v77 & 0x10000000000LL) == 0 || *(_DWORD *)(v25 + 8) != 59 )
    goto LABEL_46;
  v53 = *v65;
  v54 = *(_QWORD *)(v25 + 24);
  if ( (unsigned int)(*(_DWORD *)(v54 + 8) - 59) > 1 )
    goto LABEL_119;
  while ( 1 )
  {
    v55 = *(_QWORD *)(v54 + 24);
    v68 = 0;
    v68 = get_tinfo_property(*(_QWORD *)(v55 + 48), 10);
    v85 = -1;
    v84 = 1;
    v81 = 0;
    v86 = 0;
    v87 = 0;
    memset(v79, 0, sizeof(v79));
    v80 = 0;
    v82 = 0;
    v83[0] = 0;
    if ( (unsigned int)sub_3288D0(v79, &v68, *(unsigned int *)(v54 + 32), 0) == -1 )
    {
      if ( !under_debugger )
        sub_37E160(51853);
      goto LABEL_135;
    }
    if ( (v86 & 0x2000000000LL) == 0 )
      break;
    *(_DWORD *)(v54 + 32) += *(_DWORD *)(v25 + 32);
    sub_250FD0((__int64 *)v25, v54);
    *(_DWORD *)(v25 + 56) |= 0x100u;
    clear_tinfo_t(v83);
    if ( v81 )
    {
      *(_QWORD *)&v82 = 0;
      qfree(v81);
    }
    if ( *(_QWORD *)&v79[16] )
    {
      *(_QWORD *)&v80 = 0;
      qfree(*(_QWORD *)&v79[16]);
    }
    clear_tinfo_t(&v68);
    v54 = *(_QWORD *)(v25 + 24);
    if ( (unsigned int)(*(_DWORD *)(v54 + 8) - 59) > 1 )
      goto LABEL_119;
  }
  clear_tinfo_t(v83);
  if ( v81 )
  {
    *(_QWORD *)&v82 = 0;
    qfree(v81);
  }
  if ( *(_QWORD *)&v79[16] )
  {
    *(_QWORD *)&v80 = 0;
    qfree(*(_QWORD *)&v79[16]);
  }
  clear_tinfo_t(&v68);
LABEL_119:
  if ( (*(_BYTE *)(v25 + 57) & 1) != 0 )
    sub_23F940(v25, *(_QWORD *)(v53 + 112), 0);
LABEL_46:
  clear_tinfo_t(&v67);
  clear_tinfo_t(v74);
LABEL_47:
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree(v72);
  }
  if ( v70 )
  {
    v71.m128i_i64[0] = 0;
    qfree(v70);
  }
  return v11;
}
