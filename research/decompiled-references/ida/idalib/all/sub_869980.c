__int64 __fastcall sub_869980(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int8 *v5; // rdi
  unsigned __int64 v6; // r10
  int v7; // r12d
  unsigned __int64 v8; // rbp
  int v9; // r13d
  int v10; // r11d
  char v11; // r8
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned __int8 *v17; // rdx
  unsigned __int8 *v18; // rdx
  __int64 v19; // rax
  unsigned __int16 v20; // ax
  int v21; // r15d
  _WORD *v22; // rdx
  unsigned __int16 v23; // cx
  _BYTE *v24; // rax
  unsigned __int16 v26; // cx
  _BYTE *v27; // rax
  __int16 v28; // cx
  unsigned __int16 v29; // ax
  _BYTE *v30; // rax
  __int16 v31; // cx
  unsigned __int16 v32; // ax
  _BYTE *v33; // rax
  bool v34; // zf
  __int16 v35; // cx
  unsigned __int16 v36; // ax
  _BYTE *v37; // rax
  unsigned __int8 *v38; // rdx
  unsigned __int8 *v39; // rdx
  int v40; // [rsp+Ch] [rbp-34h]

  if ( (unsigned __int64)a2 >= a3 )
  {
    *(_DWORD *)(a1 + 76) += 16;
    return 1;
  }
  v4 = (unsigned __int64)(a2 - 1);
  v5 = a2;
  v6 = a3;
  v7 = 0;
  v40 = 0;
  v8 = (unsigned __int64)(a2 - 1);
  v9 = 0;
  v10 = 16;
  v11 = 1;
  while ( 2 )
  {
    v12 = *v5;
    switch ( (char)v12 )
    {
      case 3:
        *(_QWORD *)(a1 + 176) = 0x100000001LL;
        ++v5;
        goto LABEL_5;
      case 91:
      case 93:
      case 97:
        if ( v5[3] == 22 && v10 < 24 )
          v10 = 24;
        goto LABEL_20;
      case 94:
      case 95:
      case 96:
        if ( v5[1] == 22 && v10 < 24 )
          v10 = 24;
        goto LABEL_24;
      case 114:
      case 115:
        if ( v10 < ((unsigned __int8)(v5[byte_23C3B20[v12]] - 98) < 0xCu ? 32 : 16) )
          v10 = (unsigned __int8)(v5[byte_23C3B20[v12]] - 98) < 0xCu ? 32 : 16;
        v26 = __ROL2__(*(_WORD *)(v5 + 1), 8);
        v27 = (_BYTE *)(*(_QWORD *)(a1 + 40) + ((unsigned __int64)v26 >> 3));
        *v27 &= ~(v11 << (v26 & 7));
        v5 += byte_23C3B20[*v5];
        goto LABEL_5;
      case 116:
      case 117:
        if ( v10 < ((unsigned __int8)(v5[byte_23C3B20[(unsigned __int8)v12]] - 98) < 0xCu ? 32 : 16) )
          v10 = (unsigned __int8)(v5[byte_23C3B20[(unsigned __int8)v12]] - 98) < 0xCu ? 32 : 16;
        goto LABEL_35;
      case 118:
        v34 = v5[3] == 0x93;
        v5 += 3;
        if ( v34 )
        {
          do
          {
            v35 = *(_WORD *)(v5 + 1);
            v5 += 3;
            v36 = __ROL2__(v35, 8);
            LOBYTE(v35) = v36 & 7;
            v37 = (_BYTE *)(*(_QWORD *)(a1 + 40) + ((unsigned __int64)v36 >> 3));
            *v37 &= ~(v11 << v35);
          }
          while ( *v5 == 0x93 );
        }
        v9 = 1;
        goto LABEL_5;
      case 119:
      case 120:
        if ( (_BYTE)v12 == 119 )
          v19 = byte_23C3B20[119];
        else
          v19 = (unsigned __int16)__ROL2__(*(_WORD *)(v5 + 5), 8);
        v40 = 1;
        v5 += v19;
        goto LABEL_5;
      case -126:
        v38 = v5;
        do
          v38 += (unsigned __int16)__ROL2__(*(_WORD *)(v38 + 1), 8);
        while ( *v38 == 121 );
        v39 = v38 + 3;
        if ( v4 < (unsigned __int64)v39 )
          v4 = (unsigned __int64)v39;
        goto LABEL_20;
      case -124:
      case -123:
      case -122:
        v17 = v5;
        do
          v17 += (unsigned __int16)__ROL2__(*(_WORD *)(v17 + 1), 8);
        while ( *v17 == 121 );
        v18 = v17 + 3;
        if ( v8 < (unsigned __int64)v18 )
          v8 = (unsigned __int64)v18;
        v5 += 3;
        goto LABEL_5;
      case -116:
      case -111:
        v28 = *(_WORD *)(v5 + 3);
        v5 += 5;
        v29 = __ROL2__(v28, 8);
        LOBYTE(v28) = v29 & 7;
        v30 = (_BYTE *)(*(_QWORD *)(a1 + 40) + ((unsigned __int64)v29 >> 3));
        *v30 &= ~(v11 << v28);
        goto LABEL_5;
      case -115:
      case -110:
        if ( (unsigned __int8)(v5[3] - 119) <= 1u )
          return 0;
LABEL_20:
        v5 += 3;
        goto LABEL_5;
      case -109:
        v31 = *(_WORD *)(v5 + 1);
        v5 += 3;
        v32 = __ROL2__(v31, 8);
        LOBYTE(v31) = v32 & 7;
        v33 = (_BYTE *)(*(_QWORD *)(a1 + 40) + ((unsigned __int64)v32 >> 3));
        *v33 &= ~(v11 << v31);
        goto LABEL_5;
      case -108:
LABEL_35:
        v20 = __ROL2__(*(_WORD *)(v5 + 3), 8);
        v21 = v20 - 1;
        v22 = (_WORD *)(*(_QWORD *)(a1 + 248) + *(_QWORD *)(a1 + 264)
                                              * (unsigned __int16)__ROL2__(*(_WORD *)(v5 + 1), 8));
        if ( v20 )
        {
          do
          {
            v23 = __ROL2__(*v22, 8);
            v24 = (_BYTE *)(*(_QWORD *)(a1 + 40) + ((unsigned __int64)v23 >> 3));
            *v24 &= ~(v11 << (v23 & 7));
            v22 = (_WORD *)((char *)v22 + *(_QWORD *)(a1 + 264));
          }
          while ( v21-- != 0 );
          v12 = *v5;
        }
        v5 += byte_23C3B20[v12];
        goto LABEL_5;
      case -100:
      case -98:
      case -92:
        goto LABEL_16;
      case -97:
        if ( (unsigned __int64)v5 < v4 )
          *(_DWORD *)(a1 + 192) = 1;
        goto LABEL_24;
      case -96:
        *(_DWORD *)(a1 + 108) = 1;
        *(_DWORD *)(a1 + 184) = 1;
        if ( (unsigned __int64)v5 < v4 )
          *(_DWORD *)(a1 + 192) = 1;
        v5 += v5[1] + 3;
        goto LABEL_5;
      case -95:
        *(_DWORD *)(a1 + 188) = 1;
        ++v5;
        *(_DWORD *)(a1 + 108) = 1;
        goto LABEL_5;
      case -94:
        *(_DWORD *)(a1 + 188) = 1;
        *(_DWORD *)(a1 + 108) = 1;
LABEL_16:
        v7 = 1;
        v5 += v5[1] + 3;
        goto LABEL_5;
      case -89:
        if ( (unsigned __int64)v5 < v8 )
          return 0;
LABEL_24:
        ++v5;
LABEL_5:
        if ( (unsigned __int64)v5 < v6 )
          continue;
        if ( v10 > 0 )
          *(_DWORD *)(a1 + 76) += v10;
        if ( v7 )
        {
          v13 = *(_DWORD *)(a1 + 76);
          *(_DWORD *)(a1 + 104) = v13;
          *(_DWORD *)(a1 + 76) = v13 + 8;
        }
        if ( v9 )
        {
          v14 = *(_DWORD *)(a1 + 76);
          *(_DWORD *)(a1 + 88) = v14;
          *(_DWORD *)(a1 + 76) = v14 + 8;
        }
        if ( v40 )
        {
          v15 = *(_DWORD *)(a1 + 76);
          *(_DWORD *)(a1 + 116) = v15;
          *(_DWORD *)(a1 + 76) = v15 + 8;
        }
        return 1;
      default:
        v5 = (unsigned __int8 *)sub_868FC0(v5);
        if ( v5 )
          goto LABEL_5;
        return 0;
    }
  }
}
