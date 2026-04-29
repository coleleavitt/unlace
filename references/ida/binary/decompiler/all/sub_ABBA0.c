__int64 __fastcall sub_ABBA0(__int64 a1, _QWORD *a2, __int64 a3, char a4, _BYTE *a5, int a6)
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
  _QWORD *v31; // rdx
  _QWORD *v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rsi
  _QWORD *v37; // r15
  char v38; // al
  __int64 v39; // rdx
  __int64 v40; // r15
  __int64 v41; // rsi
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
  _QWORD *v56; // r15
  __int64 v57; // r13
  __int64 v58; // rdi
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
  __int64 v81; // [rsp+C0h] [rbp-110h]
  __int128 v82; // [rsp+C8h] [rbp-108h]
  _QWORD v83[2]; // [rsp+E0h] [rbp-F0h] BYREF
  __int64 v84; // [rsp+F0h] [rbp-E0h] BYREF
  __int128 v85; // [rsp+F8h] [rbp-D8h]
  _QWORD v86[6]; // [rsp+110h] [rbp-C0h] BYREF
  __int64 v87[2]; // [rsp+140h] [rbp-90h] BYREF
  void *src; // [rsp+150h] [rbp-80h] BYREF
  __m128i v89; // [rsp+158h] [rbp-78h]
  __int64 v90; // [rsp+170h] [rbp-60h] BYREF
  __int64 v91; // [rsp+178h] [rbp-58h]
  void *v92; // [rsp+180h] [rbp-50h] BYREF
  __m128i v93; // [rsp+188h] [rbp-48h] BYREF
  unsigned __int64 v94; // [rsp+198h] [rbp-38h]

  v6 = a3;
  v7 = *(_DWORD *)a2;
  v74 = (__int64)a2;
  v94 = __readfsqword(0x28u);
  v65 = *(_DWORD *)(a3 + 68);
  v73 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( v7 > 0xE )
  {
    if ( v7 - 15 > 0x2D )
      goto LABEL_73;
    if ( ((1LL << v7) & 0x1300000001C78000LL) != 0 )
    {
LABEL_80:
      v8 = a3 + 32;
      v72.m128i_i64[0] = (__int64)&v90;
      goto LABEL_13;
    }
    if ( ((1LL << v7) & 0x180000) != 0 )
    {
      if ( *(_DWORD *)(v74 + 36) == 8 && sub_11A460(v74, 0) )
        goto LABEL_73;
    }
    else if ( v7 != 21 )
    {
      goto LABEL_73;
    }
    v18 = (_QWORD *)(v74 + 48);
    v19 = (_QWORD *)(v74 + 32);
    if ( (unsigned __int8)sub_12AA10(*(_QWORD *)(a1 + 64), (int)v74 + 32, (int)v74 + 48, 0, 0, a6) )
    {
LABEL_4:
      v8 = v6 + 32;
      goto LABEL_5;
    }
    v8 = v6 + 32;
    v62 = sub_12AA10(*(_QWORD *)(a1 + 64), (_DWORD)v18, (_DWORD)v19, 0, 0, v20);
    if ( v62 )
    {
LABEL_5:
      v75 = v6;
      v9 = (_DWORD *)sub_126F20(a1, v8, &v75, 0);
      v10 = v9;
      if ( !v9 )
      {
LABEL_116:
        v72.m128i_i64[0] = (__int64)&v90;
        goto LABEL_13;
      }
      v11 = *v9;
      if ( v11 == 11 && *((_BYTE *)v10 + 32) == 4 )
      {
        v10 = (_DWORD *)*((_QWORD *)v10 + 5);
        v11 = *v10;
        goto LABEL_12;
      }
      if ( v75 == v6 )
      {
LABEL_12:
        v72.m128i_i64[0] = (__int64)&v90;
        if ( *(_DWORD *)v74 != v11 )
          goto LABEL_13;
        if ( !(unsigned __int8)sub_12FCA0(a1, v74, v74 + 32, v75, v10 + 8) )
          goto LABEL_13;
        v16 = sub_12FCA0(a1, v74, v74 + 48, v75, v10 + 12);
        if ( !(_BYTE)v16 )
          goto LABEL_13;
        sub_121540(v76, v74 + 64);
        sub_154E70(a1, *(_QWORD *)(v74 + 8), v76, *(_QWORD *)(v6 + 8), v6 + 64, 5);
        sub_121540(v78, v10 + 8);
        sub_121540(v80, v10 + 12);
        if ( v77 != v79
          && (!(unsigned __int8)sub_124DA0(v78, v73, v77, 0) || !(unsigned __int8)sub_124DA0(v80, v73, v77, 0)) )
        {
          sub_11A960(v80);
          sub_11A960(v78);
          sub_11A960(v76);
          goto LABEL_116;
        }
        v81 = 0;
        v83[0] = 0;
        v83[1] = 0;
        v84 = 0;
        v82 = 0;
        v85 = 0;
        if ( v75 != v6 )
        {
          sub_125AC0(a1, v83, v76, 0);
          sub_122180(v86, a1, v10, 1);
          while ( 1 )
          {
            if ( (_QWORD)v82 )
              v49 = *(_QWORD *)(*(_QWORD *)(v81 + 8 * v82 - 8) + 8LL);
            else
              v49 = v75;
            v50 = sub_A8D20(a1, v86, v49, v6, 1u);
            if ( !v50 )
            {
              sub_92DA0((__int64)v86);
              goto LABEL_192;
            }
            v71 = v50;
            if ( (unsigned __int8)sub_11E160(v50, v73, 0) )
              break;
            sub_125510(v87, a1, v71, 1);
            v66 = *(_QWORD *)(v6 + 8);
            v63 = *(_QWORD *)(v71 + 8);
            v72.m128i_i64[0] = (__int64)&v90;
            sub_63700(&v90, (__int64)v87);
            v92 = 0;
            v93 = 0;
            if ( v89.m128i_i64[0] )
            {
              v60 = v89.m128i_i64[0];
              n = 16 * v89.m128i_i64[0];
              v92 = (void *)qalloc_or_throw();
              v93.m128i_i64[1] = v60;
              memcpy(v92, src, n);
              v93.m128i_i64[0] = v60;
            }
            v72.m128i_i64[0] = sub_A9010(a1, (__int64 *)v72.m128i_i64[0], v63, v66, 1u);
            if ( v92 )
            {
              v93.m128i_i64[0] = 0;
              qfree();
            }
            qfree();
            if ( v72.m128i_i64[0] )
            {
              sub_92DA0((__int64)v87);
              break;
            }
            v51 = v82;
            v52 = v81;
            if ( *((_QWORD *)&v82 + 1) < (unsigned __int64)(v82 + 1) )
            {
              v81 = qvector_reserve();
              v52 = v81;
              v51 = v82;
            }
            *(_QWORD *)(v52 + 8 * v51) = v71;
            *(_QWORD *)&v82 = v82 + 1;
            if ( src )
            {
              v89.m128i_i64[0] = 0;
              qfree();
            }
            qfree();
          }
          if ( v86[2] )
          {
            v86[3] = 0;
            qfree();
          }
          qfree();
          goto LABEL_196;
        }
LABEL_192:
        if ( v74 && (unsigned __int8)sub_11FD40(v6, *(_QWORD *)(v74 + 8), 0) )
        {
          v72.m128i_i64[0] = (__int64)&v90;
          sub_125510(&v90, a1, v74, 1);
          if ( sub_A9010(a1, &v90, *(_QWORD *)(v74 + 8), v6, 0) )
          {
            sub_92DA0((__int64)&v90);
LABEL_196:
            v16 = 0;
LABEL_197:
            if ( v84 )
            {
              *(_QWORD *)&v85 = 0;
              qfree();
            }
            qfree();
            if ( v81 )
            {
              *(_QWORD *)&v82 = 0;
              qfree();
            }
            sub_11A960(v80);
            sub_11A960(v78);
            sub_11A960(v76);
            return v16;
          }
          sub_92DA0((__int64)&v90);
        }
        sub_128630(v76, v73, v77, 2);
        *(_DWORD *)v6 = *v10;
        sub_11A5D0(v8, v78);
        sub_11A5D0(v6 + 48, v80);
        sub_11A5D0(v6 + 64, v76);
        sub_11B160(v74);
        if ( (_QWORD)v82 )
        {
          v53 = 0;
          v74 = 0;
          v72.m128i_i64[0] = (__int64)&v90;
          do
          {
            v73 = 8 * v74;
            sub_125510(v72.m128i_i64[0], a1, *(_QWORD *)(v81 + 8 * v74), 1);
            if ( (unsigned __int8)sub_63F20(v72.m128i_i64[0], v83) && (unsigned __int8)sub_3149F0(&v84, &v92) )
            {
              sub_11B160(*(_QWORD *)(v81 + 8 * v74));
            }
            else
            {
              v54 = (_QWORD *)j__qalloc_or_throw();
              v74 = (__int64)v54;
              v55 = *(_QWORD *)(*(_QWORD *)(v81 + v73) + 24LL);
              v54[4] = 0xFFFFFFFF00000000LL;
              v54[5] = 0;
              v54[6] = 0xFFFFFFFF00000000LL;
              v54[7] = 0;
              v54[8] = 0xFFFFFFFF00000000LL;
              v54[9] = 0;
              sub_32D4D0(v54, v55);
              sub_11B450(v74, *(_QWORD *)(v81 + v73));
              sub_A23D0(a1, (_QWORD *)v74, v6);
            }
            if ( v92 )
            {
              v93.m128i_i64[0] = 0;
              qfree();
            }
            ++v53;
            qfree();
            v74 = v53;
          }
          while ( v53 < (unsigned __int64)v82 );
        }
        goto LABEL_197;
      }
      v91 = 0;
      v12 = (__int64 *)(v10 + 16);
      v90 = 0xFFFFFFFF00000000LL;
      if ( v10[17] > 2 * *(_DWORD *)(v6 + 36) )
      {
        v72.m128i_i64[0] = (__int64)&v90;
        sub_122C80(&v90);
        v44 = sub_124DA0(&v90, v73, (unsigned int)(2 * *(_DWORD *)(v6 + 36)), 0);
        v12 = &v90;
        if ( !v44 )
        {
          sub_11A960(v72.m128i_i64[0]);
          return 0;
        }
      }
      else
      {
        v72.m128i_i64[0] = (__int64)&v90;
      }
      v13 = sub_1279E0(v8, v73, v12);
      sub_11A960(v72.m128i_i64[0]);
      if ( v13 )
      {
        v11 = *v10;
        goto LABEL_12;
      }
      return 0;
    }
    sub_121540(v83, v19);
    sub_121540(v86, v18);
    v21 = sub_130900(a1, v74, (_DWORD)v19, v6, (int)v6 + 32, 4);
    v22 = (_QWORD *)(v74 + 48);
    if ( !v21 )
    {
      if ( !(unsigned __int8)sub_130900(a1, v74, (_DWORD)v18, v6, (int)v6 + 32, 4) )
      {
LABEL_151:
        sub_11A960(v86);
        sub_11A960(v83);
        goto LABEL_5;
      }
      v22 = (_QWORD *)(v74 + 32);
    }
    if ( *(_DWORD *)v74 == 20
      && ((v72.m128i_i64[0] = (__int64)v22, v47 = sub_11D940(v6 + 32, &v90, 0), v22 = (_QWORD *)v72.m128i_i64[0], !v47)
       || v90) )
    {
      v61 = 1;
      if ( (a4 & 2) == 0 )
      {
        sub_11A5D0(v19, v83);
        sub_11A5D0(v18, v86);
        goto LABEL_151;
      }
    }
    else
    {
      v61 = 0;
    }
    v23 = *(_QWORD *)(v6 + 8);
    v72.m128i_i64[0] = (__int64)v22;
    sub_154E70(a1, *(_QWORD *)(v74 + 8), v74 + 64, v23, v6 + 64, 1);
    sub_128630(v72.m128i_i64[0], v73, *(unsigned int *)(v72.m128i_i64[0] + 4), 2);
    v24 = v72.m128i_i64[0];
    if ( v61 )
    {
      v25 = *(_QWORD *)(v74 + 24);
      v26 = *(unsigned int *)(v72.m128i_i64[0] + 4);
      v91 = 0;
      v90 = 0xFFFFFFFF00000000LL;
      v72.m128i_i64[0] = (__int64)&v90;
      v69 = v24;
      sub_11E5D0(&v90, v73, -1, v26, v25, 0);
      sub_154E70(a1, v74, v69, v74, &v90, 0);
      sub_11A960(&v90);
    }
    else
    {
      sub_11E3A0(v72.m128i_i64[0], v73, 9, *(_QWORD *)(v74 + 24), *(unsigned int *)(v74 + 68));
    }
    if ( v6 && (unsigned __int8)sub_11FD40(v74, *(_QWORD *)(v6 + 8), 0) )
    {
      sub_122180(v87, a1, v74, 1);
      v72.m128i_i64[0] = (__int64)&v90;
      sub_125510(&v90, a1, v6, 0);
      if ( !(unsigned __int8)sub_63E80(&v90, v87) )
        v62 = sub_314F20(&v92, &src) ^ 1;
      if ( v92 )
      {
        v93.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
      if ( src )
      {
        v89.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
    }
    else
    {
      v62 = 1;
    }
    if ( *(char *)(v6 + 4) >= 0 )
      *(_DWORD *)(v74 + 4) &= ~0x80u;
    sub_11B190(v74, v73);
    sub_1595B0(v74, v73, 0, 0, 0, 0, 0);
    if ( v62 )
      sub_11B160(v6);
    sub_11A960(v86);
    sub_11A960(v83);
    return 1;
  }
  if ( v7 <= 1 )
  {
LABEL_73:
    v8 = v6 + 32;
    goto LABEL_16;
  }
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
        sub_154E70(a1, *(_QWORD *)(v74 + 8), v74 + 64, *(_QWORD *)(a3 + 8), a3 + 64, 1);
        v33 = 0;
        if ( (unsigned __int64)(8 * v65) <= 0x3F )
          v33 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 16LL) << (8 * (unsigned __int8)v65);
        v34 = v74;
        *(__m128i *)(*(_QWORD *)(v74 + 40) + 16LL) = _mm_unpacklo_epi64(
                                                       (__m128i)(*(_QWORD *)(*(_QWORD *)(v74 + 40) + 16LL) | v33),
                                                       (__m128i)(*(_QWORD *)(*(_QWORD *)(v74 + 40) + 16LL) | v33));
        *(_DWORD *)(v34 + 4) &= ~0x80u;
        *(_DWORD *)(v34 + 36) *= 2;
        sub_11B160(v6);
        return 1;
      }
      v8 = a3 + 32;
      v37 = (_QWORD *)(v74 + 32);
      v72.m128i_i64[0] = (__int64)&v90;
      if ( !(unsigned __int8)sub_12E6A0(a1, v74, v74 + 32, a3, a3 + 32, 0) )
        goto LABEL_96;
      v45 = (_QWORD *)(v74 + 64);
      sub_121540(&v90, v74 + 64);
      if ( (unsigned __int8)sub_12F210(v73, a1, v74, v74 + 64, (unsigned int)(2 * *(_DWORD *)(v74 + 68)), 0, 0) )
      {
        v16 = sub_130900(a1, v74, (_DWORD)v37, v6, (int)v6 + 32, 8);
        if ( (_BYTE)v16 )
        {
          sub_128630(v45, v73, *(unsigned int *)(v74 + 68), 2);
          if ( *(char *)(v6 + 4) >= 0 )
            *(_DWORD *)(v74 + 4) &= ~0x80u;
          sub_11B190(v74, v73);
          sub_11B160(v6);
        }
        else
        {
          sub_122C80(v45);
        }
        sub_11A960(v72.m128i_i64[0]);
        return v16;
      }
      sub_11A960(v72.m128i_i64[0]);
