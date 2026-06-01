__int64 __fastcall sub_439600(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  int v5; // eax
  bool v6; // zf
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned int v10; // eax
  unsigned int v11; // r12d
  int v12; // r13d
  unsigned int v13; // r15d
  __int16 v14; // ax
  __int16 v15; // r14
  unsigned int v16; // r14d
  _QWORD *v17; // rax
  int *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 *v23; // rax
  __int64 v24; // rax
  unsigned int v25; // r15d
  unsigned int v26; // r9d
  int v27; // r15d
  int v28; // eax
  __int16 v29; // r10
  int v30; // r14d
  __int64 v31; // rcx
  __int64 *v32; // rax
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // eax
  unsigned int v40; // eax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rax
  int v44; // edx
  unsigned int v45; // r15d
  unsigned int v46; // eax
  unsigned __int64 v47; // rax
  unsigned int v48; // r15d
  int v49; // [rsp+0h] [rbp-1C8h]
  int *v50; // [rsp+8h] [rbp-1C0h]
  __int64 v51; // [rsp+10h] [rbp-1B8h]
  unsigned int v52; // [rsp+18h] [rbp-1B0h]
  int v53; // [rsp+1Ch] [rbp-1ACh]
  int v54; // [rsp+20h] [rbp-1A8h]
  unsigned int segm_base; // [rsp+24h] [rbp-1A4h]
  int v56[2]; // [rsp+28h] [rbp-1A0h]
  unsigned int v57; // [rsp+28h] [rbp-1A0h]
  unsigned int v58; // [rsp+30h] [rbp-198h]
  unsigned int v59; // [rsp+34h] [rbp-194h]
  _QWORD *v60; // [rsp+38h] [rbp-190h]
  unsigned int v61; // [rsp+40h] [rbp-188h]
  int v62; // [rsp+44h] [rbp-184h]
  int v63; // [rsp+48h] [rbp-180h]
  int v64; // [rsp+50h] [rbp-178h]
  unsigned int v65; // [rsp+54h] [rbp-174h]
  int v66; // [rsp+58h] [rbp-170h]
  int v67; // [rsp+5Ch] [rbp-16Ch]
  __int64 v68; // [rsp+60h] [rbp-168h]
  __int64 v69; // [rsp+68h] [rbp-160h]
  int v70; // [rsp+70h] [rbp-158h]
  unsigned int v71; // [rsp+74h] [rbp-154h] BYREF
  unsigned __int64 v72; // [rsp+78h] [rbp-150h] BYREF
  __int64 v73; // [rsp+80h] [rbp-148h] BYREF
  int v74; // [rsp+88h] [rbp-140h] BYREF
  _QWORD *v75; // [rsp+90h] [rbp-138h]
  int *v76; // [rsp+98h] [rbp-130h]
  int *v77; // [rsp+A0h] [rbp-128h]
  unsigned __int64 v78; // [rsp+A8h] [rbp-120h]
  int v79[4]; // [rsp+B0h] [rbp-118h] BYREF
  int v80[2]; // [rsp+C0h] [rbp-108h]
  __int64 v81; // [rsp+C8h] [rbp-100h] BYREF
  int v82; // [rsp+D0h] [rbp-F8h]
  int v83; // [rsp+D8h] [rbp-F0h]
  int v84; // [rsp+E0h] [rbp-E8h]
  int v85; // [rsp+E8h] [rbp-E0h]
  int v86; // [rsp+F0h] [rbp-D8h]
  int v87; // [rsp+F8h] [rbp-D0h]
  int v88; // [rsp+100h] [rbp-C8h]
  int v89; // [rsp+108h] [rbp-C0h]
  int v90; // [rsp+110h] [rbp-B8h]
  int v91; // [rsp+118h] [rbp-B0h]
  int v92; // [rsp+120h] [rbp-A8h]
  int v93; // [rsp+128h] [rbp-A0h]
  int v94; // [rsp+130h] [rbp-98h]
  int v95; // [rsp+138h] [rbp-90h]
  __int64 v96; // [rsp+140h] [rbp-88h]
  _QWORD v97[8]; // [rsp+188h] [rbp-40h] BYREF

  v65 = a3;
  v59 = a4;
  v97[0] = __readfsqword(0x28u);
  v62 = *(_DWORD *)a2 & 0x4000;
  if ( v62 )
    return a4;
  v61 = *(_DWORD *)(a2 + 8);
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
  {
    v5 = *(_DWORD *)a2 & 0x404;
    v53 = v5;
    v54 = *(_DWORD *)(a2 + 24);
    if ( v5 )
    {
LABEL_4:
      if ( v5 != 4 )
      {
        v6 = v5 == 1024;
        v7 = 8;
        if ( v6 )
          v7 = 1;
        v53 = v7;
      }
      goto LABEL_8;
    }
  }
  else
  {
    v5 = *(_DWORD *)a2 & 0x404;
    v53 = v5;
    v54 = *(unsigned __int16 *)(a2 + 4);
    if ( v5 )
      goto LABEL_4;
  }
  v53 = 2;
LABEL_8:
  v60 = a1 + 194;
  v8 = sub_4EE820(a1 + 194, v61);
  v52 = -1;
  if ( v8 )
    v52 = *(_DWORD *)(v8 + 4);
  v51 = sub_4EE820(v60, v65);
  if ( !v51 )
    return 0;
  if ( (*(_BYTE *)(a2 + 1) & 2) != 0 )
    segm_base = *(_DWORD *)(a2 + 32);
  else
    segm_base = get_segm_base(v51);
  v69 = 0;
  v67 = sub_39CC50((__int64)a1);
  if ( v67 == 40 )
    v69 = sub_5AFCE0(a1);
  v74 = 0;
  v50 = &v74;
  v76 = &v74;
  v77 = &v74;
  v10 = *(_DWORD *)a2;
  v75 = nullptr;
  v78 = 0;
  HIBYTE(v66) = v59 == 2;
  if ( (v10 & 0x10000) != 0 )
  {
    if ( v54 <= 0 )
    {
      v68 = 0;
      v12 = 0;
      BYTE2(v64) = 0;
      goto LABEL_59;
    }
    BYTE2(v66) = 0;
    BYTE1(v64) = 0;
  }
  else
  {
    BYTE1(v64) = *(_WORD *)(a2 + 4) == 0xFFFF;
    BYTE2(v66) = HIBYTE(v66) & BYTE1(v64);
    if ( v54 <= 0 )
    {
      v68 = 0;
      v12 = 0;
      BYTE2(v64) = 0;
      goto LABEL_116;
    }
  }
  v58 = 0;
  v11 = v61;
  v12 = 0;
  BYTE2(v64) = 0;
  v68 = 0;
  do
  {
    v13 = v11;
    v11 += v53;
    if ( v52 < v11 )
      break;
    v14 = sub_3B9AA0((__int64)a1, v13, 1);
    v15 = v14;
    if ( (v14 & 0x100) == 0 )
      break;
    if ( (v14 & 0x600) != 0x200 || v13 < v58 )
      goto LABEL_23;
    v40 = sub_3BD5D0((__int64)a1, v13);
    v41 = sub_3B9AA0((__int64)a1, v40, 4);
    v42 = v41 & 0x600;
    if ( v42 == 1024 )
    {
      if ( (v41 & 0xF0000000) == 0x60000000 )
        goto LABEL_83;
      v58 = sub_3BCF60((__int64)a1, v13);
LABEL_23:
      if ( !v12 )
        goto LABEL_26;
      goto LABEL_24;
    }
    if ( !v12 )
    {
      if ( v42 == 1536 )
        goto LABEL_83;
      v58 = sub_3BCF60((__int64)a1, v13);
      goto LABEL_26;
    }
    v58 = sub_3BCF60((__int64)a1, v13);
LABEL_24:
    v10 = *(_DWORD *)a2;
    if ( (*(_DWORD *)a2 & 0x400000) == 0 && (v15 & 0xD000) != 0 )
      goto LABEL_58;
LABEL_26:
    v71 = sub_437AB0(a1, (unsigned int *)a2, v13, segm_base, v51, v9);
    v16 = v71;
    v17 = v75;
    if ( v75 )
    {
      v18 = v50;
      do
      {
        while ( 1 )
        {
          v19 = v17[2];
          v20 = v17[3];
          if ( *((_DWORD *)v17 + 8) < v71 )
            break;
          v18 = (int *)v17;
          v17 = (_QWORD *)v17[2];
          if ( !v19 )
            goto LABEL_31;
        }
        v17 = (_QWORD *)v17[3];
      }
      while ( v20 );
LABEL_31:
      if ( v18 != v50 && v71 >= v18[8] )
        goto LABEL_56;
    }
    if ( !v71 )
      break;
    HIBYTE(v64) = sub_3BB2F0((__int64)a1, v71);
    if ( !HIBYTE(v64) )
      break;
    v63 = sub_3B9AA0((__int64)a1, v16, 4);
    *(_QWORD *)v56 = v63 & 0x600;
    if ( *(_QWORD *)v56 == 1024 )
    {
      if ( BYTE2(v66) )
        break;
      *(_QWORD *)v80 = 0;
      v81 = 0;
      *(_OWORD *)v79 = 0;
      sub_3CC010((_DWORD)a1, v16, 0);
      if ( *(_QWORD *)v80 )
        (*(void (__fastcall **)(int *, int *, __int64))v80)(v79, v79, 3);
      if ( (*(_BYTE *)(a2 + 2) & 0x40) == 0 )
        goto LABEL_40;
    }
    else
    {
      if ( *(_QWORD *)v56 == 1536 )
        goto LABEL_47;
      if ( (*(_BYTE *)(a2 + 2) & 0x40) == 0 )
      {
        if ( *(_QWORD *)v56 == 512 )
        {
          v22 = sub_3BD5D0((__int64)a1, v16);
          if ( (~((unsigned __int16)sub_3B9AA0((__int64)a1, v22, 4) >> 8) & 6) == 0 )
          {
            if ( sub_4EE820(a1 + 203, v16) )
              break;
          }
        }
LABEL_40:
        *(_QWORD *)v80 = 0;
        *(_QWORD *)v79 = -1;
        *(_QWORD *)&v79[2] = 0xFFFFFFFFLL;
        v23 = &v81;
        do
        {
          *(_WORD *)v23 = 0;
          v23 += 3;
          *((_WORD *)v23 - 11) = 0;
          *((_WORD *)v23 - 10) = 0;
          *((_DWORD *)v23 - 1) = 0;
          *((_WORD *)v23 - 9) = 0;
          *(v23 - 2) = 0;
          *((_DWORD *)v23 - 2) = 0;
        }
        while ( v97 != v23 );
        if ( (int)decode_insn(v79, v16, v97, v21, 0, 0) <= 0 )
          break;
      }
    }
    v24 = sub_4EE820(v60, v16);
    if ( !v24 || v51 != v24 && (*(_BYTE *)(v24 + 22) & 1) == 0 && *(_BYTE *)(v24 + 96) != 2 )
      break;
LABEL_47:
    v25 = *(_DWORD *)(a2 + 16);
    BYTE2(v64) |= v25 == v16;
    if ( BYTE2(v64) || (*(_WORD *)a2 & 0x180) != 0 )
      goto LABEL_48;
    *(_QWORD *)v79 = -1;
    *(_QWORD *)v80 = 0;
    *(_QWORD *)&v79[2] = 0xFFFFFFFFLL;
    v34 = &v81;
    do
    {
      *(_WORD *)v34 = 0;
      v34 += 3;
      *((_WORD *)v34 - 11) = 0;
      *((_WORD *)v34 - 10) = 0;
      *((_DWORD *)v34 - 1) = 0;
      *((_WORD *)v34 - 9) = 0;
      *(v34 - 2) = 0;
      *((_DWORD *)v34 - 2) = 0;
    }
    while ( v97 != v34 );
    if ( *(_QWORD *)v56 == 1536 && (v63 & 0x10000000) != 0 )
    {
      if ( v25 == -1 )
        goto LABEL_107;
      v43 = sub_5AFCE0(a1);
      if ( (int)sub_5AEEA0(a1, v43, v25) >= 0 )
        goto LABEL_130;
LABEL_104:
      v39 = *(_DWORD *)(a2 + 16);
      if ( v39 == -1 )
        goto LABEL_107;
      if ( (v63 & 0x10000) != 0 )
      {
        v44 = sub_3BD5D0((__int64)a1, v16);
        v39 = *(_DWORD *)(a2 + 16);
        if ( v39 != v44 )
        {
          if ( v67 == 40 )
            goto LABEL_138;
          if ( v39 != v44 )
          {
LABEL_107:
            ++v68;
            goto LABEL_48;
          }
        }
      }
      else
      {
        if ( v67 != 40 )
          goto LABEL_107;
LABEL_138:
        v45 = v16;
        if ( v16 != v39 )
        {
          do
          {
            BYTE4(v72) = 0;
            LODWORD(v72) = -1;
            sub_3DC190(a1, (__int64)&v72, v45);
            if ( (_DWORD)v72 == *(_DWORD *)(a2 + 16) )
              break;
            v46 = sub_3BD3E0((__int64)a1, v45);
            v45 = v46;
            if ( v46 == -1 )
              goto LABEL_107;
            v47 = sub_3B9AA0((__int64)a1, v46, 4);
            if ( (~(_WORD)v47 & 0x600) != 0 || (v47 & 0x10000) == 0 )
              goto LABEL_107;
          }
          while ( v45 != *(_DWORD *)(a2 + 16) );
        }
      }
LABEL_130:
      BYTE2(v64) = HIBYTE(v64);
      goto LABEL_48;
    }
    if ( v67 != 25 && v67 != 20 && !HIBYTE(v66)
      || (int)sub_5AEEA0(a1, v69, v16) >= 0
      || (int)decode_insn(v79, v16, v35, v36, v37, v38) <= 0
      || sub_375980(0x24u, v79, 0) <= 50
      || (unsigned __int8)sub_4B5BC0(a1, v79, 3) )
    {
      goto LABEL_48;
    }
    if ( (*(_BYTE *)(a2 + 2) & 0x40) != 0 )
      goto LABEL_104;
    if ( BYTE1(v81) != 7 )
      goto LABEL_104;
    if ( (int)sub_55E700(
                (int)a1,
                v16,
                v49,
                (int)v50,
                v51,
                v52,
                v54,
                v56[0],
                v58,
                (int)v60,
                v61,
                v63,
                v64,
                v66,
                v68,
                v69,
                v70,
                v72,
                v73,
                v74,
                (int)v75,
                (int)v76,
                (int)v77,
                v78,
                v79[0],
                v79[2],
                v80[0],
                v81,
                v82,
                v83,
                v84,
                v85,
                v86,
                v87,
                v88,
                v89,
                v90,
                v91,
                v92,
                v93,
                v94,
                v95,
                v96) <= 0 )
      goto LABEL_104;
    BYTE4(v72) = 0;
    LODWORD(v72) = -1;
    sub_3DD450(a1, (__int64)&v72, v16);
    if ( (_DWORD)v72 == -1 || BYTE4(v72) == 21 )
      goto LABEL_104;
    v48 = v72 + 1;
    v57 = v72;
    auto_mark_range((unsigned int)v72, (unsigned int)(v72 + 1), 20);
    auto_mark_range(v57, v48, 30);
LABEL_48:
    if ( BYTE1(v64) && (*(_BYTE *)(a2 + 2) & 0x40) == 0 )
    {
      v26 = v16;
      if ( v52 <= v16 )
        v26 = v52;
      if ( v16 < v61 )
        v26 = v52;
      v52 = v26;
    }
    sub_41BFC0(&v73, &v71);
LABEL_56:
    ++v12;
  }
  while ( v54 != v12 );
  v10 = *(_DWORD *)a2;
LABEL_58:
  if ( (v10 & 0x10000) != 0 )
  {
LABEL_59:
    if ( *(_DWORD *)(a2 + 24) > v12 )
    {
      *(_DWORD *)(a2 + 24) = v12;
      if ( (v10 & 1) != 0 )
      {
        v27 = 2;
        v28 = v10 & 0x802;
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
            v31 = (unsigned int)(*(_DWORD *)(a2 + 12) + v62);
            v72 = 0;
            if ( sub_3BAE00(a1, &v72, v27, v31, 0, 0) != v27 )
              break;
            if ( v72 >= v12 )
              break;
            ++v30;
            v62 += v27;
          }
          while ( *(unsigned __int16 *)(a2 + 4) > v30 );
          v29 = v30;
        }
        *(_WORD *)(a2 + 4) = v29;
      }
    }
    goto LABEL_72;
  }
