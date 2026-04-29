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
  __int64 v39; // rdx
  _QWORD *v40; // r15
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rdx
  char v44; // al
  _QWORD *v45; // r14
  __int64 v46; // rax
  char v47; // al
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rsi
  int v53; // r13d
  _QWORD *v54; // rax
  __int64 v55; // rsi
  __int64 v56; // r15
  __int64 v57; // r13
  __int64 v58; // r14
  __int64 n; // [rsp+8h] [rbp-1C8h]
  __int64 v60; // [rsp+10h] [rbp-1C0h]
  char v61; // [rsp+28h] [rbp-1A8h]
  char v62; // [rsp+38h] [rbp-198h]
  __int64 v63; // [rsp+38h] [rbp-198h]
  __int64 v64; // [rsp+40h] [rbp-190h]
  int v65; // [rsp+48h] [rbp-188h]
  __int64 v66; // [rsp+48h] [rbp-188h]
  __int64 v69; // [rsp+58h] [rbp-178h]
  _QWORD *v70; // [rsp+58h] [rbp-178h]
  __int64 v71; // [rsp+58h] [rbp-178h]
  __m128i v72; // [rsp+60h] [rbp-170h] BYREF
  __int64 v73; // [rsp+70h] [rbp-160h]
  __int64 v74; // [rsp+78h] [rbp-158h]
  __int64 v75; // [rsp+88h] [rbp-148h] BYREF
  _BYTE v76[4]; // [rsp+90h] [rbp-140h] BYREF
  unsigned int v77; // [rsp+94h] [rbp-13Ch]
  _BYTE v78[4]; // [rsp+A0h] [rbp-130h] BYREF
  int v79; // [rsp+A4h] [rbp-12Ch]
  _BYTE v80[16]; // [rsp+B0h] [rbp-120h] BYREF
  __int64 v81; // [rsp+C0h] [rbp-110h] BYREF
  __int128 v82; // [rsp+C8h] [rbp-108h]
  _QWORD v83[2]; // [rsp+E0h] [rbp-F0h] BYREF
  __int64 v84; // [rsp+F0h] [rbp-E0h] BYREF
  __int128 v85; // [rsp+F8h] [rbp-D8h]
  _QWORD v86[2]; // [rsp+110h] [rbp-C0h] BYREF
  __int64 v87; // [rsp+120h] [rbp-B0h]
  __int64 v88; // [rsp+128h] [rbp-A8h]
  __int64 v89[2]; // [rsp+140h] [rbp-90h] BYREF
  void *src; // [rsp+150h] [rbp-80h] BYREF
  __m128i v91; // [rsp+158h] [rbp-78h]
  __int64 v92; // [rsp+170h] [rbp-60h] BYREF
  __int64 v93; // [rsp+178h] [rbp-58h]
  void *v94; // [rsp+180h] [rbp-50h] BYREF
  __m128i v95; // [rsp+188h] [rbp-48h] BYREF
  unsigned __int64 v96; // [rsp+198h] [rbp-38h]

  v6 = a3;
  v7 = *(_DWORD *)a2;
  v74 = (__int64)a2;
  v96 = __readfsqword(0x28u);
  v65 = *(_DWORD *)(a3 + 68);
  v73 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
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
          if ( *(_BYTE *)(a3 + 32) == 2 && *(_BYTE *)(v74 + 32) == 2 && v65 <= 7 )
          {
            sub_1571F0(a1, *(_QWORD *)(v74 + 8), v74 + 64, *(_QWORD *)(a3 + 8), a3 + 64, 1);
            v34 = 0;
            if ( (unsigned __int64)(8 * v65) <= 0x3F )
              v34 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 16LL) << (8 * (unsigned __int8)v65);
            v35 = v74;
            *(__m128i *)(*(_QWORD *)(v74 + 40) + 16LL) = _mm_unpacklo_epi64(
                                                           (__m128i)(*(_QWORD *)(*(_QWORD *)(v74 + 40) + 16LL) | v34),
                                                           (__m128i)(*(_QWORD *)(*(_QWORD *)(v74 + 40) + 16LL) | v34));
            *(_DWORD *)(v35 + 4) &= ~0x80u;
            *(_DWORD *)(v35 + 36) *= 2;
            sub_11D5A0(v6);
            return 1;
          }
          v8 = a3 + 32;
          v37 = (_QWORD *)(v74 + 32);
          v72.m128i_i64[0] = (__int64)&v92;
          if ( (unsigned __int8)sub_130BC0(a1, v74, v74 + 32, a3, a3 + 32, 0) )
          {
            v45 = (_QWORD *)(v74 + 64);
            sub_123A40(&v92, v74 + 64);
            if ( (unsigned __int8)sub_131730(v73, a1, v74, v74 + 64, (unsigned int)(2 * *(_DWORD *)(v74 + 68)), 0, 0) )
            {
              v16 = sub_132E20(a1, v74, (_DWORD)v37, v6, (int)v6 + 32, 8);
              if ( (_BYTE)v16 )
              {
                sub_12AB50(v45, v73, *(unsigned int *)(v74 + 68), 2);
                sub_A1280(v73, v74, *(_DWORD *)(v6 + 4));
                sub_11D5A0(v6);
              }
              else
              {
                sub_125180(v45);
              }
              sub_11CDA0(v72.m128i_i64[0]);
              return v16;
            }
            sub_11CDA0(v72.m128i_i64[0]);
          }
          if ( *(_DWORD *)(v74 + 68) != 4 )
            goto LABEL_13;
          v38 = *(_BYTE *)(v74 + 32);
          if ( v38 != 4 )
          {
            if ( (a4 & 0xA) != 2 )
              goto LABEL_13;
LABEL_96:
            if ( v38 == 2 )
              goto LABEL_13;
            goto LABEL_97;
          }
          v46 = *(_QWORD *)(v74 + 40);
          if ( *(_BYTE *)(v46 + 64) == 8 && *(_DWORD *)(*(_QWORD *)(v46 + 72) + 284LL) == 12 && *(_BYTE *)(v6 + 32) == 4 )
          {
            v48 = *(_QWORD *)(v6 + 40);
            if ( *(_BYTE *)(v48 + 64) == 8 && *(_DWORD *)(*(_QWORD *)(v48 + 72) + 284LL) == 12 )
            {
              if ( (unsigned __int8)sub_131730(v73, a1, v74, v74 + 64, 8, 0, 1) )
              {
                v56 = v74;
                v57 = *(_QWORD *)(v74 + 40);
                v58 = *(_QWORD *)(*(_QWORD *)(v57 + 72) + 24LL);
                sub_157210(a1, v6, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 72LL) + 24LL), v74, v58, 0);
                v92 = 37;
                copy_tinfo_t(v58 + 24, v72.m128i_i64[0]);
                clear_tinfo_t(v72.m128i_i64[0]);
                v92 = 37;
                copy_tinfo_t(*(_QWORD *)(v57 + 72) + 72LL, v72.m128i_i64[0]);
                clear_tinfo_t(v72.m128i_i64[0]);
                *(_DWORD *)(v57 + 68) = 8;
                sub_11D4A0(v57 + 32, "_byteswap_uint64");
                v36 = (_QWORD *)v56;
                *(_DWORD *)(v56 + 36) *= 2;
LABEL_91:
                sub_A1280(v73, (__int64)v36, *(_DWORD *)(v6 + 4));
                sub_11D5A0(v6);
                return 1;
              }
              if ( (a4 & 0xA) != 2 || *(_DWORD *)(v74 + 68) != 4 )
                goto LABEL_13;
              v38 = *(_BYTE *)(v74 + 32);
              goto LABEL_96;
            }
          }
          if ( (a4 & 0xA) != 2 )
            goto LABEL_13;
