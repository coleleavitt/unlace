__int64 __fastcall sub_AC9E0(__int64 a1, _QWORD *a2, __int64 a3, char a4, _BYTE *a5, int a6)
{
  __int64 v6; // rbx
  unsigned int v7; // r14d
  __int64 v8; // r13
  _DWORD *v9; // rax
  _DWORD *v10; // r14
  int v11; // eax
  __int64 *v12; // rdx
  char v13; // r15
  __int64 v14; // rax
  _QWORD *v15; // r14
  unsigned int v16; // r15d
  _QWORD *v18; // r14
  _QWORD *v19; // r15
  int v20; // r9d
  char v21; // al
  _QWORD *v22; // r10
  __int64 v23; // rcx
  __int64 v24; // r10
  __int64 v25; // r8
  __int64 v26; // rcx
  void *v27; // r15
  __m128i v28; // xmm0
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // r15
  _QWORD *v32; // rdx
  _QWORD *v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rsi
  _QWORD *v37; // r15
  char v38; // al
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // rdx
  int v42; // r8d
  int v43; // r9d
  _QWORD *v44; // r15
  __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // rdx
  char v48; // al
  _QWORD *v49; // r14
  __int64 v50; // rax
  char v51; // al
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rsi
  int v57; // r13d
  _QWORD *v58; // rax
  __int64 v59; // rsi
  __int64 *v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r15
  __int64 v64; // r13
  int v65; // [rsp+0h] [rbp-1D0h]
  __int64 v66; // [rsp+0h] [rbp-1D0h]
  int n; // [rsp+8h] [rbp-1C8h]
  __int64 na; // [rsp+8h] [rbp-1C8h]
  int v69; // [rsp+10h] [rbp-1C0h]
  __int64 v70; // [rsp+10h] [rbp-1C0h]
  int v71; // [rsp+18h] [rbp-1B8h]
  _BYTE *v72; // [rsp+18h] [rbp-1B8h]
  __int64 v73; // [rsp+20h] [rbp-1B0h]
  _BYTE *v74; // [rsp+20h] [rbp-1B0h]
  char v75; // [rsp+28h] [rbp-1A8h]
  char v76; // [rsp+38h] [rbp-198h]
  __int64 v77; // [rsp+38h] [rbp-198h]
  __int64 v78; // [rsp+40h] [rbp-190h]
  int v79; // [rsp+48h] [rbp-188h]
  __int64 v80; // [rsp+48h] [rbp-188h]
  __int64 v83; // [rsp+58h] [rbp-178h]
  _QWORD *v84; // [rsp+58h] [rbp-178h]
  __int64 v85; // [rsp+58h] [rbp-178h]
  __m128i v86; // [rsp+60h] [rbp-170h] BYREF
  __int64 v87; // [rsp+70h] [rbp-160h]
  __int64 v88; // [rsp+78h] [rbp-158h]
  __int64 v89; // [rsp+88h] [rbp-148h] BYREF
  _BYTE v90[4]; // [rsp+90h] [rbp-140h] BYREF
  unsigned int v91; // [rsp+94h] [rbp-13Ch]
  _BYTE v92[4]; // [rsp+A0h] [rbp-130h] BYREF
  int v93; // [rsp+A4h] [rbp-12Ch]
  _BYTE v94[16]; // [rsp+B0h] [rbp-120h] BYREF
  __int64 v95; // [rsp+C0h] [rbp-110h] BYREF
  __int128 v96; // [rsp+C8h] [rbp-108h]
  __int64 v97[2]; // [rsp+E0h] [rbp-F0h] BYREF
  __int64 v98; // [rsp+F0h] [rbp-E0h] BYREF
  __int128 v99; // [rsp+F8h] [rbp-D8h]
  __int64 v100[2]; // [rsp+110h] [rbp-C0h] BYREF
  __int64 v101; // [rsp+120h] [rbp-B0h]
  __int64 v102; // [rsp+128h] [rbp-A8h]
  __int64 v103[2]; // [rsp+140h] [rbp-90h] BYREF
  void *src; // [rsp+150h] [rbp-80h] BYREF
  __m128i v105; // [rsp+158h] [rbp-78h]
  __int64 v106; // [rsp+170h] [rbp-60h] BYREF
  __int64 v107; // [rsp+178h] [rbp-58h]
  void *v108; // [rsp+180h] [rbp-50h] BYREF
  __m128i v109; // [rsp+188h] [rbp-48h] BYREF
  unsigned __int64 v110; // [rsp+198h] [rbp-38h]

  v6 = a3;
  v7 = *(_DWORD *)a2;
  v88 = (__int64)a2;
  v110 = __readfsqword(0x28u);
  v79 = *(_DWORD *)(a3 + 68);
  v87 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( v7 <= 0xE )
  {
    if ( v7 > 1 )
    {
      switch ( v7 )
      {
        case 2u:
        case 3u:
        case 5u:
        case 6u:
        case 7u:
        case 0xCu:
        case 0xDu:
        case 0xEu:
          goto LABEL_4;
        case 4u:
          if ( *(_BYTE *)(a3 + 32) == 2 && *(_BYTE *)(v88 + 32) == 2 && v79 <= 7 )
          {
            sub_1571F0(a1, *(_QWORD *)(v88 + 8), v88 + 64, *(_QWORD *)(a3 + 8), a3 + 64, 1);
            v34 = 0;
            if ( (unsigned __int64)(8 * v79) <= 0x3F )
              v34 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 16LL) << (8 * (unsigned __int8)v79);
            v35 = v88;
            *(__m128i *)(*(_QWORD *)(v88 + 40) + 16LL) = _mm_unpacklo_epi64(
                                                           (__m128i)(*(_QWORD *)(*(_QWORD *)(v88 + 40) + 16LL) | v34),
                                                           (__m128i)(*(_QWORD *)(*(_QWORD *)(v88 + 40) + 16LL) | v34));
            *(_DWORD *)(v35 + 4) &= ~0x80u;
            *(_DWORD *)(v35 + 36) *= 2;
            sub_11D5A0(v6);
            return 1;
          }
          v8 = a3 + 32;
          v37 = (_QWORD *)(v88 + 32);
          v86.m128i_i64[0] = (__int64)&v106;
          if ( (unsigned __int8)sub_130BC0(a1, v88, v88 + 32, a3, a3 + 32, 0) )
          {
            v49 = (_QWORD *)(v88 + 64);
            sub_123A40(&v106);
            if ( (unsigned __int8)sub_131730(v87, a1, v88, v88 + 64, (unsigned int)(2 * *(_DWORD *)(v88 + 68)), 0, 0) )
            {
              v16 = sub_132E20(a1, v88, (_DWORD)v37, v6, (int)v6 + 32, 8);
              if ( (_BYTE)v16 )
              {
                sub_12AB50(v49, v87, *(unsigned int *)(v88 + 68), 2);
                sub_A1280(v87, v88, *(_DWORD *)(v6 + 4));
                sub_11D5A0(v6);
              }
              else
              {
                sub_125180(v49);
              }
              sub_11CDA0(v86.m128i_i64[0]);
              return v16;
            }
            sub_11CDA0(v86.m128i_i64[0]);
          }
          if ( *(_DWORD *)(v88 + 68) != 4 )
            goto LABEL_13;
          v38 = *(_BYTE *)(v88 + 32);
          if ( v38 != 4 )
          {
            if ( (a4 & 0xA) != 2 )
              goto LABEL_13;
LABEL_96:
            if ( v38 == 2 )
              goto LABEL_13;
            goto LABEL_97;
          }
          v50 = *(_QWORD *)(v88 + 40);
          if ( *(_BYTE *)(v50 + 64) == 8 && *(_DWORD *)(*(_QWORD *)(v50 + 72) + 284LL) == 12 && *(_BYTE *)(v6 + 32) == 4 )
          {
            v52 = *(_QWORD *)(v6 + 40);
            if ( *(_BYTE *)(v52 + 64) == 8 && *(_DWORD *)(*(_QWORD *)(v52 + 72) + 284LL) == 12 )
            {
              if ( (unsigned __int8)sub_131730(v87, a1, v88, v88 + 64, 8, 0, 1) )
              {
                v63 = v88;
                v64 = *(_QWORD *)(v88 + 40);
                sub_157210(
                  a1,
                  v6,
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 72LL) + 24LL),
                  v88,
                  *(_QWORD *)(*(_QWORD *)(v64 + 72) + 24LL),
                  0);
                v106 = 37;
                copy_tinfo_t();
                clear_tinfo_t();
                v106 = 37;
                copy_tinfo_t();
                clear_tinfo_t();
                *(_DWORD *)(v64 + 68) = 8;
                sub_11D4A0(v64 + 32, "_byteswap_uint64");
                v36 = (_QWORD *)v63;
                *(_DWORD *)(v63 + 36) *= 2;
LABEL_91:
                sub_A1280(v87, (__int64)v36, *(_DWORD *)(v6 + 4));
                sub_11D5A0(v6);
                return 1;
              }
              if ( (a4 & 0xA) != 2 || *(_DWORD *)(v88 + 68) != 4 )
                goto LABEL_13;
              v38 = *(_BYTE *)(v88 + 32);
              goto LABEL_96;
            }
          }
          if ( (a4 & 0xA) != 2 )
            goto LABEL_13;
LABEL_97:
          if ( (unsigned __int8)sub_125B60(v37, v6 + 32, 0) )
            goto LABEL_13;
          if ( v88 )
          {
            if ( (unsigned __int8)sub_122240(v6, *(_QWORD *)(v88 + 8), 0) )
            {
              v78 = v6;
              v41 = v88;
            }
            else
            {
              v41 = v6;
              v78 = v88;
            }
          }
          else
          {
            v78 = 0;
            v41 = v6;
          }
          v103[0] = 0;
          v103[1] = 0;
          src = nullptr;
          v106 = 0;
          v107 = 0;
          v108 = nullptr;
          v105 = 0;
          v109 = 0;
          sub_127FE0(a1, (__int64)v103, v41 + 64, 0, v39, v40, v65, n, v69, v71, v73);
          sub_123EA0(a1, v86.m128i_i64[0], v78 + 32, 1, 4294901760LL);
          if ( !(unsigned __int8)sub_64780(v103, v86.m128i_i64[0]) && !(unsigned __int8)sub_318470(&src, &v108) )
          {
            sub_1571F0(a1, v88, v37, v6, v6 + 32, 0);
            sub_1571F0(a1, *(_QWORD *)(v88 + 8), v88 + 64, *(_QWORD *)(v6 + 8), v6 + 64, 1);
            sub_A1280(v87, v88, *(_DWORD *)(v6 + 4));
            sub_11D5A0(v6);
            if ( v108 )
            {
              v109.m128i_i64[0] = 0;
              qfree((__int64)v108);
            }
            qfree(v106);
            if ( src )
            {
              v105.m128i_i64[0] = 0;
              qfree((__int64)src);
            }
            qfree(v103[0]);
            return 1;
          }
          if ( v108 )
          {
            v109.m128i_i64[0] = 0;
            qfree((__int64)v108);
          }
          qfree(v106);
          if ( src )
          {
            v105.m128i_i64[0] = 0;
            qfree((__int64)src);
          }
          qfree(v103[0]);
          break;
        case 8u:
        case 9u:
          goto LABEL_76;
        case 0xAu:
          v8 = a3 + 32;
          v86.m128i_i64[0] = (__int64)&v106;
          if ( !(unsigned __int8)sub_1301F0(a1, a3, a3 + 32, v88, v88 + 32)
            || v6
            && (unsigned __int8)sub_122240(v88, *(_QWORD *)(v6 + 8), 0)
            && (unsigned __int8)sub_A9BE0(a1, v88, v6, v88) )
          {
            goto LABEL_13;
          }
          if ( !(unsigned __int8)sub_131730(v87, a1, v88, v88 + 64, (unsigned int)(2 * *(_DWORD *)(v88 + 68)), 0, 1) )
            goto LABEL_113;
          if ( *(_DWORD *)(v88 + 36) == *(_DWORD *)(v88 + 68) )
            v7 = 4;
          v36 = (_QWORD *)v88;
          *(_DWORD *)v88 = v7;
          *((_DWORD *)v36 + 1) = 0;
          goto LABEL_91;
        default:
          goto LABEL_69;
      }
      goto LABEL_13;
    }
