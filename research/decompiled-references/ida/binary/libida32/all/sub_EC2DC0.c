__int64 __fastcall sub_EC2DC0(__int64 a1, char *a2, char *a3, __int64 a4, __int64 a5)
{
  char *v6; // rbx
  char *v7; // rax
  char v8; // dl
  __int64 v9; // r15
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  void (*v15)(); // rax
  void (*v16)(); // rax
  __m128i v17; // xmm1
  char v18; // al
  char *v19; // r12
  void (*v20)(); // rax
  void (*v21)(); // rax
  char *v22; // rcx
  char v23; // al
  _BYTE *v24; // rdx
  __int64 v25; // rax
  __m128i v26; // xmm1
  __m128i v27; // xmm2
  __m128i v28; // xmm3
  __m128i si128; // xmm4
  __int64 (*v30)(); // rax
  __m128i v31; // xmm5
  __m128i v32; // xmm6
  __m128i v33; // xmm7
  __m128i v34; // xmm0
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  char v40; // al
  __int64 v41; // r8
  int v42; // r9d
  __int64 v43; // rcx
  __int64 (*v44)(); // rax
  void (*v45)(); // rax
  void (*v46)(); // rax
  __int64 v47; // rdx
  char *v49; // [rsp+8h] [rbp-190h] BYREF
  __int32 v50; // [rsp+14h] [rbp-184h]
  __int64 v51; // [rsp+18h] [rbp-180h]
  unsigned int v52; // [rsp+24h] [rbp-174h] BYREF
  char *v53; // [rsp+28h] [rbp-170h] BYREF
  __m128i v54; // [rsp+30h] [rbp-168h] BYREF
  __int32 v55; // [rsp+40h] [rbp-158h]
  __int16 v56; // [rsp+44h] [rbp-154h]
  __m128i v57; // [rsp+50h] [rbp-148h] BYREF
  __m128i v58; // [rsp+60h] [rbp-138h] BYREF
  __m128i v59; // [rsp+70h] [rbp-128h] BYREF
  __m128 v60; // [rsp+80h] [rbp-118h] BYREF
  __m128i v61; // [rsp+90h] [rbp-108h] BYREF
  __m128i v62; // [rsp+A0h] [rbp-F8h] BYREF
  __m128i v63; // [rsp+B0h] [rbp-E8h] BYREF
  __m128i v64; // [rsp+C0h] [rbp-D8h] BYREF
  __m128i v65; // [rsp+D0h] [rbp-C8h] BYREF
  __m128i v66; // [rsp+E0h] [rbp-B8h]
  __m128i v67; // [rsp+F0h] [rbp-A8h]
  __m128i v68; // [rsp+100h] [rbp-98h]
  __m128i v69; // [rsp+110h] [rbp-88h]
  __m128i v70; // [rsp+120h] [rbp-78h]
  __m128i v71; // [rsp+130h] [rbp-68h]
  __m128i v72; // [rsp+140h] [rbp-58h]
  __int64 v73; // [rsp+150h] [rbp-48h]
  char v74; // [rsp+158h] [rbp-40h]

  v6 = a2;
  v51 = a5;
  v50 = 0;
  if ( a3 == a2 )
    return 0;
  while ( 1 )
  {
    v53 = v6;
    if ( a3 == v6 )
    {
      v9 = (__int64)a3;
LABEL_9:
      v6 = (char *)v9;
      goto LABEL_10;
    }
    if ( !*v6 )
      break;
    if ( *v6 != 37 )
    {
      v7 = v6 + 1;
      while ( 1 )
      {
        v9 = (__int64)v7;
        v53 = v7;
        if ( v7 == a3 )
          goto LABEL_9;
        v8 = *v7;
        if ( !*v7 )
          goto LABEL_17;
        ++v7;
        if ( v8 == 37 )
          goto LABEL_13;
      }
    }
    v9 = (__int64)v6;
LABEL_13:
    v53 = (char *)(v9 + 1);
    if ( a3 == (char *)(v9 + 1) )
    {
      v16 = *(void (**)())(*(_QWORD *)a1 + 48LL);
      if ( v16 != nullsub_373 )
        ((void (__fastcall *)(__int64, __int64, __int64))v16)(a1, v9, 1);
      return 1;
    }
    v59.m128i_i16[2] = v59.m128i_i8[4] & 0xFE;
    v59.m128i_i8[8] = 0;
    v62.m128i_i64[0] = 0x300000000LL;
    v57.m128i_i64[0] = 0;
    v57.m128i_i32[2] = 0;
    v58 = 0u;
    v59.m128i_i32[0] = 0;
    v60 = 0u;
    v61.m128i_i32[0] = 0;
    v61.m128i_i64[1] = 0;
    v62.m128i_i32[2] = 0;
    v62.m128i_i16[6] = v62.m128i_i8[12] & 0xFE;
    v63.m128i_i8[0] = 0;
    v63.m128i_i32[1] = 0;
    v63.m128i_i64[1] = (__int64)"*";
    v64.m128i_i8[8] = 0;
    v11 = sub_C78820(a1, (__int64)&v57, v9, &v53, a3);
    v14 = v11;
    if ( (_BYTE)v11 )
      return 1;
    if ( a3 == v53
      || *v53 == 42 && (v64.m128i_i64[0] = (__int64)v53, v64.m128i_i8[8] = 1, ++v53, a3 == v53)
      || (LOBYTE(v49) = v11, sub_C78390((__int64)&v54, &v53, a3), v14 = (unsigned __int8)v49, v54.m128i_i32[3])
      && (v17 = _mm_load_si128(&v54), v59.m128i_i32[0] = v55, v58 = v17, v59.m128i_i16[2] = v56, a3 == v53)
      || (v18 = sub_C78A60((__int64)&v57, &v53, a3, a4, 1), v19 = v53, v14 = (unsigned __int8)v49, v18) && a3 == v53 )
    {
      v21 = *(void (**)())(*(_QWORD *)a1 + 48LL);
      if ( v21 != nullsub_373 )
        ((void (__fastcall *)(__int64, __int64, char *, __int64, __int64, __int64))v21)(a1, v9, &a3[-v9], v12, v13, v14);
      return 1;
    }
    if ( !*v53 )
    {
      v20 = *(void (**)())(*(_QWORD *)a1 + 16LL);
      if ( v20 != nullsub_369 )
        ((void (__fastcall *)(__int64, char *, void (*)(), __int64, __int64, _QWORD))v20)(
          a1,
          v53,
          nullsub_369,
          v12,
          v13,
          (unsigned __int8)v49);
      return 1;
    }
    v22 = ++v53;
    switch ( *v19 )
    {
      case '%':
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 24;
        goto LABEL_46;
      case 'A':
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 20;
        goto LABEL_52;
      case 'C':
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 25;
        goto LABEL_52;
      case 'D':
        v35 = *(unsigned int *)(v51 + 260);
        if ( (unsigned int)v35 > 0x1F )
          goto LABEL_88;
        v36 = 4160750114LL;
        if ( !_bittest64(&v36, v35) )
          goto LABEL_88;
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 3;
        goto LABEL_52;
      case 'E':
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 16;
        goto LABEL_52;
      case 'F':
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 14;
        goto LABEL_52;
      case 'G':
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 18;
        goto LABEL_52;
      case 'O':
        v37 = *(unsigned int *)(v51 + 260);
        if ( (unsigned int)v37 > 0x1F )
          goto LABEL_88;
        v38 = 4160750114LL;
        if ( !_bittest64(&v38, v37) )
          goto LABEL_88;
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 8;
        goto LABEL_52;
      case 'S':
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 26;
        goto LABEL_52;
      case 'U':
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v39 = *(unsigned int *)(v51 + 260);
        if ( (unsigned int)v39 > 0x1F || (v47 = 4160750114LL, !_bittest64(&v47, v39)) )
        {
          v61.m128i_i32[0] = 0;
LABEL_67:
          v52 = (_DWORD)v22 - (_DWORD)v6;
          v40 = sub_C78CD0((__int64)v6, (unsigned __int64)a3, &v52);
          LOBYTE(v42) = (_BYTE)v49;
          if ( v40 )
          {
            v59.m128i_i8[8] = 0;
            v60.m128_u64[0] = (unsigned __int64)v19;
            v61.m128i_i32[0] = 0;
            v43 = v52;
            v60.m128_u64[1] = (unsigned __int64)&v6[v52];
          }
          else
          {
            v43 = v52;
          }
          v44 = *(__int64 (**)())(*(_QWORD *)a1 + 104LL);
          if ( v44 != sub_9C57A0 )
            v42 = ((__int64 (__fastcall *)(__int64, __m128i *, char *, __int64, __int64, _QWORD))v44)(
                    a1,
                    &v57,
                    v6,
                    v43,
                    v41,
                    (unsigned __int8)v49)
                ^ 1;
          v65.m128i_i64[0] = 0;
          v6 = v53;
          v70.m128i_i64[0] = 0x300000000LL;
          v65.m128i_i32[2] = 0;
          v66 = 0u;
          v67.m128i_i32[0] = 0;
          v67.m128i_i16[2] = v67.m128i_i8[4] & 0xFE;
          v67.m128i_i8[8] = 0;
          v68 = 0u;
          v69.m128i_i32[0] = 0;
          v69.m128i_i64[1] = 0;
          v70.m128i_i32[2] = 0;
          v70.m128i_i16[6] = v70.m128i_i8[12] & 0xFE;
          v71.m128i_i8[0] = 0;
          v71.m128i_i32[1] = 0;
          v71.m128i_i64[1] = (__int64)"*";
          v72.m128i_i8[8] = 0;
          v73 = 0;
          v74 = v42;
          if ( (_BYTE)v42 )
            return 1;
          break;
        }
        v61.m128i_i32[0] = 10;
LABEL_52:
        if ( v64.m128i_i8[8] )
          goto LABEL_46;
        goto LABEL_44;
      case 'X':
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 12;
        goto LABEL_52;
      case '[':
        if ( a3 == v22 )
        {
          v46 = *(void (**)())(*(_QWORD *)a1 + 120LL);
          if ( v46 != nullsub_378 )
            ((void (__fastcall *)(__int64, char *, char *, char *, __int64, _QWORD))v46)(
              a1,
              v19,
              a3,
              v22,
              v13,
              (unsigned __int8)v49);
          return 1;
        }
        v23 = v19[1];
        if ( v23 == 93 )
        {
          if ( a3 == v19 + 2 )
          {
LABEL_90:
            v45 = *(void (**)())(*(_QWORD *)a1 + 120LL);
            if ( v45 != nullsub_378 )
              ((void (__fastcall *)(__int64, char *, char *))v45)(a1, v19, v22);
            return 1;
          }
          v23 = v19[2];
          v22 = v19 + 2;
        }
        v24 = v22 + 1;
        if ( a3 != v22 + 1 && v23 == 94 && v22[1] == 93 )
        {
          v22 += 2;
          if ( a3 == v22 )
          {
            (*(void (__fastcall **)(__int64, char *, _BYTE *, char *, __int64, _QWORD))(*(_QWORD *)a1 + 120LL))(
              a1,
              v19,
              v24,
              v22,
              v13,
              (unsigned __int8)v49);
            return 1;
          }
        }
        while ( *v22 != 93 )
        {
          if ( a3 == v22 + 1 )
            goto LABEL_90;
          ++v22;
        }
        v6 = v22;
        v49 = v22;
        v53 = v22;
        v59.m128i_i8[8] = 0;
        v61.m128i_i32[0] = 39;
        v60 = _mm_loadh_ps((const double *)&v49);
        if ( !v64.m128i_i8[8] )
        {
LABEL_44:
          if ( !v63.m128i_i8[0] )
          {
            v22 = v53;
            v63.m128i_i32[1] = v50++;
          }
LABEL_46:
          v6 = v22;
        }
        v25 = *(_QWORD *)a1;
        v26 = _mm_load_si128(&v57);
        v73 = v9;
        v27 = _mm_load_si128(&v58);
        v28 = _mm_load_si128(&v59);
        v74 = 0;
        si128 = _mm_load_si128((const __m128i *)&v60);
        v30 = *(__int64 (**)())(v25 + 112);
        v65 = v26;
        v31 = _mm_load_si128(&v61);
        v32 = _mm_load_si128(&v62);
        v66 = v27;
        v33 = _mm_load_si128(&v63);
        v67 = v28;
        v34 = _mm_load_si128(&v64);
        v68 = si128;
        v69 = v31;
        v70 = v32;
        v71 = v33;
        v72 = v34;
        if ( v30 != sub_9C57B0
          && !((unsigned __int8 (__fastcall *)(__int64, __m128i *, __int64, char *, __int64, __int64))v30)(
                a1,
                &v65,
                v9,
                &v22[-v9],
                v13,
                v14) )
        {
          return 1;
        }
        break;
      case 'a':
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 19;
        goto LABEL_52;
      case 'b':
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 5;
        goto LABEL_52;
      case 'c':
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 1;
        goto LABEL_52;
      case 'd':
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 2;
        goto LABEL_52;
      case 'e':
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 15;
        goto LABEL_52;
      case 'f':
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 13;
        goto LABEL_52;
      case 'g':
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 17;
        goto LABEL_52;
      case 'i':
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 4;
        goto LABEL_52;
      case 'n':
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 23;
        goto LABEL_52;
      case 'o':
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 7;
        goto LABEL_52;
      case 'p':
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 22;
        goto LABEL_52;
      case 's':
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 21;
        goto LABEL_52;
      case 'u':
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 9;
        goto LABEL_52;
      case 'x':
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 11;
        goto LABEL_52;
      default:
LABEL_88:
        v59.m128i_i8[8] = 0;
        v60 = (__m128)(unsigned __int64)v19;
        v61.m128i_i32[0] = 0;
        goto LABEL_67;
    }
LABEL_10:
    if ( a3 == v6 )
      return 0;
  }
  v9 = (__int64)v6;
LABEL_17:
  v15 = *(void (**)())(*(_QWORD *)a1 + 16LL);
  if ( v15 != nullsub_369 )
    ((void (__fastcall *)(__int64, __int64))v15)(a1, v9);
  return 1;
}

