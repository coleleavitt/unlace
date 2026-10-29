__int64 __fastcall sub_1878BE0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rdi
  __int64 *v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rbp
  __int64 v11; // rax
  _QWORD *v12; // r12
  __int64 v13; // rdx
  __int16 v14; // ax
  int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  _DWORD *v26; // rdi
  __int16 v27; // ax
  __int64 v28; // rcx
  bool v30; // dl
  __int64 v31; // rax
  unsigned __int64 v32; // rdi
  char v33; // al
  int v34; // edx
  unsigned int v35; // ecx
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdi
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned int v42; // ebx
  bool v43; // bl
  unsigned __int8 v44; // bp
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned __int64 v47; // rax
  char v48; // dl
  unsigned __int64 *v49; // rdi
  unsigned __int64 v50; // rdx
  __int64 v51; // r15
  __int64 v52; // rax
  __int64 v53; // r15
  unsigned __int8 v54; // al
  __int64 v55; // r12
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // [rsp+0h] [rbp-128h]
  unsigned __int8 v66; // [rsp+1Fh] [rbp-109h]
  bool v67; // [rsp+1Fh] [rbp-109h]
  unsigned __int64 v68; // [rsp+20h] [rbp-108h]
  __int64 v69; // [rsp+20h] [rbp-108h]
  _DWORD *v70[2]; // [rsp+38h] [rbp-F0h] BYREF
  bool v71; // [rsp+4Fh] [rbp-D9h] BYREF
  __int64 v72; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v73; // [rsp+58h] [rbp-D0h] BYREF
  _BYTE *v74[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v75; // [rsp+70h] [rbp-B8h]
  unsigned __int8 *v76; // [rsp+80h] [rbp-A8h] BYREF
  char v77; // [rsp+D8h] [rbp-50h]
  unsigned int v78; // [rsp+E0h] [rbp-48h]
  char v79; // [rsp+E4h] [rbp-44h]

  v7 = a2;
  v8 = (__int64 *)a4;
  v9 = a2[2];
  v70[0] = a2;
  v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
  v11 = (v9 >> 2) & 1;
  if ( (*((_BYTE *)a2 + 31) & 8) != 0 )
  {
    if ( v11 )
      v10 = (_QWORD *)v10[1];
  }
  else if ( v11 )
  {
    v10 = (_QWORD *)*v10;
  }
  if ( !a3 )
  {
LABEL_60:
    v66 = 0;
    if ( (*((_BYTE *)v7 + 28) & 0x7F) != 0x26 )
      goto LABEL_21;
    goto LABEL_61;
  }
  v12 = (_QWORD *)a3;
  while ( 1 )
  {
    a2 = v12;
    if ( !(unsigned __int8)sub_1A468F0(a1, v12) )
    {
      v7 = (__int64 *)v70[0];
      v14 = *((_WORD *)v70[0] + 15) & 0x800;
      goto LABEL_47;
    }
    if ( !v8 )
      break;
    a2 = v12;
    v7 = (__int64 *)v70[0];
    if ( sub_17A3270(a1, (__int64)v12, (__int64)v10, v8, 0) )
    {
      v14 = *((_WORD *)v70[0] + 15) & 0x800;
      goto LABEL_10;
    }
    v47 = *((_QWORD *)v70[0] + 2) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*((_QWORD *)v70[0] + 2) & 4) != 0 )
      v47 = *(_QWORD *)v47;
    v48 = *(_BYTE *)(v47 + 8) & 0x7F;
    if ( v48 == 62 )
    {
      v7 = (__int64 *)v70[0];
      v48 = *(_BYTE *)(sub_B8EAA0(v47) + 8) & 0x7F;
    }
    v13 = (v48 + 70) & 0x7F;
    v14 = *((_WORD *)v7 + 15) & 0x800;
    if ( (unsigned __int8)v13 <= 3u )
      goto LABEL_10;
LABEL_47:
    if ( v14 || (v12[13] & 3) != 0 )
      goto LABEL_60;
    a2 = v12;
    v12 = sub_7053D0(v12 + 13, (__int64)v12, v13, a4, a5, a6);
    if ( !v12 )
      goto LABEL_50;
  }
  v7 = (__int64 *)v70[0];
  v14 = *((_WORD *)v70[0] + 15) & 0x800;
