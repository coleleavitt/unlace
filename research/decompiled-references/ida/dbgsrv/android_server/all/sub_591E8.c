/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_591E8
// Address: 0x00000000000591E8

//----- (00000000000591E8) ----------------------------------------------------
void __fastcall sub_591E8(pthread_mutex_t *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // x22
  __int64 v4; // x30
  __int64 v5; // x19
  __int64 v6; // x20
  pthread_mutex_t *v7; // x21
  unsigned __int64 v8; // x8
  unsigned int v9; // w3
  __int64 *v10; // x2
  char *v11; // x8
  int v12; // w9
  int v13; // w8
  unsigned int v15; // w22
  void (__fastcall *v16)(__int64, __int64, _QWORD, __int64); // x8
  char v17; // w8
  int v18; // w8
  char *v19; // x22
  char v20; // w8
  void (__fastcall *v21)(__int64, __int64, __int64, _QWORD); // x8
  __int64 v22; // x12
  unsigned int v23; // w11
  __int64 *v24; // x9
  unsigned int v25; // w13
  bool v26; // cf
  _BOOL4 v27; // w13
  _QWORD *v28; // x12
  _QWORD *v29; // x9
  unsigned __int64 v30; // x10
  _QWORD *v31; // x13
  _QWORD *v32; // x11
  __int64 v33; // x13
  __int64 v34; // x14
  _QWORD *v35; // t1
  void (__fastcall *v36)(__int64, __int64, __int64, _QWORD); // x9
  void (__fastcall *v37)(__int64, __int64, __int64, _QWORD); // x4
  int v38; // w19
  pthread_mutex_t *v39; // x21
  __int64 *v40; // x24
  __int64 *v41; // x26
  __int64 v42; // x20
  unsigned int v43; // w8
  __int64 *v44; // x22
  __int64 v45; // x9
  unsigned int v46; // w10
  _BOOL4 v47; // w10
  unsigned int v48; // w8
  __int64 **v49; // x27
  unsigned int v50; // w9
  __int64 *v51; // x22
  __int64 *v52; // x0
  int v53; // w8
  __int64 v54; // x8
  __int64 *v55; // x1
  _QWORD *v56; // x22
  _QWORD *v57; // t1
  _QWORD *v58; // x1
  __int64 v59; // x8
  __int64 v60; // x9
  unsigned int v61; // w8
  unsigned int v62; // w10
  _BOOL4 v63; // w10
  __int64 **v64; // x24
  __int64 *v65; // x25
  unsigned __int64 v66; // x8
  unsigned __int64 v67; // x9
  __int64 *v68; // x21
  _DWORD *v69; // x0
  __int64 v70; // x8
  __int64 v71; // x8
  __int64 *v72; // x1
  _QWORD *v73; // [xsp+0h] [xbp-A0h] BYREF
  _QWORD *v74; // [xsp+8h] [xbp-98h] BYREF
  __int64 v75; // [xsp+10h] [xbp-90h]
  __int64 v76; // [xsp+18h] [xbp-88h]
  __int64 v77; // [xsp+48h] [xbp-58h]
  pthread_mutex_t *v78; // [xsp+50h] [xbp-50h]
  __int64 v79; // [xsp+58h] [xbp-48h]
  __int64 v80; // [xsp+60h] [xbp-40h]
  __int64 v81; // [xsp+68h] [xbp-38h]
  __int64 v82; // [xsp+70h] [xbp-30h]
  pthread_mutex_t *v83; // [xsp+80h] [xbp-20h]
  __int64 v84; // [xsp+88h] [xbp-18h]
  __int64 v85; // [xsp+90h] [xbp-10h]
  __int64 v86; // [xsp+98h] [xbp-8h]

  v5 = a3;
  v6 = a2;
  v7 = a1;
  if ( *(_QWORD *)(a3 + 8) > 1u )
    goto LABEL_8;
  v8 = *(_QWORD *)(a2 + 288);
  if ( v8 > a3 || v8 + 96LL * *(_QWORD *)(a2 + 296) < a3 )
  {
    if ( !under_debugger )
      a1 = interr(20086);
    __break(1u);
LABEL_70:
    v77 = v3;
    v78 = v7;
    v79 = v6;
    v80 = v5;
    v81 = v4;
    v38 = a3;
    v39 = a1;
    v76 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
    v40 = &a1->__align + 2;
    v41 = (__int64 *)*(&a1->__align + 2);
    v42 = a2;
    if ( v41 )
    {
      v43 = *(_DWORD *)(a2 + 88);
      v44 = &a1->__align + 2;
      v45 = *(&a1->__align + 2);
      do
      {
        v46 = *(_DWORD *)(v45 + 32);
        v26 = v46 >= v43;
        v47 = v46 < v43;
        if ( v26 )
          v44 = (__int64 *)v45;
        v45 = *(_QWORD *)(v45 + 8LL * v47);
      }
      while ( v45 );
      if ( v44 != v40 && v43 >= *((_DWORD *)v44 + 8) )
      {
LABEL_107:
        v64 = (__int64 **)(v44 + 6);
        v65 = (__int64 *)v44[6];
        if ( v65 )
        {
          v66 = *(_QWORD *)(v42 + 56);
          v64 = (__int64 **)(v44 + 6);
          while ( 1 )
          {
            while ( 1 )
            {
              v67 = v65[4];
              if ( v66 < v67 )
                break;
              if ( v67 >= v66 )
                goto LABEL_117;
              v64 = (__int64 **)(v65 + 1);
              if ( !v65[1] )
                goto LABEL_117;
              v65 = (__int64 *)v65[1];
            }
            if ( !*v65 )
              break;
            v64 = (__int64 **)v65;
            v65 = (__int64 *)*v65;
          }
          v64 = (__int64 **)v65;
          v68 = (__int64 *)*v65;
          if ( *v65 )
            goto LABEL_124;
        }
        else
        {
          v65 = v44 + 6;
LABEL_117:
          v68 = *v64;
          if ( *v64 )
            goto LABEL_124;
        }
        v69 = operator new(0x30u);
        v70 = *(_QWORD *)(v42 + 56);
        v69[10] = 0;
        *(_QWORD *)v69 = 0;
        *((_QWORD *)v69 + 1) = 0;
        *((_QWORD *)v69 + 2) = v65;
        *((_QWORD *)v69 + 4) = v70;
        *v64 = (__int64 *)v69;
        v68 = (__int64 *)v69;
        v71 = *(_QWORD *)v44[5];
        if ( v71 )
        {
          v44[5] = v71;
          v72 = *v64;
        }
        else
        {
          v72 = (__int64 *)v69;
        }
        sub_48ED8((__int64 *)v44[6], v72);
        ++v44[7];
LABEL_124:
        *((_DWORD *)v68 + 10) = v38;
        return;
      }
    }
    v74 = nullptr;
    v75 = 0;
    v73 = &v74;
    if ( v41 )
    {
      v48 = *(_DWORD *)(a2 + 88);
      v49 = (__int64 **)(&a1->__align + 2);
      while ( 1 )
      {
        while ( 1 )
        {
          v50 = *((_DWORD *)v41 + 8);
          if ( v48 < v50 )
            break;
          if ( v50 >= v48 )
            goto LABEL_88;
          v49 = (__int64 **)(v41 + 1);
          if ( !v41[1] )
            goto LABEL_88;
          v41 = (__int64 *)v41[1];
        }
        if ( !*v41 )
          break;
        v49 = (__int64 **)v41;
        v41 = (__int64 *)*v41;
      }
      v49 = (__int64 **)v41;
      v51 = (__int64 *)*v41;
      if ( *v41 )
        goto LABEL_95;
    }
    else
    {
      v41 = &a1->__align + 2;
      v49 = (__int64 **)(&a1->__align + 2);
LABEL_88:
      v51 = *v49;
      if ( *v49 )
        goto LABEL_95;
    }
    v52 = (__int64 *)operator new(0x40u);
    v53 = *(_DWORD *)(v42 + 88);
    v52[7] = 0;
    v51 = v52;
    *((_DWORD *)v52 + 8) = v53;
    v52[6] = 0;
    *v52 = 0;
    v52[1] = 0;
    v52[2] = (__int64)v41;
    v52[5] = (__int64)(v52 + 6);
    *v49 = v52;
    v54 = **((_QWORD **)&v39->__align + 1);
    if ( v54 )
    {
      *(&v39->__align + 1) = v54;
      v55 = *v49;
    }
    else
    {
      v55 = v52;
    }
    sub_48ED8(*((__int64 **)&v39->__align + 2), v55);
    ++v39->__list.__prev;
LABEL_95:
    v57 = (_QWORD *)v51[6];
    v56 = v51 + 6;
    sub_5B2BC((__int64)(v56 - 1), v57);
    v58 = v74;
    *(v56 - 1) = v73;
    *v56 = v58;
    v59 = v75;
    v56[1] = v75;
    if ( v59 )
    {
      v58[2] = v56;
      v58 = nullptr;
      v73 = &v74;
      v74 = nullptr;
      v75 = 0;
    }
    else
    {
      *(v56 - 1) = v56;
    }
    sub_5B2BC((__int64)&v73, v58);
    v60 = *v40;
    if ( !*v40 )
      goto LABEL_106;
    v61 = *(_DWORD *)(v42 + 88);
    v44 = v40;
    do
    {
      v62 = *(_DWORD *)(v60 + 32);
      v26 = v62 >= v61;
      v63 = v62 < v61;
      if ( v26 )
        v44 = (__int64 *)v60;
      v60 = *(_QWORD *)(v60 + 8LL * v63);
    }
    while ( v60 );
    if ( v44 == v40 || v61 < *((_DWORD *)v44 + 8) )
LABEL_106:
      v44 = v40;
    goto LABEL_107;
  }
  v9 = *(_DWORD *)(a3 + 48);
  v10 = (__int64 *)(0xAAAAAAAAAAAAAAABLL * ((__int64)(a3 - v8) >> 5) >= *(_QWORD *)(a2 + 312) ? a2 + 352 : a2 + 320);
  sub_55D60(a2, v5, v10, v9);
  if ( *(_QWORD *)(v5 + 8) )
  {
LABEL_8:
    v11 = *(char **)v5;
    if ( !*(_QWORD *)v5 )
      goto LABEL_31;
  }
  else
  {
    v11 = &byte_F154B;
  }
  if ( *v11 != 36
    || (v12 = (unsigned __int8)v11[1], !v11[1])
    || v11[2] != 46 && v11[2]
    || (unsigned int)(v12 - 97) > 0x17
    || ((1 << (v12 - 97)) & 0x88802B) == 0 )
  {
LABEL_31:
    v17 = *(_BYTE *)(v5 + 52);
    if ( ((1 << (v17 & 0xF)) & 0xA004) == 0 || *(unsigned __int8 *)(v5 + 92) > 2u )
      return;
    v18 = v17 & 0xF;
    *(_QWORD *)(v5 + 80) &= ~1uLL;
    if ( v18 != 15 )
    {
      if ( v18 == 13 )
      {
        *(_BYTE *)(v5 + 93) = 2;
      }
      else if ( (*(_BYTE *)(v5 + 56) & 1) == 0 )
      {
        v19 = (char *)(v5 + 94);
        v20 = *(_BYTE *)(v5 + 94);
        if ( (v20 & 1) != 0 )
        {
LABEL_63:
          if ( (v20 & 1) == 0 )
          {
            v37 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD))*(&v7[1].__align + 2);
            if ( v37 )
              v37(v6, v5, 1, 0);
          }
          return;
        }
LABEL_42:
        if ( v7[1].__size[33] )
        {
          v22 = *(&v7->__align + 2);
          if ( v22 )
          {
            v23 = *(_DWORD *)(v5 + 88);
            v24 = &v7->__align + 2;
            do
            {
              v25 = *(_DWORD *)(v22 + 32);
              v26 = v25 >= v23;
              v27 = v25 < v23;
              if ( v26 )
                v24 = (__int64 *)v22;
              v22 = *(_QWORD *)(v22 + 8LL * v27);
            }
            while ( v22 );
            if ( v24 != &v7->__align + 2 && v23 >= *((_DWORD *)v24 + 8) )
            {
              v28 = (_QWORD *)v24[5];
              v29 = v24 + 6;
              if ( v28 != v29 )
              {
                v30 = *(_QWORD *)(v5 + 56);
                if ( v28[4] <= v30 )
                {
                  do
                  {
                    v31 = (_QWORD *)v28[1];
                    v32 = v28;
                    if ( v31 )
                    {
                      do
                      {
                        v28 = v31;
                        v31 = (_QWORD *)*v31;
                      }
                      while ( v31 );
                    }
                    else
                    {
                      v33 = (__int64)(v28 + 2);
                      v28 = (_QWORD *)v28[2];
                      if ( (_QWORD *)*v28 != v32 )
                      {
                        do
                        {
                          v34 = *(_QWORD *)v33;
                          v35 = *(_QWORD **)(*(_QWORD *)v33 + 16LL);
                          v33 = *(_QWORD *)v33 + 16LL;
                          v28 = v35;
                        }
                        while ( *v35 != v34 );
                      }
                    }
                  }
                  while ( v28 != v29 && v28[4] <= v30 );
                  if ( *((_DWORD *)v32 + 10) == 2 )
                  {
                    v20 |= 1u;
                    *v19 = v20;
                    v36 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD))*(&v7[1].__align + 2);
                    if ( v36 )
                    {
                      v36(v6, v5, 2, 0);
                      v20 = *(_BYTE *)(v5 + 94);
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_63;
      }
    }
    v19 = (char *)(v5 + 94);
    *(_BYTE *)(v5 + 94) |= 1u;
    v21 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD))*(&v7[1].__align + 2);
    if ( v21 )
      v21(v6, v5, 2, 0);
    v20 = *v19;
    if ( (*v19 & 1) != 0 )
      goto LABEL_63;
    goto LABEL_42;
  }
  v7[1].__size[32] = 1;
  v13 = (unsigned __int8)v11[1];
  if ( (unsigned int)(v13 - 97) <= 0x17 && ((1 << (v13 - 97)) & 0x880001) != 0 )
  {
    if ( v13 == 120 || v13 == 97 )
      v15 = 1;
    else
      v15 = 2;
    if ( v13 == 116 )
      *(_BYTE *)(v5 + 94) |= 1u;
    v16 = (void (__fastcall *)(__int64, __int64, _QWORD, __int64))*(&v7[1].__align + 2);
    if ( v16 )
      v16(v6, v5, v15, 1);
    if ( v7[1].__size[33] )
    {
      a1 = v7;
      a2 = v5;
      v5 = v85;
      v4 = v86;
      v7 = v83;
      v6 = v84;
      LODWORD(a3) = v15;
      v3 = v82;
      goto LABEL_70;
    }
  }
}
// 5955C: variable 'v3' is possibly undefined
// 59564: variable 'v4' is possibly undefined
// 59574: variable 'a3' is possibly undefined
// 59584: variable 'a2' is possibly undefined
// F154B: using guessed type char byte_F154B;
// 168DF0: using guessed type char under_debugger;
