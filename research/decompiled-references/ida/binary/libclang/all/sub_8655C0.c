__int64 __fastcall sub_8655C0(__int64 *a1, __int64 a2)
{
  unsigned __int64 *v4; // rax
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r14
  unsigned int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  int *v19; // rsi
  __int64 v20; // r15
  unsigned __int64 v21; // rdx
  int *v22; // rbx
  __int64 v23; // r14
  __int64 v24; // r12
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  _QWORD *v27; // r14
  _QWORD *v28; // rdx
  _QWORD *v29; // rax
  int *v30; // r12
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rax
  _QWORD *v34; // rbp
  unsigned __int8 *v35; // r12
  _BYTE *v36; // rdx
  __int64 v37; // rax
  int *v38; // rbp
  int *v39; // rbx
  int *v40; // r14
  __int64 v41; // rbx
  int *v42; // rbp
  int *v43; // rsi
  __int64 v44; // rdi
  int *v45; // rbx
  int v46; // eax
  __int64 v47; // rax
  int *v48; // r14
  int *v49; // r15
  int *v50; // rbp
  __int64 v51; // rbx
  int *v52; // rsi
  __int64 v53; // rdi
  int *v54; // r14
  unsigned int v55; // r14d
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rax
  __int64 v59; // r13
  __int64 v60; // r14
  __int64 v61; // r13
  void *v62; // rdi
  int v63; // [rsp+30h] [rbp-218h]
  int v64; // [rsp+30h] [rbp-218h]
  unsigned __int8 v65; // [rsp+36h] [rbp-212h]
  unsigned __int8 v66; // [rsp+37h] [rbp-211h]
  int v67; // [rsp+38h] [rbp-210h]
  int v68; // [rsp+38h] [rbp-210h]
  __int64 v69; // [rsp+48h] [rbp-200h]
  void *v70; // [rsp+50h] [rbp-1F8h] BYREF
  unsigned int v71; // [rsp+58h] [rbp-1F0h]
  char v72; // [rsp+5Ch] [rbp-1ECh]
  unsigned int v73; // [rsp+60h] [rbp-1E8h] BYREF
  char v74; // [rsp+64h] [rbp-1E4h]
  __int64 v75; // [rsp+68h] [rbp-1E0h]
  unsigned int v76; // [rsp+70h] [rbp-1D8h]
  unsigned int v77; // [rsp+A0h] [rbp-1A8h] BYREF
  char v78; // [rsp+A4h] [rbp-1A4h]
  __int64 v79; // [rsp+A8h] [rbp-1A0h]
  unsigned int v80; // [rsp+E0h] [rbp-168h] BYREF
  char v81; // [rsp+E4h] [rbp-164h]
  _QWORD *v82; // [rsp+E8h] [rbp-160h]
  int v83; // [rsp+F0h] [rbp-158h]
  int *v84; // [rsp+120h] [rbp-128h] BYREF
  __int64 v85; // [rsp+128h] [rbp-120h]
  _BYTE v86[280]; // [rsp+130h] [rbp-118h] BYREF

  v4 = *(unsigned __int64 **)(a2 + 24);
  v5 = *a1;
  v74 &= ~1u;
  v73 = 0;
  v65 = sub_85F8D0(v5, *v4, &v73);
  if ( !v65 )
    goto LABEL_2;
  v7 = *(_QWORD *)(a2 + 24);
  v8 = *a1;
  v77 = 0;
  v78 &= ~1u;
  v65 = sub_85F8D0(v8, *(_QWORD *)(v7 + 8), &v77);
  if ( v65 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v9 + 16) - 56 > 1 )
      v9 = sub_B0D320(v9);
    v10 = *(unsigned int *)(v9 + 20);
    v84 = (int *)v86;
    v63 = v10;
    v85 = 0x400000000LL;
    if ( (unsigned int)v10 > 4 )
    {
      v47 = sub_25D5F70(&v84, v86, v10, 56, &v80);
      v48 = v84;
      v49 = (int *)v47;
      v50 = &v84[14 * (unsigned int)v85];
      if ( v84 != v50 )
      {
        v51 = v47;
        do
        {
          v52 = v48;
          v53 = v51;
          v48 += 14;
          v51 += 56;
          sub_69F700(v53, v52);
        }
        while ( v50 != v48 );
        v54 = v84;
        v50 = &v84[14 * (unsigned int)v85];
        if ( v84 != v50 )
        {
          do
          {
            v50 -= 14;
            if ( (unsigned int)*v50 > 1 )
              sub_69F740((__int64)v50);
          }
          while ( v54 != v50 );
          v50 = v84;
        }
      }
      v55 = v80;
      if ( v50 != (int *)v86 )
        free(v50);
      v84 = v49;
      HIDWORD(v85) = v55;
      goto LABEL_10;
    }
    if ( (_DWORD)v10 )
    {
LABEL_10:
      v11 = 0;
      while ( 1 )
      {
        v12 = *(_QWORD *)(a2 + 24);
        v13 = *a1;
        v80 = 0;
        v81 &= ~1u;
        v14 = v76;
        sub_863FA0((__int64)&v70, *(__int64 **)(v12 + 8LL * (unsigned int)(v11 + 2)), *(_QWORD *)(v13 + 16), 0);
        v15 = (__int64)v70;
        if ( v72 )
          break;
        if ( v71 > 0x40 )
          goto LABEL_33;
        if ( v71 )
        {
          v15 = (__int64)((_QWORD)v70 << (64 - (unsigned __int8)v71)) >> (64 - (unsigned __int8)v71);
LABEL_15:
          if ( v15 == -1 )
            goto LABEL_34;
          goto LABEL_16;
        }
        v15 = 0;
LABEL_16:
        if ( v14 > v15 )
        {
          v16 = 7 * v15;
          v17 = v75;
        }
        else
        {
          v16 = 7LL * ((unsigned int)v15 - v14);
          v17 = v79;
        }
        sub_6A63E0((__int64)&v80, v17 + 8 * v16);
        if ( v71 > 0x40 && v70 )
          operator delete[](v70);
        v18 = (unsigned int)v85;
        v19 = (int *)&v80;
        v20 = (__int64)v84;
        v21 = (unsigned int)v85 + 1LL;
        if ( HIDWORD(v85) < v21 )
        {
          if ( &v80 < (unsigned int *)v84 || &v80 >= (unsigned int *)&v84[14 * (unsigned int)v85] )
          {
            v69 = -1;
            v66 = 0;
          }
          else
          {
            v66 = v65;
            v69 = 0x6DB6DB6DB6DB6DB7LL * (((char *)&v80 - (char *)v84) >> 3);
          }
          v20 = sub_25D5F70(&v84, v86, v21, 56, &v70);
          v40 = &v84[14 * (unsigned int)v85];
          if ( v84 != v40 )
          {
            v67 = v11;
            v41 = v20;
            v42 = v84;
            do
            {
              v43 = v42;
              v44 = v41;
              v42 += 14;
              v41 += 56;
              sub_69F700(v44, v43);
            }
            while ( v40 != v42 );
            LODWORD(v11) = v67;
            v40 = &v84[14 * (unsigned int)v85];
            if ( v84 != v40 )
            {
              v45 = v84;
              do
              {
                v40 -= 14;
                if ( (unsigned int)*v40 > 1 )
                  sub_69F740((__int64)v40);
              }
              while ( v45 != v40 );
              LODWORD(v11) = v67;
              v40 = v84;
            }
          }
          v46 = (int)v70;
          if ( v40 != (int *)v86 )
          {
            v68 = (int)v70;
            free(v40);
            v46 = v68;
          }
          HIDWORD(v85) = v46;
          v19 = (int *)&v80;
          v84 = (int *)v20;
          v18 = (unsigned int)v85;
          if ( v66 )
            v19 = (int *)(v20 + 56 * v69);
        }
        sub_69F700(v20 + 56 * v18, v19);
        LODWORD(v85) = v85 + 1;
        if ( v80 > 1 )
        {
          v11 = (unsigned int)(v11 + 1);
          sub_69F740((__int64)&v80);
          if ( v63 == (_DWORD)v11 )
          {
LABEL_24:
            v22 = v84;
            goto LABEL_25;
          }
        }
        else
        {
          v11 = (unsigned int)(v11 + 1);
          if ( (_DWORD)v11 == v63 )
            goto LABEL_24;
        }
      }
      if ( v71 <= 0x40 )
        goto LABEL_15;
LABEL_33:
      v15 = *(_QWORD *)v70;
      if ( *(_QWORD *)v70 == -1 )
      {
LABEL_34:
        v33 = sub_A2E130(v13, a2, 4678, 0);
        v34 = (_QWORD *)v33;
        if ( v33 )
        {
          v35 = *(unsigned __int8 **)v33;
          if ( !*(_QWORD *)v33 )
          {
            v56 = *(_QWORD *)(v33 + 8);
            v57 = *(_DWORD *)(v56 + 14976);
            if ( v57 )
            {
              v58 = (unsigned int)(v57 - 1);
              *(_DWORD *)(v56 + 14976) = v58;
              v35 = *(unsigned __int8 **)(v56 + 8 * v58 + 14848);
              v59 = *((unsigned int *)v35 + 134);
              v60 = *((_QWORD *)v35 + 66);
              *v35 = 0;
              *((_DWORD *)v35 + 106) = 0;
              v61 = v60 + (v59 << 6);
              while ( v60 != v61 )
              {
                while ( 1 )
                {
                  v61 -= 64;
                  v62 = *(void **)(v61 + 24);
                  if ( v62 == (void *)(v61 + 40) )
                    break;
                  operator delete(v62, *(_QWORD *)(v61 + 40) + 1LL);
                  if ( v60 == v61 )
                    goto LABEL_90;
                }
              }
LABEL_90:
              *((_DWORD *)v35 + 134) = 0;
            }
            else
            {
              v35 = (unsigned __int8 *)operator new(0x3A0u);
              *v35 = 0;
              *((_QWORD *)v35 + 12) = v35 + 112;
              *((_QWORD *)v35 + 16) = v35 + 144;
              *((_QWORD *)v35 + 20) = v35 + 176;
              *((_QWORD *)v35 + 24) = v35 + 208;
              *((_QWORD *)v35 + 28) = v35 + 240;
              *((_QWORD *)v35 + 32) = v35 + 272;
              *((_QWORD *)v35 + 36) = v35 + 304;
              *((_QWORD *)v35 + 40) = v35 + 336;
              *((_QWORD *)v35 + 44) = v35 + 368;
              *((_QWORD *)v35 + 48) = v35 + 400;
              *((_QWORD *)v35 + 13) = 0;
              v35[112] = 0;
              *((_QWORD *)v35 + 17) = 0;
              v35[144] = 0;
              *((_QWORD *)v35 + 21) = 0;
              v35[176] = 0;
              *((_QWORD *)v35 + 25) = 0;
              v35[208] = 0;
              *((_QWORD *)v35 + 29) = 0;
              v35[240] = 0;
              *((_QWORD *)v35 + 33) = 0;
              v35[272] = 0;
              *((_QWORD *)v35 + 37) = 0;
              v35[304] = 0;
              *((_QWORD *)v35 + 41) = 0;
              v35[336] = 0;
              *((_QWORD *)v35 + 45) = 0;
              v35[368] = 0;
              *((_QWORD *)v35 + 49) = 0;
              v35[400] = 0;
              *((_QWORD *)v35 + 52) = v35 + 432;
              *((_QWORD *)v35 + 53) = 0x800000000LL;
              *((_QWORD *)v35 + 66) = v35 + 544;
              *((_QWORD *)v35 + 67) = 0x600000000LL;
            }
            *v34 = v35;
          }
          v35[*v35 + 1] = 3;
          v36 = (_BYTE *)*v34;
          v37 = *(unsigned __int8 *)*v34;
          *v36 = v37 + 1;
          *(_QWORD *)&v36[8 * v37 + 16] = v11;
        }
        if ( v71 > 0x40 && v70 )
          operator delete[](v70);
        if ( v80 > 1 )
          sub_69F740((__int64)&v80);
        v65 = 0;
        goto LABEL_43;
      }
      goto LABEL_16;
    }
    v22 = (int *)v86;
