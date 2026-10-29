__int64 __fastcall sub_F40760(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  int v18; // ecx
  char v19; // al
  unsigned int v20; // eax
  __int16 v22; // ax
  char v23; // dl
  char v24; // cl
  __int16 v25; // ax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int16 v31; // ax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int8 v36; // bp
  __int16 v37; // ax
  char v38; // cl
  char v39; // di
  _QWORD *v40; // rbp
  char v41; // al
  __int64 v42; // rdx
  unsigned __int64 v43; // rdx
  unsigned __int8 v44; // cl
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int16 v50; // ax
  __int64 *v51; // r12
  unsigned int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned int v57; // ebp
  unsigned int v58; // r14d
  __int64 v59; // r13
  unsigned int v60; // eax
  unsigned int v61; // eax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int16 v64; // ax
  char v65; // dl
  __int64 v66; // rbp
  unsigned int v67; // esi
  __int64 v68; // rdx

  v6 = *(_DWORD *)(a1 + 16);
  if ( (v6 & 0x2000) == 0 )
  {
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
          sub_F3FF80(v10, a2, v12, a4, a5, a6);
        }
        else
        {
          v13 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
          sub_F402C0(v13, a2, v12, a4, a5, a6);
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
      *(_BYTE *)(a1 + 17) = ((_BYTE)v18 << 6) | v17 & 0x3F;
      v19 = ((unsigned __int8)v18 >> 2) | *(_BYTE *)(a1 + 18) & 0xFE;
      *(_BYTE *)(a1 + 18) = v19;
      *(_BYTE *)(a1 + 18) = *(_BYTE *)(v10 + 18) & 2 | v19 & 0xFD;
      v20 = *(_DWORD *)(a1 + 16);
      return (v20 >> 17) & 1;
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
        v22 = sub_F3FBB0(*(_QWORD *)(a1 + 32), a2, v7, a4, a5, a6);
        LOBYTE(a2) = HIBYTE(v22);
        v23 = v22 & 7;
        goto LABEL_11;
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
        LOBYTE(a2) = 0;
        v23 = 6;
        goto LABEL_11;
      case 0x19:
      case 0x23:
        v25 = sub_F3FBB0(*(_QWORD *)(a1 + 24), a2, v7, a4, a5, a6);
        LOBYTE(a2) = HIBYTE(v25);
        v23 = v25 & 7;
        goto LABEL_11;
      case 0x1A:
        v51 = (__int64 *)(a1 + 48);
        LOWORD(v52) = sub_F3FBB0(*(_QWORD *)(a1 + 24), a2, v7, a4, a5, a6);
        v57 = v52;
        v58 = BYTE1(v52);
        v59 = a1 + 48 + 8LL * *(unsigned __int16 *)(a1 + 22);
        if ( a1 + 48 == v59 )
        {
          LOBYTE(a2) = BYTE1(v52);
LABEL_44:
          v23 = v57 & 7;
          goto LABEL_11;
        }
        while ( 1 )
        {
          LOWORD(v60) = sub_F3FBB0(*v51, a2, v53, v54, v55, v56);
          v53 = v60;
          v61 = BYTE1(v60);
          if ( (_BYTE)v53 == 4 )
          {
            v53 = v57;
          }
          else if ( (_BYTE)v57 != 4 )
          {
            goto LABEL_34;
          }
          v54 = (unsigned int)(v53 - 2);
          v57 = 1;
          if ( (unsigned __int8)(v53 - 2) > 1u )
          {
            v57 = 4;
LABEL_34:
            if ( (unsigned __int8)v57 > (unsigned __int8)v53 )
              v57 = v53;
          }
          a2 = v58;
          v58 = 1;
          if ( !(_BYTE)a2 )
          {
            v58 = v61;
            a2 = v61;
          }
          if ( (__int64 *)v59 == ++v51 )
            goto LABEL_44;
        }
      case 0x21:
        v26 = sub_F3DED0(a1);
        if ( v26 )
        {
          v31 = sub_F3FBB0(v26[6] & 0xFFFFFFFFFFFFFFF0LL, a2, v27, v28, v29, v30);
          v36 = v31;
          a2 = HIBYTE(v31);
        }
        else
        {
          v63 = *(_QWORD *)(a1 + 40);
          if ( ((*(__int64 *)(v63 + 8) >> 1) & 3) != 2 || (v66 = *(_QWORD *)(v63 + 16)) == 0 )
          {
            v64 = sub_F3FBB0(*(_QWORD *)(a1 + 32), a2, v63, v28, v29, v30);
            v23 = 4;
            v39 = HIBYTE(v64);
            if ( (_BYTE)v64 != 4 )
            {
              v23 = 6;
              LOBYTE(a2) = HIBYTE(v64);
              if ( (unsigned __int8)v64 <= 6u )
                v23 = v64;
LABEL_11:
              v24 = *(_BYTE *)(a1 + 18);
              *(_BYTE *)(a1 + 17) = (v23 << 6) | *(_BYTE *)(a1 + 17) & 0x1F | 0x20;
              *(_BYTE *)(a1 + 18) = (2 * (a2 & 1)) | v24 & 0xFC | ((v23 & 4) != 0);
              v20 = *(_DWORD *)(a1 + 16);
              return (v20 >> 17) & 1;
            }
LABEL_23:
            LOBYTE(a2) = v39;
            goto LABEL_11;
          }
          sub_F402C0(*(_QWORD *)(v63 + 16), a2, v63, v28, v29, v30);
          v67 = *(_DWORD *)(v66 + 16);
          v33 = v67 >> 14;
          a2 = (v67 >> 17) & 1;
          v36 = v33 & 7;
        }
        v37 = sub_F3FBB0(*(_QWORD *)(a1 + 32), a2, v32, v33, v34, v35);
        v38 = v37;
        v39 = HIBYTE(v37);
        if ( (_BYTE)v37 == 4 )
        {
          v38 = v36;
        }
        else if ( v36 != 4 )
        {
          v65 = v36;
          if ( (unsigned __int8)v37 <= v36 )
            v65 = v37;
          v23 = v65 & 7;
LABEL_22:
          if ( (_BYTE)a2 )
            goto LABEL_11;
          goto LABEL_23;
        }
        v23 = 1;
        if ( (unsigned __int8)(v38 - 2) > 1u )
        {
          v23 = 4;
          if ( (unsigned __int8)v38 <= 4u )
            v23 = v38;
        }
        goto LABEL_22;
      case 0x24:
        v62 = sub_F3E8D0(a1, a2, v7, a4, a5, a6);
        LOBYTE(a2) = 0;
        v23 = sub_B5DE30(v62) & 7;
        goto LABEL_11;
      case 0x2B:
      case 0x2C:
        v45 = sub_990B30(a1, a2, v7, a4, a5);
        v50 = sub_F3FBB0(v45, a2, v46, v47, v48, v49);
        LOBYTE(a2) = HIBYTE(v50);
        v23 = v50 & 7;
        goto LABEL_11;
      case 0x2F:
      case 0x30:
        v40 = sub_F3D150(*(_QWORD **)(a1 + 24), a2, v7, a4, a5, a6);
        v41 = sub_B5DE30((__int64)v40);
        v42 = v40[2];
        if ( (v42 & 4) != 0 )
          v43 = *(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v43 = v42 & 0xFFFFFFFFFFFFFFF8LL;
        v44 = *(_BYTE *)(v43 + 8) & 0x7F;
        if ( v44 > 0x12u )
        {
          LOBYTE(a2) = 1;
          if ( ((v44 + 94) & 0x7Fu) <= 5 )
            goto LABEL_29;
        }
        else
        {
          LOBYTE(a2) = 1;
          if ( ((1LL << v44) & 0x40182) != 0 )
            goto LABEL_29;
        }
        LOBYTE(a2) = 0;
        if ( !v40[5] )
        {
          v68 = v40[15];
          LOBYTE(a2) = (v68 & 4) != 0 || (v68 & 0xFFFFFFFFFFFFFFF8LL) == 0;
        }
LABEL_29:
        v23 = v41 & 7;
        goto LABEL_11;
    }
  }
  return (v6 >> 17) & 1;
}