LABEL_69:
    v8 = v6 + 32;
    goto LABEL_16;
  }
  if ( v7 - 15 > 0x2D )
    goto LABEL_69;
  if ( ((1LL << v7) & 0x1300000001C78000LL) != 0 )
  {
LABEL_76:
    v8 = a3 + 32;
    v86.m128i_i64[0] = (__int64)&v106;
    goto LABEL_13;
  }
  if ( ((1LL << v7) & 0x180000) != 0 )
  {
    if ( *(_DWORD *)(v88 + 36) == 8 && sub_11C8A0(v88, 0) )
      goto LABEL_69;
  }
  else if ( v7 != 21 )
  {
    goto LABEL_69;
  }
  v18 = (_QWORD *)(v88 + 48);
  v19 = (_QWORD *)(v88 + 32);
  if ( (unsigned __int8)sub_12CF30(*(_QWORD *)(a1 + 64), (int)v88 + 32, (int)v88 + 48, 0, 0, a6) )
  {
LABEL_4:
    v8 = v6 + 32;
    goto LABEL_5;
  }
  v8 = v6 + 32;
  v76 = sub_12CF30(*(_QWORD *)(a1 + 64), (_DWORD)v18, (_DWORD)v19, 0, 0, v20);
  if ( !v76 )
  {
    sub_123A40(v97);
    sub_123A40(v100);
    v21 = sub_132E20(a1, v88, (_DWORD)v19, v6, (int)v6 + 32, 4);
    v22 = (_QWORD *)(v88 + 48);
    if ( !v21 )
    {
      if ( !(unsigned __int8)sub_132E20(a1, v88, (_DWORD)v18, v6, (int)v6 + 32, 4) )
      {
LABEL_143:
        sub_11CDA0(v100);
        sub_11CDA0(v97);
        goto LABEL_5;
      }
      v22 = (_QWORD *)(v88 + 32);
    }
    if ( *(_DWORD *)v88 == 20
      && ((v86.m128i_i64[0] = (__int64)v22, v51 = sub_11FD80(v6 + 32, &v106, 0), v22 = (_QWORD *)v86.m128i_i64[0], !v51)
       || v106) )
    {
      v75 = 1;
      if ( (a4 & 2) == 0 )
      {
        sub_11CA10(v19, v97);
        sub_11CA10(v18, v100);
        goto LABEL_143;
      }
    }
    else
    {
      v75 = 0;
    }
    v23 = *(_QWORD *)(v6 + 8);
    v86.m128i_i64[0] = (__int64)v22;
    sub_1571F0(a1, *(_QWORD *)(v88 + 8), v88 + 64, v23, v6 + 64, 1);
    sub_12AB50(v86.m128i_i64[0], v87, *(unsigned int *)(v86.m128i_i64[0] + 4), 2);
    v24 = v86.m128i_i64[0];
    if ( v75 )
    {
      v25 = *(_QWORD *)(v88 + 24);
      v26 = *(unsigned int *)(v86.m128i_i64[0] + 4);
      v107 = 0;
      v106 = 0xFFFFFFFF00000000LL;
      v86.m128i_i64[0] = (__int64)&v106;
      v83 = v24;
      sub_120A10(&v106, v87, -1, v26, v25, 0);
      sub_1571F0(a1, v88, v83, v88, &v106, 0);
      sub_11CDA0(&v106);
    }
    else
    {
      sub_1207E0(v86.m128i_i64[0], v87, 9, *(_QWORD *)(v88 + 24), *(unsigned int *)(v88 + 68));
    }
    if ( v6 && (unsigned __int8)sub_122240(v88, *(_QWORD *)(v6 + 8), 0) )
    {
      sub_124680(v103, a1, v88, 1);
      v86.m128i_i64[0] = (__int64)&v106;
      sub_127A20(&v106, a1, v6, 0);
      if ( !(unsigned __int8)sub_64780(&v106, v103) )
        v76 = sub_318470(&v108, &src) ^ 1;
      if ( v108 )
      {
        v109.m128i_i64[0] = 0;
        qfree((__int64)v108);
      }
      qfree(v106);
      if ( src )
      {
        v105.m128i_i64[0] = 0;
        qfree((__int64)src);
      }
      qfree(v103[0]);
    }
    else
    {
      v76 = 1;
    }
    sub_A1280(v87, v88, *(_DWORD *)(v6 + 4));
    sub_15BC70(v88, v87, 0, 0, 0, 0, 0);
    if ( v76 )
      sub_11D5A0(v6);
    sub_11CDA0(v100);
    sub_11CDA0(v97);
    return 1;
  }
