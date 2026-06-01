void __fastcall __noreturn sub_667930(
        __int64 *a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        double a6,
        __m128i a7,
        double a8)
{
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v13; // rsi
  __int64 v14; // rdi
  int segm_base; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebp
  unsigned int v21; // r14d
  unsigned int v22; // r10d
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // edx
  int v26; // r12d
  unsigned int *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rsi
  unsigned int v30; // r12d
  int v31; // r10d
  const __m128i *v32; // rax
  int v33; // r14d
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned int *v44; // rax
  unsigned int v45; // ecx
  __m128i v46; // xmm2
  double v47; // xmm1_8
  char v48; // al
  char v49; // al
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // rdx
  int v57; // r8d
  int v58; // r9d
  int v59; // ecx
  __int64 v60; // rdx
  bool v61; // al
  unsigned int *v62; // rax
  unsigned int v63; // r14d
  unsigned int v64; // eax
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v71; // [rsp+0h] [rbp-508h]
  unsigned int v72; // [rsp+0h] [rbp-508h]
  __int64 v74; // [rsp+8h] [rbp-500h]
  int v75; // [rsp+10h] [rbp-4F8h]
  int v76; // [rsp+10h] [rbp-4F8h]
  unsigned int v77; // [rsp+14h] [rbp-4F4h]
  void *v78; // [rsp+18h] [rbp-4F0h]
  unsigned int v79; // [rsp+1Ch] [rbp-4ECh]
  __int64 v80; // [rsp+20h] [rbp-4E8h]
  __int64 v81; // [rsp+20h] [rbp-4E8h]
  unsigned int v82; // [rsp+20h] [rbp-4E8h]
  unsigned int v83; // [rsp+20h] [rbp-4E8h]
  int v84; // [rsp+28h] [rbp-4E0h]
  int v85; // [rsp+28h] [rbp-4E0h]
  __int64 v86; // [rsp+30h] [rbp-4D8h]
  __int64 v87; // [rsp+30h] [rbp-4D8h]
  unsigned int *v88; // [rsp+38h] [rbp-4D0h]
  int v89[2]; // [rsp+48h] [rbp-4C0h] BYREF
  int v90[4]; // [rsp+50h] [rbp-4B8h]
  __int64 v91[2]; // [rsp+60h] [rbp-4A8h]
  __m128i v92; // [rsp+70h] [rbp-498h]
  __m128i v93; // [rsp+80h] [rbp-488h]
  __m128i v94; // [rsp+90h] [rbp-478h]
  __m128i v95; // [rsp+A0h] [rbp-468h]
  unsigned __int64 v96; // [rsp+B0h] [rbp-458h]
  char v97[512]; // [rsp+C0h] [rbp-448h] BYREF
  _OWORD v98[3]; // [rsp+2C0h] [rbp-248h] BYREF
  int v99; // [rsp+2F0h] [rbp-218h]
  unsigned __int64 v100; // [rsp+4C8h] [rbp-40h]

  v100 = __readfsqword(0x28u);
  if ( !a2 )
  {
    v99 = 685166;
    v98[0] = _mm_load_si128((const __m128i *)&xmmword_2383F40);
    v98[1] = _mm_load_si128((const __m128i *)&xmmword_2383F50);
    v98[2] = _mm_load_si128((const __m128i *)&xmmword_2383F60);
    if ( (a5 & 8) != 0 )
    {
      if ( (a5 & 2) == 0 )
        sub_375400();
      sub_375320((__int64)v98);
    }
    sub_365330();
  }
  v91[0] = 0;
  v96 = 0xFFFFFFFF00000000LL;
  v10 = a1[2];
  *(_OWORD *)v90 = 0;
  v11.m128i_i64[0] = -1;
  v91[1] = 0;
  v92 = (__m128i)-1LL;
  v93 = (__m128i)-1LL;
  v94 = (__m128i)-1LL;
  v95 = (__m128i)-1LL;
  if ( *(_DWORD *)(v10 + 4) == -1 )
    sub_375320((__int64)"You forgot to call set_processor_type()");
  v77 = a5 & 8;
  if ( (a5 & 1) != 0 )
  {
    *((_OWORD *)a2 + 2) = -1;
    *((_OWORD *)a2 + 3) = -1;
    *((_OWORD *)a2 + 4) = -1;
    *((_OWORD *)a2 + 5) = -1;
  }
  v97[0] = 0;
  if ( a3 )
    qstrncpy(v97, a3, 512);
  v13 = a4;
  LOBYTE(v98[0]) = 0;
  if ( a4 )
    qstrncpy(v98, a4, 512);
  v14 = (__int64)a2;
  LODWORD(v78) = 2 * *(_DWORD *)(a1[3] + 8);
  segm_base = get_segm_base(a2);
  v20 = *a2;
  v21 = a2[1];
  v22 = 1736;
  HIDWORD(v78) = segm_base;
  if ( *a2 == -1
    || *((_BYTE *)a2 + 23) == 2 && (v14 = *a1, v13 = 3, v61 = sub_615160(*a1, 3, 4, v17, v18, v19), v22 = 1501, !v61) )
  {
LABEL_65:
    if ( v77 )
      goto LABEL_66;
    goto LABEL_71;
  }
  if ( v20 < HIDWORD(v78) )
  {
    v22 = 1280;
    if ( v77 )
    {
LABEL_66:
      if ( (a5 & 2) == 0 )
        sub_384000(v22, (unsigned int)v78, v20, (unsigned int)v78);
      sub_383F40(v22, (unsigned int)v78, v20, (unsigned int)v78, v21, (unsigned int)v78, a2[7], v14);
    }
LABEL_71:
    sub_3840D0(1275, v13, v16, v17);
  }
  if ( v21 < v20 )
  {
    v22 = 1285;
    goto LABEL_65;
  }
  v23 = a1[2];
  if ( (*(_BYTE *)(v23 + 8) & 1) == 0 )
  {
    v16 = a2[7];
    a2[*(_DWORD *)(v23 + 84) - *(_DWORD *)(v23 + 68) + 8] = v16;
  }
  sub_4F6F30(*a1, a2[2], v16);
  sub_4F6F30(*a1, a2[3], v24);
  if ( v20 == v21 )
  {
    *((_BYTE *)a2 + 96) = 7;
    v21 = v20 + 1;
  }
  v84 = (int)a2;
  LODWORD(v86) = a5;
  LOBYTE(v25) = v21 != -1;
  v26 = ((unsigned int)a5 >> 2) & v25;
  v80 = (__int64)(a1 + 194);
  while ( 1 )
  {
    v27 = sub_4EE960((__int64)(a1 + 194), v20);
    if ( !v27 )
      break;
    v29 = *v27;
    if ( (unsigned int)v29 >= v21 )
      break;
    if ( !(_BYTE)v26 )
    {
      v30 = *v27;
      goto LABEL_23;
    }
    sub_667470(a1, v29, v21, (v77 >> 1) | 0x22, NAN, a7, a8);
  }
  if ( v21 == -1 )
    v21 = v20 + 1;
  v30 = v21;
LABEL_23:
  v31 = 1501;
  if ( *((_BYTE *)a2 + 23) <= 2u )
  {
    if ( (unsigned __int8)sub_626600(*a1) )
      *((_WORD *)a2 + 12) |= 0x10u;
    v32 = (const __m128i *)sub_4EE820(v80, v20);
    if ( v32 )
    {
      *(__m128i *)v90 = _mm_loadu_si128(v32);
      *(__m128i *)v91 = _mm_loadu_si128(v32 + 1);
      v92 = _mm_loadu_si128(v32 + 2);
      v93 = _mm_loadu_si128(v32 + 3);
      v94 = _mm_loadu_si128(v32 + 4);
      v11 = _mm_loadu_si128(v32 + 5);
      v95 = v11;
      v96 = v32[6].m128i_u64[0];
      v33 = sub_4F8800((__int64)a1, HIDWORD(v91[1]));
      LOBYTE(v84) = 0;
      LOBYTE(v86) = 1;
      if ( v33 == (unsigned int)sub_4F8800((__int64)a1, a2[7]) )
        LOBYTE(v84) = HIBYTE(v91[0]) == *((_BYTE *)a2 + 23);
    }
    else
    {
      LOBYTE(v84) = 0;
      LOBYTE(v86) = 0;
    }
    if ( sub_375980(0x19u, a2) >= 0 )
    {
      v37 = a1[2];
      v38 = *(_DWORD *)(v37 + 84);
      if ( v38 != -1 )
      {
        v39 = v38 - *(_DWORD *)(v37 + 68);
        v37 = v39 + 8;
        if ( a2[v39 + 8] == -1 )
          a2[v37] = a2[7];
      }
      HIDWORD(v86) = v77 >> 1;
      sub_665B60((__int64)a1, v20, v37, v34, v35, v36, a3, a4, v75, v78, v80, v84, v86);
      if ( v30 != -1 )
        sub_665B60((__int64)a1, v30, v40, v41, v42, v43, v71, v74, v76, v78, v81, v85, v87);
      v44 = sub_4EE820(v81, v20);
      if ( v44 )
      {
        v45 = HIDWORD(v87) | ((_BYTE)v85 == 0 ? 16 : 18);
        if ( *v44 != v20 )
        {
          if ( (unsigned __int8)sub_666FD0(a1, v20, v20, v45, *(double *)v11.m128i_i64, a7, a8) )
            goto LABEL_38;
          goto LABEL_90;
        }
        if ( !(unsigned __int8)sub_667470(a1, v20, v30, v45 | 0x20, *(double *)v11.m128i_i64, a7, a8) )
        {
LABEL_90:
          v31 = 1282;
          goto LABEL_64;
        }
      }
      else if ( (a5 & 0x10) != 0 )
      {
        v62 = sub_4EEB90(v81, v20);
        if ( v62 )
        {
          v88 = v62;
          if ( !(unsigned __int8)is_spec_segm(*((unsigned __int8 *)v62 + 96)) )
          {
            v63 = v88[1];
            if ( v20 - v63 - 1 <= 0xFFFE )
            {
              if ( !(unsigned __int8)sub_666FD0(a1, *v88, v20, HIDWORD(v87) | 8u, *(double *)v11.m128i_i64, a7, a8) )
              {
                if ( !under_debugger )
                  interr(155);
                BUG();
              }
              sub_3D0B60(a1, v63, v20 - v63, 0);
            }
          }
        }
      }
LABEL_38:
      if ( !v77 )
      {
        v64 = sub_4EC8E0(v81);
        sub_3840D0(1270, v64, (unsigned int)v78, v20);
      }
      v46 = _mm_cvtsi32_si128(v30);
      *(_QWORD *)&v47 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v20), v46).m128i_u64[0];
      if ( a1[96] )
      {
        *((_WORD *)a2 + 12) |= 8u;
      }
      else
      {
        v65 = *a1;
        *(double *)v89 = v47;
        if ( (unsigned int)sub_3BB410(*(_QWORD *)(v65 + 1480), (__int64 *)v89, (a5 >> 5) & 1, 0) )
        {
LABEL_92:
          v31 = 1283;
          goto LABEL_64;
        }
      }
      if ( !sub_4EEBF0(v81) )
        sub_7348F0(*a1, *((unsigned __int8 *)a2 + 23));
      *(double *)a2 = v47;
      v48 = sub_4EE3F0(v81, a2, *(double *)v11.m128i_i64, v47);
      v31 = 1284;
      if ( !v48 )
        goto LABEL_64;
      sub_4F8940(*a1);
      v49 = sub_501D40(*a1, v20, v30);
      v31 = 1112;
      if ( !v49 )
        goto LABEL_64;
      sub_396090(0x3Fu, a2);
      if ( (get_merge_state(63, a2) & 2) == 0 )
      {
        if ( !*((_BYTE *)a2 + 23) )
        {
          v82 = a2[7];
          if ( v82 < (unsigned int)sub_614FB0(*a1, 23, v50, v51, v52, v53) )
            sub_615AB0(*a1, 23, a2[7]);
          v83 = a2[7];
          if ( v83 > (unsigned int)sub_614FB0(*a1, 24, v66, v67, v68, v69) )
            sub_615AB0(*a1, 24, a2[7]);
        }
        if ( v20 != HIDWORD(v78)
          && v20 - HIDWORD(v78) < (unsigned int)sub_614FB0(*a1, 23, v20 - HIDWORD(v78), v51, v52, v53) )
        {
          sub_615AB0(*a1, 23, v20 - HIDWORD(v78));
        }
        v54 = HIDWORD(v78);
        v79 = v30 - HIDWORD(v78);
        if ( v79 > (unsigned int)sub_614FB0(*a1, 24, v54, v51, v52, v53) )
          sub_615AB0(*a1, 24, v79);
      }
      sub_4F6C60(*a1, *a2, a2[2]);
      v55 = a2[2];
      sub_4FAEC0(*a1, v55, v56);
      v59 = 0;
      if ( (_BYTE)v87 )
        v59 = (unsigned __int8)(v85 | (HIBYTE(v91[0]) == *((_BYTE *)a2 + 23))) ^ 1;
      if ( (a2[6] & 8) == 0 && (a5 & 0x40) == 0 )
        v59 |= 2u;
      if ( a1[96]
        || (LODWORD(v55) = v20,
            (unsigned __int8)sub_665870(
                               a1,
                               v20,
                               v30,
                               v59,
                               (__int64)a2,
                               *(double *)v11.m128i_i64,
                               v47,
                               *(double *)v46.m128i_i64)) )
      {
        if ( v71 )
        {
          LODWORD(v55) = (_DWORD)a2;
          sub_666350(a1, a2, v97, 0);
        }
        if ( v74 )
        {
          LODWORD(v55) = (_DWORD)a2;
          sub_666050(a1, (__int64)a2, (const char *)v98, 0);
        }
        if ( (a2[6] & 8) == 0 )
        {
          v55 = (unsigned int)getinf(4) + 1;
          setinf(4, v55);
        }
        callui(1, v55, (int)&callui, v59, v57, v58);
      }
      goto LABEL_92;
    }
    v31 = 1281;
  }
LABEL_64:
  v72 = v31;
  v21 = v30;
  sub_4FAEC0(*a1, a2[2], v28);
  v13 = a2[3];
  v14 = *a1;
  sub_4FAEC0(*a1, v13, v60);
  v22 = v72;
  goto LABEL_65;
}

