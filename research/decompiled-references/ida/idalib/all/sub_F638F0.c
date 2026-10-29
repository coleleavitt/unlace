__int16 __fastcall sub_F638F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rdi
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rbp
  char v12; // al
  int v13; // ecx
  char v14; // al
  int v15; // edx
  __int16 result; // ax
  __int64 v17; // rdi
  __int16 v18; // ax
  char v19; // dl
  unsigned __int8 v20; // di
  _QWORD *v21; // r12
  int v22; // ebp
  char v23; // r14
  __int64 v24; // r13
  int v25; // edx
  char v26; // al
  __int64 v27; // rax
  char v28; // al
  _QWORD *v29; // rax
  __int64 v30; // rbp
  int v31; // edx
  __int16 v32; // ax
  char v33; // si
  _QWORD *v34; // rbp
  char v35; // al
  __int64 v36; // rdx
  unsigned __int64 v37; // rdx
  unsigned __int8 v38; // cl
  __int64 v39; // rdx
  __int16 v40; // ax
  char v41; // di
  unsigned int v42; // edx
  unsigned int v43; // eax
  __int64 v44; // rdx
  char v45; // [rsp+Fh] [rbp-29h]

  v6 = (__int64 *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *v6;
  v8 = *(_DWORD *)(*v6 + 16);
  if ( (v8 & 0x2000) != 0 )
  {
    v13 = (v8 >> 14) & 7;
    goto LABEL_4;
  }
  v9 = *(_QWORD *)(v7 + 8);
  v10 = v7 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v7 & 0xFFFFFFFFFFFFFFF0LL) != v9 )
  {
    v11 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
    sub_F64000(v11);
    v12 = *(_BYTE *)(v7 + 17) | 0x20;
    *(_BYTE *)(v7 + 17) = v12;
    v13 = (*(_DWORD *)(v11 + 16) >> 14) & 7;
    *(_BYTE *)(v7 + 17) = (((*(_DWORD *)(v11 + 16) >> 14) & 7) << 6) | v12 & 0x3F;
    v14 = ((unsigned __int8)v13 >> 2) | *(_BYTE *)(v7 + 18) & 0xFE;
    *(_BYTE *)(v7 + 18) = v14;
    *(_BYTE *)(v7 + 18) = *(_BYTE *)(v11 + 18) & 2 | v14 & 0xFD;
    v8 = *(_DWORD *)(v7 + 16);
    goto LABEL_4;
  }
  switch ( *(_BYTE *)(v7 + 16) )
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
      v17 = *(_QWORD *)(v7 + 32);
      goto LABEL_8;
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
      LOBYTE(v13) = 6;
      v19 = 0;
      v20 = 6;
      goto LABEL_9;
    case 0x19:
    case 0x23:
      v17 = *(_QWORD *)(v7 + 24);
      goto LABEL_8;
    case 0x1A:
      v21 = (_QWORD *)(v7 + 48);
      v22 = sub_F638F0(*(_QWORD *)(v7 + 24));
      v23 = BYTE1(v22);
      v24 = v7 + 48 + 8LL * *(unsigned __int16 *)(v7 + 22);
      if ( v7 + 48 == v24 )
      {
        v19 = BYTE1(v22);
        goto LABEL_42;
      }
      while ( 1 )
      {
        v25 = sub_F638F0(*v21);
        v26 = BYTE1(v25);
        if ( (_BYTE)v25 == 4 )
        {
          v25 = v22;
        }
        else if ( (_BYTE)v22 != 4 )
        {
          goto LABEL_15;
        }
        v22 = 1;
        if ( (unsigned __int8)(v25 - 2) > 1u )
        {
          v22 = 4;
LABEL_15:
          if ( (unsigned __int8)v22 > (unsigned __int8)v25 )
            v22 = v25;
        }
        v19 = v23;
        v23 = 1;
        if ( !v19 )
        {
          v23 = v26;
          v19 = v26;
        }
        if ( (_QWORD *)v24 == ++v21 )
        {
LABEL_42:
          v20 = v22 & 7;
          LOBYTE(v13) = v22 & 7;
          goto LABEL_9;
        }
      }
    case 0x21:
      v29 = sub_F61C10(*v6);
      if ( v29 )
      {
        LOWORD(v30) = sub_F638F0(v29[6] & 0xFFFFFFFFFFFFFFF0LL);
        LOBYTE(v31) = BYTE1(v30);
        goto LABEL_27;
      }
      v39 = *(_QWORD *)(v7 + 40);
      if ( ((*(__int64 *)(v39 + 8) >> 1) & 3) == 2 )
      {
        v30 = *(_QWORD *)(v39 + 16);
        if ( v30 )
        {
          sub_F64000(*(_QWORD *)(v39 + 16));
          v42 = *(_DWORD *)(v30 + 16);
          v43 = v42 >> 14;
          v31 = (v42 >> 17) & 1;
          LOBYTE(v30) = v43 & 7;
LABEL_27:
          v45 = v31;
          v32 = sub_F638F0(*(_QWORD *)(v7 + 32));
          v19 = v45;
          LOBYTE(v13) = v32;
          v33 = HIBYTE(v32);
          if ( (_BYTE)v32 == 4 )
          {
            LOBYTE(v13) = v30;
          }
          else if ( (_BYTE)v30 != 4 )
          {
            v41 = v30;
            if ( (unsigned __int8)v32 <= (unsigned __int8)v30 )
              v41 = v32;
            v20 = v41 & 7;
            LOBYTE(v13) = v20;
LABEL_33:
            if ( v45 )
              goto LABEL_9;
            goto LABEL_34;
          }
          if ( (unsigned __int8)(v13 - 2) <= 1u )
          {
            LOBYTE(v13) = 1;
            v20 = 1;
          }
          else
          {
            if ( (unsigned __int8)v13 > 4u )
              LOBYTE(v13) = 4;
            v20 = v13 & 7;
          }
          goto LABEL_33;
        }
      }
      v40 = sub_F638F0(*(_QWORD *)(v7 + 32));
      v20 = 4;
      LOBYTE(v13) = v40;
      v33 = HIBYTE(v40);
      if ( (_BYTE)v40 == 4 )
      {
LABEL_34:
        v19 = v33;
        goto LABEL_9;
      }
      LOBYTE(v13) = 6;
      v19 = HIBYTE(v40);
      if ( (unsigned __int8)v40 <= 6u )
        LOBYTE(v13) = v40;
      v20 = v13 & 7;