LABEL_10:
  v13 = (*((_WORD *)v12 + 15) & 0x800) != 0;
  LOBYTE(a4) = v14 != 0;
  if ( ((*((_WORD *)v12 + 15) & 0x800) != 0) != (v14 != 0) )
    goto LABEL_47;
  v15 = sub_B76070((__int64)v12, (__int64)a2, v13, a4);
  if ( v15 )
  {
    v7 = (__int64 *)v70[0];
    v16 = 0;
    v66 = 0;
    v64 = 8LL * (unsigned int)(v15 - 1) + 8;
    while ( 1 )
    {
      v17 = *(_QWORD *)(v12[15] + v16);
      v18 = v7[15];
      v19 = *(_QWORD *)(v18 + v16);
      if ( v17 )
      {
        if ( sub_B74820(*(_QWORD *)(v12[15] + v16)) )
        {
          v30 = sub_B74820(v19);
          if ( !v30 )
          {
            if ( (*((_WORD *)v70[0] + 15) & 0x180) == 0 )
              goto LABEL_33;
            v31 = *((_QWORD *)v70[0] + 2);
            v32 = v31 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v31 & 4) != 0 )
              v32 = *(_QWORD *)(v32 + 8);
            if ( !(unsigned __int8)sub_B8E180(v32) )
            {
LABEL_33:
              v33 = *(_BYTE *)(v19 + 97) | 1;
              *(_BYTE *)(v19 + 97) = v33;
              v34 = *(_DWORD *)(v17 + 96);
              a4 = BYTE1(v34) & 6;
              if ( (_BYTE)a4 == 2 )
              {
                *(_BYTE *)(v19 + 97) = v33 & 0xF9 | 2;
                v7 = (__int64 *)v70[0];
              }
              else
              {
                if ( (BYTE1(v34) & 6) == 4 )
                {
                  a2 = (__int64 *)sub_B74810(v17);
                  sub_B747F0(v19, (__int64)a2);
                }
                else
                {
                  a2 = (__int64 *)sub_B73640(v17);
                  sub_B74780(v19, (__int64)a2);
                }
                v7 = (__int64 *)v70[0];
              }
              goto LABEL_15;
            }
            goto LABEL_45;
          }
          if ( **(char **)(a1 + 232) >= 0 || (v70[0][7] & 0x7Fu) - 35 > 3 )
            goto LABEL_38;
          v67 = v30;
          v39 = sub_B72690((__int64)(v70[0] + 18));
          if ( v39 )
            v39 -= 64LL;
          v40 = sub_B97230(v39);
          v30 = v67;
          if ( v40 )
          {
            *(_BYTE *)(v19 + 97) |= 1u;
            if ( (*(_BYTE *)(v17 + 97) & 6) == 4 )
            {
              v57 = sub_B74810(v17);
              sub_B747F0(v19, v57);
            }
            else
            {
              v41 = sub_B73640(v17);
              sub_B74780(v19, v41);
            }
            v35 = 5646;
            v66 = 0;
          }
          else
          {
LABEL_38:
            v66 = v30;
            v35 = 4789;
          }
          sub_168B9F0((__int64)v74, (__int64 *)(a1 + 8), *(_DWORD *)(v19 + 24), v35, 0);
          v73 = sub_B74790(v19);
          sub_1587DB0((__int64)v74, &v73);
          sub_15F7200(v74);
          if ( (*(_BYTE *)(v17 + 97) & 1) != 0 )
          {
            v36 = (unsigned __int64)v12;
            do
            {
              v37 = *(_QWORD *)(v36 + 104);
              if ( (v37 & 3) != 0 )
                BUG();
              v36 = v37 & 0xFFFFFFFFFFFFFFFCLL;
              v17 = *(_QWORD *)(*(_QWORD *)(v36 + 120) + v16);
            }
            while ( (*(_BYTE *)(v17 + 97) & 1) != 0 );
          }
          sub_168B9F0((__int64)v74, (__int64 *)(a1 + 8), *(_DWORD *)(v17 + 24), 0x71u, 0);
          v38 = v17;
          goto LABEL_44;
        }
        v7 = (__int64 *)v70[0];
        if ( !sub_B74820(v19) )
          goto LABEL_15;
LABEL_18:
        if ( !sub_B77A30((__int64)v7) )
        {
          if ( (unsigned int)sub_B77D20((__int64)v70[0]) != 1 && (unsigned int)sub_B77D20((__int64)v70[0]) )
          {
            sub_168B9F0((__int64)v74, (__int64 *)(a1 + 8), *(_DWORD *)(v19 + 24), 0x1424u, 0);
            v71 = (unsigned int)sub_B77D20((__int64)v70[0]) == 2;
            v52 = sub_1588420((__int64)v74, (unsigned __int8 *)&v71);
            v72 = *((_QWORD *)v70[0] + 5);
            v53 = sub_15894B0(v52, &v72);
            a2 = &v73;
            v73 = sub_B74790(v19);
            sub_1587DB0(v53, &v73);
            sub_15F7200(v74);
            v7 = (__int64 *)v70[0];
            goto LABEL_15;
          }
          v49 = (unsigned __int64 *)(*((_QWORD *)v70[0] + 2) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*((_QWORD *)v70[0] + 2) & 4) == 0 )
          {
            if ( (unsigned __int8)sub_B8E180((unsigned __int64)v49) )
              goto LABEL_85;
LABEL_45:
            v7 = (__int64 *)v70[0];
            goto LABEL_15;
          }
          if ( !(unsigned __int8)sub_B8E180(*v49) )
            goto LABEL_45;
LABEL_85:
          v50 = *((_QWORD *)v70[0] + 2) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*((_QWORD *)v70[0] + 2) & 4) != 0 )
            v50 = *(_QWORD *)v50;
          if ( (*(_BYTE *)(v50 + 8) & 0x7Fu) - 59 > 2 )
            goto LABEL_101;
          v68 = v50;
          if ( v50 == 64 )
            goto LABEL_101;
          v51 = 0;
          if ( sub_B97230(v50 - 64) )
            goto LABEL_102;
          if ( (*(_BYTE *)(v68 - 36) & 0x7F) != 0x3D )