LABEL_97:
          if ( (unsigned __int8)sub_125B60(v37, v6 + 32, 0) )
            goto LABEL_13;
          if ( v74 )
          {
            if ( (unsigned __int8)sub_122240(v6, *(_QWORD *)(v74 + 8), 0) )
            {
              v64 = v6;
              v39 = v74;
            }
            else
            {
              v39 = v6;
              v64 = v74;
            }
          }
          else
          {
            v64 = 0;
            v39 = v6;
          }
          v89[0] = 0;
          v89[1] = 0;
          src = nullptr;
          v92 = 0;
          v93 = 0;
          v94 = nullptr;
          v91 = 0;
          v95 = 0;
          sub_127FE0(a1, v89, v39 + 64, 0);
          sub_123EA0(a1, v72.m128i_i64[0], v64 + 32, 1, 4294901760LL);
          if ( !(unsigned __int8)sub_64780(v89, v72.m128i_i64[0]) && !(unsigned __int8)sub_318470(&src, &v94) )
          {
            sub_1571F0(a1, v74, v37, v6, v6 + 32, 0);
            sub_1571F0(a1, *(_QWORD *)(v74 + 8), v74 + 64, *(_QWORD *)(v6 + 8), v6 + 64, 1);
            sub_A1280(v73, v74, *(_DWORD *)(v6 + 4));
            sub_11D5A0(v6);
            if ( v94 )
            {
              v95.m128i_i64[0] = 0;
              qfree(v94);
            }
            qfree(v92);
            if ( src )
            {
              v91.m128i_i64[0] = 0;
              qfree(src);
            }
            qfree(v89[0]);
            return 1;
          }
          if ( v94 )
          {
            v95.m128i_i64[0] = 0;
            qfree(v94);
          }
          qfree(v92);
          if ( src )
          {
            v91.m128i_i64[0] = 0;
            qfree(src);
          }
          qfree(v89[0]);
          break;
        case 8u:
        case 9u:
          goto LABEL_76;
        case 0xAu:
          v8 = a3 + 32;
          v72.m128i_i64[0] = (__int64)&v92;
          if ( !(unsigned __int8)sub_1301F0(a1, a3, a3 + 32, v74, v74 + 32)
            || v6
            && (unsigned __int8)sub_122240(v74, *(_QWORD *)(v6 + 8), 0)
            && (unsigned __int8)sub_A9BE0(a1, v74, v6, v74) )
          {
            goto LABEL_13;
          }
          if ( !(unsigned __int8)sub_131730(v73, a1, v74, v74 + 64, (unsigned int)(2 * *(_DWORD *)(v74 + 68)), 0, 1) )
            goto LABEL_113;
          if ( *(_DWORD *)(v74 + 36) == *(_DWORD *)(v74 + 68) )
            v7 = 4;
          v36 = (_QWORD *)v74;
          *(_DWORD *)v74 = v7;
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
    v72.m128i_i64[0] = (__int64)&v92;
    goto LABEL_13;
  }
  if ( ((1LL << v7) & 0x180000) != 0 )
  {
    if ( *(_DWORD *)(v74 + 36) == 8 && sub_11C8A0(v74, 0) )
      goto LABEL_69;
  }
  else if ( v7 != 21 )
  {
    goto LABEL_69;
  }
  v18 = (_QWORD *)(v74 + 48);
  v19 = (_QWORD *)(v74 + 32);
  if ( (unsigned __int8)sub_12CF30(*(_QWORD *)(a1 + 64), (int)v74 + 32, (int)v74 + 48, 0, 0, a6) )
  {
LABEL_4:
    v8 = v6 + 32;
    goto LABEL_5;
  }
  v8 = v6 + 32;
  v62 = sub_12CF30(*(_QWORD *)(a1 + 64), (_DWORD)v18, (_DWORD)v19, 0, 0, v20);
  if ( !v62 )
  {
    sub_123A40(v83, v19);
    sub_123A40(v86, v18);
    v21 = sub_132E20(a1, v74, (_DWORD)v19, v6, (int)v6 + 32, 4);
    v22 = (_QWORD *)(v74 + 48);
    if ( !v21 )
    {
      if ( !(unsigned __int8)sub_132E20(a1, v74, (_DWORD)v18, v6, (int)v6 + 32, 4) )
      {
LABEL_143:
        sub_11CDA0(v86);
        sub_11CDA0(v83);
        goto LABEL_5;
      }
      v22 = (_QWORD *)(v74 + 32);
    }
    if ( *(_DWORD *)v74 == 20
      && ((v72.m128i_i64[0] = (__int64)v22, v47 = sub_11FD80(v6 + 32, &v92, 0), v22 = (_QWORD *)v72.m128i_i64[0], !v47)
       || v92) )
    {
      v61 = 1;
      if ( (a4 & 2) == 0 )
      {
        sub_11CA10(v19, v83);
        sub_11CA10(v18, v86);
        goto LABEL_143;
      }
    }
    else
    {
      v61 = 0;
    }
    v23 = *(_QWORD *)(v6 + 8);
    v72.m128i_i64[0] = (__int64)v22;
    sub_1571F0(a1, *(_QWORD *)(v74 + 8), v74 + 64, v23, v6 + 64, 1);
    sub_12AB50(v72.m128i_i64[0], v73, *(unsigned int *)(v72.m128i_i64[0] + 4), 2);
    v24 = v72.m128i_i64[0];
    if ( v61 )
    {
      v25 = *(_QWORD *)(v74 + 24);
      v26 = *(unsigned int *)(v72.m128i_i64[0] + 4);
      v93 = 0;
      v92 = 0xFFFFFFFF00000000LL;
      v72.m128i_i64[0] = (__int64)&v92;
      v69 = v24;
      sub_120A10(&v92, v73, -1, v26, v25, 0);
      sub_1571F0(a1, v74, v69, v74, &v92, 0);
      sub_11CDA0(&v92);
    }
    else
    {
      sub_1207E0(v72.m128i_i64[0], v73, 9, *(_QWORD *)(v74 + 24), *(unsigned int *)(v74 + 68));
    }
    if ( v6 && (unsigned __int8)sub_122240(v74, *(_QWORD *)(v6 + 8), 0) )
    {
      sub_124680(v89, a1, v74, 1);
      v72.m128i_i64[0] = (__int64)&v92;
      sub_127A20(&v92, a1, v6, 0);
      if ( !(unsigned __int8)sub_64780(&v92, v89) )
        v62 = sub_318470(&v94, &src) ^ 1;
      if ( v94 )
      {
        v95.m128i_i64[0] = 0;
        qfree(v94);
      }
      qfree(v92);
      if ( src )
      {
        v91.m128i_i64[0] = 0;
        qfree(src);
      }
      qfree(v89[0]);
    }
    else
    {
      v62 = 1;
    }
    sub_A1280(v73, v74, *(_DWORD *)(v6 + 4));
    sub_15BC70(v74, v73, 0, 0, 0, 0, 0);
    if ( v62 )
      sub_11D5A0(v6);
    sub_11CDA0(v86);
    sub_11CDA0(v83);
    return 1;
  }
