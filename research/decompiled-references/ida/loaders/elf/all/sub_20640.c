__int64 __fastcall sub_20640(__int64 a1, int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int16 v5; // r15
  __int64 v7; // rax
  int v8; // r14d
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r13
  bool v12; // zf
  unsigned __int64 v13; // r12
  int v14; // r8d
  __int64 result; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // r8
  char byte; // al
  _QWORD *v19; // rdx
  _QWORD *v20; // rbx
  _QWORD *v21; // r8
  _QWORD *v22; // rax
  unsigned __int16 custom_fixup; // ax
  _QWORD *v24; // rdx
  _QWORD *v25; // r8
  _QWORD *v26; // rdi
  _QWORD *v27; // rax
  unsigned __int16 v28; // ax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  unsigned __int64 v33; // rbx
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  _QWORD *v38; // rdi
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rsi
  int v42; // r8d
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int16 v46; // ax
  unsigned __int16 v47; // ax
  unsigned __int16 v48; // ax
  unsigned __int64 v49; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v50; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 *v51[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = 12;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *a2;
  v51[1] = (unsigned __int64 *)__readfsqword(0x28u);
  v10 = *(_QWORD *)(a2 + 1);
  v11 = *(_QWORD *)(a4 + 16);
  v12 = *(_BYTE *)(v7 + 617) == 0;
  v49 = v10;
  v13 = *(_QWORD *)(a2 + 3);
  v50 = v13;
  if ( v12 )
    v5 = 4;
  switch ( (char)v8 )
  {
    case 1:
      goto LABEL_52;
    case 2:
      v14 = v5;
      goto LABEL_5;
    case 3:
      sub_424F0(a1, v10, *(_QWORD *)(a5 + 136), v11, v5, 0, 0, 0);
      return 0;
    case 4:
      sub_40E20(a1, v10, 2);
      return 0;
    case 5:
      sub_424F0(a1, v10, v13, 0, v5, 0, 0, 0);
      return 0;
    case 6:
    case 7:
      goto LABEL_17;
    case 8:
    case 9:
    case 10:
    case 11:
      v10 += v11;
LABEL_17:
      sub_40E20(a1, v10, 3);
      return 0;
    case 16:
    case 17:
    case 43:
    case 44:
    case 45:
    case 51:
      return 0;
    case 18:
    case 19:
      LOBYTE(v51[0]) = 0;
      sub_101F0(0xBBAu, v51, v10);
      if ( LOBYTE(v51[0]) )
      {
        custom_fixup = *(_WORD *)(a1 + 356);
        if ( custom_fixup == 0x8000 )
        {
          custom_fixup = find_custom_fixup("CALL");
          *(_WORD *)(a1 + 356) = custom_fixup;
        }
        sub_424F0(a1, v49, v50, v11, custom_fixup, 0, 0, 0);
      }
      return 0;
    case 20:
    case 23:
    case 57:
      v19 = *(_QWORD **)(a1 + 376);
      v20 = (_QWORD *)(a1 + 368);
      if ( !v19 )
        goto LABEL_59;
      v21 = (_QWORD *)(a1 + 368);
      v22 = *(_QWORD **)(a1 + 376);
      do
      {
        if ( v22[4] >= v10 )
        {
          v21 = v22;
          v22 = (_QWORD *)v22[2];
        }
        else
        {
          v22 = (_QWORD *)v22[3];
        }
      }
      while ( v22 );
      if ( v20 != v21 && v10 >= v21[4] )
      {
        v40 = (_QWORD *)(a1 + 368);
        do
        {
          if ( v19[4] >= v10 )
          {
            v40 = v19;
            v19 = (_QWORD *)v19[2];
          }
          else
          {
            v19 = (_QWORD *)v19[3];
          }
        }
        while ( v19 );
        if ( v20 == v40 || v10 < v40[4] )
        {
          v51[0] = &v49;
          v40 = sub_1FA80((_QWORD *)(a1 + 360), v40, v51);
          v13 = v50;
        }
        if ( v40[5] != v13 )
        {
          sub_15250((__int64)"Same relocation entry points on 2 locations");
          v13 = v50;
        }
        v19 = *(_QWORD **)(a1 + 376);
        if ( !v19 )
        {
LABEL_59:
          v41 = (_QWORD *)(a1 + 368);
LABEL_60:
          v51[0] = &v49;
          v41 = sub_1FA80((_QWORD *)(a1 + 360), v41, v51);
          goto LABEL_61;
        }
      }
      v41 = (_QWORD *)(a1 + 368);
      do
      {
        if ( v19[4] >= v49 )
        {
          v41 = v19;
          v19 = (_QWORD *)v19[2];
        }
        else
        {
          v19 = (_QWORD *)v19[3];
        }
      }
      while ( v19 );
      if ( v41 == v20 || v49 < v41[4] )
        goto LABEL_60;
LABEL_61:
      v41[5] = v13;
      if ( (_BYTE)v8 == 20 )
      {
        v42 = *(unsigned __int16 *)(a1 + 350);
        if ( (_WORD)v42 == 0x8000 )
        {
          v47 = find_custom_fixup("GOT20");
          v42 = v47;
          *(_WORD *)(a1 + 350) = v47;
        }
      }
      else
      {
        v42 = 4;
        if ( (_BYTE)v8 == 23 )
        {
          v42 = *(unsigned __int16 *)(a1 + 348);
          if ( (_WORD)v42 == 0x8000 )
          {
            v48 = find_custom_fixup("HI20");
            v42 = v48;
            *(_WORD *)(a1 + 348) = v48;
          }
        }
      }
      sub_424F0(a1, v49, v50, v11, v42, 0, v49, 0);
      return 0;
    case 24:
      v24 = *(_QWORD **)(a1 + 376);
      v25 = (_QWORD *)(a1 + 368);
      if ( !v24 )
        return 2;
      v26 = (_QWORD *)(a1 + 368);
      v27 = *(_QWORD **)(a1 + 376);
      do
      {
        if ( v27[4] >= v13 )
        {
          v26 = v27;
          v27 = (_QWORD *)v27[2];
        }
        else
        {
          v27 = (_QWORD *)v27[3];
        }
      }
      while ( v27 );
      result = 2;
      if ( v25 == v26 || v13 < v26[4] )
        return result;
      v43 = (_QWORD *)(a1 + 368);
      do
      {
        if ( v24[4] >= v13 )
        {
          v43 = v24;
          v24 = (_QWORD *)v24[2];
        }
        else
        {
          v24 = (_QWORD *)v24[3];
        }
      }
      while ( v24 );
      if ( v25 == v43 || v13 < v43[4] )
      {
        v51[0] = &v50;
        v43 = sub_1FA80((_QWORD *)(a1 + 360), v43, v51);
        v13 = *(_QWORD *)(a2 + 3);
      }
      v45 = v43[5];
      v46 = *(_WORD *)(a1 + 352);
      v50 = v45;
      if ( v46 == 0x8000 )
      {
        v46 = find_custom_fixup("LO12I");
        LODWORD(v45) = v50;
        *(_WORD *)(a1 + 352) = v46;
      }
      goto LABEL_98;
    case 25:
      v16 = *(_QWORD **)(a1 + 376);
      v17 = (_QWORD *)(a1 + 368);
      if ( !v16 )
        return 2;
      v38 = (_QWORD *)(a1 + 368);
      v39 = *(_QWORD **)(a1 + 376);
      do
      {
        if ( v39[4] >= v13 )
        {
          v38 = v39;
          v39 = (_QWORD *)v39[2];
        }
        else
        {
          v39 = (_QWORD *)v39[3];
        }
      }
      while ( v39 );
      result = 2;
      if ( v17 == v38 || v13 < v38[4] )
        return result;
      v44 = (_QWORD *)(a1 + 368);
      do
      {
        if ( v16[4] >= v13 )
        {
          v44 = v16;
          v16 = (_QWORD *)v16[2];
        }
        else
        {
          v16 = (_QWORD *)v16[3];
        }
      }
      while ( v16 );
      if ( v44 == v17 || v13 < v44[4] )
      {
        v51[0] = &v50;
        v44 = sub_1FA80((_QWORD *)(a1 + 360), v44, v51);
        v13 = *(_QWORD *)(a2 + 3);
      }
      v45 = v44[5];
      v46 = *(_WORD *)(a1 + 354);
      v50 = v45;
      if ( v46 == 0x8000 )
      {
        v46 = find_custom_fixup("LO12S");
        LODWORD(v45) = v50;
        *(_WORD *)(a1 + 354) = v46;
      }
LABEL_98:
      sub_424F0(a1, v49, v45, v11, v46, 0, v13, 0);
      return 0;
    case 26:
      v28 = *(_WORD *)(a1 + 348);
      if ( v28 == 0x8000 )
      {
        v28 = find_custom_fixup("HI20");
        LODWORD(v13) = v50;
        LODWORD(v10) = v49;
        *(_WORD *)(a1 + 348) = v28;
      }
      goto LABEL_39;
    case 27:
      v28 = *(_WORD *)(a1 + 352);
      if ( v28 == 0x8000 )
      {
        v28 = find_custom_fixup("LO12I");
        LODWORD(v13) = v50;
        LODWORD(v10) = v49;
        *(_WORD *)(a1 + 352) = v28;
      }
      goto LABEL_39;
    case 28:
      v28 = *(_WORD *)(a1 + 354);
      if ( v28 == 0x8000 )
      {
        v28 = find_custom_fixup("LO12S");
        LODWORD(v13) = v50;
        LODWORD(v10) = v49;
        *(_WORD *)(a1 + 354) = v28;
      }
LABEL_39:
      sub_424F0(a1, v10, v13, v11, v28, 0, 0, 0);
      return 0;
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 52:
      sub_1FFE0(a1, (unsigned __int8)v8, v10, v13, v11);
      return 0;
    case 53:
    case 54:
    case 55:
    case 56:
      if ( (_BYTE)v8 == 56 )
      {
LABEL_52:
        v14 = 4;
        goto LABEL_5;
      }
      if ( (_BYTE)v8 == 55 )
      {
        v14 = 1;
        goto LABEL_5;
      }
      v14 = 13;
      if ( (_BYTE)v8 != 53 )
      {
LABEL_5:
        sub_424F0(a1, v10, v13, v11, v14, 0, 0, 0);
        return 0;
      }
      if ( getseg(v10) )
      {
        byte = get_byte(v49);
        sub_42050(a1, v49, byte & 0xC0 | ((_BYTE)v11 + (_BYTE)v50) & 0x3F, 0, 0, 13, 0, 0x40000000, 0);
      }
      else
      {
        sub_BFC0(
          (__int64)"Relocation of type R_RISCV_SET6 cannot be applied at offset %llx, because the location could not be determined.\n",
          v49);
      }
      return 0;
    case 58:
      sub_40E20(a1, v10, 4);
      v32 = *(_QWORD *)(a1 + 16);
      v33 = *(_QWORD *)(v32 + 456) & (v11 + *(_QWORD *)(v32 + 608));
      if ( v33 < v11 )
        sub_40E00(v49, *(_QWORD *)(v32 + 456) & (v11 + *(_QWORD *)(v32 + 608)), v29, v30, v31);
      sub_42050(a1, v49, v33, 0, 0, v5, 0, 0x40000000, 0);
      sub_47DB0(a1, v33, v34, v35, v36, v37);
      return 0;
    default:
      return 2;
  }
}