LABEL_101:
            v51 = 2;
          else
            v51 = 1;
LABEL_102:
          sub_168B9F0((__int64)v74, (__int64 *)(a1 + 8), *(_DWORD *)(v19 + 24), 0x12B0u, 0);
          if ( v77 )
          {
            sub_AE9DF0(&v76, v51, 2u);
          }
          else if ( v79 )
          {
            v69 = sub_168B9E0(v74);
            v62 = v75;
            if ( v75 )
              v62 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v75 + 32LL))(v75);
            v73 = v62;
            v63 = sub_1587BC0(v69, &v73, v58, v59, v60, v61);
            sub_AE9DF0((unsigned __int8 **)(*v63 + 32LL * v78 + 8), v51, 2u);
          }
          v38 = v19;
LABEL_44:
          a2 = &v73;
          v73 = sub_B74790(v38);
          sub_1587DB0((__int64)v74, &v73);
          sub_15F7200(v74);
          goto LABEL_45;
        }
        v16 += 8;
        sub_168B9F0((__int64)v74, (__int64 *)(a1 + 8), *(_DWORD *)(v19 + 24), 0x12B9u, 0);
        v73 = sub_B74790(v19);
        sub_1587DB0((__int64)v74, &v73);
        sub_15F7200(v74);
        sub_168B9F0((__int64)v74, (__int64 *)(a1 + 8), *((_DWORD *)v12 + 6), 0x1908u, 0);
        a2 = &v73;
        LOBYTE(v73) = 0;
        sub_1588420((__int64)v74, (unsigned __int8 *)&v73);
        sub_15F7200(v74);
        v7 = (__int64 *)v70[0];
        if ( v64 == v16 )
          goto LABEL_20;
      }
      else
      {
        v7 = (__int64 *)v70[0];
        if ( sub_B74820(*(_QWORD *)(v18 + v16)) )
          goto LABEL_18;
LABEL_15:
        v16 += 8;
        if ( v64 == v16 )
          goto LABEL_20;
      }
    }
  }
LABEL_50:
  v7 = (__int64 *)v70[0];
  v66 = 0;
