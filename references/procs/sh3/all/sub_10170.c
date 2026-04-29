const char *__fastcall sub_10170(_BYTE *a1, __int64 *a2, _BYTE *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  size_t v12; // r9
  const char *v13; // r10
  __m128i si128; // xmm0
  __int64 v15; // rsi
  const char *(*v16)(); // rax
  __int64 v17; // r8
  size_t v18; // r11
  size_t v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // rsi
  const char *v24; // rsi
  void *v25; // rdi
  char *v26; // rsi
  __int64 v27; // r15
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 (*v33)(); // r9
  __int64 (*v34)(); // rax
  __int64 v35; // rdx
  char v36; // al
  __int64 ph; // rbx
  int v38; // eax
  char v39; // al
  const char *(*v40)(); // rax
  const char *v41; // rax
  size_t v42; // rax
  size_t v43; // [rsp+8h] [rbp-980h]
  unsigned __int64 v44; // [rsp+8h] [rbp-980h]
  const char *v45; // [rsp+8h] [rbp-980h]
  size_t v46; // [rsp+10h] [rbp-978h]
  __int64 v47; // [rsp+10h] [rbp-978h]
  __int64 v48; // [rsp+10h] [rbp-978h]
  size_t v49; // [rsp+18h] [rbp-970h]
  __int64 v50; // [rsp+18h] [rbp-970h]
  const char *v51; // [rsp+20h] [rbp-968h]
  __int64 v52; // [rsp+28h] [rbp-960h]
  char *v53; // [rsp+30h] [rbp-958h] BYREF
  __int64 v54; // [rsp+38h] [rbp-950h] BYREF
  __int64 v55; // [rsp+40h] [rbp-948h] BYREF
  __int64 v56; // [rsp+48h] [rbp-940h] BYREF
  __int64 v57; // [rsp+50h] [rbp-938h] BYREF
  __int64 v58; // [rsp+58h] [rbp-930h] BYREF
  __int64 v59; // [rsp+60h] [rbp-928h] BYREF
  __int128 v60; // [rsp+68h] [rbp-920h]
  __m128i v61; // [rsp+80h] [rbp-908h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-8E8h]
  __int64 v63; // [rsp+A8h] [rbp-8E0h]
  __int64 v64; // [rsp+B0h] [rbp-8D8h]
  __int128 v65; // [rsp+B8h] [rbp-8D0h]
  __int128 v66; // [rsp+C8h] [rbp-8C0h]
  __int128 v67; // [rsp+D8h] [rbp-8B0h]
  __int128 v68; // [rsp+E8h] [rbp-8A0h]
  __int128 v69; // [rsp+F8h] [rbp-890h]
  __int128 v70; // [rsp+108h] [rbp-880h]
  __int128 v71; // [rsp+118h] [rbp-870h]
  __int128 v72; // [rsp+128h] [rbp-860h]
  unsigned __int64 v73; // [rsp+138h] [rbp-850h]
  _BYTE v74[1024]; // [rsp+140h] [rbp-848h] BYREF
  int v75; // [rsp+540h] [rbp-448h] BYREF
  __int16 v76; // [rsp+544h] [rbp-444h]
  char v77; // [rsp+93Fh] [rbp-49h]
  unsigned __int64 v78; // [rsp+948h] [rbp-40h]

  v78 = __readfsqword(0x28u);
  if ( *a3 == 59 )
    return "syntax error";
  v74[1023] = 0;
  v77 = 0;
  if ( (unsigned int)qsscanf(a3, "area %1023s %1023s %a:%a", &v75, v74, &v53, &v54) != 4 )
    return "syntax error";
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v8 = qvector_reserve(&v59, 0, 27, 1, v6, v7);
  v59 = v8;
  v12 = 6;
  *(_QWORD *)&v60 = 27;
  v13 = "EEPROM";
  *(__m128i *)v8 = _mm_load_si128((const __m128i *)&xmmword_11E00);
  si128 = _mm_load_si128((const __m128i *)&xmmword_11E10);
  v15 = v59;
  *(__m128i *)(v8 + 10) = si128;
  *(_BYTE *)(v15 + 26) = 0;
  v16 = *(const char *(**)())(*(_QWORD *)a1 + 16LL);
  if ( v16 != sub_DB80 )
  {
    v41 = (const char *)((__int64 (__fastcall *)(_BYTE *, __int64, __int64, __int64, __int64, __int64))v16)(
                          a1,
                          v15,
                          v9,
                          v10,
                          v11,
                          6);
    if ( !v41 )
      goto LABEL_10;
    v45 = v41;
    v48 = v59;
    v42 = strlen(v41);
    v15 = v48;
    v13 = v45;
    v12 = v42;
  }
  v17 = v60;
  v18 = v12;
  if ( (_QWORD)v60 )
  {
    v17 = v60 - 1;
    v18 = v12 + v60 - 1;
  }
  v19 = v18 + 1;
  if ( *((_QWORD *)&v60 + 1) < v18 + 1 )
  {
    v52 = v17;
    v51 = v13;
    v49 = v18;
    v46 = v12;
    v43 = v18 + 1;
    v59 = qvector_reserve(&v59, v15, v19, 1, v17, v12);
    v17 = v52;
    v15 = v59;
    v13 = v51;
    v18 = v49;
    v12 = v46;
    v19 = v43;
  }
  *(_QWORD *)&v60 = v19;
  *(_BYTE *)(v15 + v18) = 0;
  memmove((void *)(v17 + v59), v13, v12);
LABEL_10:
  v20 = v60;
  if ( (_QWORD)v60 )
  {
    v22 = v60 + 3;
    v21 = v60 + 4;
    v20 = v60 - 1;
  }
  else
  {
    v21 = 5;
    v22 = 4;
  }
  v23 = v59;
  if ( *((_QWORD *)&v60 + 1) < v21 )
  {
    v50 = v22;
    v47 = v20;
    v44 = v21;
    v59 = qvector_reserve(&v59, v59, v21, 1, v20, v22);
    v22 = v50;
    v23 = v59;
    v20 = v47;
    v21 = v44;
  }
  *(_QWORD *)&v60 = v21;
  *(_BYTE *)(v23 + v22) = 0;
  v24 = (const char *)&unk_11E50;
  *(_DWORD *)(v20 + v59) = 1970939197;
  if ( (_QWORD)v60 )
    v24 = (const char *)v59;
  v25 = &unk_11E50;
  if ( a2[1] )
    v25 = (void *)*a2;
  qsscanf(v25, v24, &v55, &v56, &v57, &v58);
  v26 = "RAM";
  v27 = v54 - (_QWORD)v53;
  if ( stristr(v74, "RAM") )
  {
    v28 = v57;
    v29 = v58;
    v30 = v27 + v55;
    v55 += v27;
  }
  else
  {
    v26 = "EEPROM";
    v40 = *(const char *(**)())(*(_QWORD *)a1 + 16LL);
    if ( v40 != sub_DB80 )
      v26 = (char *)((__int64 (__fastcall *)(_BYTE *, const char *))v40)(a1, "EEPROM");
    if ( stristr(v74, v26) )
    {
      v30 = v55;
      v58 += v27;
      v28 = v57;
      v29 = v58;
    }
    else
    {
      v26 = "EPROM";
      if ( stristr(v74, "EPROM") )
      {
        v30 = v55;
        v57 += v27;
        v29 = v58;
        v28 = v57;
      }
      else
      {
        v26 = "ROM";
        if ( stristr(v74, "ROM") )
          v56 += v27;
        v30 = v55;
        v28 = v57;
        v29 = v58;
      }
    }
  }
  if ( v29 | v56 | v28 | v30 )
  {
    v26 = (char *)&unk_11E50;
    if ( (_QWORD)v60 )
      v26 = (char *)v59;
    sub_100B0(a2, (__int64)v26);
  }
  else
  {
    a2[1] = 0;
  }
  if ( (a1[80] & 2) == 0 || !get_first_seg() )
    goto LABEL_34;
  v31 = *(_QWORD *)a1;
  v32 = v54;
  v26 = v53;
  v33 = *(__int64 (**)())(*(_QWORD *)a1 + 64LL);
  if ( v33 == sub_DBA0 )
    goto LABEL_25;
  if ( !((unsigned __int8 (__fastcall *)(_BYTE *, char *, __int64, _BYTE *, int *))v33)(a1, v53, v54, v74, &v75) )
  {
    v31 = *(_QWORD *)a1;
    v32 = v54;
    v26 = v53;
LABEL_25:
    v34 = *(__int64 (**)())(v31 + 72);
    if ( v34 == sub_DBB0
      || !((unsigned __int8 (__fastcall *)(_BYTE *, char *, __int64, _BYTE *, int *))v34)(a1, v26, v32, v74, &v75) )
    {
      v62 = 0;
      memset(&v61, 0, 32);
      v63 = 0;
      v64 = 0;
      v73 = 0xFFFFFFFF00000000LL;
      v65 = -1;
      v66 = -1;
      v67 = -1;
      v68 = -1;
      v69 = -1;
      v70 = -1;
      v71 = -1;
      v72 = -1;
      v64 = setup_selector(0, v26);
      LOBYTE(v63) = 1;
      si128 = (__m128i)_mm_loadh_ps((const double *)&v54);
      v61 = si128;
      if ( v75 != 1128354899 || (v36 = 5, v76 != 75) )
        v36 = 2;
      BYTE1(v63) = v36;
      ph = get_ph(0, v26, v35);
      if ( (unsigned __int8)getinf_flag(3, 4) && (*(_DWORD *)(ph + 8) & 0x10000000) != 0 )
      {
        BYTE3(v63) = 2;
      }
      else
      {
        v38 = *(_DWORD *)(ph + 8) & 4;
        BYTE3(v63) = (*(_BYTE *)(ph + 8) & 4) != 0;
        if ( !v38 && v61.m128i_i64[1] - v61.m128i_i64[0] > 0xFFFFuLL )
          BYTE3(v63) = 1;
      }
      v39 = is_loaded(v61.m128i_i64[0]);
      v26 = v74;
      add_segm_ex(&v61, v74, &v75, v39 == 0 ? 33 : 1);
    }
  }
LABEL_34:
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree(v59, v26, v30, *(double *)si128.m128i_i64);
  }
  return nullptr;
}
