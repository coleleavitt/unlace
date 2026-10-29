void __fastcall sub_1831810(__int64 *a1, __int64 a2, const __m128i *a3, double a4)
{
  __int64 *v4; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int8 v8; // al
  int v9; // ecx
  __int16 v10; // dx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // ebx
  unsigned int *v14; // rax
  size_t v15; // rdx
  bool v16; // cc
  unsigned int v17; // ecx
  __int64 *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  unsigned __int64 v33; // r14
  __int64 *v34; // r12
  bool v35; // zf
  __int64 *v36; // rax
  __int64 v37; // rax
  int v38; // r15d
  unsigned __int64 v39; // rdx
  unsigned __int32 v40; // r9d
  unsigned int v41; // eax
  _BYTE *v42; // rbx
  __int64 v43; // r15
  __int64 *v44; // rax
  unsigned __int8 v45; // al
  int v46; // ecx
  int v47; // edx
  _DWORD *v48; // rax
  _DWORD *v49; // r9
  __int64 *v50; // rax
  __int64 v51; // rdx
  unsigned __int8 v52; // al
  int v53; // edx
  _DWORD *v54; // rax
  _DWORD *v55; // r9
  void **p_s2; // rsi
  __int64 v57; // rax
  unsigned __int8 v58; // al
  int v59; // edx
  unsigned int *v60; // rax
  size_t v61; // rdx
  unsigned int *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rbp
  __int64 v65; // rax
  __int64 v66; // rbx
  __int64 v67; // rax
  __int64 v68; // rbx
  unsigned int v69; // edx
  __int64 *v70; // rsi
  unsigned int v71; // ecx
  __int64 v72; // rax
  int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // r12
  __int64 v79; // rax
  _QWORD *v80; // rax
  __m128i *v81; // r13
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  unsigned __int32 v87; // [rsp+10h] [rbp-168h]
  unsigned __int32 v88; // [rsp+10h] [rbp-168h]
  __int64 v89; // [rsp+20h] [rbp-158h]
  _DWORD *v90; // [rsp+28h] [rbp-150h]
  char v91; // [rsp+3Fh] [rbp-139h]
  __int64 v92; // [rsp+48h] [rbp-130h]
  int v93; // [rsp+54h] [rbp-124h] BYREF
  int v94; // [rsp+58h] [rbp-120h] BYREF
  int v95; // [rsp+5Ch] [rbp-11Ch] BYREF
  void *s2; // [rsp+60h] [rbp-118h] BYREF
  size_t v97; // [rsp+68h] [rbp-110h]
  __int64 v98[2]; // [rsp+70h] [rbp-108h] BYREF
  void *base; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v100; // [rsp+88h] [rbp-F0h]
  _BYTE v101[32]; // [rsp+90h] [rbp-E8h] BYREF
  __m128i v102[2]; // [rsp+B0h] [rbp-C8h] BYREF
  unsigned __int8 v103; // [rsp+D2h] [rbp-A6h]

  v4 = a1;
  if ( !a3[3].m128i_i16[4] || (a3[5].m128i_i8[0] & 2) == 0 )
  {
    sub_168B9F0((__int64)v102, a1 + 1, a3[1].m128i_u32[2], 0xC53u, 0);
    v6 = sub_15DD120((__int64)v102, (__int64)a3);
    LODWORD(v98[0]) = 1;
    v7 = sub_1587D10(v6, (int *)v98);
    LODWORD(base) = 3;
    sub_180A710(v7, (int *)&base);
    sub_15F7200(v102);
    return;
  }
  sub_B2F830(v102, a1[31], a3, 0, 0, 0);
  if ( (v103 & 0xF0) != 0xF0 )
  {
    v8 = v103 >> 4;
    if ( !(v103 >> 4) )
      goto LABEL_17;
    goto LABEL_7;
  }
  if ( !(unsigned int)sub_FA77D0(v102) )
    goto LABEL_17;
  if ( (v103 & 0xF0) != 0xF0 )
  {
    v8 = v103 >> 4;
LABEL_7:
    v9 = v8;
    if ( v8 == 1 )
      goto LABEL_17;
    goto LABEL_8;
  }
  if ( (unsigned int)sub_FA77D0(v102) == 1 )
    goto LABEL_17;
  if ( (v103 & 0xF0) != 0xF0 )
  {
    v8 = v103 >> 4;
    v9 = v103 >> 4;
LABEL_8:
    if ( v8 != 2 )
      goto LABEL_9;
LABEL_17:
    v10 = a3[3].m128i_i16[4];
    v13 = 0;
    goto LABEL_18;
  }
  if ( (unsigned int)sub_FA77D0(v102) == 2 )
    goto LABEL_17;
  if ( (v103 & 0xF0) != 0xF0 )
  {
    v8 = v103 >> 4;
    v9 = v103 >> 4;
LABEL_9:
    v10 = a3[3].m128i_i16[4];
    if ( v8 == 6 )
      goto LABEL_132;
    goto LABEL_10;
  }
  if ( (unsigned int)sub_FA77D0(v102) == 6 )
  {
LABEL_131:
    v10 = a3[3].m128i_i16[4];
    goto LABEL_132;
  }
  if ( (v103 & 0xF0) == 0xF0 )
  {
    if ( (unsigned int)sub_FA77D0(v102) != 7 )
    {
      if ( (v103 & 0xF0) == 0xF0 )
      {
        v73 = sub_FA77D0(v102);
        v10 = a3[3].m128i_i16[4];
        v9 = v73;
      }
      else
      {
        v10 = a3[3].m128i_i16[4];
        v9 = v103 >> 4;
      }
LABEL_11:
      if ( v9 != 8 )
      {
        if ( (unsigned __int16)v10 <= 2u )
        {
          v11 = sub_B8DC30(a2, 1);
          if ( v11 )
            v12 = *(_QWORD *)(v11 + 24);
          else
            v12 = *(_QWORD *)(a2 + 80);
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) != 42 )
          {
            sub_168B9F0((__int64)v102, a1 + 1, a3[1].m128i_u32[2], 0x12A6u, 0);
            sub_15DD120((__int64)v102, (__int64)a3);
            sub_15F7200(v102);
            return;
          }
          v13 = 1;
          goto LABEL_19;
        }
        v69 = a3[1].m128i_u32[2];
        v70 = a1 + 1;
        v71 = 3229;
LABEL_147:
        sub_168B9F0((__int64)v102, v70, v69, v71, 0);
        v72 = sub_15DD120((__int64)v102, (__int64)a3);
        LODWORD(base) = 2;
        sub_1587D10(v72, (int *)&base);
        sub_15F7200(v102);
        return;
      }
      goto LABEL_132;
    }
    goto LABEL_131;
  }
  v8 = v103 >> 4;
  v10 = a3[3].m128i_i16[4];
  v9 = v103 >> 4;
