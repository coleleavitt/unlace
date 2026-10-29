/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B520
// Address: 0x000000000004B520

//----- (000000000004B520) ----------------------------------------------------
__int64 __fastcall sub_4B520(_WORD *a1)
{
  int v2; // w20
  int v3; // w21
  __int64 v4; // x0
  __int64 v5; // x9
  __int64 v6; // x28
  __int64 v7; // x0
  int v8; // w20
  int v9; // w22
  int v10; // w8
  __int64 v11; // x9
  __int64 v12; // x9
  int v13; // w10
  __int64 v14; // x0
  bool v15; // zf
  char v16; // w3
  int v17; // w10
  int v18; // w8
  int v19; // w9
  int v20; // w11
  int v21; // w14
  int v22; // w13
  int v23; // w12
  int v24; // w22
  size_t v25; // x22
  int v26; // w23
  size_t v27; // x23
  _QWORD *v28; // x22
  int v29; // w24
  size_t v30; // x24
  __int64 *v31; // x23
  int v32; // w25
  int v33; // w24
  int v34; // w24
  _WORD *v35; // x25
  _WORD *v36; // x24
  int v37; // w26
  unsigned int v38; // w20
  void (__fastcall *v39)(_WORD *, __int64, __int64, _QWORD, __int64); // x21
  __int64 v40; // x0
  void (__fastcall *v41)(_WORD *, __int64, __int64, _QWORD, __int64); // x20
  __int64 v42; // x0
  void (__fastcall *v43)(_WORD *, __int64, __int64, _QWORD, __int64); // x20
  __int64 v44; // x0
  void (__fastcall *v45)(_WORD *, __int64, size_t, _QWORD, __int64); // x20
  __int64 v46; // x0
  void (__fastcall *v47)(_WORD *, __int64, size_t, _QWORD, __int64); // x20
  __int64 v48; // x0
  void (__fastcall *v49)(_WORD *, __int64, size_t, _QWORD, __int64); // x20
  __int64 v50; // x0
  void (__fastcall *v51)(_WORD *, __int64, __int64, _QWORD, __int64); // x20
  __int64 v52; // x0
  void (__fastcall *v53)(_WORD *, __int64, __int64, _QWORD, __int64); // x20
  __int64 v54; // x0
  void (__fastcall *v55)(_WORD *, __int64, __int64, _QWORD, __int64); // x20
  __int64 v56; // x0
  unsigned int v58; // w8
  unsigned int *v59; // x25
  char v60; // w26
  __int64 v61; // x3
  unsigned __int64 v62; // x9
  bool v63; // cf
  unsigned __int64 v64; // x9
  int v65; // w8
  unsigned int v66; // w2
  unsigned int v67; // w9
  _DWORD *v68; // x23
  int v69; // w8
  __int64 v70; // x0
  _QWORD *v71; // x0
  _QWORD *v72; // x8
  unsigned __int16 *v73; // [xsp+10h] [xbp-B0h]
  _BYTE v74[4]; // [xsp+18h] [xbp-A8h] BYREF
  int v75; // [xsp+1Ch] [xbp-A4h]
  unsigned int v76; // [xsp+38h] [xbp-88h]
  unsigned int v77; // [xsp+40h] [xbp-80h]
  __int64 v78; // [xsp+58h] [xbp-68h]

  v78 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *((unsigned __int8 *)a1 + 508);
  if ( (unsigned int)(v2 - 1) < 2
    || ((*((__int64 (__fastcall **)(_WORD *, __int64, _QWORD))a1 + 62))(a1, 1, *((unsigned __int8 *)a1 + 508)) & 1) != 0 )
  {
    v3 = *((unsigned __int8 *)a1 + 509);
    if ( (unsigned int)(v3 - 1) < 2
      || ((*((__int64 (__fastcall **)(_WORD *, __int64, _QWORD))a1 + 62))(a1, 3, *((unsigned __int8 *)a1 + 509)) & 1) != 0 )
    {
      v4 = qlseek(*((_QWORD *)a1 + 59), 0, 1);
      v5 = *((_QWORD *)a1 + 60);
      v6 = v4 - v5;
      if ( qlseek(*((_QWORD *)a1 + 59), v5 + 16, 0) == -1 )
        goto LABEL_65;
      v7 = *((_QWORD *)a1 + 59);
      *((_BYTE *)a1 + 616) = v3 == 2;
      *((_BYTE *)a1 + 617) = v2 == 2;
      *((_BYTE *)a1 + 618) = v2 == 2;
      v8 = lreadbytes(v7, a1 + 260, 2u, v3 == 2);
      if ( v8 < 0 )
      {
        v39 = *((void (__fastcall **)(_WORD *, __int64, __int64, _QWORD, __int64))a1 + 62);
        v40 = qlseek(*((_QWORD *)a1 + 59), 0, 1);
        v39(a1, 19, 2, v8, v40);
        goto LABEL_65;
      }
      v9 = lreadbytes(*((_QWORD *)a1 + 59), a1 + 261, 2u, *((_BYTE *)a1 + 616));
      if ( v9 < 0 )
      {
        v41 = *((void (__fastcall **)(_WORD *, __int64, __int64, _QWORD, __int64))a1 + 62);
        v42 = qlseek(*((_QWORD *)a1 + 59), 0, 1);
        v41(a1, 19, 2, v9, v42);
        goto LABEL_65;
      }
      if ( (sub_4F538((__int64)a1) & 1) == 0 )
      {
LABEL_65:
        v38 = 0;
LABEL_66:
        qlseek(*((_QWORD *)a1 + 59), *((_QWORD *)a1 + 60) + v6, 0);
        return v38;
      }
      v10 = *((unsigned __int8 *)a1 + 617);
      if ( *((_BYTE *)a1 + 468) )
      {
        v11 = 220;
        if ( *((_BYTE *)a1 + 617) )
          v11 = 224;
        v12 = *(_QWORD *)&a1[v11];
        if ( *((_BYTE *)a1 + 617) )
          v13 = 8;
        else
          v13 = 4;
        *((_QWORD *)a1 + 57) = v12;
        *((_DWORD *)a1 + 116) = v13;
      }
      v14 = *((_QWORD *)a1 + 59);
      v15 = v10 == 0;
      v16 = *((_BYTE *)a1 + 616);
      if ( v10 )
        v17 = 56;
      else
        v17 = 32;
      if ( v10 )
        v18 = 64;
      else
        v18 = 52;
      if ( v15 )
        v19 = 40;
      else
        v19 = 64;
      if ( v15 )
        v20 = 12;
      else
        v20 = 24;
      if ( v15 )
        v21 = 16;
      else
        v21 = 24;
      if ( v15 )
        v22 = 8;
      else
        v22 = 16;
      if ( v15 )
        v23 = 4;
      else
        v23 = 8;
      *((_DWORD *)a1 + 96) = v18;
      *((_DWORD *)a1 + 97) = v17;
      *((_DWORD *)a1 + 98) = v19;
      *((_DWORD *)a1 + 99) = v21;
      *((_DWORD *)a1 + 100) = v22;
      *((_DWORD *)a1 + 101) = v22;
      *((_DWORD *)a1 + 102) = v20;
      *((_DWORD *)a1 + 106) = v23;
      *((_DWORD *)a1 + 107) = v23;
      *((_DWORD *)a1 + 108) = v23;
      *((_DWORD *)a1 + 109) = v23;
      *((_DWORD *)a1 + 103) = v21;
      *((_DWORD *)a1 + 104) = v22;
      *((_DWORD *)a1 + 105) = v20;
      v24 = lreadbytes(v14, a1 + 262, 4u, v16);
      if ( v24 < 0 )
      {
        v43 = *((void (__fastcall **)(_WORD *, __int64, __int64, _QWORD, __int64))a1 + 62);
        v44 = qlseek(*((_QWORD *)a1 + 59), 0, 1);
        v43(a1, 19, 4, v24, v44);
        goto LABEL_65;
      }
      v25 = *((int *)a1 + 106);
      v26 = lreadbytes(*((_QWORD *)a1 + 59), a1 + 264, v25, *((_BYTE *)a1 + 616));
      if ( v26 < 0 )
      {
        v45 = *((void (__fastcall **)(_WORD *, __int64, size_t, _QWORD, __int64))a1 + 62);
        v46 = qlseek(*((_QWORD *)a1 + 59), 0, 1);
        v45(a1, 19, v25, v26, v46);
        goto LABEL_65;
      }
      v27 = *((int *)a1 + 107);
      v28 = a1 + 268;
      v29 = lreadbytes(*((_QWORD *)a1 + 59), a1 + 268, v27, *((_BYTE *)a1 + 616));
      if ( v29 < 0 )
      {
        v47 = *((void (__fastcall **)(_WORD *, __int64, size_t, _QWORD, __int64))a1 + 62);
        v48 = qlseek(*((_QWORD *)a1 + 59), 0, 1);
        v47(a1, 19, v27, v29, v48);
        goto LABEL_65;
      }
      v30 = *((int *)a1 + 107);
      v31 = (__int64 *)(a1 + 272);
      v32 = lreadbytes(*((_QWORD *)a1 + 59), a1 + 272, v30, *((_BYTE *)a1 + 616));
      if ( v32 < 0 )
      {
        v49 = *((void (__fastcall **)(_WORD *, __int64, size_t, _QWORD, __int64))a1 + 62);
        v50 = qlseek(*((_QWORD *)a1 + 59), 0, 1);
        v49(a1, 19, v30, v32, v50);
        goto LABEL_65;
      }
      v33 = lreadbytes(*((_QWORD *)a1 + 59), a1 + 276, 4u, *((_BYTE *)a1 + 616));
      if ( v33 < 0 )
      {
        v51 = *((void (__fastcall **)(_WORD *, __int64, __int64, _QWORD, __int64))a1 + 62);
        v52 = qlseek(*((_QWORD *)a1 + 59), 0, 1);
        v51(a1, 19, 4, v33, v52);
        goto LABEL_65;
      }
      v34 = lreadbytes(*((_QWORD *)a1 + 59), a1 + 278, 2u, *((_BYTE *)a1 + 616));
      if ( v34 < 0
        || (v34 = lreadbytes(*((_QWORD *)a1 + 59), a1 + 279, 2u, *((_BYTE *)a1 + 616)), v34 < 0)
        || (v35 = a1 + 280, v34 = lreadbytes(*((_QWORD *)a1 + 59), a1 + 280, 2u, *((_BYTE *)a1 + 616)), v34 < 0)
        || (v73 = a1 + 281, v34 = lreadbytes(*((_QWORD *)a1 + 59), a1 + 281, 2u, *((_BYTE *)a1 + 616)), v34 < 0) )
      {
        v53 = *((void (__fastcall **)(_WORD *, __int64, __int64, _QWORD, __int64))a1 + 62);
        v54 = qlseek(*((_QWORD *)a1 + 59), 0, 1);
        v53(a1, 19, 2, v34, v54);
        goto LABEL_65;
      }
      v36 = a1 + 282;
      v37 = lreadbytes(*((_QWORD *)a1 + 59), a1 + 282, 2u, *((_BYTE *)a1 + 616));
      if ( v37 < 0 || (v37 = lreadbytes(*((_QWORD *)a1 + 59), a1 + 283, 2u, *((_BYTE *)a1 + 616)), v37 < 0) )
      {
        v55 = *((void (__fastcall **)(_WORD *, __int64, __int64, _QWORD, __int64))a1 + 62);
        v56 = qlseek(*((_QWORD *)a1 + 59), 0, 1);
        v55(a1, 19, 2, v37, v56);
        goto LABEL_65;
      }
      if ( *((_DWORD *)a1 + 96) != (unsigned __int16)a1[278]
        && ((*((__int64 (__fastcall **)(_WORD *, __int64))a1 + 62))(a1, 2) & 1) == 0 )
      {
        goto LABEL_65;
      }
      if ( (*v35 == 0) == (*v28 == 0) )
      {
        if ( *v28 && *((_DWORD *)a1 + 97) != (unsigned __int16)a1[279] )
        {
          if ( ((*((__int64 (__fastcall **)(_WORD *, __int64))a1 + 62))(a1, 4) & 1) == 0 )
            goto LABEL_65;
          v65 = *((_DWORD *)a1 + 97);
          if ( v65 > (unsigned __int16)a1[279] )
            goto LABEL_65;
          a1[279] = v65;
          if ( *v36 )
            goto LABEL_71;
        }
        else if ( *v36 )
        {
          goto LABEL_71;
        }
      }
      else
      {
        if ( ((*((__int64 (__fastcall **)(_WORD *, __int64))a1 + 62))(a1, 5) & 1) == 0 )
          goto LABEL_65;
        *v28 = 0;
        *v35 = 0;
        if ( *v36 )
          goto LABEL_71;
      }
      if ( *v31
        && qlseek(*((_QWORD *)a1 + 59), *((_QWORD *)a1 + 60) + *v31, 0) != -1
        && sub_4F66C((__int64)a1, (__int64)v74)
        && !v75 )
      {
        v58 = v76;
        v60 = 0;
        v59 = (unsigned int *)(a1 + 284);
LABEL_72:
        *((_DWORD *)a1 + 142) = v58;
        v61 = *v31;
        if ( (v58 == 0) != (*v31 == 0) )
        {
          if ( ((*((__int64 (__fastcall **)(_WORD *, __int64, _QWORD))a1 + 62))(a1, 7, v58) & 1) == 0 )
            goto LABEL_65;
          goto LABEL_90;
        }
        if ( !v61 )
        {
LABEL_91:
          v61 = 0;
          v64 = *v73 * (unsigned __int64)v58;
          goto LABEL_92;
        }
        if ( *((_DWORD *)a1 + 98) != (unsigned __int16)a1[281] )
        {
          if ( ((*((__int64 (__fastcall **)(_WORD *, __int64))a1 + 62))(a1, 6) & 1) == 0
            || *((_DWORD *)a1 + 98) > (int)(unsigned __int16)a1[281] )
          {
LABEL_90:
            v58 = 0;
            *v31 = 0;
            *v36 = 0;
            *v59 = 0;
            goto LABEL_91;
          }
          v61 = *v31;
          v58 = *v59;
        }
        v62 = *v73 * (unsigned __int64)v58;
        v63 = __CFADD__(v62, v61);
        v64 = v62 + v61;
        if ( v63 )
          goto LABEL_93;
LABEL_92:
        if ( v64 > *((_QWORD *)a1 + 61) - *((_QWORD *)a1 + 60) )
        {
LABEL_93:
          if ( ((*((__int64 (__fastcall **)(_WORD *, __int64, _QWORD))a1 + 62))(a1, 7, v58) & 1) == 0 )
            goto LABEL_65;
          *v31 = 0;
          *v36 = 0;
          *v59 = 0;
          if ( !*v28 )
          {
LABEL_108:
            v69 = (unsigned __int16)a1[261];
            if ( v69 == 183 || v69 == 40 )
            {
              v70 = *((_QWORD *)a1 + 75);
              if ( v70 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 8LL))(v70);
              v71 = operator new(0x50u);
              v71[2] = 0;
              v71[6] = 0;
              v71[7] = 0;
              *v71 = off_1568F8;
              v71[1] = v71 + 2;
              v71[5] = 0;
              v72 = a1 + 300;
              v71[8] = 0;
              *((_BYTE *)v71 + 74) = 0;
              v71[3] = 0;
              v71[4] = v71 + 5;
              *((_WORD *)v71 + 36) = 0;
            }
            else
            {
              v71 = operator new(8u);
              *v71 = &off_156928;
              v72 = a1 + 300;
            }
            *v72 = v71;
            v38 = 1;
            goto LABEL_66;
          }
          goto LABEL_106;
        }
        if ( v61 )
        {
          v66 = (unsigned __int16)a1[283];
          if ( !(v60 & 1 | (v66 != 0xFFFF)) )
          {
            v67 = v77;
            if ( v77 )
            {
              v68 = a1 + 286;
              *((_DWORD *)a1 + 143) = v77;
              if ( v67 < v58 )
                goto LABEL_105;
LABEL_103:
              if ( ((*((__int64 (__fastcall **)(_WORD *, __int64))a1 + 62))(a1, 17) & 1) == 0 )
                goto LABEL_65;
              *v68 = 0;
              goto LABEL_105;
            }
          }
          *((_DWORD *)a1 + 143) = v66;
          if ( v66 )
          {
            v68 = a1 + 286;
            if ( v66 >= v58 )
              goto LABEL_103;
          }
        }
LABEL_105:
        if ( !*v28 )
          goto LABEL_108;
LABEL_106:
        if ( a1[260] != 1 || ((*((__int64 (__fastcall **)(_WORD *, __int64))a1 + 62))(a1, 18) & 1) != 0 )
          goto LABEL_108;
        goto LABEL_65;
      }
LABEL_71:
      v58 = (unsigned __int16)a1[282];
      v59 = (unsigned int *)(a1 + 284);
      v60 = 1;
      goto LABEL_72;
    }
  }
  return 0;
}
// 1568F8: using guessed type __int64 (__fastcall *off_1568F8[4])();
// 156928: using guessed type __int64 (__fastcall *off_156928)();
