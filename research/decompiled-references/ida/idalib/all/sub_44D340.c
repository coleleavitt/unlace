__int64 __fastcall sub_44D340(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v5; // eax
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // r9
  unsigned int v9; // eax
  __int64 v10; // rax
  unsigned int v11; // r13d
  int v12; // r12d
  unsigned __int64 v13; // r14
  __int16 v14; // ax
  __int16 v15; // r15
  unsigned __int64 v16; // r14
  int *v17; // rax
  int *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  int *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r15
  unsigned __int64 v26; // r9
  int v27; // r15d
  int v28; // eax
  __int16 v29; // r10
  int v30; // r14d
  unsigned __int64 v31; // rcx
  int *v32; // rax
  int *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r15
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // r15
  int v49; // [rsp+0h] [rbp-288h]
  int *v50; // [rsp+8h] [rbp-280h]
  unsigned __int64 v51; // [rsp+10h] [rbp-278h]
  unsigned __int64 v52; // [rsp+18h] [rbp-270h]
  __int64 v53; // [rsp+20h] [rbp-268h]
  int v54; // [rsp+28h] [rbp-260h]
  int v55; // [rsp+2Ch] [rbp-25Ch]
  __int64 v56; // [rsp+30h] [rbp-258h]
  __int64 segm_base; // [rsp+38h] [rbp-250h]
  int v58[2]; // [rsp+40h] [rbp-248h]
  int v59[2]; // [rsp+40h] [rbp-248h]
  unsigned __int64 v60; // [rsp+48h] [rbp-240h]
  int v61; // [rsp+50h] [rbp-238h]
  unsigned int v62; // [rsp+54h] [rbp-234h]
  _QWORD *v63; // [rsp+58h] [rbp-230h]
  int v64; // [rsp+60h] [rbp-228h]
  int v65; // [rsp+64h] [rbp-224h]
  int v66; // [rsp+68h] [rbp-220h]
  __int64 v67; // [rsp+70h] [rbp-218h]
  int v68; // [rsp+78h] [rbp-210h]
  int v69; // [rsp+7Ch] [rbp-20Ch]
  __int64 v70; // [rsp+80h] [rbp-208h]
  __int64 v71; // [rsp+88h] [rbp-200h]
  int v72; // [rsp+90h] [rbp-1F8h]
  unsigned __int64 v73; // [rsp+98h] [rbp-1F0h] BYREF
  unsigned __int64 v74; // [rsp+A0h] [rbp-1E8h] BYREF
  int v75; // [rsp+A8h] [rbp-1E0h]
  __int64 v76; // [rsp+B0h] [rbp-1D8h] BYREF
  int v77; // [rsp+B8h] [rbp-1D0h] BYREF
  int *v78; // [rsp+C0h] [rbp-1C8h]
  int *v79; // [rsp+C8h] [rbp-1C0h]
  int *v80; // [rsp+D0h] [rbp-1B8h]
  unsigned __int64 v81; // [rsp+D8h] [rbp-1B0h]
  int v82[4]; // [rsp+E0h] [rbp-1A8h] BYREF
  int v83[2]; // [rsp+F0h] [rbp-198h]
  int v84[2]; // [rsp+F8h] [rbp-190h]
  int v85[2]; // [rsp+100h] [rbp-188h]
  int v86[62]; // [rsp+108h] [rbp-180h] BYREF
  __int64 v87; // [rsp+200h] [rbp-88h]
  _QWORD v88[8]; // [rsp+248h] [rbp-40h] BYREF

  v67 = a3;
  v62 = a4;
  v88[0] = __readfsqword(0x28u);
  v65 = *(_DWORD *)a2 & 0x4000;
  if ( v65 )
    return a4;
  v52 = *(_QWORD *)(a2 + 8);
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
  {
    v5 = *(_DWORD *)a2 & 0x404;
    v61 = v5;
    v55 = *(_DWORD *)(a2 + 40);
    if ( v5 )
    {
LABEL_4:
      if ( v5 == 4 )
      {
        v6 = 4;
      }
      else if ( v5 == 1024 )
      {
        v61 = 1;
        v6 = 1;
      }
      else
      {
        v61 = 8;
        v6 = 8;
      }
      goto LABEL_7;
    }
  }
  else
  {
    v5 = *(_DWORD *)a2 & 0x404;
    v61 = v5;
    v55 = *(unsigned __int16 *)(a2 + 4);
    if ( v5 )
      goto LABEL_4;
  }
  v61 = 2;
  v6 = 2;
LABEL_7:
  v63 = a1 + 203;
  v7 = sub_505D70(a1 + 203, v52);
  v51 = -1;
  if ( v7 )
    v51 = *(_QWORD *)(v7 + 8);
  v53 = sub_505D70(v63, v67);
  if ( !v53 )
    return 0;
  if ( (*(_BYTE *)(a2 + 1) & 2) != 0 )
    segm_base = *(_QWORD *)(a2 + 56);
  else
    segm_base = get_segm_base(v53);
  v71 = 0;
  v69 = sub_3A1820((__int64)a1);
  if ( v69 == 40 )
    v71 = sub_5CAA10(a1);
  v77 = 0;
  v50 = &v77;
  v79 = &v77;
  v80 = &v77;
  v9 = *(_DWORD *)a2;
  v78 = nullptr;
  v81 = 0;
  HIBYTE(v68) = v62 == 2;
  if ( (v9 & 0x10000) != 0 )
  {
    if ( v55 <= 0 )
    {
      v70 = 0;
      v12 = 0;
      HIBYTE(v64) = 0;
      goto LABEL_58;
    }
    BYTE2(v68) = 0;
    BYTE2(v64) = 0;
  }
  else
  {
    BYTE2(v64) = *(_WORD *)(a2 + 4) == 0xFFFF;
    BYTE2(v68) = HIBYTE(v68) & BYTE2(v64);
    if ( v55 <= 0 )
    {
      v70 = 0;
      v12 = 0;
      HIBYTE(v64) = 0;
      goto LABEL_115;
    }
  }
  v10 = v6;
  v11 = 0;
  v60 = 0;
  v12 = 0;
  v56 = v10;
  HIBYTE(v64) = 0;
  v70 = 0;
  do
  {
    v13 = v52 + v11;
    if ( v51 < v13 + v56 )
      break;
    v14 = sub_3BE900(a1, v52 + v11, 1);
    v15 = v14;
    if ( (v14 & 0x100) == 0 )
      break;
    if ( (v14 & 0x600) != 0x200 || v13 < v60 )
      goto LABEL_22;
    v40 = sub_3C2650(a1, v13);
    v41 = sub_3BE900(a1, v40, 4);
    v42 = v41 & 0x600;
    if ( v42 == 1024 )
    {
      if ( (v41 & 0xF0000000) == 0x60000000 )
        goto LABEL_82;
      v60 = sub_3C1F00(a1, v13);
LABEL_22:
      if ( !v12 )
        goto LABEL_25;
      goto LABEL_23;
    }
    if ( !v12 )
    {
      if ( v42 == 1536 )
        goto LABEL_82;
      v60 = sub_3C1F00(a1, v13);
      goto LABEL_25;
    }
    v60 = sub_3C1F00(a1, v13);
LABEL_23:
    v9 = *(_DWORD *)a2;
    if ( (*(_DWORD *)a2 & 0x400000) == 0 && (v15 & 0xD000) != 0 )
      goto LABEL_57;
LABEL_25:
    v73 = sub_44B830(a1, (unsigned int *)a2, v13, segm_base, v53, v8);
    v16 = v73;
    v17 = v78;
    if ( v78 )
    {
      v18 = v50;
      do
      {
        while ( 1 )
        {
          v19 = *((_QWORD *)v17 + 2);
          v20 = *((_QWORD *)v17 + 3);
          if ( *((_QWORD *)v17 + 4) < v73 )
            break;
          v18 = v17;
          v17 = *((int **)v17 + 2);
          if ( !v19 )
            goto LABEL_30;
        }
        v17 = *((int **)v17 + 3);
      }
      while ( v20 );
LABEL_30:
      if ( v18 != v50 && v73 >= *((_QWORD *)v18 + 4) )
        goto LABEL_55;
    }
    if ( !v73 )
      break;
    BYTE1(v68) = sub_3C0260(a1, v73);
    if ( !BYTE1(v68) )
      break;
    v66 = sub_3BE900(a1, v16, 4);
    *(_QWORD *)v58 = v66 & 0x600;
    if ( *(_QWORD *)v58 == 1024 )
    {
      if ( BYTE2(v68) )
        break;
      *(_QWORD *)v83 = 0;
      *(_QWORD *)v84 = 0;
      *(_OWORD *)v82 = 0;
      sub_3D19E0((_DWORD)a1, v16);
      if ( *(_QWORD *)v83 )
        (*(void (__fastcall **)(int *, int *, __int64))v83)(v82, v82, 3);
      if ( (*(_BYTE *)(a2 + 2) & 0x40) == 0 )
        goto LABEL_39;
    }
    else
    {
      if ( *(_QWORD *)v58 == 1536 )
        goto LABEL_46;
      if ( (*(_BYTE *)(a2 + 2) & 0x40) == 0 )
      {
        if ( *(_QWORD *)v58 == 512 )
        {
          v22 = sub_3C2650(a1, v16);
          if ( (~((unsigned __int16)sub_3BE900(a1, v22, 4) >> 8) & 6) == 0 )
          {
            if ( sub_505D70(a1 + 213, v16) )
              break;
          }
        }
LABEL_39:
        v23 = v86;
        *(_QWORD *)v83 = -1;
        *(_QWORD *)v84 = 0;
        *(_QWORD *)v85 = 0;
        *(_OWORD *)v82 = -1;
        do
        {
          *(_WORD *)v23 = 0;
          v23 += 10;
          *((_WORD *)v23 - 19) = 0;
          *((_WORD *)v23 - 18) = 0;
          *(v23 - 2) = 0;
          *((_WORD *)v23 - 17) = 0;
          *((_OWORD *)v23 - 2) = 0;
          *((_QWORD *)v23 - 2) = 0;
        }
        while ( v88 != (_QWORD *)v23 );
        if ( (int)decode_insn(v82, v16, v88, v21, 0, 0, 0.0) <= 0 )
          break;
      }
    }
    v24 = sub_505D70(v63, v16);
    if ( !v24 || v53 != v24 && (*(_BYTE *)(v24 + 42) & 1) == 0 && *(_BYTE *)(v24 + 184) != 2 )
      break;
LABEL_46:
    v25 = *(_QWORD *)(a2 + 24);
    HIBYTE(v64) |= v25 == v16;
    if ( HIBYTE(v64) || (*(_WORD *)a2 & 0x180) != 0 )
      goto LABEL_47;
    *(_QWORD *)v83 = -1;
    v34 = v86;
    *(_QWORD *)v84 = 0;
    *(_QWORD *)v85 = 0;
    *(_OWORD *)v82 = -1;
    do
    {
      *(_WORD *)v34 = 0;
      v34 += 10;
      *((_WORD *)v34 - 19) = 0;
      *((_WORD *)v34 - 18) = 0;
      *(v34 - 2) = 0;
      *((_WORD *)v34 - 17) = 0;
      *((_OWORD *)v34 - 2) = 0;
      *((_QWORD *)v34 - 2) = 0;
    }
    while ( v88 != (_QWORD *)v34 );
    if ( *(_QWORD *)v58 == 1536 && (v66 & 0x10000000) != 0 )
    {
      if ( v25 == -1 )
        goto LABEL_106;
      v43 = sub_5CAA10(a1);
      if ( (int)sub_5C9B30(a1, v43, v25) >= 0 )
        goto LABEL_130;
LABEL_103:
      v39 = *(_QWORD *)(a2 + 24);
      if ( v39 == -1 )
        goto LABEL_106;
      if ( (v66 & 0x10000) != 0 )
      {
        v44 = sub_3C2650(a1, v16);
        v39 = *(_QWORD *)(a2 + 24);
        if ( v39 != v44 )
        {
          if ( v69 == 40 )
            goto LABEL_139;
          if ( v39 != v44 )
          {
LABEL_106:
            ++v70;
            goto LABEL_47;
          }
        }
      }
      else
      {
        if ( v69 != 40 )
          goto LABEL_106;
LABEL_139:
        v45 = v16;
        if ( v16 != v39 )
        {
          do
          {
            v74 = -1;
            LOBYTE(v75) = 0;
            sub_3E1CA0(a1, (__int64)&v74, v45);
            if ( v74 == *(_QWORD *)(a2 + 24) )
              break;
            v46 = sub_3C2450(a1, v45);
            v45 = v46;
            if ( v46 == -1 )
              goto LABEL_106;
            v47 = sub_3BE900(a1, v46, 4);
            if ( (~(_WORD)v47 & 0x600) != 0 || (v47 & 0x10000) == 0 )
              goto LABEL_106;
          }
          while ( v45 != *(_QWORD *)(a2 + 24) );
        }
      }
LABEL_130:
      HIBYTE(v64) = BYTE1(v68);
      goto LABEL_47;
    }
    if ( v69 != 25 && v69 != 20 && !HIBYTE(v68)
      || (int)sub_5C9B30(a1, v71, v16) >= 0
      || (int)decode_insn(v82, v16, v35, v36, v37, v38, 0.0) <= 0
      || sub_3792E0(0x24u, v82, 0) <= 50
      || (unsigned __int8)sub_4CC920(a1, v82, 3) )
    {
      goto LABEL_47;
    }
    if ( (*(_BYTE *)(a2 + 2) & 0x40) != 0 )
      goto LABEL_103;
    if ( BYTE1(v86[0]) != 7 )
      goto LABEL_103;
    if ( (int)sub_577F80(
                (int)a1,
                v16,
                v49,
                (int)v50,
                v51,
                v52,
                v53,
                v54,
                v56,
                segm_base,
                v58[0],
                v60,
                v61,
                (int)v63,
                v64,
                v66,
                v67,
                v68,
                v70,
                v71,
                v72,
                v73,
                v74,
                v75,
                v76,
                v77,
                (int)v78,
                (int)v79,
                (int)v80,
                v81,
                v82[0],
                v82[2],
                v83[0],
                v84[0],
                v85[0],
                v86[0],
                v86[2],
                v86[4],
                v86[6],
                v86[8],
                v86[10],
                v86[12],
                v86[14],
                v86[16],
                v86[18],
                v86[20],
                v86[22],
                v86[24],
                v86[26],
                v86[28],
                v86[30],
                v86[32],
                v86[34],
                v86[36],
                v86[38],
                v86[40],
                v86[42],
                v86[44],
                v86[46],
                v86[48],
                v86[50],
                v86[52],
                v86[54],
                v86[56],
                v86[58],
                v86[60],
                v87) <= 0 )
      goto LABEL_103;
    v74 = -1;
    LOBYTE(v75) = 0;
    sub_3E3030(a1, (__int64)&v74, v16);
    if ( v74 == -1 || (_BYTE)v75 == 21 )
      goto LABEL_103;
    v48 = v74 + 1;
    *(_QWORD *)v59 = v74;
    auto_mark_range(v74, v74 + 1, 20);
    auto_mark_range(*(_QWORD *)v59, v48, 30);
LABEL_47:
    if ( BYTE2(v64) && (*(_BYTE *)(a2 + 2) & 0x40) == 0 )
    {
      v26 = v16;
      if ( v51 <= v16 )
        v26 = v51;
      if ( v16 < v52 )
        v26 = v51;
      v51 = v26;
    }
    sub_42FD40(&v76, &v73);
LABEL_55:
    ++v12;
    v11 += v61;
  }
  while ( v55 != v12 );
  v9 = *(_DWORD *)a2;
LABEL_57:
  if ( (v9 & 0x10000) != 0 )
  {
LABEL_58:
    if ( *(_DWORD *)(a2 + 40) > v12 )
    {
      *(_DWORD *)(a2 + 40) = v12;
      if ( (v9 & 1) != 0 )
      {
        v27 = 2;
        v28 = v9 & 0x802;
        if ( v28 )
        {
          if ( v28 == 2 )
          {
            v27 = 4;
          }
          else
          {
            v27 = 1;
            if ( v28 != 2048 )
              v27 = 8;
          }
        }
        v29 = *(_WORD *)(a2 + 4);
        if ( v29 )
        {
          v30 = 0;
          do
          {
            v31 = *(_QWORD *)(a1[3] + 16) & (*(_QWORD *)(a2 + 16) + v65);
            v74 = 0;
            if ( sub_3BFD20(a1, &v74, v27, v31, 0, 0) != v27 )
              break;
            if ( v74 >= v12 )
              break;
            ++v30;
            v65 += v27;
          }
          while ( *(unsigned __int16 *)(a2 + 4) > v30 );
          v29 = v30;
        }
        *(_WORD *)(a2 + 4) = v29;
      }
    }
    goto LABEL_71;
  }
LABEL_115:
  if ( *(unsigned __int16 *)(a2 + 4) > v12 )
    *(_WORD *)(a2 + 4) = v12;
LABEL_71:
  if ( *(_QWORD *)(a2 + 32) == -1 )
    *(_QWORD *)(a2 + 32) = v67;
  if ( !v81 )
    goto LABEL_83;
  if ( v62 == 1 )
  {
    if ( HIBYTE(v64) || 5 * v70 < 2 * v81 || v71 && sub_5B9190(a1, v71, v67) )
      goto LABEL_122;
    goto LABEL_134;
  }
  if ( v62 != 2 )
    goto LABEL_83;
  if ( !HIBYTE(v64) && v81 < 5 * v70 )
  {
LABEL_134:
    v62 = 2;
    goto LABEL_83;
  }
  *(_QWORD *)v83 = -1;
  v32 = v86;
  *(_QWORD *)v84 = 0;
  *(_QWORD *)v85 = 0;
  *(_OWORD *)v82 = -1;
  do
  {
    *(_WORD *)v32 = 0;
    v32 += 10;
    *((_WORD *)v32 - 19) = 0;
    *((_WORD *)v32 - 18) = 0;
    *(v32 - 2) = 0;
    *((_WORD *)v32 - 17) = 0;
    *((_OWORD *)v32 - 2) = 0;
    *((_QWORD *)v32 - 2) = 0;
  }
  while ( v88 != (_QWORD *)v32 );
  if ( (int)decode_insn(v82, v67, v88, 0, 0, v8, 0.0) > 0 && (unsigned __int8)is_call_insn(v82) )
  {
LABEL_82:
    v62 = 0;
    goto LABEL_83;
  }
LABEL_122:
  v62 = 1;
LABEL_83:
  sub_44B0D0(v78);
  return v62;
}
