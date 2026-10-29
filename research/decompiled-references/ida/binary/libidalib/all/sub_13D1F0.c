__int64 __fastcall sub_13D1F0(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  char v8; // bl
  __int64 flags; // rax
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 *opinfo; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  int v22; // r13d
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rbp
  unsigned __int64 that; // rbp
  bool v26; // cc
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int16 v29; // ax
  int v30; // ecx
  int aflags; // ebx
  const char *v33; // rdi
  unsigned __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __m128 v39; // xmm4
  __m128 v40; // xmm5
  int v41; // eax
  __int64 v42; // rbx
  __int64 v43; // r14
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __m128 v48; // xmm4
  __m128 v49; // xmm5
  unsigned __int64 v50; // r13
  __int64 v51; // rbp
  __int64 v52; // rax
  unsigned int str_type; // r12d
  unsigned __int64 v54; // rax
  unsigned __int64 max_strlit_length; // rax
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rbp
  char v58; // [rsp+0h] [rbp-208h]
  __int64 v59; // [rsp+8h] [rbp-200h]
  char v60; // [rsp+2Bh] [rbp-1DDh] BYREF
  __int16 v61; // [rsp+2Ch] [rbp-1DCh]
  unsigned __int16 v62; // [rsp+2Eh] [rbp-1DAh]
  unsigned __int64 v63; // [rsp+30h] [rbp-1D8h] BYREF
  unsigned __int64 v64; // [rsp+38h] [rbp-1D0h] BYREF
  unsigned __int64 data_elsize; // [rsp+40h] [rbp-1C8h]
  unsigned __int64 v66; // [rsp+48h] [rbp-1C0h]
  unsigned __int64 v67; // [rsp+50h] [rbp-1B8h]
  unsigned __int64 v68; // [rsp+58h] [rbp-1B0h]
  unsigned __int64 v69; // [rsp+60h] [rbp-1A8h]
  unsigned __int64 v70; // [rsp+68h] [rbp-1A0h]
  __int64 v71; // [rsp+70h] [rbp-198h]
  __int64 v72; // [rsp+78h] [rbp-190h]
  __int64 v73; // [rsp+80h] [rbp-188h]
  int v74; // [rsp+88h] [rbp-180h]
  char v75; // [rsp+90h] [rbp-178h]
  int v76; // [rsp+94h] [rbp-174h]
  __int64 v77; // [rsp+98h] [rbp-170h]
  __int64 v78; // [rsp+A0h] [rbp-168h]
  unsigned __int64 v79; // [rsp+1C8h] [rbp-40h]

  v79 = __readfsqword(0x28u);
  v77 = 0;
  v75 = 0;
  v8 = sub_161C80(0, &v63, &v64);
  if ( !v8 )
    v63 = xmmword_2528A0;
  flags = get_flags_ex();
  v78 = flags;
  v10 = flags & 0x600;
  if ( v10 == 1536 || v10 == 1024 && (flags & 0xF0000000) == 0xB0000000LL )
    return 0;
  v11 = getseg();
  if ( !v11 )
    return 0;
  data_elsize = get_data_elsize();
  opinfo = (__int64 *)get_opinfo();
  v59 = -1;
  if ( opinfo )
    v59 = *opinfo;
  v13 = v78;
  v14 = v63;
  v15 = is_varsize_item();
  v22 = v15;
  if ( v15 < 0 )
    return 0;
  if ( !data_elsize )
  {
    if ( !v15 )
      return 0;
    goto LABEL_35;
  }
  if ( v15 )
LABEL_35:
    data_elsize = 0;
  v23 = *(_QWORD *)(v11 + 8);
  v24 = v64;
  if ( !v8 )
  {
    sub_1A0470(v14, v13);
    v35 = (unsigned int)is_debugger_on();
    v41 = -1;
    if ( !(_BYTE)v35 )
      v41 = BYTE1(v78) & 1;
    v76 = v41;
    sub_10E0D0(
      (__int64)"Calculating maximum array size",
      v13,
      v35,
      v36,
      v37,
      v38,
      a1,
      a2,
      a3,
      a4,
      v39,
      v40,
      a7,
      a8,
      v58);
    v13 = 31;
    v24 = calc_max_item_end();
    sub_10DB30();
    if ( v63 == v24 )
    {
      v66 = v23;
      goto LABEL_52;
    }
  }
  if ( v24 == -1 || v23 < v24 )
  {
    v66 = v23;
    if ( v24 == -1 )
    {
      v24 = v63;
LABEL_52:
      v64 = v23;
      v27 = v23;
      goto LABEL_18;
    }
  }
  else
  {
    v66 = v24;
  }
  sub_10E0D0((__int64)"Calculating array end", v13, v16, v17, v18, v19, a1, a2, a3, a4, v20, v21, a7, a8, v58);
  that = next_that();
  sub_10DB30();
  v26 = v23 <= that;
  v27 = that;
  v24 = v63;
  if ( v26 )
    v27 = v23;
  v23 = v66;
  v64 = v27;
LABEL_18:
  v68 = v27 - v24;
  v67 = v23 - v24;
  v69 = get_item_end() - v24;
  if ( data_elsize )
  {
    v67 /= data_elsize;
    v68 /= data_elsize;
    v69 /= data_elsize;
  }
  v60 = 0;
  v73 = qword_245080;
  v74 = qword_245088;
  get_array_parameters();
  v28 = v69;
  if ( v69 == 1 || v8 == 1 )
    v28 = v67;
  v70 = v28;
  v29 = v73;
  v62 = ((int)v73 >> 4) & 0xF;
  if ( !v22 )
    v29 = v73 | 8;
  v61 = v29;
  v71 = SHIDWORD(v73);
  v72 = v74;
  if ( !(unsigned int)sub_18C660(
                        1109,
                        (unsigned int)sub_13B260,
                        (unsigned int)&v60,
                        (unsigned int)"Start address",
                        (unsigned int)&v63,
                        (unsigned int)"End address  ") )
    return 1;
  HIDWORD(v73) = v71;
  v74 = v72;
  qword_245080 = v73;
  LODWORD(qword_245088) = v72;
  if ( !data_elsize )
    data_elsize = 1;
  if ( v70 )
  {
    v30 = v78;
    if ( (v78 & 0x600) == 0 )
      v30 = 1024;
    if ( (unsigned int)sub_13B890(
                         v63,
                         data_elsize * v70,
                         "ICON WARNING\nHIDECANCEL\nAUTOHIDE DATABASE\nDirectly convert to array?",
                         v30,
                         nullptr,
                         nullptr) != 1 )
      return 0;
  }
  LODWORD(v73) = v61 & 0xFFF7 | (16 * v62);
  LODWORD(qword_245080) = v73;
  if ( (v61 & 8) == 0 && !v22 )
  {
    v42 = v63;
    v43 = get_flags_ex();
    if ( (unsigned __int8)can_define_item() )
    {
      v34 = v70;
      v33 = "Creating %lld items";
      sub_10E0D0((__int64)"Creating %lld items", v70, v44, v45, v46, v47, a1, a2, a3, a4, v48, v49, a7, a8, v58);
      if ( (v43 & 0x600) == 0x400 && (v43 & 0xF0000000) == 0x50000000 )
      {
        v33 = (const char *)v42;
        str_type = get_str_type();
        if ( (str_type & 3) - 1 <= 1 )
          v70 *= 2LL;
        if ( v70 )
        {
          do
          {
            v34 = str_type;
            v33 = (const char *)v42;
            max_strlit_length = get_max_strlit_length();
            v56 = v70;
            if ( max_strlit_length )
            {
              v33 = (const char *)v42;
              if ( max_strlit_length <= v70 )
                v56 = max_strlit_length;
              v57 = v56;
              v34 = v56;
              if ( !(unsigned __int8)create_strlit() )
                goto LABEL_82;
              v42 += v57;
              v54 = v70 - v57;
            }
            else
            {
              ++v42;
              v54 = v70 - 1;
            }
            v70 = v54;
          }
          while ( v54 );
        }
      }
      else
      {
        v50 = 0;
        if ( v70 )
        {
          while ( !(unsigned __int8)sub_1A0470(v33, v34) )
          {
            v51 = sub_13BBC0(v42, v43, v59);
            if ( !(unsigned __int8)create_data() )
            {
LABEL_82:
              sub_10DB30();
              return 0;
            }
            ++v50;
            set_array_parameters();
            v33 = (const char *)v42;
            v34 = 0;
            v42 += v51;
            set_opinfo();
            if ( v50 >= v70 )
              break;
          }
        }
      }
      sub_10DB30();
      goto LABEL_47;
    }
    return 0;
  }
  if ( !(unsigned __int8)getinf() || !(unsigned __int8)is_spec_ea() )
    goto LABEL_44;
  if ( (v63 & ((unsigned __int8)getinf() - 1)) != 0 )
    return 0;
  if ( (unsigned __int8)getinf() == 8 )
    put_qword();
  else
    put_dword();
  v70 = 1;
  data_elsize = (unsigned __int8)getinf();
LABEL_44:
  aflags = get_aflags();
  if ( !(unsigned __int8)create_data() )
    return 0;
  set_array_parameters();
  if ( (v78 & 0x600) == 0x400 && (v78 & 0xF0000000) == 0x60000000 )
  {
    v52 = get_aflags();
    if ( (aflags & 0x80000) == 0 && (v52 & 0x80000) != 0 )
      clr_abits();
  }
  v33 = (const char *)v63;
  v34 = 0;
  set_opinfo();
LABEL_47:
  sub_15E150(v33, v34);
  return 1;
}

