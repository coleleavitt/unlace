__int64 __fastcall sub_32FF90(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  char v8; // bl
  __int64 v9; // rdi
  __int64 flags; // rax
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 *opinfo; // rax
  __int64 *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rdx
  int v19; // r13d
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rbp
  unsigned __int64 that; // rbp
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 item_end; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int16 v29; // ax
  int v30; // ecx
  int aflags; // ebx
  __int64 v33; // rdx
  const char *v34; // rdi
  unsigned __int64 v35; // rsi
  double v36; // xmm4_8
  double v37; // xmm5_8
  __int64 v38; // rdx
  char v39; // dl
  int v40; // eax
  __int64 v41; // rbx
  __int64 v42; // r14
  __int64 v43; // rdx
  unsigned __int64 v44; // r13
  __int64 v45; // rbp
  __int64 v46; // rax
  unsigned int str_type; // r12d
  unsigned __int64 v48; // rax
  unsigned __int64 max_strlit_length; // rax
  const char *v50; // rdx
  const char *v51; // rbp
  __int64 v52; // [rsp+8h] [rbp-200h]
  __int64 v53; // [rsp+18h] [rbp-1F0h]
  char v54; // [rsp+2Bh] [rbp-1DDh] BYREF
  __int16 v55; // [rsp+2Ch] [rbp-1DCh] BYREF
  unsigned __int16 v56; // [rsp+2Eh] [rbp-1DAh] BYREF
  __int64 v57; // [rsp+30h] [rbp-1D8h] BYREF
  unsigned __int64 v58; // [rsp+38h] [rbp-1D0h] BYREF
  unsigned __int64 data_elsize; // [rsp+40h] [rbp-1C8h] BYREF
  unsigned __int64 v60; // [rsp+48h] [rbp-1C0h] BYREF
  unsigned __int64 v61; // [rsp+50h] [rbp-1B8h] BYREF
  unsigned __int64 v62; // [rsp+58h] [rbp-1B0h] BYREF
  unsigned __int64 v63; // [rsp+60h] [rbp-1A8h] BYREF
  unsigned __int64 v64; // [rsp+68h] [rbp-1A0h] BYREF
  __int64 v65; // [rsp+70h] [rbp-198h] BYREF
  __int64 v66; // [rsp+78h] [rbp-190h] BYREF
  __int64 v67; // [rsp+80h] [rbp-188h] BYREF
  int v68; // [rsp+88h] [rbp-180h]
  char v69[4]; // [rsp+90h] [rbp-178h] BYREF
  int v70; // [rsp+94h] [rbp-174h]
  __int64 v71; // [rsp+98h] [rbp-170h]
  __int64 v72; // [rsp+A0h] [rbp-168h]
  char v73[280]; // [rsp+B0h] [rbp-158h] BYREF
  unsigned __int64 v74; // [rsp+1C8h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  v71 = 0;
  v69[0] = 0;
  v8 = sub_1F09E0(0, &v57, &v58);
  if ( v8 )
  {
    v9 = v57;
  }
  else
  {
    v9 = xmmword_8CC810;
    v57 = xmmword_8CC810;
  }
  flags = get_flags_ex(v9, 1);
  v72 = flags;
  v11 = flags & 0x600;
  if ( v11 == 1536 || v11 == 1024 && (flags & 0xF0000000) == 0xB0000000LL )
    return 0;
  v12 = getseg(v57);
  if ( !v12 )
    return 0;
  data_elsize = get_data_elsize(v57, v72, 0);
  opinfo = (__int64 *)get_opinfo(v73, v57, 0);
  v52 = -1;
  v14 = opinfo;
  if ( opinfo )
    v52 = *opinfo;
  v15 = v72;
  v16 = v57;
  v17 = is_varsize_item(v57, v72, opinfo, &data_elsize);
  v19 = v17;
  if ( v17 < 0 )
    return 0;
  if ( !data_elsize )
  {
    if ( !v17 )
      return 0;
    goto LABEL_36;
  }
  if ( v17 )
LABEL_36:
    data_elsize = 0;
  v20 = *(_QWORD *)(v12 + 8);
  v21 = v58;
  if ( !v8 )
  {
    sub_541EF0(v16, v15, v18);
    v39 = is_debugger_on(v16, v15, v38, a1);
    v40 = -1;
    if ( !v39 )
      v40 = BYTE1(v72) & 1;
    v70 = v40;
    sub_1C76F0((int)"Calculating maximum array size");
    v21 = calc_max_item_end(v57, 31);
    sub_1C78D0();
    v24 = v57;
    if ( v21 == v57 )
    {
      v60 = v20;
      goto LABEL_53;
    }
  }
  if ( v21 == -1 || v20 < v21 )
  {
    v60 = v20;
    if ( v21 == -1 )
    {
      v24 = v57;
LABEL_53:
      v58 = v20;
      v23 = v20;
      goto LABEL_18;
    }
  }
  else
  {
    v60 = v21;
  }
  sub_1C76F0((int)"Calculating array end");
  that = next_that(v21 - 1, v20, sub_32E480, v69);
  sub_1C78D0();
  v23 = that;
  v24 = v57;
  if ( v20 <= that )
    v23 = v20;
  v20 = v60;
  v58 = v23;
LABEL_18:
  v53 = v24;
  v62 = v23 - v24;
  v61 = v20 - v24;
  item_end = get_item_end(v24);
  v26 = v53;
  v63 = item_end - v53;
  v27 = item_end - v53;
  if ( data_elsize )
  {
    v61 /= data_elsize;
    v62 /= data_elsize;
    v26 = v27 % data_elsize;
    v63 = v27 / data_elsize;
  }
  v54 = 0;
  v67 = qword_8BCD80;
  v68 = qword_8BCD88;
  get_array_parameters(&v67, v57, v26, v27);
  v28 = v63;
  if ( v63 == 1 || v8 == 1 )
    v28 = v61;
  v64 = v28;
  v29 = v67;
  v56 = ((int)v67 >> 4) & 0xF;
  if ( !v19 )
    v29 = v67 | 8;
  v55 = v29;
  v65 = SHIDWORD(v67);
  v66 = v68;
  if ( !(unsigned int)sub_507F10(
                        1109,
                        (unsigned int)sub_32E790,
                        (unsigned int)&v54,
                        (unsigned int)"Start address",
                        (unsigned int)&v57,
                        (unsigned int)"End address  ",
                        &v60,
                        &data_elsize,
                        &v62,
                        &v63,
                        &v61,
                        &v64,
                        &v65,
                        &v66,
                        &v55,
                        &v56) )
    return 1;
  HIDWORD(v67) = v65;
  v68 = v66;
  qword_8BCD80 = v67;
  LODWORD(qword_8BCD88) = v66;
  if ( !data_elsize )
    data_elsize = 1;
  if ( v64 )
  {
    v30 = v72;
    if ( (v72 & 0x600) == 0 )
      v30 = 1024;
    if ( (unsigned int)sub_32F3B0(
                         v57,
                         data_elsize * v64,
                         (__int64)"ICON WARNING\nHIDECANCEL\nAUTOHIDE DATABASE\nDirectly convert to array?",
                         v30,
                         nullptr,
                         nullptr) != 1 )
      return 0;
  }
  LODWORD(v67) = v55 & 0xFFF7 | (16 * v56);
  LODWORD(qword_8BCD80) = v67;
  if ( (v55 & 8) == 0 && !v19 )
  {
    v41 = v57;
    v42 = get_flags_ex(v57, 4);
    if ( (unsigned __int8)can_define_item(v57, v64 * data_elsize, v72) )
    {
      v35 = v64;
      v34 = "Creating %lld items";
      sub_1C76F0((int)"Creating %lld items", v64);
      if ( (v42 & 0x600) == 0x400 && (v42 & 0xF0000000) == 0x50000000 )
      {
        v34 = (const char *)v41;
        str_type = get_str_type(v41);
        if ( (str_type & 3) - 1 <= 1 )
          v64 *= 2LL;
        if ( v64 )
        {
          do
          {
            v35 = str_type;
            v34 = (const char *)v41;
            max_strlit_length = get_max_strlit_length(v41, str_type, 4);
            v50 = (const char *)v64;
            if ( max_strlit_length )
            {
              v34 = (const char *)v41;
              if ( max_strlit_length <= v64 )
                v50 = (const char *)max_strlit_length;
              v51 = v50;
              v35 = (unsigned __int64)v50;
              if ( !(unsigned __int8)create_strlit(v41, v50, str_type) )
                goto LABEL_83;
              v41 += (__int64)v51;
              v48 = v64 - (_QWORD)v51;
            }
            else
            {
              ++v41;
              v48 = v64 - 1;
            }
            v64 = v48;
          }
          while ( v48 );
        }
      }
      else
      {
        v44 = 0;
        if ( v64 )
        {
          while ( !(unsigned __int8)sub_541EF0(v34, v35, v43) )
          {
            v45 = sub_32FE70(v41, v42, v52);
            if ( !(unsigned __int8)create_data(v41, v42, v45, v52) )
            {
LABEL_83:
              sub_1C78D0();
              return 0;
            }
            ++v44;
            set_array_parameters(v41, &v67);
            v34 = (const char *)v41;
            v35 = 0;
            v41 += v45;
            set_opinfo(v34, 0, v42, v14, 0);
            if ( v44 >= v64 )
              break;
          }
        }
      }
      sub_1C78D0();
      goto LABEL_48;
    }
    return 0;
  }
  if ( !(unsigned __int8)getinf(9) || !(unsigned __int8)is_spec_ea(v57) )
    goto LABEL_45;
  if ( (v57 & ((unsigned __int8)getinf(9) - 1)) != 0 )
    return 0;
  if ( (unsigned __int8)getinf(9) == 8 )
    put_qword(v57, v64);
  else
    put_dword(v57, v64);
  v64 = 1;
  data_elsize = (unsigned __int8)getinf(9);
LABEL_45:
  aflags = get_aflags(v57);
  if ( !(unsigned __int8)create_data(v57, v72, v64 * data_elsize, v52) )
    return 0;
  set_array_parameters(v57, &v67);
  v33 = v72;
  if ( (v72 & 0x600) == 0x400 && (v72 & 0xF0000000) == 0x60000000 )
  {
    v46 = get_aflags(v57);
    if ( (aflags & 0x80000) == 0 && (v46 & 0x80000) != 0 )
      clr_abits(v57, &stru_80000);
    v33 = v72;
  }
  v34 = (const char *)v57;
  v35 = 0;
  set_opinfo(v57, 0, v33, v14, 0);
LABEL_48:
  sub_1FDB10(a1, a2, a3, a4, v36, v37, a7, a8, (__int64)v34, (const char *)v35);
  return 1;
}
