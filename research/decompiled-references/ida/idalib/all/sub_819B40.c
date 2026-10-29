__int64 __fastcall sub_819B40(
        __int64 a1,
        __int64 a2,
        unsigned __int8 **a3,
        unsigned __int8 *a4,
        _QWORD *a5,
        unsigned __int64 a6)
{
  _BYTE *v6; // r11
  unsigned __int64 v7; // r9
  unsigned __int8 *v8; // r13
  unsigned __int8 *v10; // r10
  _QWORD *v11; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r12
  int v15; // edx
  __int64 v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdi
  unsigned __int64 v23; // rax
  unsigned __int8 v24; // cl
  unsigned __int8 *v25; // r10
  _QWORD *v26; // r8
  __int64 v27; // rdx
  unsigned __int64 v28; // r9
  __int64 v29; // rsi
  unsigned __int8 *v30; // r14
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // r11
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __int64 result; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  char v40; // r11
  int v41; // eax
  __int64 v42; // rcx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int8 v45; // si
  char v46; // cl
  __int64 v47; // rax
  unsigned __int8 *v48; // r14
  _OWORD *v49; // r8
  __int64 v50; // r13
  _OWORD *v51; // r9
  __int64 v52; // rbx
  _BYTE *v53; // r12
  __int64 v54; // rdx
  __int64 v55; // rbx
  __int64 v56; // r12
  __int64 v57; // rax
  __int64 v58; // rbp
  unsigned __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r12
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // r8
  unsigned __int64 v64; // rbp
  unsigned __int64 v65; // rcx
  _OWORD *v66; // rdi
  unsigned __int64 v67; // rsi
  _BYTE *v68; // r9
  __int64 v69; // rax
  unsigned __int64 v70; // rsi
  unsigned __int64 v71; // rax
  unsigned __int8 *v72; // r10
  unsigned __int64 v73; // rax
  const char *v74; // rax
  unsigned __int8 v75; // bl
  __int64 v76; // rax
  unsigned __int64 v77; // rsi
  unsigned __int64 v78; // rbp
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rdi
  unsigned __int64 v81; // rax
  unsigned __int8 v82; // bl
  unsigned __int8 v83; // di
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // rdx
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // [rsp+0h] [rbp-1DF8h]
  unsigned __int64 v89; // [rsp+0h] [rbp-1DF8h]
  _BYTE *v90; // [rsp+0h] [rbp-1DF8h]
  unsigned int v93; // [rsp+10h] [rbp-1DE8h]
  unsigned __int8 v94; // [rsp+1Fh] [rbp-1DD9h]
  unsigned __int64 v95; // [rsp+20h] [rbp-1DD8h]
  __int64 v96; // [rsp+28h] [rbp-1DD0h]
  _BYTE *v97; // [rsp+30h] [rbp-1DC8h]
  _BYTE *v98; // [rsp+30h] [rbp-1DC8h]
  unsigned __int8 *v99; // [rsp+30h] [rbp-1DC8h]
  _BYTE *v100; // [rsp+30h] [rbp-1DC8h]
  unsigned __int8 *v101; // [rsp+38h] [rbp-1DC0h]
  unsigned __int8 *v102; // [rsp+38h] [rbp-1DC0h]
  __int64 v103; // [rsp+38h] [rbp-1DC0h]
  _BYTE *v104; // [rsp+40h] [rbp-1DB8h]
  _BYTE *v105; // [rsp+40h] [rbp-1DB8h]
  __int64 v106; // [rsp+48h] [rbp-1DB0h]
  unsigned __int64 v107; // [rsp+50h] [rbp-1DA8h]
  __int64 v108; // [rsp+70h] [rbp-1D88h]
  _QWORD *v109; // [rsp+88h] [rbp-1D70h]
  __int64 v110; // [rsp+90h] [rbp-1D68h]
  _OWORD *v111; // [rsp+98h] [rbp-1D60h]
  _OWORD *v112; // [rsp+A0h] [rbp-1D58h]
  unsigned __int8 *v113; // [rsp+A8h] [rbp-1D50h]
  unsigned __int64 v114; // [rsp+B0h] [rbp-1D48h] BYREF
  unsigned __int64 v115; // [rsp+B8h] [rbp-1D40h] BYREF
  __int64 v116[8]; // [rsp+C0h] [rbp-1D38h] BYREF
  unsigned __int64 v117[8]; // [rsp+100h] [rbp-1CF8h] BYREF
  _QWORD v118[18]; // [rsp+140h] [rbp-1CB8h] BYREF
  _QWORD v119[18]; // [rsp+1D0h] [rbp-1C28h] BYREF
  _OWORD v120[88]; // [rsp+260h] [rbp-1B98h] BYREF
  _OWORD v121[88]; // [rsp+7E0h] [rbp-1618h] BYREF
  _BYTE v122[2048]; // [rsp+D60h] [rbp-1098h] BYREF
  _BYTE v123[2048]; // [rsp+1560h] [rbp-898h] BYREF
  unsigned __int8 v124[32]; // [rsp+1D60h] [rbp-98h] BYREF
  int v125; // [rsp+1D80h] [rbp-78h] BYREF
  __int16 v126; // [rsp+1D84h] [rbp-74h]
  _QWORD v127[3]; // [rsp+1D86h] [rbp-72h]
  unsigned __int8 v128[24]; // [rsp+1DA0h] [rbp-58h] BYREF
  unsigned __int64 v129; // [rsp+1DB8h] [rbp-40h]

  v6 = (_BYTE *)*a5;
  v7 = a6 - *a5;
  v129 = __readfsqword(0x28u);
  v8 = *a3;
  v88 = v7;
  if ( !v7 )
    goto LABEL_68;
  v10 = a4;
  v11 = a5;
  if ( v8 == a4 )
  {
LABEL_88:
    v8 = a4;
    *(_QWORD *)(a1 + 64) = "secondary decoder end of input";
    result = 4294949586LL;
    goto LABEL_50;
  }
  v12 = 8;
  v13 = 0;
LABEL_4:
  v14 = *v8++;
  v15 = 8;
  v16 = 1;
  while ( 1 )
  {
    v12 >>= 1;
    if ( (v14 & v16) != 0 )
      v13 |= v12;
    v16 *= 2;
    if ( v12 == 1 )
      break;
    if ( !--v15 )
    {
      if ( a4 == v8 )
        goto LABEL_88;
      goto LABEL_4;
    }
  }
  v94 = v14;
  v96 = v13 + 1;
  v95 = v7;
  if ( (unsigned __int64)(v13 + 1) > 1 )
  {
    v19 = 32;
    v20 = 0;
    do
    {
      if ( v16 == 256 )
      {
        if ( a4 == v8 )
        {
LABEL_89:
          *(_QWORD *)(a1 + 64) = "secondary decoder end of input";
          result = 4294949586LL;
          goto LABEL_50;
        }
        v14 = *v8;
        v16 = 1;
        ++v8;
        v94 = v14;
      }
      v19 >>= 1;
      if ( (v14 & v16) != 0 )
        v20 |= v19;
      v16 *= 2;
    }
    while ( v19 != 1 );
    v95 = 5 * v20 + 5;
  }
  v17 = 16;
  v18 = 0;
  do
  {
    if ( v16 == 256 )
    {
      if ( a4 == v8 )
        goto LABEL_89;
      v14 = *v8;
      v16 = 1;
      ++v8;
      v94 = v14;
    }
    v17 >>= 1;
    if ( (v16 & v14) != 0 )
      v18 |= v17;
    v16 *= 2;
  }
  while ( v17 != 1 );
  v21 = v18 + 7;
  v22 = 0;
  do
  {
    v23 = 16;
    v24 = 0;
    do
    {
      if ( v16 == 256 )
      {
        if ( v10 == v8 )
          goto LABEL_89;
        v14 = *v8;
        v16 = 1;
        ++v8;
        v94 = v14;
      }
      v23 >>= 1;
      if ( (v16 & v14) != 0 )
        v24 |= v23;
      v16 *= 2;
    }
    while ( v23 != 1 );
    v128[v22++] = v24;
  }
  while ( v21 != v22 );
  if ( v21 != 22 )
  {
    v101 = v10;
    v97 = v6;
    memset(&v128[v21], 0, 22 - v21);
    v6 = v97;
    v10 = v101;
  }
  v102 = v10;
  v98 = v6;
  sub_8183C0(22, 0xFu, v128, (__int64)v124, (__int64)v118, (__int64)v119, (__int64 *)&v114, &v115);
  v125 = 100992000;
  v127[0] = 0x10D0C020B030A09LL;
  v126 = 2055;
  *(_QWORD *)((char *)v127 + 7) = 0x14131211100F0E01LL;
  v6 = v98;
  v25 = v102;
  if ( !(v96 << 8) )
    goto LABEL_76;
  v26 = v11;
  v27 = 0;
  v103 = 0;
  v28 = 0;
  v29 = v13;
  v30 = v25;
  v31 = 0;
  v32 = v96 << 8;
LABEL_37:
  if ( v31 > 0xFF )
    goto LABEL_62;
  do
  {
LABEL_38:
    v33 = v31;
    if ( v27 )
    {
LABEL_73:
      ++v31;
      --v27;
      v123[v33] = v125;
      if ( v31 >= v32 )
        goto LABEL_74;
      goto LABEL_37;
    }
    if ( v28 )
      goto LABEL_57;
LABEL_40:
    v106 = v29;
    v108 = v27;
    while ( 1 )
    {
      v34 = 0;
      v35 = 0;
      if ( v16 == 256 )
        goto LABEL_66;
      while ( 1 )
      {
        if ( v115 == v34 )
        {
LABEL_49:
          v6 = v98;
          v11 = v26;
          *(_QWORD *)(a1 + 64) = "secondary decoder invalid code";
          result = 4294949584LL;
          goto LABEL_50;
        }
        v35 *= 2LL;
        ++v34;
        v14 = v94;
        if ( ((unsigned __int8)v16 & v94) != 0 )
          v35 |= 1u;
        v16 *= 2;
        if ( v34 >= v114 && v119[v34] >= v35 )
          break;
        if ( v16 == 256 )
        {
LABEL_66:
          if ( v30 == v8 )
          {
            v6 = v98;
            v11 = v26;
            *(_QWORD *)(a1 + 64) = "secondary decoder end of input";
            result = 4294949584LL;
            goto LABEL_50;
          }
          v45 = *v8;
          v16 = 1;
          ++v8;
          v94 = v45;
        }
      }
      v37 = v118[v34];
      if ( v35 < v37 )
        goto LABEL_49;
      v38 = v35 - v37;
      if ( v38 > 0x16 )
        goto LABEL_49;
      v39 = v124[v38];
      if ( v39 > 1 )
        break;
      v46 = v103++;
      v47 = (v39 + 1) << v46;
      if ( v31 >= v32 )
      {
        v25 = v30;
        v6 = v98;
        v13 = v106;
        v11 = v26;
        v27 = v47;
        goto LABEL_75;
      }
      if ( v31 > 0xFF )
      {
        v29 = v106;
        v28 = 0;
        v27 = v47;
        goto LABEL_62;
      }
      if ( v47 )
      {
        v29 = v106;
        v33 = v31;
        v28 = 0;
        v27 = v47;
        goto LABEL_73;
      }
    }
    v29 = v106;
    v27 = v108;
    v28 = v39 - 1;
    if ( v31 >= v32 )
      goto LABEL_91;
    v103 = 0;
    if ( v31 <= 0xFF )
    {
LABEL_57:
      v40 = *((_BYTE *)&v125 + v28);
      v41 = v28;
      do
      {
        v42 = v41--;
        *((_BYTE *)&v125 + v42) = *((_BYTE *)&v125 + v41);
      }
      while ( v41 );
      v43 = v31 + 1;
      LOBYTE(v125) = v40;
      v123[v31] = v40;
      if ( v31 + 1 >= v32 )
      {
LABEL_91:
        v25 = v30;
        v6 = v98;
        v13 = v29;
        v11 = v26;
        goto LABEL_76;
      }
      ++v31;
      if ( v43 > 0xFF )
      {
        v28 = 0;
        continue;
      }
      goto LABEL_40;
    }
LABEL_62:
    ;
  }
  while ( v122[v31 + 1792] );
  while ( 1 )
  {
    v44 = v31 + 1;
    v123[v31] = 0;
    if ( v31 + 1 >= v32 )
      break;
    ++v31;
    if ( v122[v44 + 1792] )
      goto LABEL_38;
  }
LABEL_74:
  v6 = v98;
  v25 = v30;
  v13 = v29;
  v11 = v26;
LABEL_75:
  if ( v27 )
  {
    *(_QWORD *)(a1 + 64) = "secondary decoder invalid repeat code";
    result = 4294949584LL;
    goto LABEL_50;
  }
LABEL_76:
  v109 = v11;
  v48 = v8;
  v49 = v120;
  v50 = v16;
  v51 = v121;
  v110 = v14;
  v52 = 0;
  v53 = v6;
  do
  {
    v113 = v25;
    v112 = v51;
    v111 = v49;
    sub_8183C0(
      256,
      0x14u,
      &v123[256 * v52],
      (__int64)&v122[256 * v52],
      (__int64)v49,
      (__int64)v51,
      &v116[v52],
      &v117[v52]);
    v54 = v52++;
    v49 = v111 + 11;
    v51 = v112 + 11;
    v25 = v113;
  }
  while ( v13 != v54 );
  v6 = v53;
  v55 = v50;
  v56 = v110;
  v8 = v48;
  v11 = v109;
  v89 = (v88 - 1) / v95 + 1;
  if ( v96 == 1 )
  {
    v61 = 0;
  }
  else
  {
    v57 = v13 + 2;
    v58 = 0;
    do
    {
      v59 = 8;
      v60 = 0;
      do
      {
        if ( v55 == 256 )
        {
          if ( v113 == v8 )
            goto LABEL_89;
          v56 = *v8;
          v55 = 1;
          ++v8;
          v94 = v56;
        }
        v59 >>= 1;
        if ( (v55 & v56) != 0 )
          v60 |= v59;
        v55 *= 2;
      }
      while ( v59 != 1 );
      v124[v58] = v60;
      v128[v58] = v58;
      ++v58;
    }
    while ( v58 != v57 );
    v105 = v6;
    v76 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64, _OWORD *, _OWORD *))(a1 + 128))(
            *(_QWORD *)(a1 + 144),
            v89,
            1,
            v60,
            v49,
            v51);
    v6 = v105;
    v61 = v76;
    if ( !v76 )
    {
      *(_QWORD *)(a1 + 64) = "out of memory";
      result = 12;
      goto LABEL_50;
    }
    sub_8183C0(v58, 7u, v124, (__int64)&v125, (__int64)v119, (__int64)v123, (__int64 *)&v114, &v115);
    v63 = v115;
    v68 = nullptr;
    v77 = 0;
    v78 = v114;
    v79 = 0;
    v6 = v105;
    v62 = 0;
    v25 = v113;
    do
    {
      if ( v79 )
      {
        v65 = v128[0];
        --v79;
        *(_BYTE *)(v61 + v77++) = v128[0];
      }
      else if ( v62 )
      {
        v83 = v128[v62];
        do
        {
          v65 = (int)v62;
          LODWORD(v62) = v62 - 1;
          v128[v65] = v128[(int)v62];
        }
        while ( (_DWORD)v62 );
        v128[0] = v83;
        v62 = 0;
        *(_BYTE *)(v61 + v77++) = v83;
      }
      else
      {
        v80 = 0;
        v81 = 0;
        if ( v55 == 256 )
        {
LABEL_129:
          if ( v113 == v8 )
          {
            result = (__int64)"secondary decoder end of input";
            goto LABEL_128;
          }
          v82 = *v8++;
          v94 = v82;
          v55 = 1;
        }
        v65 = v94;
        while ( 1 )
        {
          if ( v63 == v80 )
            goto LABEL_127;
          v81 *= 2LL;
          ++v80;
          v65 = v81 | 1;
          if ( ((unsigned __int8)v55 & v94) != 0 )
            v81 |= 1u;
          v55 *= 2;
          if ( v80 >= v78 )
          {
            v65 = (unsigned __int64)v123;
            if ( *(_QWORD *)&v123[8 * v80] >= v81 )
              break;
          }
          if ( v55 == 256 )
            goto LABEL_129;
        }
        v65 = v119[v80];
        if ( v81 < v65 || (v86 = v81 - v65, v86 > 0x16) )
        {
LABEL_127:
          result = (__int64)"secondary decoder invalid code";
          goto LABEL_128;
        }
        v65 = *((unsigned __int8 *)&v125 + v86);
        if ( v65 <= 1 )
        {
          v87 = v65 + 1;
          v65 = (unsigned int)v68++;
          v79 = v87 << v65;
        }
        else
        {
          v68 = nullptr;
          v79 = 0;
          v62 = v65 - 1;
        }
      }
    }
    while ( v77 < v89 );
    if ( v79 )
    {
      result = (__int64)"secondary decoder invalid repeat code";
LABEL_128:
      *(_QWORD *)(a1 + 64) = result;
      LODWORD(result) = -17712;
      goto LABEL_111;
    }
  }
  v99 = v25;
  v62 = v61;
  v63 = v116[0];
  v64 = v117[0];
  v65 = (unsigned __int64)v121;
  v66 = v120;
  v67 = v61 + v89;
  v68 = v122;
  while ( 2 )
  {
    if ( v96 != 1 )
    {
      v69 = *(unsigned __int8 *)v62;
      v64 = v117[v69];
      v68 = &v122[256 * v69];
      v66 = &v120[11 * v69];
      v65 = (unsigned __int64)&v121[11 * v69];
      v63 = v116[v69];
    }
    if ( a6 < (unsigned __int64)v6 )
    {
LABEL_68:
      *(_QWORD *)(a1 + 64) = "secondary decoder invalid input";
      return 4294949584LL;
    }
    v107 = v67;
    v70 = v62;
    v71 = a6 - (_QWORD)v6;
    if ( a6 - (unsigned __int64)v6 > v95 )
      v71 = v95;
    v72 = v99;
    v104 = &v6[v71];
    do
    {
      v62 = 0;
      v73 = 0;
      if ( v55 == 256 )
      {
LABEL_112:
        if ( v72 == v8 )
        {
          v74 = "secondary decoder end of input";
LABEL_109:
          *(_QWORD *)(a1 + 64) = v74;
          result = 4294949584LL;
          goto LABEL_110;
        }
        v75 = *v8++;
        v94 = v75;
        v55 = 1;
      }
      v100 = v6;
      while ( 1 )
      {
        if ( v64 == v62 )
        {
          v74 = "secondary decoder invalid code";
          goto LABEL_109;
        }
        v73 *= 2LL;
        ++v62;
        if ( ((unsigned __int8)v55 & v94) != 0 )
          v73 |= 1u;
        v55 *= 2;
        if ( v62 >= v63 && *(_QWORD *)(v65 + 8 * v62) >= v73 )
          break;
        if ( v55 == 256 )
          goto LABEL_112;
      }
      v62 = *((_QWORD *)v66 + v62);
      if ( v73 < v62 || (v84 = v73 - v62, v84 > 0x100) )
      {
        v74 = "secondary decoder invalid code";
        goto LABEL_109;
      }
      ++v6;
      *v100 = v68[v84];
    }
    while ( v100 + 1 != v104 );
    v85 = v70;
    v67 = v107;
    v99 = v72;
    v62 = v85 + 1;
    if ( v107 != v62 )
      continue;
    break;
  }
  result = 0;
LABEL_110:
  if ( !v61 )
    goto LABEL_50;
LABEL_111:
  v93 = result;
  v90 = v6;
  (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64, unsigned __int64, unsigned __int64, _BYTE *))(a1 + 136))(
    *(_QWORD *)(a1 + 144),
    v61,
    v62,
    v65,
    v63,
    v68);
  result = v93;
  v6 = v90;
LABEL_50:
  *a3 = v8;
  *v11 = v6;
  return result;
}