LABEL_5:
  v75 = v6;
  v9 = (_DWORD *)sub_129440(a1, v8, &v75, 0);
  v10 = v9;
  if ( !v9 )
  {
LABEL_113:
    v72.m128i_i64[0] = (__int64)&v92;
    goto LABEL_13;
  }
  v11 = *v9;
  if ( v11 == 11 && *((_BYTE *)v10 + 32) == 4 )
  {
    v10 = *((_DWORD **)v10 + 5);
    v11 = *v10;
  }
  else if ( v75 != v6 )
  {
    v93 = 0;
    v12 = (__int64 *)(v10 + 16);
    v92 = 0xFFFFFFFF00000000LL;
    if ( v10[17] > 2 * *(_DWORD *)(v6 + 36) )
    {
      v72.m128i_i64[0] = (__int64)&v92;
      sub_125180(&v92);
      v44 = sub_1272B0(&v92, v73, (unsigned int)(2 * *(_DWORD *)(v6 + 36)), 0);
      v12 = &v92;
      if ( !v44 )
      {
        sub_11CDA0(v72.m128i_i64[0]);
        return 0;
      }
    }
    else
    {
      v72.m128i_i64[0] = (__int64)&v92;
    }
    v13 = sub_129F00(v8, v73, v12);
    sub_11CDA0(v72.m128i_i64[0]);
    if ( !v13 )
      return 0;
    v11 = *v10;
  }
  v72.m128i_i64[0] = (__int64)&v92;
  if ( *(_DWORD *)v74 == v11 )
  {
    if ( (unsigned __int8)sub_1321C0(a1, v74, v74 + 32, v75, v10 + 8) )
    {
      v16 = sub_1321C0(a1, v74, v74 + 48, v75, v10 + 12);
      if ( (_BYTE)v16 )
      {
        sub_123A40(v76, v74 + 64);
        sub_1571F0(a1, *(_QWORD *)(v74 + 8), v76, *(_QWORD *)(v6 + 8), v6 + 64, 5);
        sub_123A40(v78, v10 + 8);
        sub_123A40(v80, v10 + 12);
        if ( v77 != v79
          && (!(unsigned __int8)sub_1272B0(v78, v73, v77, 0) || !(unsigned __int8)sub_1272B0(v80, v73, v77, 0)) )
        {
          sub_11CDA0(v80);
          sub_11CDA0(v78);
          sub_11CDA0(v76);
          goto LABEL_113;
        }
        v81 = 0;
        v83[0] = 0;
        v83[1] = 0;
        v84 = 0;
        v82 = 0;
        v85 = 0;
        if ( v75 != v6 )
        {
          sub_127FE0(a1, v83, v76, 0);
          sub_124680(v86, a1, v10, 1);
          while ( 1 )
          {
            if ( (_QWORD)v82 )
              v49 = *(_QWORD *)(*(_QWORD *)(v81 + 8 * v82 - 8) + 8LL);
            else
              v49 = v75;
            v50 = sub_A9AA0(a1, v86, v49, v6, 1u);
            if ( !v50 )
            {
              sub_93B40(v86);
              goto LABEL_182;
            }
            v71 = v50;
            if ( (unsigned __int8)sub_1205A0(v50, v73, 0) )
              break;
            sub_127A20(v89, a1, v71, 1);
            v66 = *(_QWORD *)(v6 + 8);
            v63 = *(_QWORD *)(v71 + 8);
            v72.m128i_i64[0] = (__int64)&v92;
            sub_64000(&v92, (__int64)v89);
            v94 = nullptr;
            v95 = 0;
            if ( v91.m128i_i64[0] )
            {
              v60 = v91.m128i_i64[0];
              n = 16 * v91.m128i_i64[0];
              v94 = (void *)qalloc_or_throw(16 * v91.m128i_i64[0]);
              v95.m128i_i64[1] = v60;
              memcpy(v94, src, n);
              v95.m128i_i64[0] = v60;
            }
            v72.m128i_i64[0] = sub_A9D90(a1, (__int64 *)v72.m128i_i64[0], v63, v66, 1u);
            if ( v94 )
            {
              v95.m128i_i64[0] = 0;
              qfree(v94);
            }
            qfree(v92);
            if ( v72.m128i_i64[0] )
            {
              sub_93B40(v89);
              break;
            }
            v51 = v82;
            v52 = v81;
            if ( *((_QWORD *)&v82 + 1) < (unsigned __int64)(v82 + 1) )
            {
              v81 = qvector_reserve(&v81, v81, v82 + 1, 8);
              v52 = v81;
              v51 = v82;
            }
            *(_QWORD *)(v52 + 8 * v51) = v71;
            *(_QWORD *)&v82 = v82 + 1;
            if ( src )
            {
              v91.m128i_i64[0] = 0;
              qfree(src);
            }
            qfree(v89[0]);
          }
          if ( v87 )
          {
            v88 = 0;
            qfree(v87);
          }
          qfree(v86[0]);
          goto LABEL_186;
        }
LABEL_182:
        if ( v74 && (unsigned __int8)sub_122240(v6, *(_QWORD *)(v74 + 8), 0) )
        {
          v72.m128i_i64[0] = (__int64)&v92;
          sub_127A20(&v92, a1, v74, 1);
          if ( sub_A9D90(a1, &v92, *(_QWORD *)(v74 + 8), v6, 0) )
          {
            sub_93B40(&v92);
LABEL_186:
            v16 = 0;
LABEL_187:
            if ( v84 )
            {
              *(_QWORD *)&v85 = 0;
              qfree(v84);
            }
            qfree(v83[0]);
            if ( v81 )
            {
              *(_QWORD *)&v82 = 0;
              qfree(v81);
            }
            sub_11CDA0(v80);
            sub_11CDA0(v78);
            sub_11CDA0(v76);
            return v16;
          }
          sub_93B40(&v92);
        }
        sub_12AB50(v76, v73, v77, 2);
        *(_DWORD *)v6 = *v10;
        sub_11CA10(v8, v78);
        sub_11CA10(v6 + 48, v80);
        sub_11CA10(v6 + 64, v76);
        sub_11D5A0(v74);
        if ( (_QWORD)v82 )
        {
          v53 = 0;
          v74 = 0;
          v72.m128i_i64[0] = (__int64)&v92;
          do
          {
            v73 = 8 * v74;
            sub_127A20(v72.m128i_i64[0], a1, *(_QWORD *)(v81 + 8 * v74), 1);
            if ( (unsigned __int8)sub_64820(v72.m128i_i64[0], v83) && (unsigned __int8)sub_317F40(&v84, &v94) )
            {
              sub_11D5A0(*(_QWORD *)(v81 + 8 * v74));
            }
            else
            {
              v54 = (_QWORD *)j__qalloc_or_throw(80);
              v74 = (__int64)v54;
              v55 = *(_QWORD *)(*(_QWORD *)(v81 + v73) + 24LL);
              v54[4] = 0xFFFFFFFF00000000LL;
              v54[5] = 0;
              v54[6] = 0xFFFFFFFF00000000LL;
              v54[7] = 0;
              v54[8] = 0xFFFFFFFF00000000LL;
              v54[9] = 0;
              sub_330970(v54, v55);
              sub_11D890(v74, *(_QWORD *)(v81 + v73));
              sub_A3160(a1, (_QWORD *)v74, v6);
            }
            if ( v94 )
            {
              v95.m128i_i64[0] = 0;
              qfree(v94);
            }
            ++v53;
            qfree(v92);
            v74 = v53;
          }
          while ( v53 < (unsigned __int64)v82 );
        }
        goto LABEL_187;
      }
    }
  }
