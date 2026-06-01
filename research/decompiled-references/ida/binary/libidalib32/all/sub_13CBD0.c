__int64 __fastcall sub_13CBD0(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  char v8; // bl
  __int64 flags; // rax
  __int64 v10; // rdx
  __int64 v11; // rbp
  unsigned int *opinfo; // rax
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  int v21; // r13d
  __int64 v22; // rsi
  unsigned int v23; // r15d
  unsigned int v24; // ebp
  unsigned int that; // ebp
  bool v26; // cc
  unsigned int v27; // eax
  unsigned int v28; // eax
  __int16 v29; // ax
  __m128i v30; // xmm1
  __m128 v31; // xmm0
  int v32; // ecx
  int aflags; // ebx
  const char *v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __m128 v40; // xmm4
  __m128 v41; // xmm5
  int v42; // eax
  unsigned int v43; // ebx
  __int64 v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __m128 v49; // xmm4
  __m128 v50; // xmm5
  __int64 v51; // rsi
  unsigned int v52; // r13d
  int v53; // ebp
  __int64 v54; // rax
  unsigned int v55; // eax
  unsigned __int64 max_strlit_length; // rax
  int v57; // ebp
  char v58; // [rsp+0h] [rbp-148h]
  unsigned int v59; // [rsp+Ch] [rbp-13Ch]
  char v60; // [rsp+23h] [rbp-125h] BYREF
  __int16 v61; // [rsp+24h] [rbp-124h]
  unsigned __int16 v62; // [rsp+26h] [rbp-122h]
  unsigned int v63; // [rsp+28h] [rbp-120h] BYREF
  unsigned int v64; // [rsp+2Ch] [rbp-11Ch] BYREF
  unsigned int data_elsize; // [rsp+30h] [rbp-118h]
  unsigned int v66; // [rsp+34h] [rbp-114h]
  unsigned int v67; // [rsp+38h] [rbp-110h]
  unsigned int v68; // [rsp+3Ch] [rbp-10Ch]
  unsigned int v69; // [rsp+40h] [rbp-108h]
  unsigned int v70; // [rsp+44h] [rbp-104h]
  unsigned int v71; // [rsp+48h] [rbp-100h]
  unsigned int v72; // [rsp+4Ch] [rbp-FCh]
  _BYTE v73[12]; // [rsp+50h] [rbp-F8h]
  char v74; // [rsp+60h] [rbp-E8h]
  int v75; // [rsp+64h] [rbp-E4h]
  __int64 v76; // [rsp+68h] [rbp-E0h]
  __int64 v77; // [rsp+70h] [rbp-D8h]
  unsigned __int64 v78; // [rsp+108h] [rbp-40h]

  v78 = __readfsqword(0x28u);
  v76 = 0;
  v74 = 0;
  v8 = sub_161360(0, &v63, &v64);
  if ( !v8 )
    v63 = qword_251700;
  flags = get_flags_ex();
  v77 = flags;
  v10 = flags & 0x600;
  if ( v10 == 1536 || v10 == 1024 && (flags & 0xF0000000) == 0xB0000000LL )
    return 0;
  v11 = getseg();
  if ( !v11 )
    return 0;
  data_elsize = get_data_elsize();
  opinfo = (unsigned int *)get_opinfo();
  v59 = -1;
  if ( opinfo )
    v59 = *opinfo;
  v13 = v63;
  v14 = is_varsize_item();
  v21 = v14;
  if ( v14 < 0 )
    return 0;
  v22 = data_elsize;
  if ( !data_elsize )
  {
    if ( !v14 )
      return 0;
    goto LABEL_35;
  }
  if ( v14 )
LABEL_35:
    data_elsize = 0;
  v23 = *(_DWORD *)(v11 + 4);
  v24 = v64;
  if ( !v8 )
  {
    sub_19F870(v13, v22);
    v36 = (unsigned int)is_debugger_on();
    v42 = -1;
    if ( !(_BYTE)v36 )
      v42 = BYTE1(v77) & 1;
    v75 = v42;
    sub_10DDF0(
      (__int64)"Calculating maximum array size",
      v22,
      v36,
      v37,
      v38,
      v39,
      a1,
      a2,
      a3,
      a4,
      v40,
      v41,
      a7,
      a8,
      v58);
    v22 = 31;
    v24 = calc_max_item_end();
    sub_10D850();
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
  sub_10DDF0((__int64)"Calculating array end", v22, v15, v16, v17, v18, a1, a2, a3, a4, v19, v20, a7, a8, v58);
  that = next_that();
  sub_10D850();
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
  *(_QWORD *)v73 = qword_244070;
  *(_DWORD *)&v73[8] = qword_244078;
  get_array_parameters();
  v28 = v69;
  if ( v69 == 1 || v8 == 1 )
    v28 = v67;
  v70 = v28;
  v29 = *(_WORD *)v73;
  v62 = (*(int *)v73 >> 4) & 0xF;
  if ( !v21 )
    v29 = *(_WORD *)v73 | 8;
  v61 = v29;
  v71 = *(_DWORD *)&v73[4];
  v72 = *(_DWORD *)&v73[8];
  if ( !(unsigned int)sub_18BA90(
                        1109,
                        (unsigned int)sub_13AC70,
                        (unsigned int)&v60,
                        (unsigned int)"Start address",
                        (unsigned int)&v63,
                        (unsigned int)"End address  ") )
    return 1;
  v30 = _mm_cvtsi32_si128(v72);
  v31 = (__m128)_mm_unpacklo_epi32(_mm_cvtsi32_si128(v71), v30);
  *(_QWORD *)&v73[4] = v31.m128_u64[0];
  qword_244070 = *(_QWORD *)v73;
  LODWORD(qword_244078) = v31.m128_i32[1];
  if ( !data_elsize )
    data_elsize = 1;
  if ( v70 )
  {
    v32 = v77;
    if ( (v77 & 0x600) == 0 )
      v32 = 1024;
    if ( (unsigned int)sub_13B290(
                         v63,
                         data_elsize * v70,
                         "ICON WARNING\nHIDECANCEL\nAUTOHIDE DATABASE\nDirectly convert to array?",
                         v32,
                         nullptr,
                         nullptr) != 1 )
      return 0;
  }
  *(_DWORD *)v73 = v61 & 0xFFF7 | (16 * v62);
  LODWORD(qword_244070) = *(_DWORD *)v73;
  if ( (v61 & 8) == 0 && !v21 )
  {
    v43 = v63;
    v44 = get_flags_ex();
    if ( (unsigned __int8)can_define_item() )
    {
      v51 = v70;
      v35 = "Creating %d items";
      sub_10DDF0((__int64)"Creating %d items", v70, v45, v46, v47, v48, v31, (__m128)v30, a3, a4, v49, v50, a7, a8, v58);
      if ( (v44 & 0x600) == 0x400 && (v44 & 0xF0000000) == 0x50000000 )
      {
        v35 = (const char *)v43;
        if ( ((unsigned int)get_str_type() & 3) - 1 <= 1 )
          v70 *= 2;
        if ( v70 )
        {
          do
          {
            v35 = (const char *)v43;
            max_strlit_length = get_max_strlit_length();
            if ( max_strlit_length )
            {
              v35 = (const char *)v43;
              if ( v70 <= max_strlit_length )
                LODWORD(max_strlit_length) = v70;
              v57 = max_strlit_length;
              if ( !(unsigned __int8)create_strlit() )
                goto LABEL_82;
              v43 += v57;
              v55 = v70 - v57;
            }
            else
            {
              ++v43;
              v55 = v70 - 1;
            }
            v70 = v55;
          }
          while ( v55 );
        }
      }
      else
      {
        v52 = 0;
        if ( v70 )
        {
          while ( !(unsigned __int8)sub_19F870(v35, v51) )
          {
            v53 = sub_13B5F0(v43, v44, v59);
            if ( !(unsigned __int8)create_data() )
            {
LABEL_82:
              sub_10D850();
              return 0;
            }
            ++v52;
            set_array_parameters();
            v35 = (const char *)v43;
            v51 = 0;
            v43 += v53;
            set_opinfo();
            if ( v52 >= v70 )
              break;
          }
        }
      }
      sub_10D850();
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
  if ( (v77 & 0x600) == 0x400 && (v77 & 0xF0000000) == 0x60000000 )
  {
    v54 = get_aflags();
    if ( (aflags & 0x80000) == 0 && (v54 & 0x80000) != 0 )
      clr_abits();
  }
  v35 = (const char *)v63;
  set_opinfo();
LABEL_47:
  sub_15D870(v35);
  return 1;
}