LABEL_5:
  v89 = v6;
  v9 = (_DWORD *)sub_129440(a1, v8, &v89, 0);
  v10 = v9;
  if ( !v9 )
  {
LABEL_113:
    v86.m128i_i64[0] = (__int64)&v106;
    goto LABEL_13;
  }
  v11 = *v9;
  if ( v11 == 11 && *((_BYTE *)v10 + 32) == 4 )
  {
    v10 = *((_DWORD **)v10 + 5);
    v11 = *v10;
  }
  else if ( v89 != v6 )
  {
    v107 = 0;
    v12 = (__int64 *)(v10 + 16);
    v106 = 0xFFFFFFFF00000000LL;
    if ( v10[17] > 2 * *(_DWORD *)(v6 + 36) )
    {
      v86.m128i_i64[0] = (__int64)&v106;
      sub_125180(&v106);
      v48 = sub_1272B0(&v106, v87, (unsigned int)(2 * *(_DWORD *)(v6 + 36)), 0);
      v12 = &v106;
      if ( !v48 )
      {
        sub_11CDA0(v86.m128i_i64[0]);
        return 0;
      }
    }
    else
    {
      v86.m128i_i64[0] = (__int64)&v106;
    }
    v13 = sub_129F00(v8, v87, v12);
    sub_11CDA0(v86.m128i_i64[0]);
    if ( !v13 )
      return 0;
    v11 = *v10;
  }
  v86.m128i_i64[0] = (__int64)&v106;
  if ( *(_DWORD *)v88 == v11 )
  {
    if ( (unsigned __int8)sub_1321C0(a1, v88, v88 + 32, v89, v10 + 8) )
    {
      v16 = sub_1321C0(a1, v88, v88 + 48, v89, v10 + 12);
      if ( (_BYTE)v16 )
      {
        sub_123A40(v90);
        v66 = v6 + 64;
        sub_1571F0(a1, *(_QWORD *)(v88 + 8), v90, *(_QWORD *)(v6 + 8), v6 + 64, 5);
        v74 = v92;
        sub_123A40(v92);
        v72 = v94;
        sub_123A40(v94);
        if ( v91 != v93
          && (!(unsigned __int8)sub_1272B0(v92, v87, v91, 0) || !(unsigned __int8)sub_1272B0(v94, v87, v91, 0)) )
        {
          sub_11CDA0(v94);
          sub_11CDA0(v92);
          sub_11CDA0(v90);
          goto LABEL_113;
        }
        v95 = 0;
        v97[0] = 0;
        v97[1] = 0;
        v98 = 0;
        v96 = 0;
        v99 = 0;
        if ( v89 != v6 )
        {
          sub_127FE0(a1, (__int64)v97, (__int64)v90, 0, v42, v43, v66, n, v69, (int)v94, (__int64)v92);
          sub_124680(v100, a1, v10, 1);
          while ( 1 )
          {
            if ( (_QWORD)v96 )
              v53 = *(_QWORD *)(*(_QWORD *)(v95 + 8 * v96 - 8) + 8LL);
            else
              v53 = v89;
            v54 = sub_A9AA0(a1, v100, v53, v6, 1u);
            if ( !v54 )
            {
              sub_93B40(v100);
              goto LABEL_182;
            }
            v85 = v54;
            if ( (unsigned __int8)sub_1205A0(v54, v87, 0) )
              break;
            sub_127A20(v103, a1, v85, 1);
            v80 = *(_QWORD *)(v6 + 8);
            v77 = *(_QWORD *)(v85 + 8);
            v86.m128i_i64[0] = (__int64)&v106;
            sub_64000(&v106, (__int64)v103);
            v108 = nullptr;
            v109 = 0;
            if ( v105.m128i_i64[0] )
            {
              v70 = v105.m128i_i64[0];
              na = 16 * v105.m128i_i64[0];
              v108 = (void *)qalloc_or_throw(
                               16 * v105.m128i_i64[0],
                               (__int64)v103,
                               16 * v105.m128i_i64[0],
                               v105.m128i_i64[0]);
              v109.m128i_i64[1] = v70;
              memcpy(v108, src, na);
              v109.m128i_i64[0] = v70;
            }
            v86.m128i_i64[0] = sub_A9D90(a1, (__int64 *)v86.m128i_i64[0], v77, v80, 1u);
            if ( v108 )
            {
              v109.m128i_i64[0] = 0;
              qfree((__int64)v108);
            }
            qfree(v106);
            if ( v86.m128i_i64[0] )
            {
              sub_93B40(v103);
              break;
            }
            v55 = v96;
            v56 = v95;
            if ( *((_QWORD *)&v96 + 1) < (unsigned __int64)(v96 + 1) )
            {
              v95 = qvector_reserve((__int64)&v95, v95, v96 + 1, 8);
              v56 = v95;
              v55 = v96;
            }
            *(_QWORD *)(v56 + 8 * v55) = v85;
            *(_QWORD *)&v96 = v96 + 1;
            if ( src )
            {
              v105.m128i_i64[0] = 0;
              qfree((__int64)src);
            }
            qfree(v103[0]);
          }
          if ( v101 )
          {
            v102 = 0;
            qfree(v101);
          }
          qfree(v100[0]);
          goto LABEL_186;
        }
LABEL_182:
        if ( v88 && (unsigned __int8)sub_122240(v6, *(_QWORD *)(v88 + 8), 0) )
        {
          v86.m128i_i64[0] = (__int64)&v106;
          sub_127A20(&v106, a1, v88, 1);
          if ( sub_A9D90(a1, &v106, *(_QWORD *)(v88 + 8), v6, 0) )
          {
            sub_93B40(&v106);
LABEL_186:
            v16 = 0;
LABEL_187:
            if ( v98 )
            {
              *(_QWORD *)&v99 = 0;
              qfree(v98);
            }
            qfree(v97[0]);
            if ( v95 )
            {
              *(_QWORD *)&v96 = 0;
              qfree(v95);
            }
            sub_11CDA0(v72);
            sub_11CDA0(v74);
            sub_11CDA0(v90);
            return v16;
          }
          sub_93B40(&v106);
        }
        sub_12AB50(v90, v87, v91, 2);
        *(_DWORD *)v6 = *v10;
        sub_11CA10(v8, v74);
        sub_11CA10(v6 + 48, v72);
        sub_11CA10(v66, v90);
        sub_11D5A0(v88);
        if ( (_QWORD)v96 )
        {
          v57 = 0;
          v88 = 0;
          v86.m128i_i64[0] = (__int64)&v106;
          do
          {
            v87 = 8 * v88;
            sub_127A20(v86.m128i_i64[0], a1, *(_QWORD *)(v95 + 8 * v88), 1);
            v60 = v97;
            if ( (unsigned __int8)sub_64820(v86.m128i_i64[0], v97)
              && (v60 = (__int64 *)&v108, (unsigned __int8)sub_317F40(&v98, &v108)) )
            {
              sub_11D5A0(*(_QWORD *)(v95 + 8 * v88));
            }
            else
            {
              v58 = (_QWORD *)j__qalloc_or_throw(80, (__int64)v60, v61, v62);
              v88 = (__int64)v58;
              v59 = *(_QWORD *)(*(_QWORD *)(v95 + v87) + 24LL);
              v58[4] = 0xFFFFFFFF00000000LL;
              v58[5] = 0;
              v58[6] = 0xFFFFFFFF00000000LL;
              v58[7] = 0;
              v58[8] = 0xFFFFFFFF00000000LL;
              v58[9] = 0;
              sub_330970(v58, v59);
              sub_11D890(v88, *(_QWORD *)(v95 + v87));
              sub_A3160(a1, (_QWORD *)v88, v6);
            }
            if ( v108 )
            {
              v109.m128i_i64[0] = 0;
              qfree((__int64)v108);
            }
            ++v57;
            qfree(v106);
            v88 = v57;
          }
          while ( v57 < (unsigned __int64)v96 );
        }
        goto LABEL_187;
      }
    }
  }