LABEL_25:
    v23 = (unsigned int)v85;
    v81 &= ~1u;
    v82 = nullptr;
    v64 = v85;
    v83 = 0;
    v80 = 8;
    v24 = 14LL * (unsigned int)v85;
    v25 = (_QWORD *)operator new[](v24 * 4 + 8);
    *v25 = v23;
    v26 = v25 + 1;
    if ( v23 )
    {
      v27 = v25 + 1;
      v28 = &v25[(unsigned __int64)v24 / 2 + 1];
      v29 = v25 + 1;
      do
      {
        *((_BYTE *)v29 + 4) &= ~1u;
        v29 += 7;
        *((_DWORD *)v29 - 14) = 0;
      }
      while ( v28 != v29 );
      v82 = v26;
      v30 = &v22[v24];
      v83 = v64;
      do
      {
        v31 = (__int64)v22;
        v32 = (__int64)v27;
        v22 += 14;
        v27 += 7;
        sub_6A63E0(v32, v31);
      }
      while ( v30 != v22 );
    }
    else
    {
      v82 = v25 + 1;
      v83 = 0;
    }
    sub_6A63E0(a1[1], (__int64)&v80);
    if ( v80 > 1 )
      sub_69F740((__int64)&v80);
LABEL_43:
    v38 = v84;
    v39 = &v84[14 * (unsigned int)v85];
    if ( v84 != v39 )
    {
      do
      {
        v39 -= 14;
        if ( (unsigned int)*v39 > 1 )
          sub_69F740((__int64)v39);
      }
      while ( v38 != v39 );
      v39 = v84;
    }
    if ( v39 != (int *)v86 )
      free(v39);
  }
  if ( v77 > 1 )
    sub_69F740((__int64)&v77);
LABEL_2:
  if ( v73 > 1 )
    sub_69F740((__int64)&v73);
  return v65;
}