LABEL_13:
  if ( (unsigned __int8)sub_11FD80(v8, v72.m128i_i64[0], 0) && !v92 )
  {
    if ( *a5 != 5 )
    {
      sub_123A40(v86, a5);
      if ( (unsigned __int8)sub_131830(v86, v73, 0) )
      {
        if ( !v6 || !(unsigned __int8)sub_122240(v74, *(_QWORD *)(v6 + 8), 0) )
        {
LABEL_56:
          *(_DWORD *)v6 = 9;
          sub_125180(v8);
          sub_11CA10(v6 + 64, v86);
          v31 = v73;
          sub_12AB50(v6 + 64, v73, *(unsigned int *)(v6 + 68), 2);
          sub_A1280(v31, v6, *(_DWORD *)(v74 + 4));
          sub_11CDA0(v86);
          return 1;
        }
        sub_127A20(v89, a1, v74, 1);
        if ( !(unsigned __int8)sub_64A60(v89, *(_DWORD *)(v6 + 72), v65) )
        {
          sub_124680(v72.m128i_i64[0], a1, v74, 1);
          sub_648D0(v89, (__int64 *)v72.m128i_i64[0]);
          v27 = v94;
          v94 = nullptr;
          v28 = _mm_loadu_si128(&v95);
          v95 = 0;
          if ( src )
          {
            v72 = v28;
            v91.m128i_i64[0] = 0;
            qfree(src);
            src = v27;
            v91 = _mm_load_si128(&v72);
            if ( v94 )
            {
              v95.m128i_i64[0] = 0;
              qfree(v94);
            }
          }
          else
          {
            src = v27;
            v91 = v28;
          }
          qfree(v92);
          if ( !(unsigned __int8)sub_64A60(v89, *(_DWORD *)(v6 + 72), v65) && !sub_A9AA0(a1, v89, v6, v74, 1u) )
          {
            v29 = v74;
            *(_DWORD *)v6 = *(_DWORD *)v74;
            sub_125180(v8);
            sub_125180(v6 + 48);
            sub_125180(v6 + 64);
            sub_11CDA0(v29 + 48);
            if ( src )
            {
              v91.m128i_i64[0] = 0;
              qfree(src);
            }
            qfree(v89[0]);
            v30 = v74;
            v74 = v6;
            v8 = v30 + 32;
            v6 = v30;
            goto LABEL_56;
          }
        }
        if ( src )
        {
          v91.m128i_i64[0] = 0;
          qfree(src);
        }
        qfree(v89[0]);
      }
      sub_11CDA0(v86);
      goto LABEL_16;
    }
    if ( (unsigned __int8)sub_12B890(v74, v73, 9, v6 + 64, (unsigned int)(2 * *(_DWORD *)(v74 + 68))) )
    {
      sub_A1280(v73, v74, *(_DWORD *)(v6 + 4));
      sub_11D5A0(v6);
      return 1;
    }
    return 0;
  }
  if ( *(_BYTE *)(v6 + 32) == 2
    && (a4 & 0xA) == 2
    && *(_DWORD *)v74 == 9
    && (unsigned __int8)sub_131730(v73, a1, v74, v74 + 64, (unsigned int)(2 * *(_DWORD *)(v74 + 68)), 0, 1) )
  {
    v40 = (_QWORD *)v74;
    v41 = v73;
    *(_DWORD *)v74 = 19;
    sub_1207E0(v40 + 4, v41, 9, v40[3], (unsigned int)(2 * v65));
    v42 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 16LL), *(unsigned int *)(v6 + 36), 0) << (8
                                                                                                * (unsigned __int8)v65);
    v43 = 0;
    if ( (unsigned __int64)(8 * v65) < 0x40 )
      v43 = v42;
    sub_120A10(v40 + 6, v41, v43, (unsigned int)(2 * v65), *(_QWORD *)(v6 + 24), 0);
    sub_A1280(v41, (__int64)v40, *(_DWORD *)(v6 + 4));
    sub_11D5A0(v6);
    return 1;
  }