LABEL_96:
      if ( *(_DWORD *)(v74 + 68) != 4 )
        break;
      v38 = *(_BYTE *)(v74 + 32);
      if ( v38 != 4 )
      {
        if ( (a4 & 0xA) != 2 )
          break;
LABEL_99:
        if ( v38 == 2 )
          break;
        goto LABEL_100;
      }
      v46 = *(_QWORD *)(v74 + 40);
      if ( *(_BYTE *)(v46 + 64) == 8 && *(_DWORD *)(*(_QWORD *)(v46 + 72) + 284LL) == 12 && *(_BYTE *)(v6 + 32) == 4 )
      {
        v48 = *(_QWORD *)(v6 + 40);
        if ( *(_BYTE *)(v48 + 64) == 8 && *(_DWORD *)(*(_QWORD *)(v48 + 72) + 284LL) == 12 )
        {
          if ( (unsigned __int8)sub_12F210(v73, a1, v74, v74 + 64, 8, 0, 1) )
          {
            v56 = (_QWORD *)v74;
            v57 = *(_QWORD *)(v74 + 40);
            sub_154E90(
              a1,
              v6,
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 72LL) + 24LL),
              v74,
              *(_QWORD *)(*(_QWORD *)(v57 + 72) + 24LL),
              0);
            v90 = 37;
            copy_tinfo_t();
            clear_tinfo_t();
            v90 = 37;
            copy_tinfo_t();
            clear_tinfo_t();
            *(_DWORD *)(v57 + 68) = 8;
            sub_11B060(v57 + 32, "_byteswap_uint64");
            v58 = v73;
            *((_DWORD *)v56 + 9) *= 2;
            sub_A00D0(v58, (__int64)v56, *(_DWORD *)(v6 + 4));
            sub_11B160(v6);
            return 1;
          }
          if ( (a4 & 0xA) != 2 || *(_DWORD *)(v74 + 68) != 4 )
            break;
          v38 = *(_BYTE *)(v74 + 32);
          goto LABEL_99;
        }
      }
      if ( (a4 & 0xA) != 2 )
        break;
