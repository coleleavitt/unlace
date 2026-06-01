__int64 __fastcall sub_C070(__int64 a1, unsigned int a2, __int64 a3)
{
  __int16 v4; // r9
  unsigned __int16 *v6; // rdx
  __int64 v7; // rsi
  unsigned __int64 v8; // r15
  __int16 *v9; // rax
  unsigned __int64 v10; // r12
  __int16 v11; // ax
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rdx
  unsigned int v17; // r15d
  __int16 *v18; // rdi
  char *v19; // rsi
  __int16 v20; // ax
  unsigned int v21; // eax
  __int64 v22; // rax
  char v23; // dl
  const char *v24; // rax
  const char *v25; // rcx
  int segm_qty; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r13
  __int64 v30; // rsi
  _QWORD *v31; // r11
  __int64 v32; // r9
  __int64 v33; // r10
  __int64 v34; // r10
  __int16 v35; // ax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 v44; // [rsp+0h] [rbp-548h]
  char v45; // [rsp+10h] [rbp-538h]
  __int64 v46; // [rsp+10h] [rbp-538h]
  _QWORD *v47; // [rsp+10h] [rbp-538h]
  const char *v48; // [rsp+10h] [rbp-538h]
  unsigned __int64 v49; // [rsp+18h] [rbp-530h]
  __int64 v50; // [rsp+20h] [rbp-528h]
  int v51; // [rsp+28h] [rbp-520h]
  __int64 v52; // [rsp+28h] [rbp-520h]
  __int64 v53; // [rsp+28h] [rbp-520h]
  __int64 v54; // [rsp+38h] [rbp-510h] BYREF
  _OWORD v55[2]; // [rsp+40h] [rbp-508h] BYREF
  __int64 v56; // [rsp+60h] [rbp-4E8h]
  __int64 v57; // [rsp+68h] [rbp-4E0h]
  __int64 v58; // [rsp+70h] [rbp-4D8h]
  __int128 v59; // [rsp+78h] [rbp-4D0h]
  __int128 v60; // [rsp+88h] [rbp-4C0h]
  __int128 v61; // [rsp+98h] [rbp-4B0h]
  __int128 v62; // [rsp+A8h] [rbp-4A0h]
  __int128 v63; // [rsp+B8h] [rbp-490h]
  __int128 v64; // [rsp+C8h] [rbp-480h]
  __int128 v65; // [rsp+D8h] [rbp-470h]
  __int128 v66; // [rsp+E8h] [rbp-460h]
  unsigned __int64 v67; // [rsp+F8h] [rbp-450h]
  int v68; // [rsp+100h] [rbp-448h] BYREF
  __int16 v69; // [rsp+104h] [rbp-444h]
  unsigned __int64 v70; // [rsp+508h] [rbp-40h]

  v4 = **(_WORD **)(a1 + 24);
  v70 = __readfsqword(0x28u);
  sub_90A0(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 40LL), (unsigned int *)a3, 0x10u, (char *)&v68, 0x400u, v4);
  v6 = *(unsigned __int16 **)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 16);
  memset(v55, 0, sizeof(v55));
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v67 = 0xFFFFFFFF00000000LL;
  v59 = -1;
  v60 = -1;
  v61 = -1;
  v62 = -1;
  v63 = -1;
  v64 = -1;
  v65 = -1;
  v66 = -1;
  sub_5230((__int64)v55, v7, v6, a3);
  v8 = *(_QWORD *)(a3 + 32);
  if ( !v8 )
  {
    LOBYTE(v67) = 7;
    v8 = 1;
  }
  v9 = *(__int16 **)(a1 + 24);
  v10 = 0;
  if ( (v9[1] & 1) == 0 )
    v10 = *(_QWORD *)(a3 + 24);
  v11 = *v9;
  v12 = *(_QWORD *)(a1 + 8);
  if ( ((unsigned __int16)(v11 - 193) <= 1u || v11 == 147) && *(_DWORD *)(v12 + 24) == 28 )
    v10 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)&v55[0] = v10;
  LODWORD(v13) = (2 << SBYTE3(v57)) - 1;
  switch ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL) )
  {
    case 0xE:
      v51 = 1;
      v14 = v10;
      v13 = 31;
      v45 = 0;
      break;
    case 0xF:
      v51 = 1;
      if ( v10 )
      {
        v14 = v10;
        v13 = 3;
      }
      else
      {
        v14 = 0;
        v13 = 15;
      }
      v45 = 0;
      break;
    case 0x15:
    case 0x1A:
      v13 = (int)v13;
      if ( v10 > 0xFF )
        goto LABEL_74;
      *(_QWORD *)&v55[0] = 256;
      v14 = 256;
      v51 = 1;
      v45 = 0;
      break;
    case 0x22:
      v13 = (int)v13;
      if ( (*(_BYTE *)(a3 + 72) & 0x20) != 0 )
      {
LABEL_74:
        v51 = 1;
        v14 = v10;
        v45 = 0;
      }
      else
      {
        v51 = 1;
        v14 = v10 + 0x80000000;
        v45 = 1;
        *(_QWORD *)&v55[0] = v10 + 0x80000000;
      }
      break;
    case 0x3A:
      v51 = 1;
      v14 = v10;
      v13 = 1;
      v45 = 0;
      break;
    case 0x44:
      if ( (*(_BYTE *)(a3 + 72) & 0x20) != 0 )
      {
        v51 = 6;
        v37 = 6;
      }
      else
      {
        v51 = 2;
        v37 = 2;
      }
      v45 = 0;
      v14 = v10;
      v38 = v8 / v37;
      v13 = 0;
      v8 = v38;
      break;
    default:
      v51 = 1;
      v13 = (int)v13;
      v14 = v10;
      v45 = 0;
      break;
  }
  *(_QWORD *)&v55[0] = sub_BEC0(v12, v14, v8, v13);
  v15 = *(_QWORD *)&v55[0];
  if ( *(_QWORD *)&v55[0] != -1 )
  {
    if ( !(unsigned __int8)sub_B6F0(*(_QWORD *)(a1 + 8), (__int64)v55, (__int64)&v68, v8, a2, v45 & 1)
      || (v15 = *(_QWORD *)&v55[0], *(_QWORD *)&v55[0] == -1) )
    {
      *(_DWORD *)(a1 + 32) = a2;
      return 0;
    }
  }
  v16 = *(_QWORD *)(a1 + 8);
  v50 = *((_QWORD *)&v55[0] + 1);
  v17 = (*(_WORD *)(v16 + 165) & 0x10) == 0 ? 33 : 49;
  v49 = *(_QWORD *)(a3 + 32);
  if ( v49 )
  {
    v49 = *(_QWORD *)(a3 + 40);
    if ( v49 )
    {
      v49 += *(_QWORD *)(v16 + 16);
      v42 = qlsize(*(_QWORD *)(v16 + 8));
      if ( v49 >= v42 || v42 - v49 < (*((_QWORD *)&v55[0] + 1) - *(_QWORD *)&v55[0]) * v51 )
        sub_6000((__int64)"Too big segment #%d (%s)", a2, (const char *)&v68);
      v16 = *(_QWORD *)(a1 + 8);
    }
  }
  v18 = *(__int16 **)(a1 + 24);
  v19 = (char *)*(unsigned int *)(a3 + 72);
  v20 = *v18;
  if ( (unsigned __int16)(*v18 - 193) > 1u && v20 != 147 )
  {
    v23 = 1;
    if ( v20 == 21020 )
      goto LABEL_22;
    v21 = *(_DWORD *)(a3 + 72);
    goto LABEL_19;
  }
  v21 = *(_DWORD *)(a3 + 72);
  if ( *(_DWORD *)(v16 + 24) != 28 )
  {
LABEL_19:
    v22 = ((v21 >> 20) & 0xF) - 1;
    goto LABEL_20;
  }
  v22 = ((unsigned int)v19 >> 8) & 0xF;