LABEL_13:
  if ( (unsigned __int8)sub_11FD80(v8, v86.m128i_i64[0], 0) && !v106 )
  {
    if ( *a5 != 5 )
    {
      sub_123A40(v100);
      if ( (unsigned __int8)sub_131830(v100, v87, 0) )
      {
        if ( !v6 || !(unsigned __int8)sub_122240(v88, *(_QWORD *)(v6 + 8), 0) )
        {
LABEL_56:
          *(_DWORD *)v6 = 9;
          sub_125180(v8);
          sub_11CA10(v6 + 64, v100);
          v31 = v87;
          sub_12AB50(v6 + 64, v87, *(unsigned int *)(v6 + 68), 2);
          sub_A1280(v31, v6, *(_DWORD *)(v88 + 4));
          sub_11CDA0(v100);
          return 1;
        }
        sub_127A20(v103, a1, v88, 1);
        if ( !(unsigned __int8)sub_64A60(v103, *(_DWORD *)(v6 + 72), v79) )
        {
          sub_124680(v86.m128i_i64[0], a1, v88, 1);
          sub_648D0(v103, (__int64 *)v86.m128i_i64[0]);
          v27 = v108;
          v108 = nullptr;
          v28 = _mm_loadu_si128(&v109);
          v109 = 0;
          if ( src )
          {
            v86 = v28;
            v105.m128i_i64[0] = 0;
            qfree((__int64)src);
            src = v27;
            v105 = _mm_load_si128(&v86);
            if ( v108 )
            {
              v109.m128i_i64[0] = 0;
              qfree((__int64)v108);
            }
          }
          else
          {
            src = v27;
            v105 = v28;
          }
          qfree(v106);
          if ( !(unsigned __int8)sub_64A60(v103, *(_DWORD *)(v6 + 72), v79) && !sub_A9AA0(a1, v103, v6, v88, 1u) )
          {
            v29 = v88;
            *(_DWORD *)v6 = *(_DWORD *)v88;
            sub_125180(v8);
            sub_125180(v6 + 48);
            sub_125180(v6 + 64);
            sub_11CDA0(v29 + 48);
            if ( src )
            {
              v105.m128i_i64[0] = 0;
              qfree((__int64)src);
            }
            qfree(v103[0]);
            v30 = v88;
            v88 = v6;
            v8 = v30 + 32;
            v6 = v30;
            goto LABEL_56;
          }
        }
        if ( src )
        {
          v105.m128i_i64[0] = 0;
          qfree((__int64)src);
        }
        qfree(v103[0]);
      }
      sub_11CDA0(v100);
      goto LABEL_16;
    }
    if ( (unsigned __int8)sub_12B890(v88, v87, 9, v6 + 64, (unsigned int)(2 * *(_DWORD *)(v88 + 68))) )
    {
      sub_A1280(v87, v88, *(_DWORD *)(v6 + 4));
      sub_11D5A0(v6);
      return 1;
    }
    return 0;
  }
  if ( *(_BYTE *)(v6 + 32) == 2
    && (a4 & 0xA) == 2
    && *(_DWORD *)v88 == 9
    && (unsigned __int8)sub_131730(v87, a1, v88, v88 + 64, (unsigned int)(2 * *(_DWORD *)(v88 + 68)), 0, 1) )
  {
    v44 = (_QWORD *)v88;
    v45 = v87;
    *(_DWORD *)v88 = 19;
    sub_1207E0(v44 + 4, v45, 9, v44[3], (unsigned int)(2 * v79));
    v46 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 16LL), *(unsigned int *)(v6 + 36), 0) << (8
                                                                                                * (unsigned __int8)v79);
    v47 = 0;
    if ( (unsigned __int64)(8 * v79) < 0x40 )
      v47 = v46;
    sub_120A10(v44 + 6, v45, v47, (unsigned int)(2 * v79), *(_QWORD *)(v6 + 24), 0);
    sub_A1280(v45, (__int64)v44, *(_DWORD *)(v6 + 4));
    sub_11D5A0(v6);
    return 1;
  }
