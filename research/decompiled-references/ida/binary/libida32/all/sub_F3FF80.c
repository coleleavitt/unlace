__int64 __fastcall sub_F3FF80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int16 v7; // ax
  int v8; // edx
  __int64 result; // rax
  char v10; // cl
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int16 v17; // ax
  _QWORD *v18; // rbx
  char v19; // al
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  unsigned __int8 v22; // cl
  __int64 v23; // rax
  __int64 *v24; // r12
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // ebx
  unsigned int v31; // r14d
  __int64 v32; // r13
  unsigned int v33; // eax
  unsigned int v34; // eax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int16 v40; // ax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // ebx
  __int16 v46; // ax
  char v47; // di
  char v48; // r8
  char v49; // cl
  __int64 v50; // rdx
  __int16 v51; // ax
  __int64 v52; // rbx
  unsigned int v53; // esi
  __int64 v54; // rdx

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
      v7 = sub_F3FBB0(*(_QWORD *)(a1 + 32), a2, a3, a4, a5, a6);
      LOBYTE(a2) = HIBYTE(v7);
      v8 = v7 & 7;
      goto LABEL_3;
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
      v8 = 6;
      goto LABEL_3;
    case 0x19:
    case 0x23:
      v11 = sub_F3FBB0(*(_QWORD *)(a1 + 24), a2, a3, a4, a5, a6);
      LOBYTE(a2) = HIBYTE(v11);
      v8 = v11 & 7;
      goto LABEL_3;
    case 0x1A:
      v24 = (__int64 *)(a1 + 48);
      LOWORD(v25) = sub_F3FBB0(*(_QWORD *)(a1 + 24), a2, a3, a4, a5, a6);
      v30 = v25;
      v31 = BYTE1(v25);
      v32 = a1 + 48 + 8LL * *(unsigned __int16 *)(a1 + 22);
      if ( a1 + 48 == v32 )
      {
        LOBYTE(a2) = BYTE1(v25);
LABEL_36:
        v8 = v30 & 7;
        goto LABEL_3;
      }
      while ( 1 )
      {
        LOWORD(v33) = sub_F3FBB0(*v24, a2, v26, v27, v28, v29);
        v26 = v33;
        v34 = BYTE1(v33);
        if ( (_BYTE)v26 == 4 )
        {
          v26 = v30;
        }
        else if ( (_BYTE)v30 != 4 )
        {
          goto LABEL_17;
        }
        v27 = (unsigned int)(v26 - 2);
        v30 = 1;
        if ( (unsigned __int8)(v26 - 2) > 1u )
        {
          v30 = 4;
LABEL_17:
          if ( (unsigned __int8)v30 > (unsigned __int8)v26 )
            v30 = v26;
        }
        a2 = v31;
        v31 = 1;
        if ( !(_BYTE)a2 )
        {
          v31 = v34;
          a2 = v34;
        }
        if ( (__int64 *)v32 == ++v24 )
          goto LABEL_36;
      }
    case 0x21:
      v35 = sub_F3DED0(a1);
      if ( v35 )
      {
        v40 = sub_F3FBB0(v35[6] & 0xFFFFFFFFFFFFFFF0LL, a2, v36, v37, v38, v39);
        LOBYTE(v45) = v40;
        a2 = HIBYTE(v40);
      }
      else
      {
        v50 = *(_QWORD *)(a1 + 40);
        if ( ((*(__int64 *)(v50 + 8) >> 1) & 3) != 2 || (v52 = *(_QWORD *)(v50 + 16)) == 0 )
        {
          v51 = sub_F3FBB0(*(_QWORD *)(a1 + 32), a2, v50, v37, v38, v39);
          v8 = 4;
          v48 = HIBYTE(v51);
          if ( (_BYTE)v51 != 4 )
          {
            LOBYTE(v8) = 6;
            if ( (unsigned __int8)v51 <= 6u )
              LOBYTE(v8) = v51;
          }
          goto LABEL_35;
        }
        sub_F402C0(*(_QWORD *)(v50 + 16));
        v53 = *(_DWORD *)(v52 + 16);
        v45 = (v53 >> 14) & 7;
        a2 = (v53 >> 17) & 1;
      }
      v46 = sub_F3FBB0(*(_QWORD *)(a1 + 32), a2, v41, v42, v43, v44);
      v47 = v46;
      v48 = HIBYTE(v46);
      if ( (_BYTE)v46 == 4 )
      {
        v47 = v45;
LABEL_30:
        v8 = 1;
        if ( (unsigned __int8)(v47 - 2) > 1u )
        {
          v49 = 4;
          if ( (unsigned __int8)v47 <= 4u )
            v49 = v47;
          v8 = v49 & 7;
        }
        goto LABEL_34;
      }
      if ( (_BYTE)v45 == 4 )
        goto LABEL_30;
      if ( (unsigned __int8)v46 <= (unsigned __int8)v45 )
        LOBYTE(v45) = v46;
      v8 = v45 & 7;
LABEL_34:
      if ( (_BYTE)a2 )
        goto LABEL_3;
LABEL_35:
      LOBYTE(a2) = v48;
LABEL_3:
      result = (v8 << 6) | *(_BYTE *)(a1 + 17) & 0x1F | 0x20u;
      v10 = *(_BYTE *)(a1 + 18);
      *(_BYTE *)(a1 + 17) = ((_BYTE)v8 << 6) | *(_BYTE *)(a1 + 17) & 0x1F | 0x20;
      *(_BYTE *)(a1 + 18) = (2 * (a2 & 1)) | v10 & 0xFC | ((v8 & 4) != 0);
      return result;
    case 0x24:
      v23 = sub_F3E8D0(a1, a2, a3, a4, a5, a6);
      LOBYTE(a2) = 0;
      v8 = sub_B5DE30(v23) & 7;
      goto LABEL_3;
    case 0x2B:
    case 0x2C:
      v12 = sub_990B30(a1, a2, a3, a4, a5);
      v17 = sub_F3FBB0(v12, a2, v13, v14, v15, v16);
      LOBYTE(a2) = HIBYTE(v17);
      v8 = v17 & 7;
      goto LABEL_3;
    case 0x2F:
    case 0x30:
      v18 = sub_F3D150(*(_QWORD **)(a1 + 24), a2, a3, a4, a5, a6);
      v19 = sub_B5DE30((__int64)v18);
      v20 = v18[2];
      if ( (v20 & 4) != 0 )
        v21 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v21 = v20 & 0xFFFFFFFFFFFFFFF8LL;
      v22 = *(_BYTE *)(v21 + 8) & 0x7F;
      if ( v22 > 0x12u )
      {
        LOBYTE(a2) = 1;
        if ( ((v22 + 94) & 0x7Fu) <= 5 )
          goto LABEL_12;
      }
      else
      {
        LOBYTE(a2) = 1;
        if ( ((1LL << v22) & 0x40182) != 0 )
          goto LABEL_12;
      }
      LOBYTE(a2) = 0;
      if ( !v18[5] )
      {
        v54 = v18[15];
        LOBYTE(a2) = (v54 & 4) != 0 || (v54 & 0xFFFFFFFFFFFFFFF8LL) == 0;
      }
LABEL_12:
      v8 = v19 & 7;
      goto LABEL_3;
  }
}

