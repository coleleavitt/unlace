__int64 __fastcall sub_1945670(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __int64 a9,
        __int64 *a10,
        __int64 a11)
{
  __m128 si128; // xmm0
  __int64 v13; // rax
  int v15; // r8d
  int v16; // edx
  int v17; // r12d
  __int64 v18; // rbp
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // eax
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // rax
  _BYTE *v28; // r12
  _BYTE *v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rax
  char v32; // cl
  __int64 v33; // rcx
  void *v34; // r14
  __m128 v35; // xmm0
  __int64 v36; // rbx
  unsigned int v37; // eax
  unsigned __int16 *v38; // rsi
  __int64 v39; // rax
  __int64 v40; // r12
  unsigned __int64 v41; // rbx
  char *v42; // rax
  __int64 v43; // rdx
  unsigned __int16 v44; // ax
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // r8d
  int v48; // edx
  int v49; // r13d
  int v50; // r12d
  char v51; // al
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rax
  _DWORD *v55; // rdx
  _DWORD *v56; // rcx
  int v57; // edi
  int v58; // esi
  _DWORD *v59; // r8
  int v60; // eax
  __int64 v61; // rsi
  unsigned __int64 v62; // rax
  int v64; // [rsp+18h] [rbp-290h]
  __int64 v65; // [rsp+18h] [rbp-290h]
  void *v66; // [rsp+20h] [rbp-288h]
  int v67; // [rsp+20h] [rbp-288h]
  int v68; // [rsp+28h] [rbp-280h]
  int v69; // [rsp+28h] [rbp-280h]
  __int64 v71; // [rsp+40h] [rbp-268h]
  __int64 v72; // [rsp+60h] [rbp-248h] BYREF
  _DWORD *v73; // [rsp+68h] [rbp-240h]
  char v74; // [rsp+7Fh] [rbp-229h] BYREF
  __m128i v75; // [rsp+80h] [rbp-228h] BYREF
  __m128i v76; // [rsp+90h] [rbp-218h] BYREF
  void *v77; // [rsp+A0h] [rbp-208h] BYREF
  __int64 v78; // [rsp+A8h] [rbp-200h]
  _BYTE v79[32]; // [rsp+B0h] [rbp-1F8h] BYREF
  void *v80[2]; // [rsp+D0h] [rbp-1D8h] BYREF
  _BYTE v81[32]; // [rsp+E0h] [rbp-1C8h] BYREF
  void *ptr; // [rsp+100h] [rbp-1A8h] BYREF
  __m128 v83; // [rsp+108h] [rbp-1A0h]
  _BYTE v84[16]; // [rsp+118h] [rbp-190h] BYREF
  char v85; // [rsp+128h] [rbp-180h]
  void *v86; // [rsp+130h] [rbp-178h] BYREF
  __int64 v87; // [rsp+138h] [rbp-170h]
  _QWORD v88[4]; // [rsp+140h] [rbp-168h] BYREF
  __m128 v89; // [rsp+160h] [rbp-148h] BYREF
  __int64 v90; // [rsp+178h] [rbp-130h] BYREF
  _BYTE *v91; // [rsp+1A8h] [rbp-100h]
  _BYTE *v92; // [rsp+1B8h] [rbp-F0h]
  void *v93; // [rsp+1C0h] [rbp-E8h]
  _QWORD *v94; // [rsp+1C8h] [rbp-E0h]
  __int64 v95; // [rsp+1D0h] [rbp-D8h]
  void *v96[25]; // [rsp+1E0h] [rbp-C8h] BYREF

  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v73 = a4;
  v77 = v79;
  v78 = 0x400000000LL;
  v80[1] = (void *)0x400000000LL;
  ptr = v84;
  v83 = si128;
  v85 = 0;
  v13 = *(_QWORD *)(a3 + 16);
  v72 = a3;
  v80[0] = v81;
  if ( (v13 & 0x100000000LL) != 0 )
  {
    if ( (v13 & 0x20000000) != 0 )
      v15 = sub_18BCBB0(a3);
    else
      v15 = 0;
    v16 = 0;
    v17 = (_DWORD)v73 + 16;
    if ( *(_BYTE *)(a3 + 16) != 25 )
      v16 = *(unsigned __int16 *)(a3 + 22);
    v68 = v16;
    v64 = v15;
    sub_F6CCB0(&v72, si128);
    if ( (unsigned __int8)sub_194F920(
                            (_DWORD)a1,
                            v17,
                            v68,
                            (int)a3 + 48,
                            v64,
                            (unsigned int)&v77,
                            (__int64)v80,
                            (__int64)&ptr) )
      goto LABEL_7;
    v20 = *a1;
    v21 = a5;
    v22 = *(_QWORD *)(*a1 + 3032);
    if ( !v22 )
      v22 = *(_QWORD *)(v20 + 544);
    if ( (*(_BYTE *)(v22 + 8) & 0x7Fu) - 59 <= 2 )
    {
      v21 = v22 - 64;
      if ( a5 || v22 == 64 )
        v21 = a5;
    }
    sub_19A2CD0(v96, v20, v21, a6, 1);
    v23 = sub_BEB490((__int64)&v72);
    v65 = sub_1946010(a1, a2, v23, v24);
    if ( (v65 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v18 = 0;
      sub_19A2DA0(v96);
      goto LABEL_8;
    }
    sub_19A2DA0(v96);
  }
  else
  {
    v45 = sub_BEB490((__int64)&v72);
    v65 = sub_1946010(a1, a2, v45, v46);
    if ( (v65 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_7;
    if ( (*(_BYTE *)(a3 + 19) & 0x20) != 0 )
      v47 = sub_18BCBB0(a3);
    else
      v47 = 0;
    v48 = 0;
    v49 = v72 + 48;
    v50 = (_DWORD)v73 + 16;
    if ( *(_BYTE *)(v72 + 16) != 25 )
      v48 = *(unsigned __int16 *)(v72 + 22);
    v69 = v48;
    v67 = v47;
    sub_F6CCB0(&v72, si128);
    if ( (unsigned __int8)sub_194F920((_DWORD)a1, v50, v69, v49, v67, (unsigned int)&v77, (__int64)v80, (__int64)&ptr) )
      goto LABEL_7;
  }
  sub_A5E110(&v89, a3);
  v74 = 0;
  v25 = sub_F6CCB0(a10, si128);
  if ( (unsigned __int8)sub_19471F0(a9, v25, &v90, a11, &v74) )
  {
LABEL_7:
    v18 = 0;
    goto LABEL_8;
  }
  v26 = (unsigned int)v78;
  if ( !v85 )
  {
    v29 = v91;
    goto LABEL_79;
  }
  v27 = v83.m128_u64[0];
  if ( v83.m128_u64[0] == (unsigned int)v78 )
    goto LABEL_84;
  if ( v83.m128_u64[0] > (unsigned int)v78 )
  {
    v83.m128_u64[0] = (unsigned int)v78;
LABEL_84:
    v28 = ptr;
    goto LABEL_31;
  }
  if ( (unsigned int)v78 > v83.m128_u64[1] )
  {
    sub_2236E10(&ptr, v84, (unsigned int)v78, 1);
    v27 = v83.m128_u64[0];
  }
  v28 = ptr;
  if ( (char *)ptr + v27 != (char *)ptr + v26 )
    memset((char *)ptr + v27, 0, v26 - v27);
  v83.m128_u64[0] = v26;
LABEL_31:
  v29 = v91;
  if ( v28 )
  {
    if ( v91 )
    {
      if ( *(_BYTE *)(v72 + 16) == 25 )
      {
        if ( !(_DWORD)v78 )
          goto LABEL_41;
      }
      else
      {
        v30 = *(unsigned __int16 *)(v72 + 22);
        if ( v30 == (unsigned int)v78 )
        {
          if ( v91 == &v91[v30] )
          {
LABEL_41:
            v91 = v28;
            goto LABEL_42;
          }
          if ( *v28 == *v91 )
          {
            v31 = 1;
            while ( v30 != v31 )
            {
              v32 = v91[v31++];
              if ( v32 != v28[v31 - 1] )
                goto LABEL_40;
            }
            goto LABEL_41;
          }
        }
      }
    }
LABEL_40:
    v74 = 1;
    goto LABEL_41;
  }
LABEL_79:
  if ( v29 )
  {
    v74 = 1;
    v91 = nullptr;
  }
LABEL_42:
  memset(v96, 0, 0x88u);
  v33 = *a1;
  v71 = *a1;
  if ( v95 )
  {
    v34 = nullptr;
    v96[0] = &v96[3];
    v35 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8CF0);
    v96[8] = &v96[10];
    v96[9] = (void *)0x600000000LL;
    *(__m128 *)&v96[1] = v35;
    LOBYTE(v96[16]) = 1;
    sub_18C79E0(v33, 4, 4);
    v66 = v93;
    if ( v93 )
    {
      do
      {
        if ( !v95 )
        {
          v75.m128i_i8[0] = *((_BYTE *)v34 + (_QWORD)v92);
          v75.m128i_i64[1] = 0;
          a8 = (__m128)_mm_load_si128(&v75);
          v76 = (__m128i)a8;
          goto LABEL_46;
        }
        v38 = (unsigned __int16 *)v94[(_QWORD)v34];
        v75.m128i_i8[0] = *((_BYTE *)v34 + (_QWORD)v92);
        v75.m128i_i64[1] = (__int64)v38;
        v76 = _mm_load_si128(&v75);
        if ( v38 )
        {
          v39 = sub_1944E10(a1, v38, v35, a8);
          if ( v39 == 1
            || (v40 = *a1,
                v41 = v39 & 0xFFFFFFFFFFFFFFFELL,
                v42 = sub_F5ED10(v75.m128i_i8),
                v44 = sub_1E72620(v40, v41, v42, v43),
                !HIBYTE(v44)) )
          {
            v18 = 0;
            sub_190D5E0(v71, v35);
            goto LABEL_73;
          }
          if ( (_BYTE)v44 == 2 )
            goto LABEL_56;
          if ( (_BYTE)v44 != 3 )
          {
            if ( (_BYTE)v44 != 1 )
              goto LABEL_46;
            v76.m128i_i8[0] = sub_F5ED00((unsigned __int8 *)&v75);
LABEL_56:
            v76.m128i_i64[1] = 0;
            goto LABEL_46;
          }
          v76.m128i_i64[1] = v41;
        }
LABEL_46:
        v36 = *a1;
        v37 = sub_F6CCB0(&v72, v35);
        v86 = v96[0];
        v88[1] = LODWORD(v96[9]);
        v87 = (__int64)v96[1];
        v88[0] = v96[8];
        if ( !(unsigned __int8)sub_19EE280(v36, &v86, &v76, v37) )
        {
          v86 = v88;
          v87 = 0x100000000LL;
          sub_F5EEE0((__int64 *)v96, &v76, (__int64)&v86);
          if ( v86 != v88 )
            free(v86);
        }
        v34 = (char *)v34 + 1;
      }
      while ( v34 != v66 );
    }
    v74 = 1;
    v92 = v96[0];
    v93 = v96[1];
    v94 = v96[8];
    v95 = LODWORD(v96[9]);
    sub_190D5E0(v71, v35);
    v71 = *a1;
  }
  v18 = sub_1E6A200(v71, v65, (_DWORD)v77, v78, 0, 0, (__int64)&v89);
  if ( (v18 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v51 = *(_BYTE *)(v18 + 16);
    if ( v51 == 26 )
    {
      v52 = ((*(_BYTE *)(v18 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
    }
    else
    {
      v53 = 16;
      if ( v51 == 25 )
      {
LABEL_89:
        v54 = sub_1EA6140(a2, v18, v53, 8);
        v56 = v73;
        *v55 = *v73;
        v55[1] = v56[1];
        v55[2] = v56[2];
        if ( *(_BYTE *)(v72 + 16) == 26 && (*(_BYTE *)(v72 + 19) & 0x1E) != 0 )
        {
          v57 = v56[2 * *(unsigned __int16 *)(v72 + 22) + 4];
          v58 = v56[2 * *(unsigned __int16 *)(v72 + 22) + 5];
        }
        else
        {
          v58 = 0;
          v57 = 0;
        }
        if ( *(_BYTE *)(v54 + 16) == 26 && (*(_BYTE *)(v54 + 19) & 0x1E) != 0 )
        {
          v59 = &v55[2 * *(unsigned __int16 *)(v54 + 22) + 4];
          *v59 = v57;
          v59[1] = v58;
        }
        v55[3] = v56[3];
        if ( *(_BYTE *)(v54 + 16) != 25 )
        {
          v60 = *(unsigned __int16 *)(v54 + 22);
          if ( v60 )
          {
            v61 = 8LL * (unsigned int)(v60 - 1) + 8;
            v62 = 0;
            do
            {
              *(_QWORD *)&v55[v62 / 4 + 4] = *(_QWORD *)((char *)v80[0] + v62);
              v62 += 8LL;
            }
            while ( v62 != v61 );
          }
        }
        goto LABEL_73;
      }
      v52 = 15;
    }
    v53 = 8 * ((v52 + 8 * (unsigned int)*(unsigned __int16 *)(v18 + 22)) >> 3) + 8;
    goto LABEL_89;
  }
  v18 = 0;
LABEL_73:
  if ( LOBYTE(v96[16]) )
  {
    if ( v96[8] != &v96[10] )
      free(v96[8]);
    if ( v96[0] != &v96[3] )
      free(v96[0]);
  }
LABEL_8:
  if ( ptr != v84 )
    free(ptr);
  if ( v80[0] != v81 )
    free(v80[0]);
  if ( v77 != v79 )
    free(v77);
  return v18;
}
