_QWORD *__fastcall sub_A3AF0(__int64 a1, unsigned int *a2, _QWORD *a3, char a4)
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
  __int64 *v21; // r12
  __int64 v22; // rax
  _DWORD *v23; // rax
  char v24; // al
  int v25; // edx
  int v26; // eax
  __int64 v27; // r12
  char v28; // r12
  char v29; // al
  int v30; // r8d
  int v31; // r9d
  char v32; // al
  __int64 v33; // r11
  char v34; // al
  _DWORD *v35; // r12
  char v36; // al
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  char v40; // al
  int v41; // [rsp+0h] [rbp-1B8h]
  char *v42; // [rsp+8h] [rbp-1B0h]
  int v43; // [rsp+10h] [rbp-1A8h]
  unsigned int v44; // [rsp+14h] [rbp-1A4h]
  char *v45; // [rsp+18h] [rbp-1A0h]
  _DWORD *v46; // [rsp+20h] [rbp-198h]
  __int64 v47; // [rsp+28h] [rbp-190h]
  char v48; // [rsp+30h] [rbp-188h]
  __int64 *v49; // [rsp+30h] [rbp-188h]
  __int64 *v50; // [rsp+30h] [rbp-188h]
  __int64 *v51; // [rsp+30h] [rbp-188h]
  char v52; // [rsp+38h] [rbp-180h]
  __int64 v53; // [rsp+38h] [rbp-180h]
  __int64 v54; // [rsp+38h] [rbp-180h]
  __int64 v55; // [rsp+38h] [rbp-180h]
  __int64 v56; // [rsp+60h] [rbp-158h]
  __int64 v57; // [rsp+68h] [rbp-150h]
  __int64 v58; // [rsp+70h] [rbp-148h]
  __int64 v59; // [rsp+78h] [rbp-140h]
  __int64 v60; // [rsp+80h] [rbp-138h] BYREF
  int v61; // [rsp+88h] [rbp-130h]
  __int64 v62; // [rsp+90h] [rbp-128h] BYREF
  int v63; // [rsp+98h] [rbp-120h]
  __int64 v64[2]; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-108h] BYREF
  __int128 v66; // [rsp+B8h] [rbp-100h]
  __int64 v67; // [rsp+D0h] [rbp-E8h] BYREF
  __int64 v68; // [rsp+D8h] [rbp-E0h]
  __int64 v69; // [rsp+E0h] [rbp-D8h] BYREF
  __int128 v70; // [rsp+E8h] [rbp-D0h]
  __int16 v71; // [rsp+104h] [rbp-B4h]
  char v72; // [rsp+106h] [rbp-B2h]
  char v73; // [rsp+107h] [rbp-B1h]
  __int64 v74; // [rsp+108h] [rbp-B0h] BYREF
  char v75[16]; // [rsp+110h] [rbp-A8h] BYREF
  char v76[16]; // [rsp+120h] [rbp-98h] BYREF
  _BYTE v77[16]; // [rsp+130h] [rbp-88h] BYREF
  _BYTE v78[16]; // [rsp+140h] [rbp-78h] BYREF
  _BYTE v79[16]; // [rsp+150h] [rbp-68h] BYREF
  _BYTE v80[24]; // [rsp+160h] [rbp-58h] BYREF
  unsigned __int64 v81; // [rsp+178h] [rbp-40h]

  v81 = __readfsqword(0x28u);
  if ( !a2 )
    return nullptr;
  v4 = a2;
  if ( (a2[1] & 0x810) != 0 )
    return nullptr;
  v5 = *a2;
  if ( (_DWORD)v5 == 1 )
    return sub_A35F0(a1, (__int64)a2, a4);
  v7 = a2[17];
  if ( v7 <= 1 )
    return nullptr;
  v44 = v7 >> 1;
  if ( !(unsigned __int8)sub_11CA80((unsigned int)(v7 >> 1)) )
    return nullptr;
  if ( (unsigned int)v5 > 0x3D )
    return nullptr;
  v9 = 0x30000000003FF39CLL;
  if ( !_bittest64(&v9, v5) )
    return nullptr;
  v47 = (__int64)(a2 + 16);
  v46 = *(_DWORD **)(*(_QWORD *)(a1 + 480) + 112LL);
  v42 = v75;
  sub_123A40(v75);
  v45 = v76;
  sub_123A40(v76);
  if ( !(unsigned __int8)sub_1272B0(v75, v46, v44, 0) || (v52 = sub_127850(v76, v46, v44, 0)) == 0 )
  {
    v10 = nullptr;
    goto LABEL_10;
  }
  v48 = sub_A1ED0(v75, a3) ^ 1;
  v72 = v48;
  v12 = sub_A1ED0(v76, a3) ^ 1;
  v73 = v12;
  if ( (_DWORD)v5 == 2 )
  {
    v19 = v76;
    v20 = nullptr;
    if ( !v12 )
      v19 = nullptr;
    if ( v48 )
      v20 = v75;
    v10 = sub_A38B0(a1, (__int64)a2, (__int64)v20, (__int64)v19, a4);
    goto LABEL_10;
  }
  if ( !v12 && *a2 - 8 <= 1 )
  {
    if ( (a4 & 2) == 0 )
    {
      if ( a2[9] == v44 )
      {
        a2[1] |= 0x40000u;
        *a2 = 4;
      }
      else if ( (int)a2[9] >= (int)v44 )
      {
        if ( !under_debugger )
          sub_383060(51933);
        BUG();
      }
      sub_11CA10(v47, v75);
    }
    v10 = a2;
    goto LABEL_10;
  }
  v71 = 257;
  v56 = (__int64)(a2 + 8);
  sub_123A40(v77);
  sub_123A40(v78);
  v57 = (__int64)(a2 + 12);
  sub_123A40(v79);
  sub_123A40(v80);
  if ( (unsigned int)(v5 - 8) <= 1 )
    goto LABEL_24;
  if ( !v77[0] )
  {
    if ( !v79[0] )
      goto LABEL_21;
LABEL_73:
    v28 = 0;
LABEL_74:
    if ( (unsigned __int8)sub_1272B0(v79, v46, v44, 1) == 1 && !v28 )
      goto LABEL_21;
    goto LABEL_76;
  }
  v13 = (unsigned int)sub_1272B0(v77, v46, v44, 1);
  if ( (_BYTE)v13 )
  {
    if ( !v79[0] )
      goto LABEL_21;
    goto LABEL_73;
  }
  if ( v79[0] )
  {
    v28 = v52;
    goto LABEL_74;
  }