LABEL_9:
      *(_BYTE *)(v7 + 17) = (v20 << 6) | *(_BYTE *)(v7 + 17) & 0x1F | 0x20;
      *(_BYTE *)(v7 + 18) = (2 * (v19 & 1)) | (v20 >> 2) | *(_BYTE *)(v7 + 18) & 0xFC;
      v8 = *(_DWORD *)(v7 + 16);
LABEL_4:
      v15 = (v8 >> 17) & 1;
      LOBYTE(result) = v13;
      HIBYTE(result) = v15;
      return result;
    case 0x24:
      v27 = sub_F62610(*v6, a2, v10, a4, a5, a6);
      v28 = sub_B81B70(v27);
      v19 = 0;
      v20 = v28 & 7;
      LOBYTE(v13) = v28 & 7;
      goto LABEL_9;
    case 0x2B:
    case 0x2C:
      v17 = sub_9B4870(*v6, a2, v10, a4, a5);
LABEL_8:
      v18 = sub_F638F0(v17);
      v19 = HIBYTE(v18);
      v20 = v18 & 7;
      LOBYTE(v13) = v18 & 7;
      goto LABEL_9;
    case 0x2F:
    case 0x30:
      v34 = sub_F60E90(*(_QWORD **)(v7 + 24), a2, v10, a4, a5, a6);
      v35 = sub_B81B70((__int64)v34);
      v36 = v34[2];
      if ( (v36 & 4) != 0 )
        v37 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v37 = v36 & 0xFFFFFFFFFFFFFFF8LL;
      v38 = *(_BYTE *)(v37 + 8) & 0x7F;
      if ( v38 > 0x12u )
      {
        v19 = 1;
        if ( ((v38 + 94) & 0x7Fu) <= 5 )
          goto LABEL_40;
      }
      else
      {
        v19 = 1;
        if ( ((1LL << v38) & 0x40182) != 0 )
          goto LABEL_40;
      }
      v19 = 0;
      if ( !v34[5] )
      {
        v44 = v34[15];
        v19 = (v44 & 4) != 0 || (v44 & 0xFFFFFFFFFFFFFFF8LL) == 0;
      }
LABEL_40:
      v20 = v35 & 7;
      LOBYTE(v13) = v35 & 7;
      goto LABEL_9;
  }
}
