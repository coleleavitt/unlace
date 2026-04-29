_QWORD *__fastcall sub_9F8F0(__int64 a1, unsigned int *a2, _QWORD *a3, char a4)
{
  _QWORD *v4; // r15
  unsigned __int64 v5; // r13
  int v7; // r14d
  __int64 v9; // rax
  _QWORD *v10; // rbp
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 *v16; // r9
  char *v17; // r12
  char v18; // al
  char *v19; // rcx
  char *v20; // rdx
  char *v21; // r12
  __int64 v22; // rax
  _DWORD *v23; // rax
  char v24; // al
  int v25; // edx
  int v26; // eax
  __int64 v27; // r12
  char v28; // r12
  char v29; // al
  char v30; // al
  __int64 v31; // r11
  char v32; // al
  _DWORD *v33; // r12
  char v34; // al
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  char v38; // al
  unsigned int v39; // [rsp+14h] [rbp-1A4h]
  _DWORD *v40; // [rsp+20h] [rbp-198h]
  __int64 v41; // [rsp+28h] [rbp-190h]
  char v42; // [rsp+30h] [rbp-188h]
  __int64 *v43; // [rsp+30h] [rbp-188h]
  __int64 *v44; // [rsp+30h] [rbp-188h]
  __int64 *v45; // [rsp+30h] [rbp-188h]
  char v46; // [rsp+38h] [rbp-180h]
  __int64 v47; // [rsp+38h] [rbp-180h]
  __int64 v48; // [rsp+38h] [rbp-180h]
  __int64 v49; // [rsp+38h] [rbp-180h]
  __int64 v50; // [rsp+60h] [rbp-158h]
  __int64 v51; // [rsp+68h] [rbp-150h]
  __int64 v52; // [rsp+70h] [rbp-148h]
  __int64 v53; // [rsp+78h] [rbp-140h]
  __int64 v54; // [rsp+80h] [rbp-138h] BYREF
  int v55; // [rsp+88h] [rbp-130h]
  __int64 v56; // [rsp+90h] [rbp-128h] BYREF
  int v57; // [rsp+98h] [rbp-120h]
  _QWORD v58[2]; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-108h] BYREF
  __int128 v60; // [rsp+B8h] [rbp-100h]
  unsigned __int64 v61; // [rsp+D0h] [rbp-E8h] BYREF
  __int64 v62; // [rsp+D8h] [rbp-E0h]
  __int64 v63; // [rsp+E0h] [rbp-D8h] BYREF
  __int128 v64; // [rsp+E8h] [rbp-D0h]
  __int16 v65; // [rsp+104h] [rbp-B4h]
  char v66; // [rsp+106h] [rbp-B2h]
  char v67; // [rsp+107h] [rbp-B1h]
  __int64 v68; // [rsp+108h] [rbp-B0h] BYREF
  char v69[16]; // [rsp+110h] [rbp-A8h] BYREF
  char v70[16]; // [rsp+120h] [rbp-98h] BYREF
  _BYTE v71[16]; // [rsp+130h] [rbp-88h] BYREF
  _BYTE v72[16]; // [rsp+140h] [rbp-78h] BYREF
  _BYTE v73[16]; // [rsp+150h] [rbp-68h] BYREF
  _BYTE v74[24]; // [rsp+160h] [rbp-58h] BYREF
  unsigned __int64 v75; // [rsp+178h] [rbp-40h]

  v75 = __readfsqword(0x28u);
  if ( !a2 )
    return nullptr;
  v4 = a2;
  if ( (a2[1] & 0x810) != 0 )
    return nullptr;
  v5 = *a2;
  if ( (_DWORD)v5 == 1 )
    return sub_9F3F0(a1, (__int64)a2, a4);
  v7 = a2[17];
  if ( v7 <= 1 )
    return nullptr;
  v39 = v7 >> 1;
  if ( !(unsigned __int8)sub_118880((unsigned int)(v7 >> 1)) )
    return nullptr;
  if ( (unsigned int)v5 > 0x3D )
    return nullptr;
  v9 = 0x30000000003FF39CLL;
  if ( !_bittest64(&v9, v5) )
    return nullptr;
  v41 = (__int64)(a2 + 16);
  v40 = *(_DWORD **)(*(_QWORD *)(a1 + 480) + 112LL);
  sub_11F840(v69, a2 + 16);
  sub_11F840(v70, a2 + 16);
  if ( !(unsigned __int8)sub_1230B0(v69, v40, v39, 0) || (v46 = sub_123650(v70, v40, v39, 0)) == 0 )
  {
    v10 = nullptr;
    goto LABEL_10;
  }
  v42 = sub_9DCD0(v69, a3) ^ 1;
  v66 = v42;
  v12 = sub_9DCD0(v70, a3) ^ 1;
  v67 = v12;
  if ( (_DWORD)v5 == 2 )
  {
    v19 = v70;
    v20 = nullptr;
    if ( !v12 )
      v19 = nullptr;
    if ( v42 )
      v20 = v69;
    v10 = sub_9F6B0(a1, (__int64)a2, (__int64)v20, (__int64)v19, a4);
    goto LABEL_10;
  }
  if ( !v12 && *a2 - 8 <= 1 )
  {
    if ( (a4 & 2) == 0 )
    {
      if ( a2[9] == v39 )
      {
        a2[1] |= 0x40000u;
        *a2 = 4;
      }
      else if ( (int)a2[9] >= (int)v39 )
      {
        if ( !under_debugger )
          sub_37E160(51933);
        BUG();
      }
      sub_118810(v41, v69);
    }
    v10 = a2;
    goto LABEL_10;
  }
  v65 = 257;
  v50 = (__int64)(a2 + 8);
  sub_11F840(v71, a2 + 8);
  sub_11F840(v72, a2 + 8);
  v51 = (__int64)(a2 + 12);
  sub_11F840(v73, a2 + 12);
  sub_11F840(v74, a2 + 12);
  if ( (unsigned int)(v5 - 8) <= 1 )
    goto LABEL_24;
  if ( !v71[0] )
  {
    if ( !v73[0] )
      goto LABEL_21;
LABEL_73:
    v28 = 0;
LABEL_74:
    if ( (unsigned __int8)sub_1230B0(v73, v40, v39, 1) == 1 && !v28 )
      goto LABEL_21;
    goto LABEL_76;
  }
  v13 = (unsigned int)sub_1230B0(v71, v40, v39, 1);
  if ( (_BYTE)v13 )
  {
    if ( !v73[0] )
      goto LABEL_21;
    goto LABEL_73;
  }
  if ( v73[0] )
  {
    v28 = v46;
    goto LABEL_74;
  }