LABEL_16:
  v89[0] = v6;
  v14 = sub_129440(a1, v8, v89, 0);
  v15 = (_QWORD *)v14;
  if ( !v14 )
    return 0;
  if ( !(unsigned __int8)sub_125B60(v14 + 64, v8, 0) )
    return 0;
  if ( *(_DWORD *)v15 != 11 )
    return 0;
  v16 = sub_132370(a1, v74, v74, v89[0], v15, 0);
  if ( !(_BYTE)v16 )
    return 0;
  v72.m128i_i64[0] = (__int64)&v92;
  sub_124680(&v92, a1, v15, 1);
  LOBYTE(v73) = 0;
  v32 = v15;
  while ( 1 )
  {
    v33 = (_QWORD *)sub_A9AA0(a1, v72.m128i_i64[0], (__int64)v32, v74, 1u);
    if ( !v33 )
      break;
    if ( v33 == (_QWORD *)v74 )
    {
      v32 = (_QWORD *)v74;
    }
    else
    {
      if ( v15 != v33 )
      {
        v16 = 0;
        goto LABEL_64;
      }
      v32 = (_QWORD *)v15[1];
      LOBYTE(v73) = v16;
      if ( !v32 )
        break;
    }
  }
  sub_125180(v8);
  v70 = (_QWORD *)(v74 + 64);
  sub_11CA10(v6 + 64, v74 + 64);
  sub_1571F0(a1, *(_QWORD *)(v6 + 8), v6 + 64, *(_QWORD *)(v74 + 8), v70, 1);
  sub_11D5A0(v74);
  if ( (_BYTE)v73 )
    sub_11D5A0(v15);
LABEL_64:
  if ( v94 )
  {
    v95.m128i_i64[0] = 0;
    qfree(v94);
  }
  qfree(v92);
  return v16;
}
