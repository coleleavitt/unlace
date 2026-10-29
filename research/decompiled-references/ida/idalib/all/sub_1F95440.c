__int64 __fastcall sub_1F95440(__int64 **a1, __int64 a2)
{
  _BOOL8 v4; // rsi
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r8
  char v9; // dl
  __int64 v10; // rcx
  char v11; // si
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 *v14; // r12
  __int64 v15; // r14
  unsigned int v16; // r13d
  __int64 *v17; // r14
  __int64 *v18; // r12
  __int64 v19; // rsi
  __int64 *v20; // r13
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rsi
  char v28; // dl
  unsigned __int8 *v29; // r12
  char v30; // al
  __int64 *v31; // r14
  unsigned __int8 *v32; // r13
  __int64 v33; // rsi
  char v34; // al
  __int64 v35; // rsi
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // r8
  unsigned __int64 v40; // r9
  unsigned __int8 v41; // si
  char v42; // dl
  __int64 v43; // r13
  __int64 v44; // rcx
  unsigned __int64 v45; // rsi
  char v46; // cl
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rcx
  unsigned __int64 v50; // r8
  unsigned __int8 v51; // r13
  char v52; // dl
  __int64 v53; // r13
  __int64 v54; // rdi
  unsigned __int64 v55; // r8
  char v56; // di
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned int v59; // eax
  int v60; // eax
  __int64 v61; // rsi
  __int64 *v63; // r13
  __int64 *v64; // r14
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  unsigned __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 *v70; // r14
  unsigned __int64 v71; // rdi
  unsigned __int8 *v72; // r12
  unsigned __int8 *v73; // r13
  __int64 v74; // rsi
  unsigned __int64 v75; // r12
  __int64 v76; // rdx
  __int64 v77; // rax
  unsigned __int64 v78; // r8
  __int64 v79; // rdx
  unsigned __int64 v80; // r12
  unsigned __int64 v81; // r12
  __int64 *v82; // r15
  __int64 v83; // rsi
  __int64 *v84; // r12
  __int64 *v85; // r13
  __int64 v86; // rax
  __int64 v87; // r14
  unsigned int v88; // [rsp+10h] [rbp-68h] BYREF
  __int64 *v89; // [rsp+18h] [rbp-60h]
  __int64 v90; // [rsp+20h] [rbp-58h]
  __int64 v91; // [rsp+28h] [rbp-50h]
  __int64 v92; // [rsp+30h] [rbp-48h]
  __int64 v93; // [rsp+38h] [rbp-40h]

  sub_9B9C90((*a1)[2], (unsigned __int8)BYTE3(*(_QWORD *)(a2 + 16)) >> 7);
  sub_9B9C90((*a1)[2], *(_DWORD *)(a2 + 20) & 1);
  v4 = (*(_DWORD *)(a2 + 20) & 2) != 0;
  sub_9B9C90((*a1)[2], v4);
  v6 = *(_QWORD *)(a2 + 16);
  if ( (v6 & 0x1000000) != 0 )
  {
    v7 = *(unsigned __int16 *)(a2 + 22);
    v8 = 8 * v7 + 48;
    v9 = *(_BYTE *)(a2 + 19);
    v10 = (v6 & 0x40000000) != 0;
    if ( (v9 & 0x40) != 0 )
      v10 += (*(_BYTE *)(((a2 + v8 + ((v9 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
    v11 = ((unsigned __int8)v9 >> 1) & 0xF;
    if ( v11 != 2 )
      __asm { jmp     rdx }
    v12 = ((a2 + v8 + ((SBYTE3(v6) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL)
        + 8 * v10
        + 8LL * (*(_WORD *)((a2 + ((v9 >> 5) & 4) + v8 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
    if ( (v6 & 0x20000000) != 0 )
      v12 += v7;
    v13 = *(_QWORD *)((v12 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else if ( *(_BYTE *)(a2 + 16) == 26
         || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
         && sub_F63050(a2, v4, v6 >> 24, v5) )
  {
    v13 = *(_BYTE *)(a2 + 18) >> 5;
  }
  else
  {
    v13 = 0;
  }
  sub_9B9C90((*a1)[2], v13);
  sub_9B9C90((*a1)[2], (*(_BYTE *)(a2 + 18) >> 3) & 3);
  sub_1F6DB60((__int64)&v88, a2);
  v14 = *a1;
  v15 = v92;
  v16 = v88;
  sub_9B9C90((*a1)[2], v88);
  if ( v16 == 2 )
  {
    v63 = v89;
    v64 = &v89[v90];
    sub_9B9C90(v14[2], (unsigned int)v90);
    while ( v64 != v63 )
    {
      v67 = *v63++;
      sub_1F85840(v14[1], *v14, v67, (_QWORD *)v14[2], v65, v66);
    }
  }
  else if ( v16 - 6 <= 2 )
  {
    sub_183F100((__int64)(v14 + 3), v91);
  }
  else if ( v16 == 10 )
  {
    sub_1F952B0((__int64)v14, v15);
    sub_1F952B0((__int64)v14, v93);
  }
  else if ( v16 == 9 )
  {
    sub_1F952B0((__int64)v14, v15);
  }
  v17 = *a1;
  v18 = (__int64 *)(a2 + 48);
  v19 = 8LL * *(unsigned __int16 *)(a2 + 22);
  v20 = (__int64 *)(a2 + 48 + v19);
  sub_9B9C90((*a1)[2], v19 >> 3);
  if ( (__int64 *)(a2 + 48) != v20 )
  {
    do
    {
      v23 = *v18++;
      sub_1F85840(v17[1], *v17, v23, (_QWORD *)v17[2], v21, v22);
    }
    while ( v20 != v18 );
  }
  v24 = *(_QWORD *)(a2 + 16) >> 24;
  if ( (v24 & 0x20) != 0 )
  {
    v25 = *(unsigned __int16 *)(a2 + 22);
    v26 = (v24 & 0x40) != 0;
    v27 = 8 * v25 + 48;
    v28 = *(_BYTE *)(a2 + 19);
    if ( (v28 & 0x40) != 0 )
      v26 += (*(_BYTE *)(((a2 + v27 + ((v28 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
    v29 = (unsigned __int8 *)(((a2 + v27 + (((char)BYTE3(*(_QWORD *)(a2 + 16)) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL)
                            + 8 * v26);
    v30 = ((unsigned __int8)v28 >> 1) & 0xF;
    if ( v30 != 2 )
    {
      switch ( v30 )
      {
        case 0:
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 11:
          switch ( v30 )
          {
            case 6:
            case 7:
            case 8:
              v29 += 8;
              goto LABEL_23;
            case 9:
              goto LABEL_24;
            case 10:
              goto LABEL_58;
            default:
LABEL_23:
              switch ( v30 )
              {
                case 0:
                case 1:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 11:
                  goto LABEL_25;
                case 9:
                  goto LABEL_24;
                case 10:
                  goto LABEL_58;
                default:
                  return sub_1F95E20();
              }
          }
        case 9:
LABEL_24:
          v29 += 8;
          goto LABEL_25;
        case 10:
LABEL_58:
          v29 += 16;
          goto LABEL_25;
        default:
          return sub_1F95E20();
      }
    }
    v29 += 8 * (*(_WORD *)((a2 + ((v28 >> 5) & 4) + v27 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_25:
    v31 = *a1;
    v32 = &v29[v25];
    sub_9B9C90((*a1)[2], *(unsigned __int16 *)(a2 + 22));
    while ( v29 != v32 )
    {
      v33 = *v29++;
      sub_9B9C90(v31[2], v33);
    }
  }
  else
  {
    sub_9B9C90((*a1)[2], 0);
  }
  v34 = *(_BYTE *)(a2 + 19);
  v35 = 0;
  if ( (v34 & 0x40) != 0 )
  {
    v36 = (a2 + ((v34 >> 5) & 4) + 8LL * *(unsigned __int16 *)(a2 + 22) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v36 + 1) & 4) != 0 )
      v35 = *(_WORD *)(v36 + 8) & 0x1FF;
  }
  sub_9B9C90((*a1)[2], v35);
  v37 = *(_QWORD *)(a2 + 16) >> 24;
  if ( (v37 & 0x40) != 0
    && (v38 = *(unsigned __int16 *)(a2 + 22),
        v39 = 8 * v38 + 48,
        v40 = (a2 + v39 + (((char)v37 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL,
        v41 = *(_BYTE *)(v40 + 1),
        (v41 & 0xF0) != 0) )
  {
    v42 = *(_BYTE *)(a2 + 19);
    v43 = v41 >> 4;
    v44 = (v37 & 0x40) != 0;
    if ( (v42 & 0x40) != 0 )
      v44 += (*(_BYTE *)(((a2 + v39 + ((v42 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
    v45 = v40 + 8 * v44;
    v46 = ((unsigned __int8)v42 >> 1) & 0xF;
    if ( v46 != 2 )
    {
      switch ( v46 )
      {
        case 0:
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 11:
          switch ( v46 )
          {
            case 6:
            case 7:
            case 8:
              v45 += 8LL;
              goto LABEL_82;
            case 9:
              goto LABEL_87;
            case 10:
              goto LABEL_86;
            default:
LABEL_82:
              switch ( v46 )
              {
                case 0:
                case 1:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 11:
                  goto LABEL_61;
                case 9:
                  goto LABEL_87;
                case 10:
                  goto LABEL_86;
                default:
                  return sub_1F95E20();
              }
          }
        case 9:
LABEL_87:
          v68 = v45 + 8;
          v69 = 8;
          goto LABEL_62;
        case 10:
LABEL_86:
          v68 = v45 + 16;
          v69 = 16;
          goto LABEL_62;
        default:
          return sub_1F95E20();
      }
    }
    v45 += 8LL * (*(_WORD *)((a2 + ((v42 >> 5) & 4) + v39 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_61:
    v68 = v45;
    v69 = 0;
LABEL_62:
    v70 = *a1;
    v71 = v45 + v69 + v38;
    if ( (*(_QWORD *)(a2 + 16) & 0x20000000LL) != 0 )
      v68 = v71;
    v72 = (unsigned __int8 *)(((v68 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * ((*(_QWORD *)(a2 + 16) >> 24) & 1LL));
    sub_9B9C90(v70[2], v43);
    v73 = &v72[v43];
    while ( v72 != v73 )
    {
      v74 = *v72++;
      sub_9B9C90(v70[2], v74);
    }
  }
  else
  {
    sub_9B9C90((*a1)[2], 0);
  }
  v47 = *(_QWORD *)(a2 + 16) >> 24;
  if ( (v47 & 0x40) != 0
    && (v48 = *(unsigned __int16 *)(a2 + 22),
        v49 = 8 * v48 + 48,
        v50 = (a2 + v49 + (((char)v47 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL,
        v51 = *(_BYTE *)(v50 + 1),
        (v51 & 8) != 0) )
  {
    v52 = *(_BYTE *)(a2 + 19);
    v53 = v51 >> 4;
    v54 = (v47 & 0x40) != 0;
    if ( (v52 & 0x40) != 0 )
      v54 += (*(_BYTE *)(((a2 + v49 + ((v52 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
    v55 = v50 + 8 * v54;
    v56 = ((unsigned __int8)v52 >> 1) & 0xF;
    if ( v56 != 2 )
    {
      switch ( v56 )
      {
        case 0:
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 11:
          switch ( v56 )
          {
            case 6:
            case 7:
            case 8:
              v55 += 8LL;
              goto LABEL_80;
            case 9:
              goto LABEL_89;
            case 10:
              goto LABEL_88;
            default:
LABEL_80:
              switch ( v56 )
              {
                case 0:
                case 1:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 11:
                  goto LABEL_68;
                case 9:
                  goto LABEL_89;
                case 10:
                  goto LABEL_88;
                default:
                  return sub_1F95E20();
              }
          }
        case 9:
LABEL_89:
          v75 = v55 + 8;
          v76 = 8;
          goto LABEL_69;
        case 10:
LABEL_88:
          v75 = v55 + 16;
          v76 = 16;
          goto LABEL_69;
        default:
          return sub_1F95E20();
      }
    }
    v55 += 8LL * (*(_WORD *)((a2 + v49 + ((v52 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_68:
    v75 = v55;
    v76 = 0;
LABEL_69:
    v77 = *(_QWORD *)(a2 + 16) >> 24;
    v78 = v76 + v48 + v55;
    if ( (v77 & 0x20) != 0 )
      v75 = v78;
    v79 = 8 * ((*(_QWORD *)(a2 + 16) >> 24) & 1LL);
    v80 = (v75 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v77 & 0x40) != 0 )
      v81 = v79 + (*(_BYTE *)(((a2 + (((char)v77 >> 5) & 4) + v49 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) >> 4) + v80;
    else
      v81 = v79 + v80;
    v82 = *a1;
    v83 = v53;
    v84 = (__int64 *)((v81 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v85 = &v84[v53];
    sub_9B9C90((*a1)[2], v83);
    if ( v85 != v84 )
    {
      v86 = *((unsigned int *)v82 + 8);
      do
      {
        v87 = *v84;
        if ( v86 + 1 <= (unsigned __int64)*((unsigned int *)v82 + 9) )
        {
          *(_QWORD *)(v82[3] + 8 * v86) = v87;
        }
        else
        {
          sub_2237220(v82 + 3, v82 + 5, v86 + 1, 8);
          *(_QWORD *)(v82[3] + 8LL * *((unsigned int *)v82 + 8)) = v87;
        }
        ++v84;
        v86 = (unsigned int)(*((_DWORD *)v82 + 8) + 1);
        *((_DWORD *)v82 + 8) = v86;
      }
      while ( v85 != v84 );
    }
  }
  else
  {
    sub_9B9C90((*a1)[2], 0);
  }
  sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 24), (_QWORD *)(*a1)[2], v57, v58);
  sub_9B9C90((*a1)[2], *(_BYTE *)(a2 + 21) & 1);
  sub_9B9C90((*a1)[2], (*(_BYTE *)(a2 + 21) & 0x38) != 0);
  v59 = *(unsigned __int16 *)(a2 + 20);
  LOWORD(v59) = (unsigned __int16)v59 >> 2;
  v60 = (v59 >> 9) & 7;
  v61 = (unsigned int)(v60 - 1);
  if ( !v60 )
    v61 = 0;
  sub_9B9C90((*a1)[2], v61);
  sub_9B9C90((*a1)[2], (*(_WORD *)(a2 + 20) >> 2) & 0x3F);
  sub_9B9C90((*a1)[2], (*(_WORD *)(a2 + 20) & 0x200) != 0);
  sub_9B9C90((*a1)[2], (*(_WORD *)(a2 + 20) & 0x400) != 0);
  sub_9B9C90((*a1)[2], (*(_WORD *)(a2 + 20) & 0x4000) != 0);
  return sub_9B9C90((*a1)[2], *(_WORD *)(a2 + 20) >> 15);
}