LABEL_20:
  switch ( v22 )
  {
    case 0LL:
      v23 = 1;
      break;
    case 1LL:
      v23 = 2;
      break;
    case 2LL:
      v23 = 5;
      break;
    case 3LL:
      v23 = 10;
      break;
    case 5LL:
      v23 = 8;
      break;
    case 6LL:
      v23 = 9;
      break;
    default:
      v23 = 3;
      break;
  }
LABEL_22:
  LOBYTE(v57) = v23;
  BYTE1(v57) = 2;
  if ( (v18[1] & 1) != 0 )
  {
    if ( ((unsigned int)v19 & 0x20000000) != 0 )
      BYTE2(v57) |= 1u;
    if ( ((unsigned int)v19 & 0x40000000) != 0 )
      BYTE2(v57) |= 4u;
    if ( (int)v19 < 0 )
      BYTE2(v57) |= 2u;
  }
  v24 = sub_B880(v18, (int)v19, (const char *)&v68);
  v25 = v24;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 175LL) == -1 )
  {
    if ( v24 )
    {
      v19 = "DATA";
      v53 = *(_QWORD *)(a1 + 8);
      v48 = v24;
      v40 = strcmp(v24, "DATA");
      v25 = v48;
      if ( !v40 )
        *(_QWORD *)(v53 + 175) = v58;
    }
  }
  v46 = (__int64)v25;
  segm_qty = get_segm_qty();
  v28 = v46;
  if ( segm_qty > 63 )
  {
    if ( segm_qty == 64 )
    {
      sub_5CC0((__int64)"Too many segments, future segment addition messages will not be displayed...\n", v19, v27, v46);
      v28 = v46;
    }
    v17 |= 8u;
  }
  sub_BDE0(*(_QWORD *)(a1 + 8), v55, (__int64)&v68, v28, v17);
  v29 = (int)a2;
  v30 = *(_QWORD *)&v55[0];
  v31 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 141LL);
  v32 = 32LL * (int)a2;
  v33 = *(_QWORD *)&v55[0];
  *(_QWORD *)(*v31 + v32 + 8) = *(_QWORD *)&v55[0];
  *(_QWORD *)(*v31 + v32 + 24) = *(_QWORD *)(a3 + 16);
  v34 = v33 - v10;
  if ( v34 )
  {
    v39 = *(_QWORD *)(a1 + 8);
    v54 = v34;
    v52 = 32LL * (int)a2;
    v47 = v31;
    v44 = v34;
    netnode_supset(*(_QWORD *)(v39 + 125), v30, &v54, 8, 65);
    v31 = v47;
    v34 = v44;
    v32 = v52;
    *(_QWORD *)(*v47 + v52 + 16) = v44;
  }
  if ( (*(_BYTE *)(a3 + 73) & 0x10) == 0 )
    *(_QWORD *)(*v31 + v32) = 0;
  if ( ((**(_WORD **)(a1 + 24) - 387) & 0xFFFD) == 0 && v68 == 1953066030 && v69 == 97 )
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 167LL) = v34;
  sub_B440(*(_QWORD *)(a1 + 8));
  if ( (*(_BYTE *)(a3 + 72) & 0x20) == 0 )
    goto LABEL_45;
  v35 = **(_WORD **)(a1 + 24);
  if ( (unsigned __int16)(v35 - 193) > 1u && v35 != 147 )
    goto LABEL_69;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 24LL) == 3 )
  {
    set_default_sreg_value(v55, *(unsigned int *)(*(_QWORD *)(a1 + 16) + 68LL), 0);
    v35 = **(_WORD **)(a1 + 24);
LABEL_69:
    if ( v35 == 452 )
      sub_5F40(0x57u, *(_QWORD *)&v55[0], (*(_BYTE *)(a3 + 74) & 2) != 0);
  }
LABEL_45:
  if ( *(_QWORD *)(a3 + 32) )
  {
    if ( *(_QWORD *)(a3 + 40) )
    {
      file2base(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), v49, v15, v50, 1);
      v41 = *(_QWORD *)(a1 + 8);
      v54 = v15;
      netnode_supset(*(_QWORD *)(v41 + 117), v29, &v54, 8, 65);
    }
  }
  return 1;
}