LABEL_116:
  if ( *(unsigned __int16 *)(a2 + 4) > v12 )
    *(_WORD *)(a2 + 4) = v12;
LABEL_72:
  if ( *(_DWORD *)(a2 + 20) == -1 )
    *(_DWORD *)(a2 + 20) = v65;
  if ( !v78 )
    goto LABEL_84;
  if ( v59 == 1 )
  {
    if ( BYTE2(v64) || 5 * v68 < 2 * v78 || v69 && (unsigned int)sub_59EE50(a1, v69, v65) )
      goto LABEL_123;
    goto LABEL_133;
  }
  if ( v59 != 2 )
    goto LABEL_84;
  if ( !BYTE2(v64) && v78 < 5 * v68 )
  {
LABEL_133:
    v59 = 2;
    goto LABEL_84;
  }
  *(_QWORD *)v79 = -1;
  *(_QWORD *)v80 = 0;
  *(_QWORD *)&v79[2] = 0xFFFFFFFFLL;
  v32 = &v81;
  do
  {
    *(_WORD *)v32 = 0;
    v32 += 3;
    *((_WORD *)v32 - 11) = 0;
    *((_WORD *)v32 - 10) = 0;
    *((_DWORD *)v32 - 1) = 0;
    *((_WORD *)v32 - 9) = 0;
    *(v32 - 2) = 0;
    *((_DWORD *)v32 - 2) = 0;
  }
  while ( v97 != v32 );
  if ( (int)decode_insn(v79, v65, v97, 0, 0, v9) > 0 && (unsigned __int8)is_call_insn(v79) )
  {
LABEL_83:
    v59 = 0;
    goto LABEL_84;
  }
LABEL_123:
  v59 = 1;
LABEL_84:
  sub_4373C0(v75);
  return v59;
}