LABEL_100:
      if ( (unsigned __int8)sub_123660(v37, v6 + 32, 0) )
        break;
      if ( v74 )
      {
        if ( (unsigned __int8)sub_11FD40(v6, *(_QWORD *)(v74 + 8), 0) )
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
      v87[0] = 0;
      v87[1] = 0;
      src = 0;
      v90 = 0;
      v91 = 0;
      v92 = 0;
      v89 = 0;
      v93 = 0;
      sub_125AC0(a1, v87, v39 + 64, 0);
      sub_1219A0(a1, v72.m128i_i64[0], v64 + 32, 1, 4294901760LL);
      if ( !(unsigned __int8)sub_63E80(v87, v72.m128i_i64[0]) && !(unsigned __int8)sub_314F20(&src, &v92) )
      {
        sub_154E70(a1, v74, v37, v6, v6 + 32, 0);
        sub_154E70(a1, *(_QWORD *)(v74 + 8), v74 + 64, *(_QWORD *)(v6 + 8), v6 + 64, 1);
        if ( *(char *)(v6 + 4) >= 0 )
          *(_DWORD *)(v74 + 4) &= ~0x80u;
        sub_11B190(v74, v73);
        sub_11B160(v6);
        if ( v92 )
        {
          v93.m128i_i64[0] = 0;
          qfree();
        }
        qfree();
        if ( src )
        {
          v89.m128i_i64[0] = 0;
          qfree();
        }
        qfree();
        return 1;
      }
      if ( v92 )
      {
        v93.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
      if ( src )
      {
        v89.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
      break;
    case 8u:
    case 9u:
      goto LABEL_80;
    case 0xAu:
      v8 = a3 + 32;
      v72.m128i_i64[0] = (__int64)&v90;
      if ( !(unsigned __int8)sub_12DCD0(a1, a3, a3 + 32, v74, v74 + 32)
        || v6
        && (unsigned __int8)sub_11FD40(v74, *(_QWORD *)(v6 + 8), 0)
        && (unsigned __int8)sub_A8E60(a1, v74, v6, v74) )
      {
        break;
      }
      if ( !(unsigned __int8)sub_12F210(v73, a1, v74, v74 + 64, (unsigned int)(2 * *(_DWORD *)(v74 + 68)), 0, 1) )
        goto LABEL_116;
      if ( *(_DWORD *)(v74 + 36) == *(_DWORD *)(v74 + 68) )
        v7 = 4;
      v35 = v74;
      v36 = v73;
      *(_DWORD *)v74 = v7;
      *(_DWORD *)(v35 + 4) = 0;
      sub_11B190(v35, v36);
      sub_11B160(v6);
      return 1;
    default:
      goto LABEL_73;
  }
LABEL_13:
  if ( (unsigned __int8)sub_11D940(v8, v72.m128i_i64[0], 0) && !v90 )
  {
    if ( *a5 == 5 )
    {
      if ( (unsigned __int8)sub_129370(v74, v73, 9, v6 + 64, (unsigned int)(2 * *(_DWORD *)(v74 + 68))) )
      {
        if ( *(char *)(v6 + 4) >= 0 )
          *(_DWORD *)(v74 + 4) &= ~0x80u;
        goto LABEL_124;
      }
      return 0;
    }
    sub_121540(v86, a5);
    if ( (unsigned __int8)sub_12F310(v86, v73, 0) )
    {
      if ( !v6 || !(unsigned __int8)sub_11FD40(v74, *(_QWORD *)(v6 + 8), 0) )
      {
LABEL_58:
        *(_DWORD *)v6 = 9;
        sub_122C80(v8);
        sub_11A5D0(v6 + 64, v86);
        sub_128630(v6 + 64, v73, *(unsigned int *)(v6 + 68), 2);
        if ( *(char *)(v74 + 4) >= 0 )
          *(_DWORD *)(v6 + 4) &= ~0x80u;
        sub_11B190(v6, v73);
        sub_11A960(v86);
        return 1;
      }
      sub_125510(v87, a1, v74, 1);
      if ( !(unsigned __int8)sub_64160(v87, *(_DWORD *)(v6 + 72), v65) )
      {
        sub_122180(v72.m128i_i64[0], a1, v74, 1);
        sub_63FD0(v87, (__int64 *)v72.m128i_i64[0]);
        v27 = v92;
        v92 = 0;
        v28 = _mm_loadu_si128(&v93);
        v93 = 0;
        if ( src )
        {
          v72 = v28;
          v89.m128i_i64[0] = 0;
          qfree();
          src = v27;
          v89 = _mm_load_si128(&v72);
          if ( v92 )
          {
            v93.m128i_i64[0] = 0;
            qfree();
          }
        }
        else
        {
          src = v27;
          v89 = v28;
        }
        qfree();
        if ( !(unsigned __int8)sub_64160(v87, *(_DWORD *)(v6 + 72), v65) && !sub_A8D20(a1, v87, v6, v74, 1u) )
        {
          v29 = v74;
          *(_DWORD *)v6 = *(_DWORD *)v74;
          sub_122C80(v8);
          sub_122C80(v6 + 48);
          sub_122C80(v6 + 64);
          sub_11A960(v29 + 48);
          if ( src )
          {
            v89.m128i_i64[0] = 0;
            qfree();
          }
          qfree();
          v30 = v74;
          v74 = v6;
          v8 = v30 + 32;
          v6 = v30;
          goto LABEL_58;
        }
      }
      if ( src )
      {
        v89.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
    }
    sub_11A960(v86);
    goto LABEL_16;
  }
  if ( *(_BYTE *)(v6 + 32) == 2
    && (a4 & 0xA) == 2
    && *(_DWORD *)v74 == 9
    && (unsigned __int8)sub_12F210(v73, a1, v74, v74 + 64, (unsigned int)(2 * *(_DWORD *)(v74 + 68)), 0, 1) )
  {
    v40 = v74;
    v41 = v73;
    *(_DWORD *)v74 = 19;
    sub_11E3A0(v40 + 32, v41, 9, *(_QWORD *)(v40 + 24), (unsigned int)(2 * v65));
    v42 = sub_327770(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 16LL), *(unsigned int *)(v6 + 36), 0) << (8
                                                                                                * (unsigned __int8)v65);
    v43 = 0;
    if ( (unsigned __int64)(8 * v65) < 0x40 )
      v43 = v42;
    sub_11E5D0(v40 + 48, v73, v43, (unsigned int)(2 * v65), *(_QWORD *)(v6 + 24), 0);
    if ( *(char *)(v6 + 4) >= 0 )
      *(_DWORD *)(v40 + 4) &= ~0x80u;
LABEL_124:
    sub_11B190(v74, v73);
    sub_11B160(v6);
    return 1;
  }
LABEL_16:
  v87[0] = v6;
  v14 = sub_126F20(a1, v8, v87, 0);
  v15 = (_QWORD *)v14;
  if ( !v14 )
    return 0;
  if ( !(unsigned __int8)sub_123660(v14 + 64, v8, 0) )
    return 0;
  if ( *(_DWORD *)v15 != 11 )
    return 0;
  v16 = sub_12FE50(a1, v74, v74, v87[0], v15, 0);
  if ( !(_BYTE)v16 )
    return 0;
  v72.m128i_i64[0] = (__int64)&v90;
  sub_122180(&v90, a1, v15, 1);
  LOBYTE(v73) = 0;
  v31 = v15;
  while ( 1 )
  {
    v32 = (_QWORD *)sub_A8D20(a1, v72.m128i_i64[0], (__int64)v31, v74, 1u);
    if ( !v32 )
      break;
    if ( v32 == (_QWORD *)v74 )
    {
      v31 = (_QWORD *)v74;
    }
    else
    {
      if ( v15 != v32 )
      {
        v16 = 0;
        goto LABEL_68;
      }
      v31 = (_QWORD *)v15[1];
      LOBYTE(v73) = v16;
      if ( !v31 )
        break;
    }
  }
  sub_122C80(v8);
  v70 = (_QWORD *)(v74 + 64);
  sub_11A5D0(v6 + 64, v74 + 64);
  sub_154E70(a1, *(_QWORD *)(v6 + 8), v6 + 64, *(_QWORD *)(v74 + 8), v70, 1);
  sub_11B160(v74);
  if ( (_BYTE)v73 )
    sub_11B160(v15);
LABEL_68:
  if ( v92 )
  {
    v93.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  return v16;
}