LABEL_76:
  if ( v42 )
    goto LABEL_45;
  LOBYTE(v65) = 0;
LABEL_21:
  if ( v72[0] )
  {
    v29 = sub_123650(v72, v40, v39, 1);
    v13 = v74[0];
    if ( !v29 )
    {
      if ( !v74[0] )
        goto LABEL_83;
      goto LABEL_81;
    }
    v42 = v66;
    if ( !v74[0] )
      goto LABEL_24;
LABEL_80:
    v46 = 0;
LABEL_81:
    if ( (unsigned __int8)sub_123650(v74, v40, v39, 1) == 1 && !v46 )
      goto LABEL_23;
LABEL_83:
    if ( v67 )
      goto LABEL_45;
    HIBYTE(v65) = 0;
    goto LABEL_23;
  }
  if ( v74[0] )
    goto LABEL_80;
LABEL_23:
  v42 = v66;
LABEL_24:
  v15 = 0x100000000LL;
  v16 = &v68;
  v17 = (char *)&v68;
  v68 = 0x100000000LL;
  if ( !v42 )
    goto LABEL_27;
  while ( 1 )
  {
    v17 += 4;
    if ( v17 == v69 )
      break;
    if ( !*(&v66 + *(int *)v17) )
    {
LABEL_27:
      v14 = *(int *)v17;
      if ( v71[16 * v14] == 4
        && (v48 = *(int *)v17,
            v44 = v16,
            v32 = sub_11C3A0(*(_QWORD *)&v71[16 * v48 + 8], v40, 0),
            v16 = v44,
            v14 = v48,
            v15 = 0x100000000LL,
            v32)
        || v73[16 * v14] == 4
        && (v49 = v14,
            v45 = v16,
            v38 = sub_11C3A0(*(_QWORD *)&v73[16 * v14 + 8], v40, 0),
            v16 = v45,
            v14 = v49,
            v15 = 0x100000000LL,
            v38)
        || v69[16 * v14] == 4
        && (v47 = v14,
            v43 = v16,
            v18 = sub_11C3A0(*(_QWORD *)&v69[16 * v14 + 8], v40, 0),
            v16 = v43,
            v14 = v47,
            v15 = 0x100000000LL,
            v18) )
      {
        if ( !*((_BYTE *)&v65 + v14) )
          goto LABEL_45;
        *(&v66 + v14) = 1;
      }
    }
  }
  if ( (a4 & 2) == 0 )
  {
LABEL_43:
    switch ( (int)v5 )
    {
      case 3:
      case 4:
      case 7:
      case 19:
      case 20:
      case 21:
      case 61:
        if ( !v66 )
        {
          if ( !v67 )
            goto LABEL_45;
          if ( (a4 & 2) == 0 )
          {
            a2[1] &= ~0x2000u;
            v23 = sub_9EEF0(*(_QWORD *)(a1 + 64), a2, v5, (__int64)v72, (__int64)v74, (__int64)v70);
            goto LABEL_51;
          }
          goto LABEL_65;
        }
        if ( !v67 )
          goto LABEL_59;
        if ( (a4 & 1) == 0 )
          goto LABEL_45;
        if ( (a4 & 2) != 0 )
          goto LABEL_65;
        v33 = sub_9EEF0(*(_QWORD *)(a1 + 64), a2, v5, (__int64)v71, (__int64)v73, (__int64)v69);
        v10 = sub_9F040(a1, (__int64)v33, v5, (__int64)v72, (__int64)v74, (__int64)v70);
        sub_9F580(a1, (__int64)v33, (__int64)v10);
        goto LABEL_46;
      case 12:
      case 13:
      case 14:
        if ( v67 )
          goto LABEL_45;
        goto LABEL_58;
      case 15:
      case 16:
      case 17:
      case 18:
        if ( v67 )
          goto LABEL_45;
        if ( (((_DWORD)v5 - 15) & 0xFFFFFFFD) != 0 )
        {
          if ( !(unsigned __int8)sub_309240(v50, v39, v13, v15, v14) )
            goto LABEL_45;
          v24 = sub_309240(v51, v39, v35, v36, v37);
        }
        else
        {
          if ( !(unsigned __int8)sub_11BB80(v72, &v61, 0) || v61 )
            goto LABEL_45;
          v24 = sub_9E150((__int64)v74, 0, 0);
        }
        if ( !v24 )
          goto LABEL_45;
LABEL_58:
        if ( !v66 )
          goto LABEL_45;
LABEL_59:
        if ( (a4 & 2) != 0 )
        {
LABEL_65:
          v10 = v4;
        }
        else
        {
          v23 = sub_9EEF0(*(_QWORD *)(a1 + 64), a2, v5, (__int64)v71, (__int64)v73, (__int64)v69);
LABEL_51:
          v10 = v23;
        }
        break;
      case 60:
        if ( v66 && v67 )
          goto LABEL_45;
        if ( (a4 & 2) == 0 )
        {
          v56 = 1;
          v54 = 0x200000001LL;
          v25 = v40[21];
          v55 = v40[14];
          v26 = v40[15];
          HIDWORD(v56) = v25;
          v57 = v26;
          sub_11F840(v58, v41);
          v27 = *(_QWORD *)(a1 + 64);
          a2[1] &= ~0x10u;
          *a2 = 2;
          sub_9CA30(v27, v50, (__int64)&v54);
          sub_9CA30(v27, v51, (__int64)&v56);
          sub_9CA30(v27, v41, (__int64)v58);
          v62 = 0;
          v61 = 0xFFFFFFFF00000000LL;
          sub_11C810(&v61, v40, (int)(v7 & 0xFFFFFFFE), (unsigned int)v40[21], -1, 0);
          v4 = sub_9F040(a1, (__int64)a2, 12, (__int64)&v61, (__int64)&v56, (__int64)&v56);
          sub_118BA0(&v61);
          sub_118BA0(v58);
          sub_118BA0(&v56);
          sub_118BA0(&v54);
        }
        goto LABEL_65;
      default:
        goto LABEL_45;
    }
    goto LABEL_46;
  }
  v68 = 0x100000000LL;
  v21 = (char *)v16;
  while ( 1 )
  {
    if ( !*(&v66 + *(int *)v21) )
    {
      v22 = 1 - *(_DWORD *)v21;
      if ( *((_BYTE *)&v65 + v22) )
        break;
    }
LABEL_42:
    v21 += 4;
    if ( v69 == v21 )
      goto LABEL_43;
  }
  v52 = 16 * v22;
  v53 = *(int *)v21;
  v58[0] = 0;
  v58[1] = 0;
  v59 = 0;
  v60 = 0;
  sub_11FCA0(a1, v58, &v71[16 * v22], 1, 4294901760LL);
  sub_11FCA0(a1, v58, &v73[v52], 1, 4294901760LL);
  v61 = 0;
  v62 = 0;
  v64 = 0;
  v63 = 0;
  sub_123DE0(a1, &v61, &v69[16 * v53], 0);
  v30 = sub_60580(&v61, v58);
  v31 = v53;
  if ( !v30 )
  {
    v34 = sub_3136F0(&v63, &v59);
    v31 = v53;
    if ( !v34 )
    {
LABEL_88:
      if ( v63 )
      {
        *(_QWORD *)&v64 = 0;
        qfree(v63);
      }
      qfree(v61);
      if ( v59 )
      {
        *(_QWORD *)&v60 = 0;
        qfree(v59);
      }
      qfree(v58[0]);
      goto LABEL_42;
    }
  }
  if ( *((_BYTE *)&v65 + v31) )
  {
    *(&v66 + v31) = 1;
    goto LABEL_88;
  }
  sub_8F940(&v61);
  sub_8F940(v58);
LABEL_45:
  v10 = nullptr;
LABEL_46:
  sub_118BA0(v74);
  sub_118BA0(v73);
  sub_118BA0(v72);
  sub_118BA0(v71);
LABEL_10:
  sub_118BA0(v70);
  sub_118BA0(v69);
  return v10;
}
