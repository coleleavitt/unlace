const char *__fastcall sub_183F0(_BYTE *a1, __int64 *a2, _BYTE *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  size_t v10; // r9
  const char *v11; // r10
  __int64 v12; // rsi
  const char *(*v13)(); // rax
  __int64 v14; // r8
  size_t v15; // r11
  size_t v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rsi
  const char *v21; // rsi
  const char *v22; // rdi
  __int64 v23; // r15
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 (*v30)(); // r9
  __int64 (*v31)(); // rax
  char v32; // al
  __int64 ph; // rbx
  int v34; // eax
  char v35; // al
  const char *v36; // rsi
  const char *v37; // rsi
  const char *(*v38)(); // rax
  const char *v39; // rax
  size_t v40; // rax
  size_t v41; // [rsp+8h] [rbp-980h]
  unsigned __int64 v42; // [rsp+8h] [rbp-980h]
  const char *v43; // [rsp+8h] [rbp-980h]
  size_t v44; // [rsp+10h] [rbp-978h]
  __int64 v45; // [rsp+10h] [rbp-978h]
  __int64 v46; // [rsp+10h] [rbp-978h]
  size_t v47; // [rsp+18h] [rbp-970h]
  __int64 v48; // [rsp+18h] [rbp-970h]
  const char *v49; // [rsp+20h] [rbp-968h]
  __int64 v50; // [rsp+28h] [rbp-960h]
  __int64 v51; // [rsp+30h] [rbp-958h] BYREF
  __int64 v52; // [rsp+38h] [rbp-950h] BYREF
  __int64 v53; // [rsp+40h] [rbp-948h] BYREF
  __int64 v54; // [rsp+48h] [rbp-940h] BYREF
  __int64 v55; // [rsp+50h] [rbp-938h] BYREF
  __int64 v56; // [rsp+58h] [rbp-930h] BYREF
  __int64 v57; // [rsp+60h] [rbp-928h] BYREF
  __int128 v58; // [rsp+68h] [rbp-920h]
  __m128 v59; // [rsp+80h] [rbp-908h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-8E8h]
  __int64 v61; // [rsp+A8h] [rbp-8E0h]
  __int64 v62; // [rsp+B0h] [rbp-8D8h]
  __int128 v63; // [rsp+B8h] [rbp-8D0h]
  __int128 v64; // [rsp+C8h] [rbp-8C0h]
  __int128 v65; // [rsp+D8h] [rbp-8B0h]
  __int128 v66; // [rsp+E8h] [rbp-8A0h]
  __int128 v67; // [rsp+F8h] [rbp-890h]
  __int128 v68; // [rsp+108h] [rbp-880h]
  __int128 v69; // [rsp+118h] [rbp-870h]
  __int128 v70; // [rsp+128h] [rbp-860h]
  unsigned __int64 v71; // [rsp+138h] [rbp-850h]
  _BYTE v72[1024]; // [rsp+140h] [rbp-848h] BYREF
  int v73; // [rsp+540h] [rbp-448h] BYREF
  __int16 v74; // [rsp+544h] [rbp-444h]
  char v75; // [rsp+93Fh] [rbp-49h]
  unsigned __int64 v76; // [rsp+948h] [rbp-40h]

  v76 = __readfsqword(0x28u);
  if ( *a3 == 59 )
    return "syntax error";
  v72[1023] = 0;
  v75 = 0;
  if ( (unsigned int)qsscanf(a3, "area %1023s %1023s %a:%a", &v73, v72, &v51, &v52) != 4 )
    return "syntax error";
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v6 = qvector_reserve(&v57, 0, 27, 1);
  v57 = v6;
  v10 = 6;
  *(_QWORD *)&v58 = 27;
  v11 = "EEPROM";
  *(__m128i *)v6 = _mm_load_si128((const __m128i *)&xmmword_1F670);
  v12 = v57;
  *(__m128i *)(v6 + 10) = _mm_load_si128((const __m128i *)&xmmword_1F680);
  *(_BYTE *)(v12 + 26) = 0;
  v13 = *(const char *(**)())(*(_QWORD *)a1 + 16LL);
  if ( v13 != sub_14E40 )
  {
    v39 = (const char *)((__int64 (__fastcall *)(_BYTE *, __int64, __int64, __int64, __int64, __int64))v13)(
                          a1,
                          v12,
                          v7,
                          v8,
                          v9,
                          6);
    if ( !v39 )
      goto LABEL_10;
    v43 = v39;
    v46 = v57;
    v40 = strlen(v39);
    v12 = v46;
    v11 = v43;
    v10 = v40;
  }
  v14 = v58;
  v15 = v10;
  if ( (_QWORD)v58 )
  {
    v14 = v58 - 1;
    v15 = v10 + v58 - 1;
  }
  v16 = v15 + 1;
  if ( *((_QWORD *)&v58 + 1) < v15 + 1 )
  {
    v50 = v14;
    v49 = v11;
    v47 = v15;
    v44 = v10;
    v41 = v15 + 1;
    v57 = qvector_reserve(&v57, v12, v16, 1);
    v14 = v50;
    v12 = v57;
    v11 = v49;
    v15 = v47;
    v10 = v44;
    v16 = v41;
  }
  *(_QWORD *)&v58 = v16;
  *(_BYTE *)(v12 + v15) = 0;
  memmove((void *)(v14 + v57), v11, v10);
LABEL_10:
  v17 = v58;
  if ( (_QWORD)v58 )
  {
    v19 = v58 + 3;
    v18 = v58 + 4;
    v17 = v58 - 1;
  }
  else
  {
    v18 = 5;
    v19 = 4;
  }
  v20 = v57;
  if ( *((_QWORD *)&v58 + 1) < v18 )
  {
    v48 = v19;
    v45 = v17;
    v42 = v18;
    v57 = qvector_reserve(&v57, v57, v18, 1);
    v19 = v48;
    v20 = v57;
    v17 = v45;
    v18 = v42;
  }
  *(_QWORD *)&v58 = v18;
  *(_BYTE *)(v20 + v19) = 0;
  v21 = needle;
  *(_DWORD *)(v17 + v57) = 1970939197;
  if ( (_QWORD)v58 )
    v21 = (const char *)v57;
  v22 = needle;
  if ( a2[1] )
    v22 = (const char *)*a2;
  qsscanf(v22, v21, &v53, &v54, &v55, &v56);
  v23 = v52 - v51;
  if ( stristr(v72, "RAM") )
  {
    v24 = v55;
    v25 = v56;
    v26 = v23 + v53;
    v53 += v23;
  }
  else
  {
    v37 = "EEPROM";
    v38 = *(const char *(**)())(*(_QWORD *)a1 + 16LL);
    if ( v38 != sub_14E40 )
      v37 = (const char *)((__int64 (__fastcall *)(_BYTE *, const char *))v38)(a1, "EEPROM");
    if ( stristr(v72, v37) )
    {
      v26 = v53;
      v56 += v23;
      v24 = v55;
      v25 = v56;
    }
    else if ( stristr(v72, "EPROM") )
    {
      v26 = v53;
      v55 += v23;
      v25 = v56;
      v24 = v55;
    }
    else
    {
      if ( stristr(v72, "ROM") )
        v54 += v23;
      v26 = v53;
      v24 = v55;
      v25 = v56;
    }
  }
  if ( v25 | v54 | v24 | v26 )
  {
    v36 = needle;
    if ( (_QWORD)v58 )
      v36 = (const char *)v57;
    sub_11D90(a2, (__int64)v36);
  }
  else
  {
    a2[1] = 0;
  }
  if ( (a1[80] & 2) == 0 || !get_first_seg() )
    goto LABEL_34;
  v27 = *(_QWORD *)a1;
  v28 = v52;
  v29 = v51;
  v30 = *(__int64 (**)())(*(_QWORD *)a1 + 64LL);
  if ( v30 == sub_14E60 )
    goto LABEL_25;
  if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64, _BYTE *, int *))v30)(a1, v51, v52, v72, &v73) )
  {
    v27 = *(_QWORD *)a1;
    v28 = v52;
    v29 = v51;
LABEL_25:
    v31 = *(__int64 (**)())(v27 + 72);
    if ( v31 == sub_14E70
      || !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64, _BYTE *, int *))v31)(a1, v29, v28, v72, &v73) )
    {
      v60 = 0;
      memset(&v59, 0, 32);
      v61 = 0;
      v62 = 0;
      v71 = 0xFFFFFFFF00000000LL;
      v63 = -1;
      v64 = -1;
      v65 = -1;
      v66 = -1;
      v67 = -1;
      v68 = -1;
      v69 = -1;
      v70 = -1;
      v62 = setup_selector(0, v29);
      LOBYTE(v61) = 1;
      v59 = _mm_loadh_ps((const double *)&v52);
      if ( v73 != 1128354899 || (v32 = 5, v74 != 75) )
        v32 = 2;
      BYTE1(v61) = v32;
      ph = get_ph();
      if ( (unsigned __int8)getinf_flag(3, 4) && (*(_DWORD *)(ph + 8) & 0x10000000) != 0 )
      {
        BYTE3(v61) = 2;
      }
      else
      {
        v34 = *(_DWORD *)(ph + 8) & 4;
        BYTE3(v61) = (*(_BYTE *)(ph + 8) & 4) != 0;
        if ( !v34 && v59.m128_u64[1] - v59.m128_u64[0] > 0xFFFF )
          BYTE3(v61) = 1;
      }
      v35 = is_loaded(v59.m128_u64[0]);
      add_segm_ex(&v59, v72, &v73, v35 == 0 ? 33 : 1);
    }
  }
LABEL_34:
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v57);
  }
  return nullptr;
}