LABEL_76:
  if ( v48 )
    goto LABEL_45;
  LOBYTE(v71) = 0;
LABEL_21:
  if ( v78[0] )
  {
    v29 = sub_127850(v78, v46, v44, 1);
    v13 = v80[0];
    if ( !v29 )
    {
      if ( !v80[0] )
        goto LABEL_83;
      goto LABEL_81;
    }
    v48 = v72;
    if ( !v80[0] )
      goto LABEL_24;
LABEL_80:
    v52 = 0;
LABEL_81:
    if ( (unsigned __int8)sub_127850(v80, v46, v44, 1) == 1 && !v52 )
      goto LABEL_23;
LABEL_83:
    if ( v73 )
      goto LABEL_45;
    HIBYTE(v71) = 0;
    goto LABEL_23;
  }
  if ( v80[0] )
    goto LABEL_80;
LABEL_23:
  v48 = v72;
LABEL_24:
  v15 = 0x100000000LL;
  v16 = &v74;
  v17 = (char *)&v74;
  v74 = 0x100000000LL;
  if ( !v48 )
    goto LABEL_27;
  while ( 1 )
  {
    v17 += 4;
    if ( v17 == v75 )
      break;
    if ( !*(&v72 + *(int *)v17) )
    {
LABEL_27:
      v14 = *(int *)v17;
      if ( v77[16 * v14] == 4 )
      {
        v54 = *(int *)v17;
        v50 = v16;
        v34 = sub_1205A0(*(_QWORD *)&v77[16 * v54 + 8], v46, 0);
        v16 = v50;
        v14 = v54;
        v15 = 0x100000000LL;
        if ( v34 )
          goto LABEL_31;
      }
      if ( v79[16 * v14] == 4 )
      {
        v55 = v14;
        v51 = v16;
        v40 = sub_1205A0(*(_QWORD *)&v79[16 * v14 + 8], v46, 0);
        v16 = v51;
        v14 = v55;
        v15 = 0x100000000LL;
        if ( v40 )
          goto LABEL_31;
      }
      if ( v75[16 * v14] == 4 )
      {
        v53 = v14;
        v49 = v16;
        v18 = sub_1205A0(*(_QWORD *)&v75[16 * v14 + 8], v46, 0);
        v16 = v49;
        v14 = v53;
        v15 = 0x100000000LL;
        if ( v18 )
        {
LABEL_31:
          if ( !*((_BYTE *)&v71 + v14) )
            goto LABEL_45;
          *(&v72 + v14) = 1;
        }
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
        if ( !v72 )
        {
          if ( !v73 )
            goto LABEL_45;
          if ( (a4 & 2) == 0 )
          {
            a2[1] &= ~0x2000u;
            v23 = sub_A30F0(*(_QWORD *)(a1 + 64), a2, v5, (__int64)v78, (__int64)v80, (__int64)v45);
            goto LABEL_51;
          }
          goto LABEL_65;
        }
        if ( !v73 )
          goto LABEL_59;
        if ( (a4 & 1) == 0 )
          goto LABEL_45;
        if ( (a4 & 2) != 0 )
          goto LABEL_65;
        v35 = sub_A30F0(*(_QWORD *)(a1 + 64), a2, v5, (__int64)v77, (__int64)v79, (__int64)v42);
        v10 = sub_A3240(a1, (__int64)v35, (unsigned int)v5, (__int64)v78, (__int64)v80, (__int64)v45);
        sub_A3780(a1, (__int64)v35, (__int64)v10);
        goto LABEL_46;
      case 12:
      case 13:
      case 14:
        if ( v73 )
          goto LABEL_45;
        goto LABEL_58;
      case 15:
      case 16:
      case 17:
      case 18:
        if ( v73 )
          goto LABEL_45;
        if ( (((_DWORD)v5 - 15) & 0xFFFFFFFD) != 0 )
        {
          if ( !(unsigned __int8)sub_30DAC0(v56, v44, v13, v15, v14) )
            goto LABEL_45;
          v24 = sub_30DAC0(v57, v44, v37, v38, v39);
        }
        else
        {
          if ( !(unsigned __int8)sub_11FD80(v78, &v67, 0) || v67 )
            goto LABEL_45;
          v24 = sub_A2350((__int64)v80, 0, 0);
        }
        if ( !v24 )
          goto LABEL_45;
LABEL_58:
        if ( !v72 )
          goto LABEL_45;
LABEL_59:
        if ( (a4 & 2) != 0 )
        {
LABEL_65:
          v10 = v4;
        }
        else
        {
          v23 = sub_A30F0(*(_QWORD *)(a1 + 64), a2, v5, (__int64)v77, (__int64)v79, (__int64)v42);
LABEL_51:
          v10 = v23;
        }
        break;
      case 60:
        if ( v72 && v73 )
          goto LABEL_45;
        if ( (a4 & 2) == 0 )
        {
          v62 = 1;
          v60 = 0x200000001LL;
          v25 = v46[21];
          v61 = v46[14];
          v26 = v46[15];
          HIDWORD(v62) = v25;
          v63 = v26;
          sub_123A40(v64);
          v27 = *(_QWORD *)(a1 + 64);
          a2[1] &= ~0x10u;
          *a2 = 2;
          sub_A0C30(v27, v56, (__int64)&v60);
          sub_A0C30(v27, v57, (__int64)&v62);
          sub_A0C30(v27, v47, (__int64)v64);
          v68 = 0;
          v67 = 0xFFFFFFFF00000000LL;
          sub_120A10(&v67, v46, (int)(v7 & 0xFFFFFFFE), (unsigned int)v46[21], -1, 0);
          v4 = sub_A3240(a1, (__int64)a2, 12, (__int64)&v67, (__int64)&v62, (__int64)&v62);
          sub_11CDA0(&v67);
          sub_11CDA0(v64);
          sub_11CDA0(&v62);
          sub_11CDA0(&v60);
        }
        goto LABEL_65;
      default:
        goto LABEL_45;
    }
    goto LABEL_46;
  }
  v74 = 0x100000000LL;
  v21 = v16;
  while ( 1 )
  {
    if ( !*(&v72 + *(int *)v21) )
    {
      v22 = 1 - *(_DWORD *)v21;
      if ( *((_BYTE *)&v71 + v22) )
        break;
    }
LABEL_42:
    v21 = (__int64 *)((char *)v21 + 4);
    if ( v42 == (char *)v21 )
      goto LABEL_43;
  }
  v58 = 16 * v22;
  v59 = *(int *)v21;
  v64[0] = 0;
  v64[1] = 0;
  v65 = 0;
  v66 = 0;
  sub_123EA0(a1, v64, &v77[16 * v22], 1, 4294901760LL);
  sub_123EA0(a1, v64, &v79[v58], 1, 4294901760LL);
  v67 = 0;
  v68 = 0;
  v70 = 0;
  v69 = 0;
  sub_127FE0(a1, (__int64)&v67, (__int64)&v42[16 * v59], 0, v30, v31, v41, (int)v42, v43, (int)v45, (__int64)v46);
  v32 = sub_64780(&v67, v64);
  v33 = v59;
  if ( !v32 )
  {
    v36 = sub_318470(&v69, &v65);
    v33 = v59;
    if ( !v36 )
    {
LABEL_88:
      if ( v69 )
      {
        *(_QWORD *)&v70 = 0;
        qfree(v69);
      }
      qfree(v67);
      if ( v65 )
      {
        *(_QWORD *)&v66 = 0;
        qfree(v65);
      }
      qfree(v64[0]);
      goto LABEL_42;
    }
  }
  if ( *((_BYTE *)&v71 + v33) )
  {
    *(&v72 + v33) = 1;
    goto LABEL_88;
  }
  sub_93B40(&v67);
  sub_93B40(v64);
LABEL_45:
  v10 = nullptr;
LABEL_46:
  sub_11CDA0(v80);
  sub_11CDA0(v79);
  sub_11CDA0(v78);
  sub_11CDA0(v77);
LABEL_10:
  sub_11CDA0(v45);
  sub_11CDA0(v42);
  return v10;
}