LABEL_20:
  if ( (*((_BYTE *)v7 + 28) & 0x7F) == 0x26 )
  {
LABEL_61:
    v42 = sub_B770E0((__int64)v7, (__int64)a2);
    if ( v42 < (unsigned int)sub_B770E0(a3, (__int64)a2) )
    {
      LODWORD(v72) = (unsigned __int8)sub_183C740(a1, v70[0]);
      v54 = sub_183C740(a1, (_DWORD *)a3);
      if ( (_DWORD)v72 != v54 )
      {
        v55 = *(_QWORD *)(*((_QWORD *)v70[0] + 15) + 8LL * (unsigned int)sub_B770E0((__int64)v70[0], a3));
        sub_168B9F0((__int64)v74, (__int64 *)(a1 + 8), *(_DWORD *)(v55 + 24), 0xE2Cu, 0);
        v73 = sub_B74790(v55);
        v56 = sub_1587DB0((__int64)v74, &v73);
        sub_184A780(v56, (int *)&v72);
        sub_15F7200(v74);
        sub_168B9F0((__int64)v74, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x70u, 0);
        sub_15F7200(v74);
      }
    }
    v7 = (__int64 *)v70[0];
  }
LABEL_21:
  v20 = *(_BYTE *)(a3 + 84) & 3;
  if ( (_BYTE)v20 == (*((_BYTE *)v7 + 84) & 3) )
  {
    v23 = *(__int64 **)(a3 + 112);
    v26 = v70[0];
    if ( (*((_BYTE *)sub_7053D0(v23 + 13, (__int64)v23, v20, a4, a5, a6) + 82) & 1) == 0
      && (*((_BYTE *)v70[0] + 82) & 1) != 0 )
    {
      v23 = &v73;
      v26 = v70[0];
      v44 = sub_B7D390(a3, (__int64)&v73, 0, v25);
      if ( v44 )
      {
        if ( (*((_BYTE *)v70[0] + 82) & 2) != 0 || (*((_WORD *)v70[0] + 15) & 0x180) == 0 )
        {
          sub_168B9F0((__int64)v74, (__int64 *)(a1 + 8), v70[0][6], 0xF9Eu, 0);
          sub_1795A40((__int64)v74, (__int64 *)v70);
          sub_15F7200(v74);
          v23 = (__int64 *)(a1 + 8);
          sub_168B9F0((__int64)v74, (__int64 *)(a1 + 8), *(_DWORD *)(v73 + 24), 0x71u, 0);
          sub_15F7200(v74);
          v26 = v70[0];
          v66 = v44;
        }
      }
    }
  }
  else
  {
    sub_168B9F0((__int64)v74, (__int64 *)(a1 + 8), *((_DWORD *)v7 + 6), 0xD9Cu, 0);
    v21 = sub_1795A40((__int64)v74, (__int64 *)v70);
    LODWORD(v72) = v70[0][21] & 3;
    v22 = sub_1587D10(v21, (int *)&v72);
    LODWORD(v73) = *(_BYTE *)(a3 + 84) & 3;
    sub_1587D10(v22, (int *)&v73);
    sub_15F7200(v74);
    v23 = (__int64 *)(a1 + 8);
    sub_168B9F0((__int64)v74, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x70u, 0);
    sub_15F7200(v74);
    v66 = 1;
    v26 = v70[0];
  }
  if ( (v26[7] & 0x7F) == 0x27 && !(unsigned __int8)sub_B77A80((__int64)v26) )
  {
    if ( (*(_BYTE *)(a3 + 8) & 6) == 0 || (v23 = (__int64 *)a3, (unsigned __int8)sub_1A427C0(a1, a3, 0)) )
    {
      sub_168B9F0((__int64)v74, (__int64 *)(a1 + 8), v70[0][6], 0xE24u, 0);
      sub_15F7200(v74);
      v23 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v74, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x70u, 0);
      sub_15F7200(v74);
    }
  }
  v27 = *(_WORD *)(a3 + 30);
  if ( (v27 & 0x180) != 0 && (v27 & 0x22) == 0 )
  {
    v43 = sub_1838CB0(a3, (__int64)v23, v24, v25);
    if ( v43 )
    {
      sub_168B9F0((__int64)v74, (__int64 *)(a1 + 8), v70[0][6], 0xF0Bu, 0);
      sub_15F7200(v74);
      sub_168B9F0((__int64)v74, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x70u, 0);
      sub_15F7200(v74);
      v66 = v43;
    }
  }
  v74[0] = nullptr;
  if ( (unsigned __int8)sub_B77990((__int64)v70[0]) && (unsigned __int8)sub_B7D390(a3, (__int64)v74, 1, v28) )
    sub_17B9710(a1, (__int64)v70[0], v74[0], 0, v45, v46);
  return v66;
}
