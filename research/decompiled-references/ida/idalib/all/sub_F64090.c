__int16 __fastcall sub_F64090(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // eax
  unsigned __int64 v7; // rdx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // r12
  char v14; // dl
  int v15; // ecx
  char v16; // al
  char v17; // dl
  int v18; // eax
  char v19; // dl
  __int64 v20; // rdi
  __int64 v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int16 v28; // bp
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int16 v32; // ax
  __int16 v33; // cx
  char v34; // r8
  _QWORD *v35; // rbp
  char v36; // al
  __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  unsigned __int8 v39; // cl
  __int64 *v40; // r12
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // ebp
  unsigned int v46; // r14d
  __int64 v47; // r13
  int v48; // eax
  int v49; // edx
  unsigned int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int16 v53; // di
  bool v54; // cc
  char v55; // si
  __int64 v56; // rbp
  unsigned int v57; // edx
  unsigned int v58; // eax
  char v60; // [rsp+1h] [rbp-29h]

  v6 = *(_DWORD *)(a1 + 16);
  if ( (v6 & 0x2000) != 0 )
    return (v6 >> 14) & 7;
  v7 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  v9 = *(_QWORD *)(a1 + 8);
  if ( (a1 & 0xFFFFFFFFFFFFFFF0LL) != v9 )
  {
    v10 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v10 + 17) & 0x20) == 0 )
    {
      v11 = *(_QWORD *)(v10 + 8);
      v12 = v10 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == v11 )
      {
        sub_F63CC0(v10, a2, v12, a4, a5, a6);
      }
      else
      {
        v13 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
        sub_F64000(v13, a2, v12, a4, a5, a6);
        v14 = *(_BYTE *)(v10 + 17) | 0x20;
        *(_BYTE *)(v10 + 17) = v14;
        v15 = (*(_DWORD *)(v13 + 16) >> 14) & 7;
        *(_BYTE *)(v10 + 17) = ((_BYTE)v15 << 6) | v14 & 0x3F;
        v16 = ((unsigned __int8)v15 >> 2) | *(_BYTE *)(v10 + 18) & 0xFE;
        *(_BYTE *)(v10 + 18) = v16;
        *(_BYTE *)(v10 + 18) = *(_BYTE *)(v13 + 18) & 2 | v16 & 0xFD;
      }
    }
    v17 = *(_BYTE *)(a1 + 17) | 0x20;
    *(_BYTE *)(a1 + 17) = v17;
    v18 = (*(_DWORD *)(v10 + 16) >> 14) & 7;
    *(_BYTE *)(a1 + 17) = (((*(_DWORD *)(v10 + 16) >> 14) & 7) << 6) | v17 & 0x3F;
    v19 = ((unsigned __int8)v18 >> 2) | *(_BYTE *)(a1 + 18) & 0xFE;
    *(_BYTE *)(a1 + 18) = v19;
    *(_BYTE *)(a1 + 18) = *(_BYTE *)(v10 + 18) & 2 | v19 & 0xFD;
    return v18;
  }
  switch ( *(_BYTE *)(a1 + 16) )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xB:
    case 0xC:
    case 0xE:
    case 0x18:
    case 0x1B:
    case 0x1E:
    case 0x1F:
    case 0x22:
    case 0x25:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2E:
    case 0x35:
    case 0x38:
    case 0x39:
    case 0x3A:
      v20 = *(_QWORD *)(a1 + 32);
      goto LABEL_10;
    case 4:
    case 0xA:
    case 0xD:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x1C:
    case 0x1D:
    case 0x20:
    case 0x26:
    case 0x27:
    case 0x2D:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x36:
    case 0x37:
      LOWORD(v18) = 6;
      LOBYTE(v21) = 0;
      LOBYTE(a2) = 6;
      goto LABEL_11;
    case 0x19:
    case 0x23:
      v20 = *(_QWORD *)(a1 + 24);
      goto LABEL_10;
    case 0x1A:
      v40 = (__int64 *)(a1 + 48);
      LOWORD(v41) = sub_F638F0(*(_QWORD *)(a1 + 24), a2, v7, a4, a5, a6);
      v45 = v41;
      v46 = BYTE1(v41);
      v47 = a1 + 48 + 8LL * *(unsigned __int16 *)(a1 + 22);
      if ( a1 + 48 == v47 )
      {
        LOBYTE(v21) = BYTE1(v41);
        goto LABEL_45;
      }
      while ( 1 )
      {
        LOWORD(v48) = sub_F638F0(*v40, a2, v21, v42, v43, v44);
        v49 = v48;
        v50 = BYTE1(v48);
        if ( (_BYTE)v49 == 4 )
        {
          v49 = v45;
        }
        else if ( (_BYTE)v45 != 4 )
        {
          goto LABEL_35;
        }
        v42 = (unsigned int)(v49 - 2);
        v45 = 1;
        if ( (unsigned __int8)(v49 - 2) > 1u )
        {
          v45 = 4;
LABEL_35:
          if ( (unsigned __int8)v45 > (unsigned __int8)v49 )
            v45 = v49;
        }
        v21 = v46;
        v46 = 1;
        if ( !(_BYTE)v21 )
        {
          v46 = v50;
          v21 = v50;
        }
        if ( (__int64 *)v47 == ++v40 )
        {
LABEL_45:
          LOBYTE(a2) = v45 & 7;
          LOWORD(v18) = v45 & 7;
          goto LABEL_11;
        }
      }
    case 0x21:
      v22 = sub_F61C10(a1);
      if ( v22 )
      {
        v28 = sub_F638F0(v22[6] & 0xFFFFFFFFFFFFFFF0LL, a2, v23, v24, v25, v26);
        v31 = HIBYTE(v28);
      }
      else
      {
        v52 = *(_QWORD *)(a1 + 40);
        if ( ((*(__int64 *)(v52 + 8) >> 1) & 3) != 2 || (v56 = *(_QWORD *)(v52 + 16)) == 0 )
        {
          LOWORD(v18) = sub_F638F0(*(_QWORD *)(a1 + 32), a2, v52, v24, v25, v26);
          v53 = v18;
          v34 = BYTE1(v18);
          LOBYTE(a2) = 4;
          if ( (_BYTE)v18 != 4 )
          {
            v54 = (unsigned __int8)v18 <= 6u;
            LOWORD(v18) = 6;
            if ( v54 )
              LOWORD(v18) = v53;
            LOBYTE(a2) = v18 & 7;
          }
          goto LABEL_24;
        }
        sub_F64000(*(_QWORD *)(v52 + 16), a2, v52, v24, v25, v26);
        v57 = *(_DWORD *)(v56 + 16);
        v58 = v57 >> 14;
        v31 = (v57 >> 17) & 1;
        v28 = v58 & 7;
      }
      v60 = v31;
      v32 = sub_F638F0(*(_QWORD *)(a1 + 32), a2, v31, v27, v29, v30);
      LOBYTE(v21) = v60;
      v33 = v32;
      v34 = HIBYTE(v32);
      if ( (_BYTE)v32 == 4 )
      {
        v33 = v28;
LABEL_19:
        if ( (unsigned __int8)(v33 - 2) <= 1u )
        {
          LOWORD(v18) = 1;
          LOBYTE(a2) = 1;
        }
        else
        {
          LOWORD(v18) = 4;
          if ( (unsigned __int8)v33 <= 4u )
            LOWORD(v18) = v33;
          LOBYTE(a2) = v18 & 7;
        }
        goto LABEL_23;
      }
      if ( (_BYTE)v28 == 4 )
        goto LABEL_19;
      v55 = v28;
      if ( (unsigned __int8)v32 <= (unsigned __int8)v28 )
        v55 = v32;
      LOWORD(a2) = v55 & 7;
      LOWORD(v18) = a2;
