__int64 __fastcall sub_65130(__int64 a1)
{
  unsigned int v2; // edx
  unsigned int v3; // ecx
  int v4; // esi
  __int64 v5; // rcx
  unsigned int v6; // edi
  unsigned int *v7; // rcx
  unsigned __int8 v8; // r9
  unsigned int v9; // r10d
  unsigned int v10; // r11d
  int v11; // ecx
  __int64 v12; // r8
  int v13; // edx
  int v14; // ebx
  __int64 v15; // r9
  __int16 v16; // cx
  char v17; // r10
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // edi
  _BYTE *v21; // rcx
  char v22; // dl
  _BYTE *v23; // rsi
  unsigned int v25; // edx
  int v26; // ecx
  int v27; // r10d
  int v28; // edi
  int v29; // r8d
  int v30; // r11d
  int v31; // r8d
  int v32; // r12d
  __int64 v33; // rbx
  char v34; // r11
  int v35; // edx
  __int64 v36; // rdi
  int v37; // ebp
  __int16 v38; // dx
  int v39; // edx
  int v40; // ebp
  int v41; // edx
  unsigned __int8 v42; // dl
  char v43; // si
  char v44; // dl
  int v45; // edx
  unsigned __int8 v46; // dl
  char v47; // si
  int v48; // ebp
  int v49; // edx

  v2 = *(_DWORD *)(a1 + 52);
  v3 = v2 >> 8;
  v4 = (v2 >> 21) & 1;
  if ( (v2 & 0x800000) != 0 )
  {
    v25 = v2 >> 4;
    v26 = v3 & 3;
    v27 = v26 + 1;
    v28 = (*(_DWORD *)(a1 + 52) >> 10) & 3;
    v29 = v25 & 0xF;
    switch ( v28 )
    {
      case 2:
        LODWORD(v15) = (v29 >> 2) & 1;
        LOBYTE(v32) = v15 + 1;
        if ( (_DWORD)v15 )
        {
          v6 = 0;
          if ( !v26 )
            return v6;
        }
        v30 = v29 >> 3;
        v39 = v25 & 3;
        if ( !v39 )
        {
          v33 = v27;
          LOBYTE(v31) = v15;
          v34 = v30 + 1;
          LOBYTE(v15) = 0;
          v17 = 3;
          goto LABEL_21;
        }
        v40 = 2;
        LODWORD(v15) = dword_8DD20[3 * v26 - 1 + v39];
        break;
      case 3:
        v6 = 0;
        if ( !v4 )
          return v6;
        v48 = v25 & 0xF;
        v49 = v25 & 1;
        v31 = (v29 >> 1) & 1;
        v40 = v48 >> 2;
        v32 = v31 + 1;
        switch ( v26 )
        {
          case 2:
            if ( v40 == 3 || (_BYTE)v49 )
              return 0;
            LOBYTE(v15) = 0;
            v34 = -1;
            v17 = byte_8E210[v40];
            v33 = 3;
            goto LABEL_21;
          case 3:
            if ( !v49 )
            {
              if ( v40 == 3 )
                return v6;
              LOBYTE(v15) = 0;
              v34 = -1;
              v17 = byte_8E210[v40];
              v33 = 4;
              goto LABEL_21;
            }
            LOBYTE(v30) = -2;
            v27 = 4;
            LODWORD(v15) = dword_8DCE0[v40];
            if ( v40 > 2 )
              v40 = 2;
            break;
          case 1:
            if ( !v49 )
            {
              LOBYTE(v15) = 0;
              v34 = -1;
              v17 = byte_8E210[v40];
              v33 = 2;
              goto LABEL_21;
            }
            LOBYTE(v30) = -2;
            v27 = 2;
            LODWORD(v15) = dword_8DCF0[v40];
            break;
          default:
            if ( !v49 )
            {
              v33 = v32;
              LOBYTE(v15) = 0;
              v17 = byte_8E210[v40];
              v34 = -1;
              LOBYTE(v31) = 0;
              goto LABEL_21;
            }
            v27 = v31 + 1;
            LOBYTE(v30) = -2;
            LODWORD(v15) = dword_8DD00[v40];
            LOBYTE(v32) = 1;
            break;
        }
        break;
      case 1:
        v30 = v29 >> 2;
        v31 = (v29 >> 1) & 1;
        LOBYTE(v32) = v31 + 1;
        if ( (v25 & 1) == 0 )
        {
          v33 = v27;
          v34 = v30 + 1;
          LOBYTE(v15) = 0;
          v17 = 2;
LABEL_21:
          v35 = *(_DWORD *)(a1 + 32);
          v36 = *(_QWORD *)(a1 + 8);
          v37 = *(_DWORD *)(a1 + 20);
          *(_BYTE *)(v36 + 41) = 12;
          if ( v35 == 2 )
            v38 = v37 + 45;
          else
            v38 = (v37 | (16 * v35)) + 61;
          *(_WORD *)(v36 + 46) = v38;
          *(_QWORD *)(v36 + 48) = v33;
          *(_BYTE *)(v36 + 73) = v31;
          *(_BYTE *)(v36 + 74) = v34;
          *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = (v4 == 0 ? 0x49 : 0) + v26 + 339;
          goto LABEL_8;
        }
        v40 = 1;
        LODWORD(v15) = dword_8DD50[v26];
        break;
      default:
        v30 = v29 >> 1;
        if ( (v25 & 1) == 0 )
        {
          v33 = v27;
          v34 = v30 + 1;
          LOBYTE(v15) = 0;
          v17 = 1;
          LOBYTE(v31) = 0;
          goto LABEL_21;
        }
        LOBYTE(v32) = 1;
        v40 = 0;
        LODWORD(v15) = dword_8DD60[v26];
        break;
    }
    v6 = 0;
    if ( (int)v15 < 0 )
      return v6;
    v33 = v27;
    LOBYTE(v31) = v32 - 1;
    v34 = v30 + 1;
    v17 = byte_8E210[v40];
    goto LABEL_21;
  }
  v5 = BYTE1(v2) & 0xF;
  v6 = 0;
  if ( (unsigned int)v5 <= 0xA )
  {
    v7 = (unsigned int *)((char *)&unk_8DD80 + 12 * v5);
    v6 = *v7;
    if ( *v7 )
    {
      v8 = v2;
      v9 = v7[2];
      v10 = v7[1];
      v11 = *(_DWORD *)(a1 + 32);
      v12 = *(_QWORD *)(a1 + 8);
      v13 = (v2 >> 4) & 3;
      v14 = *(_DWORD *)(a1 + 20);
      v15 = v8 >> 6;
      *(_BYTE *)(v12 + 41) = 12;
      if ( v11 == 2 )
        v16 = v14 + 45;
      else
        v16 = (v14 | (16 * v11)) + 61;
      *(_WORD *)(v12 + 46) = v16;
      *(_QWORD *)(v12 + 48) = (int)v10;
      *(_BYTE *)(v12 + 73) = v9 - 1;
      *(_BYTE *)(v12 + 74) = 0;
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = (v4 == 0 ? 0x49 : 0) + v6 + 338;
      v17 = byte_8E210[v15];
      LOBYTE(v15) = 0;
      if ( v13 )
        LOBYTE(v15) = v13 + 2;
LABEL_8:
      v18 = *(_QWORD *)(a1 + 8);
      if ( v17 )
      {
        *(_BYTE *)(v18 + 33) = v17 | 0x80;
        v18 = *(_QWORD *)(a1 + 8);
      }
      v19 = *(_DWORD *)(a1 + 24);
      v20 = *(_DWORD *)(a1 + 16);
      if ( (v19 & 0xFFFFFFFD) == 0xD )
      {
        *(_BYTE *)(v18 + 81) = 4;
        *(_WORD *)(v18 + 86) = v20;
        *(_QWORD *)(v18 + 96) = 0;
        *(_BYTE *)(v18 + 114) = v15;
        if ( v19 == 13 )
          *(_DWORD *)(v18 + 28) |= 0x20u;
        v21 = *(_BYTE **)(a1 + 8);
        v22 = v21[33];
        v23 = v21;
        if ( v22 >= 0 )
          return *((unsigned __int16 *)v23 + 13);
      }
      else
      {
        *(_DWORD *)(v18 + 28) |= 0x80u;
        *(_BYTE *)(v18 + 81) = 3;
        *(_WORD *)(v18 + 86) = v20;
        *(_BYTE *)(v18 + 112) = v19;
        *(_BYTE *)(v18 + 114) = v15;
        v21 = *(_BYTE **)(a1 + 8);
        v22 = v21[33];
        v23 = v21;
        if ( v22 >= 0 )
          return *((unsigned __int16 *)v23 + 13);
      }
      v41 = v22 & 0x7F;
      if ( !v41 )
        goto LABEL_47;
      v42 = v41 - 1;
      v43 = 7;
      if ( v42 <= 0x14u )
        v43 = byte_8DB20[v42];
      v21[45] = v43;
      v21 = *(_BYTE **)(a1 + 8);
      v44 = v21[33];
      v23 = v21;
      if ( v44 >= 0 )
        return *((unsigned __int16 *)v23 + 13);
      v45 = v44 & 0x7F;
      if ( v45 )
      {
        v46 = v45 - 1;
        v47 = 7;
        if ( v46 <= 0x14u )
          v47 = byte_8DB20[v46];
        v21[85] = v47;
        v23 = *(_BYTE **)(a1 + 8);
      }
      else
      {
LABEL_47:
        v23 = v21;
      }
      return *((unsigned __int16 *)v23 + 13);
    }
  }
  return v6;
}