LABEL_16:
  v103[0] = v6;
  v14 = sub_129440(a1, v8, v103, 0);
  v15 = (_QWORD *)v14;
  if ( !v14 )
    return 0;
  if ( !(unsigned __int8)sub_125B60(v14 + 64, v8, 0) )
    return 0;
  if ( *(_DWORD *)v15 != 11 )
    return 0;
  v16 = sub_132370(a1, v88, v88, v103[0], v15, 0);
  if ( !(_BYTE)v16 )
    return 0;
  v86.m128i_i64[0] = (__int64)&v106;
  sub_124680(&v106, a1, v15, 1);
  LOBYTE(v87) = 0;
  v32 = v15;
  while ( 1 )
  {
    v33 = (_QWORD *)sub_A9AA0(a1, v86.m128i_i64[0], (__int64)v32, v88, 1u);
    if ( !v33 )
      break;
    if ( v33 == (_QWORD *)v88 )
    {
      v32 = (_QWORD *)v88;
    }
    else
    {
      if ( v15 != v33 )
      {
        v16 = 0;
        goto LABEL_64;
      }
      v32 = (_QWORD *)v15[1];
      LOBYTE(v87) = v16;
      if ( !v32 )
        break;
    }
  }
  sub_125180(v8);
  v84 = (_QWORD *)(v88 + 64);
  sub_11CA10(v6 + 64, v88 + 64);
  sub_1571F0(a1, *(_QWORD *)(v6 + 8), v6 + 64, *(_QWORD *)(v88 + 8), v84, 1);
  sub_11D5A0(v88);
  if ( (_BYTE)v87 )
    sub_11D5A0(v15);
LABEL_64:
  if ( v108 )
  {
    v109.m128i_i64[0] = 0;
    qfree((__int64)v108);
  }
  qfree(v106);
  return v16;
}