LABEL_23:
      if ( v60 )
        goto LABEL_11;
LABEL_24:
      LOBYTE(v21) = v34;
LABEL_11:
      *(_BYTE *)(a1 + 17) = ((_BYTE)a2 << 6) | *(_BYTE *)(a1 + 17) & 0x1F | 0x20;
      *(_BYTE *)(a1 + 18) = (2 * (v21 & 1)) | ((unsigned __int8)a2 >> 2) | *(_BYTE *)(a1 + 18) & 0xFC;
      return v18;
    case 0x24:
      v51 = sub_F62610(a1, a2, v7, a4, a5, a6);
      LOBYTE(v18) = sub_B81B70(v51);
      LOBYTE(v21) = 0;
      LOWORD(v18) = v18 & 7;
      LOBYTE(a2) = v18;
      goto LABEL_11;
    case 0x2B:
    case 0x2C:
      v20 = sub_9B4870(a1, a2, v7, a4, a5);
LABEL_10:
      LOWORD(v18) = sub_F638F0(v20, a2, v7, a4, a5, a6);
      LOBYTE(v21) = BYTE1(v18);
      LOBYTE(a2) = v18 & 7;
      LOWORD(v18) = v18 & 7;
      goto LABEL_11;
    case 0x2F:
    case 0x30:
      v35 = sub_F60E90(*(_QWORD **)(a1 + 24), a2, v7, a4, a5, a6);
      v36 = sub_B81B70((__int64)v35);
      v37 = v35[2];
      if ( (v37 & 4) != 0 )
        v38 = *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v38 = v37 & 0xFFFFFFFFFFFFFFF8LL;
      v39 = *(_BYTE *)(v38 + 8) & 0x7F;
      if ( v39 > 0x12u )
      {
        LOBYTE(v21) = 1;
        if ( ((v39 + 94) & 0x7Fu) <= 5 )
          goto LABEL_30;
      }
      else
      {
        LOBYTE(v21) = 1;
        if ( ((1LL << v39) & 0x40182) != 0 )
          goto LABEL_30;
      }
      LOBYTE(v21) = 0;
      if ( !v35[5] )
      {
        v21 = v35[15];
        LOBYTE(v21) = (v21 & 4) != 0 || (v21 & 0xFFFFFFFFFFFFFFF8LL) == 0;
      }
LABEL_30:
      LOWORD(v18) = v36 & 7;
      LOBYTE(a2) = v18;
      goto LABEL_11;
  }
}