LABEL_10:
  if ( v8 != 7 )
    goto LABEL_11;
LABEL_132:
  v13 = 2;
LABEL_18:
  if ( (unsigned __int16)v10 <= 1u )
  {
    v69 = a3[1].m128i_u32[2];
    v70 = a1 + 1;
    v71 = 3228;
    goto LABEL_147;
  }
LABEL_19:
  v92 = *(_QWORD *)((a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) + 8);
  v14 = *(unsigned int **)(v92 + 16);
  v15 = *v14;
  s2 = v14 + 4;
  v97 = v15;
  if ( (unsigned __int8)sub_1805A60(&s2) )
    v92 = sub_6F3470(a1[30] + 552, s2, v97);
  v16 = a3[3].m128i_i16[4] <= 1u;
  base = v101;
  v100 = 0x800000000LL;
  if ( v16 )
  {
    v42 = v101;
    v40 = 0;
    goto LABEL_158;
  }
  v17 = 1;
  v89 = 0;
  do
  {
    v93 = 0;
    v90 = (_DWORD *)(a3[5].m128i_i64[v89 + 1] & 0xFFFFFFFFFFFFFFFCLL);
    v18 = a1;
    v91 = sub_1830010((__int64)a1, a2, (__int64)a3, v17, v90, (__int64)&v93, 0, 0);
    if ( !v91 )
      goto LABEL_89;
    v19 = (v93 & 0x3FFFFFFF) - 1 - (unsigned int)((v93 & 0x40000000) != 0);
    v20 = sub_18064C0(a2, v19);
    v94 = -1;
    v25 = (__int64 *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
    if ( v13 != 1 )
    {
      v26 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      v27 = v26 & 0xFFFFFFF7;
      if ( (v26 & 0xF7) == 0x22 || (_BYTE)v26 == 11 )
        goto LABEL_27;
      v94 = 0;
LABEL_115:
      sub_168B9F0((__int64)v102, v18 + 1, a3[1].m128i_u32[2], 0x12A7u, 0);
      v65 = sub_15DD120((__int64)v102, (__int64)a3);
      v66 = sub_16CF4F0(v65, &v94);
      v98[0] = sub_EEC8C0((unsigned __int64)v90, (__int64)&v94, a4);
      sub_1587DB0(v66, v98);
      sub_15F7200(v102);
      goto LABEL_89;
    }
    if ( !sub_9EC890(*v25, v19, v21, v22, v23) )
    {
      v94 = 1;
      v18 = a1;
      goto LABEL_115;
    }
    if ( v94 != -1 )
    {
      v18 = a1;
      goto LABEL_115;
    }
LABEL_27:
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      goto LABEL_34;
    v28 = sub_B8C3D0(a2, v19, v27, v22, v23, v24);
    v32 = *((unsigned int *)v28 + 2);
    v33 = *v28 + 8 * v32;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v34 = (__int64 *)*sub_B8C3D0(a2, v19, v32, v29, v30, v31);
    else
      v34 = nullptr;
    v35 = v34 == (__int64 *)v33;
    if ( (unsigned __int64)v34 < v33 )
    {
LABEL_31:
      v36 = v34;
      while ( *(_WORD *)(*v36 + 36) != 324 )
      {
        if ( (__int64 *)v33 == ++v36 )
          goto LABEL_34;
      }
      goto LABEL_39;
    }
    while ( 1 )
    {
      if ( v35 )
        goto LABEL_34;
      if ( *(_WORD *)(*(_QWORD *)v33 + 36LL) != 324 )
        break;
LABEL_39:
      v43 = *v34;
      if ( *(_WORD *)(*v34 + 36) != 324 )
      {
        v44 = v34 + 1;
        do
        {
          v43 = *v44;
          v34 = v44++;
        }
        while ( *(_WORD *)(v43 + 36) != 324 );
      }
      if ( (*(_BYTE *)(v43 + 34) & 0xF0) != 0xF0 )
      {
        v45 = *(_BYTE *)(v43 + 34) >> 4;
        if ( !v45 )
          goto LABEL_60;
LABEL_44:
        v46 = v45;
        if ( v45 == 1 )
          goto LABEL_60;
LABEL_45:
        if ( v45 == 2 )
          goto LABEL_60;
        goto LABEL_46;
      }
      if ( !(unsigned int)sub_FA77D0(v43) )
        goto LABEL_60;
      if ( (*(_BYTE *)(v43 + 34) & 0xF0) != 0xF0 )
      {
        v45 = *(_BYTE *)(v43 + 34) >> 4;
        goto LABEL_44;
      }
      if ( (unsigned int)sub_FA77D0(v43) == 1 )
        goto LABEL_60;
      if ( (*(_BYTE *)(v43 + 34) & 0xF0) != 0xF0 )
      {
        v45 = *(_BYTE *)(v43 + 34) >> 4;
        v46 = v45;
        goto LABEL_45;
      }
      if ( (unsigned int)sub_FA77D0(v43) == 2 )
      {
LABEL_60:
        v47 = 0;
        goto LABEL_49;
      }
      if ( (*(_BYTE *)(v43 + 34) & 0xF0) != 0xF0 )
      {
        v45 = *(_BYTE *)(v43 + 34) >> 4;
        v46 = v45;
LABEL_46:
        if ( v45 == 6 )
          goto LABEL_61;
        goto LABEL_47;
      }
      if ( (unsigned int)sub_FA77D0(v43) == 6 )
        goto LABEL_61;
      if ( (*(_BYTE *)(v43 + 34) & 0xF0) == 0xF0 )
      {
        if ( (unsigned int)sub_FA77D0(v43) == 7 )
        {
LABEL_61:
          v47 = 2;
          goto LABEL_49;
        }
        if ( (*(_BYTE *)(v43 + 34) & 0xF0) == 0xF0 )
          v46 = sub_FA77D0(v43);
        else
          v46 = *(_BYTE *)(v43 + 34) >> 4;
        goto LABEL_48;
      }
      v45 = *(_BYTE *)(v43 + 34) >> 4;
      v46 = v45;
LABEL_47:
      if ( v45 == 7 )
        goto LABEL_61;
LABEL_48:
      v47 = 1;
      if ( v46 == 8 )
        goto LABEL_61;
LABEL_49:
      if ( v47 != v13 )
      {
        v48 = sub_1804480(*(_DWORD **)(v43 + 56), *(_QWORD *)(v43 + 56) + 4LL * *(unsigned int *)(v43 + 48), &v93);
        if ( v48 != v49 )
        {
          sub_168B9F0((__int64)v102, a1 + 1, a3[1].m128i_u32[2], 0xCADu, 0);
          v67 = sub_15DD120((__int64)v102, (__int64)a3);
          v68 = v67;
          if ( *(_BYTE *)(v67 + 120) )
          {
            sub_AE9DF0((unsigned __int8 **)(v67 + 32), v43, 0xEu);
          }
          else if ( *(_BYTE *)(v67 + 132) )
          {
            v78 = sub_168B9E0((_QWORD *)v67);
            v79 = *(_QWORD *)(v68 + 16);
            if ( v79 )
              v79 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v79 + 32LL))(*(_QWORD *)(v68 + 16));
            v98[0] = v79;
            v80 = sub_1587BC0(v78, v98, v74, v75, v76, v77);
            sub_AE9DF0((unsigned __int8 **)(*v80 + 32LL * *(unsigned int *)(v68 + 128) + 8), v43, 0xEu);
          }
          if ( (a3[2].m128i_i8[3] & 2) == 0 )
            v91 = (*(_BYTE *)(v43 + 35) & 2) != 0;
          LOBYTE(v98[0]) = v91;
          sub_1588420(v68, (unsigned __int8 *)v98);
          sub_15F7200(v102);
          goto LABEL_89;
        }
      }
      if ( v13 != 1 )
      {
        if ( v13 != 2 )
          goto LABEL_53;
        if ( (*(_BYTE *)(v43 + 34) & 0xF0) == 0xF0 )
        {
          if ( !(unsigned int)sub_FA77D0(v43) )
            goto LABEL_53;
          if ( (*(_BYTE *)(v43 + 34) & 0xF0) != 0xF0 )
          {
            v58 = *(_BYTE *)(v43 + 34) >> 4;
            goto LABEL_81;
          }
          if ( (unsigned int)sub_FA77D0(v43) == 1 )
            goto LABEL_53;
          if ( (*(_BYTE *)(v43 + 34) & 0xF0) != 0xF0 )
          {
            v58 = *(_BYTE *)(v43 + 34) >> 4;
            v59 = v58;
            goto LABEL_82;
          }
          if ( (unsigned int)sub_FA77D0(v43) == 2 )
            goto LABEL_53;
          if ( (*(_BYTE *)(v43 + 34) & 0xF0) != 0xF0 )
          {
            v58 = *(_BYTE *)(v43 + 34) >> 4;
            v59 = v58;
            goto LABEL_83;
          }
          if ( (unsigned int)sub_FA77D0(v43) != 6 )
          {
            if ( (*(_BYTE *)(v43 + 34) & 0xF0) != 0xF0 )
            {
              v58 = *(_BYTE *)(v43 + 34) >> 4;
              v59 = v58;
              goto LABEL_84;
            }
            if ( (unsigned int)sub_FA77D0(v43) != 7 )
            {
              if ( (*(_BYTE *)(v43 + 34) & 0xF0) == 0xF0 )
                v59 = sub_FA77D0(v43);
              else
                v59 = *(_BYTE *)(v43 + 34) >> 4;
              goto LABEL_85;
            }
          }
        }
        else
        {
          v58 = *(_BYTE *)(v43 + 34) >> 4;
          if ( !v58 )
            goto LABEL_53;
LABEL_81:
          v59 = v58;
          if ( v58 == 1 )
            goto LABEL_53;
LABEL_82:
          if ( v58 == 2 )
            goto LABEL_53;
LABEL_83:
          if ( v58 != 6 )
          {
LABEL_84:
            if ( v58 != 7 )
            {
LABEL_85:
              if ( v59 != 8 )
                goto LABEL_53;
            }
          }
        }
        v60 = *(unsigned int **)(*(_QWORD *)(v43 + 40) + 16LL);
        v61 = *v60;
        if ( v61 != v97 || *v60 && memcmp(v60 + 4, s2, v61) )
        {
          sub_168B9F0((__int64)v102, a1 + 1, *(_DWORD *)(v43 + 24), 0x12A5u, 0);
          v62 = *(unsigned int **)(*(_QWORD *)(v43 + 40) + 16LL);
          v63 = *v62;
          v98[0] = (__int64)(v62 + 4);
          v98[1] = v63;
          sub_166BAF0((__int64)v102, (__int64)v98);
          sub_15F7200(v102);
          sub_168B9F0((__int64)v102, a1 + 1, a3[1].m128i_u32[2], 0x1871u, 0);
          p_s2 = &s2;
          v57 = sub_1682BA0((__int64)v102, (__int64)&s2);
LABEL_88:
          v64 = v57;
          v98[0] = sub_EEC8C0((unsigned __int64)v90, (__int64)p_s2, a4);
          sub_1587DB0(v64, v98);
          sub_15F7200(v102);
          goto LABEL_89;
        }
        goto LABEL_53;
      }
      if ( (*(_BYTE *)(v43 + 34) & 0xF0) != 0xF0 )
      {
        v52 = *(_BYTE *)(v43 + 34) >> 4;
        if ( !v52 )
          goto LABEL_53;
LABEL_71:
        v53 = v52;
        if ( v52 == 1 )
          goto LABEL_53;
LABEL_72:
        if ( v52 == 2 )
          goto LABEL_53;
LABEL_73:
        if ( v52 == 6 )
          goto LABEL_53;
LABEL_74:
        if ( v52 == 7 )
          goto LABEL_53;
        goto LABEL_75;
      }
      if ( !(unsigned int)sub_FA77D0(v43) )
        goto LABEL_53;
      if ( (*(_BYTE *)(v43 + 34) & 0xF0) != 0xF0 )
      {
        v52 = *(_BYTE *)(v43 + 34) >> 4;
        goto LABEL_71;
      }
      if ( (unsigned int)sub_FA77D0(v43) == 1 )
        goto LABEL_53;
      if ( (*(_BYTE *)(v43 + 34) & 0xF0) != 0xF0 )
      {
        v52 = *(_BYTE *)(v43 + 34) >> 4;
        v53 = v52;
        goto LABEL_72;
      }
      if ( (unsigned int)sub_FA77D0(v43) == 2 )
        goto LABEL_53;
      if ( (*(_BYTE *)(v43 + 34) & 0xF0) != 0xF0 )
      {
        v52 = *(_BYTE *)(v43 + 34) >> 4;
        v53 = v52;
        goto LABEL_73;
      }
      if ( (unsigned int)sub_FA77D0(v43) == 6 )
        goto LABEL_53;
      if ( (*(_BYTE *)(v43 + 34) & 0xF0) != 0xF0 )
      {
        v52 = *(_BYTE *)(v43 + 34) >> 4;
        v53 = v52;
        goto LABEL_74;
      }
      if ( (unsigned int)sub_FA77D0(v43) == 7 )
        goto LABEL_53;
      if ( (*(_BYTE *)(v43 + 34) & 0xF0) == 0xF0 )
        v53 = sub_FA77D0(v43);
      else
        v53 = *(_BYTE *)(v43 + 34) >> 4;
LABEL_75:
      if ( v53 != 8 )
      {
        v54 = sub_1804480(*(_DWORD **)(v43 + 56), *(_QWORD *)(v43 + 56) + 4LL * *(unsigned int *)(v43 + 48), &v93);
        if ( v54 == v55 )
        {
          sub_168B9F0((__int64)v102, a1 + 1, *(_DWORD *)(v43 + 24), 0x12A4u, 0);
          LODWORD(v98[0]) = **(_DWORD **)(v43 + 56) & 0x3FFFFFFF;
          sub_16CF160((__int64)v102, (unsigned int *)v98);
          sub_15F7200(v102);
          if ( !*(_DWORD *)(v43 + 48) )
            goto LABEL_89;
          sub_168B9F0((__int64)v102, a1 + 1, a3[1].m128i_u32[2], 0x1870u, 0);
          p_s2 = (void **)&v95;
          v95 = v93 & 0x3FFFFFFF;
          v57 = sub_16CF160((__int64)v102, (unsigned int *)&v95);
          goto LABEL_88;
        }
      }
LABEL_53:
      v35 = ++v34 == (__int64 *)v33;
      if ( (unsigned __int64)v34 < v33 )
        goto LABEL_31;
    }
    v50 = (__int64 *)(v33 + 8);
    while ( v34 != v50 )
    {
      v51 = *v50++;
      if ( *(_WORD *)(v51 + 36) == 324 )
        goto LABEL_39;
    }
LABEL_34:
    v37 = (unsigned int)v100;
    v38 = v93;
    v39 = (unsigned int)v100 + 1LL;
    if ( v39 > HIDWORD(v100) )
    {
      sub_2237220(&base, v101, v39, 4);
      v37 = (unsigned int)v100;
    }
    ++v89;
    *((_DWORD *)base + v37) = v38;
    v17 = v89 + 1;
    v40 = v100 + 1;
    v41 = a3[3].m128i_u16[4];
    LODWORD(v100) = v100 + 1;
  }
  while ( v41 > (int)v89 + 1 );
  v4 = a1;
  v42 = base;
  if ( 4 * (unsigned __int64)v40 > 4 )
  {
    v87 = v40;
    qsort(base, (4LL * v40) >> 2, 4u, (__compar_fn_t)sub_1803AD0);
    v40 = v87;
  }
LABEL_158:
  v88 = v40;
  v81 = (__m128i *)sub_1806F50((__int64 *)(v4[31] + 2352), 64, 3u);
  sub_B2F830(v81, v4[31], a3, v92, (__int64)v42, v88);
  sub_B8CC60(a2, (__int64)v81, v82, v83, v84, v85);
LABEL_89:
  if ( base != v101 )
    free(base);
}
