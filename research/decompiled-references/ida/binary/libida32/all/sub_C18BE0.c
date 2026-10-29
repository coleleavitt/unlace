__int64 __fastcall sub_C18BE0(__int64 *a1, __int64 a2)
{
  unsigned int v4; // eax
  char v6; // al
  __int64 v7; // rdi
  char v8; // al
  __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // ebp
  __int64 v15; // r12
  char v16; // r13
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // eax
  void *v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rsi
  int *v24; // rcx
  unsigned int *v25; // rsi
  __int64 v26; // r13
  int v27; // eax
  char v28; // r13
  unsigned int v29; // eax
  int *v30; // r13
  unsigned __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdx
  unsigned int v36; // ebp
  __int64 v37; // r12
  char v38; // al
  unsigned int v39; // edx
  __int64 v40; // rax
  unsigned __int64 v41; // rsi
  int *v42; // rcx
  unsigned int *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // eax
  unsigned __int8 v47; // [rsp+Fh] [rbp-269h]
  _QWORD *v48; // [rsp+10h] [rbp-268h]
  __int64 v49; // [rsp+10h] [rbp-268h]
  _QWORD *v50; // [rsp+18h] [rbp-260h]
  char v51; // [rsp+20h] [rbp-258h]
  char v52; // [rsp+20h] [rbp-258h]
  __int64 v53; // [rsp+20h] [rbp-258h]
  __int64 v54; // [rsp+20h] [rbp-258h]
  int *v55; // [rsp+20h] [rbp-258h]
  unsigned __int64 v56; // [rsp+28h] [rbp-250h]
  __int64 v57; // [rsp+30h] [rbp-248h]
  void *v58; // [rsp+50h] [rbp-228h] BYREF
  unsigned int v59; // [rsp+58h] [rbp-220h]
  char v60; // [rsp+5Ch] [rbp-21Ch]
  void *v61; // [rsp+60h] [rbp-218h] BYREF
  unsigned int v62; // [rsp+68h] [rbp-210h]
  char v63; // [rsp+6Ch] [rbp-20Ch]
  void *v64; // [rsp+70h] [rbp-208h] BYREF
  unsigned int v65; // [rsp+78h] [rbp-200h]
  char v66; // [rsp+7Ch] [rbp-1FCh]
  void *v67; // [rsp+80h] [rbp-1F8h] BYREF
  unsigned int v68; // [rsp+88h] [rbp-1F0h]
  char v69; // [rsp+8Ch] [rbp-1ECh]
  void *v70; // [rsp+90h] [rbp-1E8h] BYREF
  __int64 v71; // [rsp+98h] [rbp-1E0h]
  unsigned int v72; // [rsp+A0h] [rbp-1D8h]
  unsigned int v73; // [rsp+D0h] [rbp-1A8h] BYREF
  char v74; // [rsp+D4h] [rbp-1A4h]
  __int64 v75; // [rsp+D8h] [rbp-1A0h]
  unsigned int v76; // [rsp+E0h] [rbp-198h]
  unsigned int v77; // [rsp+110h] [rbp-168h] BYREF
  char v78; // [rsp+114h] [rbp-164h]
  __int64 v79; // [rsp+118h] [rbp-160h]
  int v80; // [rsp+120h] [rbp-158h]
  int *v81; // [rsp+150h] [rbp-128h] BYREF
  __int64 v82; // [rsp+158h] [rbp-120h]
  _BYTE v83[280]; // [rsp+160h] [rbp-118h] BYREF

  v4 = sub_BD8130(a2);
  if ( v4 != 465 )
  {
    if ( v4 <= 0x1D1 )
    {
      if ( v4 != 464 )
        return 0;
      goto LABEL_8;
    }
    if ( v4 != 487 )
    {
      if ( v4 != 495 )
        return 0;
LABEL_8:
      v6 = *(_BYTE *)(a2 + 2);
      v7 = *a1;
      LODWORD(v70) = 0;
      BYTE4(v70) &= ~1u;
      v74 &= ~1u;
      v73 = 0;
      if ( (unsigned __int8)sub_C167C0(v7, *(_QWORD *)(a2 + 8 * (((v6 & 8) != 0) + 1LL) + 32), (unsigned int *)&v70)
        && (v31 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40),
            (v47 = sub_C167C0(*a1, v31, &v73)) != 0) )
      {
        v33 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        v34 = (unsigned int)*(unsigned __int8 *)(v33 + 16) - 57;
        if ( (unsigned int)v34 > 1 )
          v33 = sub_F3F310(v33, v31, v34, v32);
        v35 = *(_QWORD *)(v33 + 32);
        v81 = (int *)v83;
        v36 = v72;
        v82 = 0x400000000LL;
        if ( v72 > 4uLL )
        {
          v49 = v35;
          sub_C021C0((__int64)&v81, v72);
          v35 = v49;
        }
        if ( v36 )
        {
          v37 = 0;
          v48 = (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF0LL);
          while ( 1 )
          {
            v44 = v37 + v71;
            v59 = *(_DWORD *)(v37 + v71 + 16);
            if ( v59 > 0x40 )
            {
              v54 = v37 + v71;
              sub_21E17D0(&v58);
              v44 = v54;
            }
            else
            {
              v58 = *(void **)(v44 + 8);
            }
            v60 = *(_BYTE *)(v44 + 20);
            v45 = v37 + v75;
            v62 = *(_DWORD *)(v37 + v75 + 16);
            if ( v62 > 0x40 )
            {
              v53 = v37 + v75;
              sub_21E17D0(&v61);
              v45 = v53;
            }
            else
            {
              v61 = *(void **)(v45 + 8);
            }
            v63 = *(_BYTE *)(v45 + 20);
            v46 = sub_BD8130(a2);
            if ( v46 == 464 )
              break;
            if ( v46 == 495 )
            {
              v51 = sub_F41720(*v48);
              if ( v60 )
                sub_21E58C0(&v64, &v58, &v61);
              else
                sub_21E5790(&v64, &v58, &v61);
              v38 = v51;
LABEL_62:
              v39 = v65;
              v69 = v38;
              v65 = 0;
              v68 = v39;
              v67 = v64;
              sub_B72A30((__int64)&v77, (__int64 *)&v67);
              v40 = (unsigned int)v82;
              v41 = (unsigned int)v82 + 1LL;
              if ( v41 > HIDWORD(v82) )
              {
                if ( v81 > (int *)&v77 || (v55 = v81, &v77 >= (unsigned int *)&v81[14 * (unsigned int)v82]) )
                {
                  sub_C021C0((__int64)&v81, v41);
                  v42 = v81;
                  v40 = (unsigned int)v82;
                  v43 = &v77;
                }
                else
                {
                  sub_C021C0((__int64)&v81, v41);
                  v42 = v81;
                  v40 = (unsigned int)v82;
                  v43 = (unsigned int *)((char *)v81 + (char *)&v77 - (char *)v55);
                }
              }
              else
              {
                v42 = v81;
                v43 = &v77;
              }
              sub_A2BB60((__int64)&v42[14 * v40], (__int64)v43);
              LODWORD(v82) = v82 + 1;
              if ( v77 > 1 )
                sub_A2BBA0((int *)&v77);
              if ( v68 > 0x40 && v67 )
                operator delete[](v67);
              if ( v65 > 0x40 && v64 )
                operator delete[](v64);
            }
            if ( v62 > 0x40 && v61 )
              operator delete[](v61);
            if ( v59 > 0x40 && v58 )
              operator delete[](v58);
            v37 += 56;
            if ( v37 == 56 * (v36 - 1 + 1LL) )
              goto LABEL_96;
          }
          v52 = sub_F41720(*v48);
          if ( v60 )
            sub_21E56A0(&v64, &v58, &v61);
          else
            sub_21E5570(&v64, &v58, &v61);
          v38 = v52;
          goto LABEL_62;
        }
LABEL_96:
        v79 = 0;
        v78 &= ~1u;
        v80 = 0;
        v77 = 8;
        sub_BF50C0((__int64)&v77, v81, v82);
        sub_A30FE0(a1[1], (int *)&v77);
        if ( v77 > 1 )
          sub_A2BBA0((int *)&v77);
        sub_BFF870((__int64)&v81);
      }
      else
      {
        v47 = 0;
      }
      if ( v73 > 1 )
      {
        sub_A2BBA0((int *)&v73);
        if ( (unsigned int)v70 <= 1 )
          return v47;
      }
      else if ( (unsigned int)v70 <= 1 )
      {
        return v47;
      }
      sub_A2BBA0((int *)&v70);
      return v47;
    }
  }
  v8 = *(_BYTE *)(a2 + 2);
  v9 = *a1;
  v73 = 0;
  v74 &= ~1u;
  v10 = *(_QWORD *)(a2 + 8 * (((v8 & 8) != 0) + 1LL) + 32);
  v47 = sub_C167C0(v9, v10, &v73);
  if ( v47 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v13 = (unsigned int)*(unsigned __int8 *)(v12 + 16) - 57;
    if ( (unsigned int)v13 > 1 )
      v12 = sub_F3F310(v12, v10, v13, v11);
    v57 = *(_QWORD *)(v12 + 32);
    v14 = v76;
    v81 = (int *)v83;
    v82 = 0x400000000LL;
    if ( v76 > 4uLL )
      sub_C021C0((__int64)&v81, v76);
    if ( v14 )
    {
      v15 = 0;
      v50 = (_QWORD *)(v57 & 0xFFFFFFFFFFFFFFF0LL);
      while ( 1 )
      {
        v26 = v15 + v75;
        v65 = *(_DWORD *)(v15 + v75 + 16);
        if ( v65 > 0x40 )
          sub_21E17D0(&v64);
        else
          v64 = *(void **)(v26 + 8);
        v66 = *(_BYTE *)(v26 + 20);
        v27 = sub_BD8130(a2);
        if ( v27 == 465 )
          break;
        if ( v27 == 487 )
        {
          v16 = sub_F41720(*v50);
          if ( v65 > 0x40 )
            v17 = sub_21E2CA0(&v64);
          else
            v17 = __popcountdi2();
          v56 = v17;
          v20 = sub_A884B0(*(_QWORD *)(*a1 + 16), v57, v18, v17, v19);
          v21 = (void *)v56;
          v68 = v20;
          if ( v20 > 0x40 )
          {
            sub_21E1730(&v67, v56, 0);
            v20 = v68;
            v21 = v67;
          }
          else
          {
            v67 = (void *)v56;
          }
          LODWORD(v71) = v20;
          v70 = v21;
          v68 = 0;
          BYTE4(v71) = v16;
          sub_B72A30((__int64)&v77, (__int64 *)&v70);
          v22 = (unsigned int)v82;
          v23 = (unsigned int)v82 + 1LL;
          if ( v23 <= HIDWORD(v82) )
          {
LABEL_26:
            v24 = v81;
            v25 = &v77;
LABEL_27:
            sub_A2BB60((__int64)&v24[14 * v22], (__int64)v25);
            LODWORD(v82) = v82 + 1;
            if ( v77 > 1 )
              sub_A2BBA0((int *)&v77);
            if ( (unsigned int)v71 > 0x40 && v70 )
              operator delete[](v70);
            if ( v68 > 0x40 && v67 )
              operator delete[](v67);
            goto LABEL_35;
          }
          v30 = v81;
          if ( v81 <= (int *)&v77 && &v77 < (unsigned int *)&v81[14 * (unsigned int)v82] )
          {
LABEL_101:
            sub_C021C0((__int64)&v81, v23);
            v24 = v81;
            v22 = (unsigned int)v82;
            v25 = (unsigned int *)((char *)v81 + (char *)&v77 - (char *)v30);
            goto LABEL_27;
          }
LABEL_45:
          sub_C021C0((__int64)&v81, v23);
          v24 = v81;
          v22 = (unsigned int)v82;
          v25 = &v77;
          goto LABEL_27;
        }
LABEL_35:
        if ( v65 > 0x40 && v64 )
          operator delete[](v64);
        v15 += 56;
        if ( v15 == 56 * (v14 - 1 + 1LL) )
          goto LABEL_46;
      }
      v28 = sub_F41720(*v50);
      sub_21E7160(&v67, &v64);
      v29 = v68;
      v68 = 0;
      LODWORD(v71) = v29;
      BYTE4(v71) = v28;
      v70 = v67;
      sub_B72A30((__int64)&v77, (__int64 *)&v70);
      v22 = (unsigned int)v82;
      v23 = (unsigned int)v82 + 1LL;
      if ( v23 <= HIDWORD(v82) )
        goto LABEL_26;
      v30 = v81;
      if ( v81 <= (int *)&v77 && &v77 < (unsigned int *)&v81[14 * (unsigned int)v82] )
        goto LABEL_101;
      goto LABEL_45;
    }
LABEL_46:
    v79 = 0;
    v78 &= ~1u;
    v80 = 0;
    v77 = 8;
    sub_BF50C0((__int64)&v77, v81, v82);
    sub_A30FE0(a1[1], (int *)&v77);
    if ( v77 > 1 )
      sub_A2BBA0((int *)&v77);
    sub_BFF870((__int64)&v81);
  }
  if ( v73 > 1 )
    sub_A2BBA0((int *)&v73);
  return v47;
}

