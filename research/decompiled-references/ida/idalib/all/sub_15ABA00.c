__int64 __fastcall sub_15ABA00(
        __int64 a1,
        char a2,
        char a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        int a8,
        char a9,
        int a10,
        int a11,
        unsigned int a12,
        __int64 a13,
        _QWORD *a14,
        _QWORD *a15,
        unsigned int a16,
        __int64 a17,
        __int64 a18,
        _QWORD *a19,
        unsigned __int64 a20,
        int a21,
        int a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        int a26,
        __int64 a27)
{
  char v30; // cl
  char v31; // cl
  _QWORD *v32; // r13
  __int64 v33; // r8
  char v34; // al
  __int64 v35; // r10
  void *v36; // rdi
  char v37; // dl
  __int64 v38; // r8
  unsigned __int8 v39; // al
  char v40; // al
  char v41; // cl
  const void *v42; // r9
  signed __int64 v43; // rax
  __int64 v44; // r11
  unsigned __int64 v45; // rdi
  _QWORD *v46; // rax
  __int64 v47; // rax
  _QWORD *v49; // rdx
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rcx
  __int64 v53; // r15
  unsigned __int64 v54; // r12
  __int64 v55; // r15
  _QWORD *v56; // rdx
  __int64 v57; // rcx
  void **v58; // r13
  unsigned __int64 v59; // rbp
  _QWORD *v60; // rax
  _QWORD *v61; // rdx
  unsigned int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  char v65; // al
  char v66; // cl
  char v67; // dl
  char v68; // cl
  char v69; // dl
  __int64 v70; // [rsp+0h] [rbp-58h]
  __int64 v71; // [rsp+0h] [rbp-58h]
  __int64 v72; // [rsp+8h] [rbp-50h]
  int v73; // [rsp+8h] [rbp-50h]
  const void *v74; // [rsp+10h] [rbp-48h]
  __int64 v75; // [rsp+18h] [rbp-40h]
  __int64 v76; // [rsp+E0h] [rbp+88h]
  __int64 v77; // [rsp+E0h] [rbp+88h]

  *(_QWORD *)(a1 + 24) = a1 + 40;
  *(_QWORD *)(a1 + 32) = 0x200000000LL;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = a21;
  *(_DWORD *)a1 = 3;
  *(_DWORD *)(a1 + 8) = a22;
  *(_DWORD *)(a1 + 60) = a4;
  v30 = *(_BYTE *)(a1 + 57);
  *(_DWORD *)(a1 + 64) = a7;
  v31 = v30 & 0xFE;
  v32 = a19;
  *(_BYTE *)(a1 + 57) = v31;
  *(_DWORD *)(a1 + 72) = a6;
  v33 = a23;
  *(_DWORD *)(a1 + 68) = a8;
  *(_QWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = a10;
  *(_QWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 84) = a11;
  *(_BYTE *)(a1 + 56) = (16 * a12) | (8 * (a9 & 1)) & 0xF | (4 * (a3 & 1)) & 0xF | (2 * (a7 != 0)) & 3 | a2 & 1;
  *(_QWORD *)(a1 + 88) = a13;
  v34 = a25;
  if ( !(_BYTE)a25 )
    v34 = a24 != 0;
  *(_QWORD *)(a1 + 128) = a24;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_BYTE *)(a1 + 57) = (2 * (v34 & 1)) | v31 & 0xFD;
  *(_DWORD *)(a1 + 136) = a26;
  if ( a27 && ((*(_BYTE *)(a27 + 3) & 0x7C) != 0 || *(_DWORD *)(a27 + 48)) )
  {
    v70 = *(_QWORD *)(a27 + 72);
    v35 = operator new(0x128u);
    *(_QWORD *)(v35 + 72) = v70;
    v36 = (void *)(v35 + 56);
    *(_QWORD *)v35 &= 0xFFFFFFC000000000LL;
    *(_QWORD *)(v35 + 48) = 0x200000000LL;
    *(_QWORD *)(v35 + 80) = v35 + 96;
    v37 = 4;
    *(_QWORD *)(v35 + 88) = 0x200000000LL;
    *(_QWORD *)(v35 + 16) = 0;
    *(_QWORD *)(v35 + 24) = 0;
    *(_QWORD *)(v35 + 32) = 0;
    *(_QWORD *)(v35 + 40) = v35 + 56;
    *(_QWORD *)(v35 + 112) = 0;
    *(_QWORD *)(v35 + 120) = 0;
    *(_QWORD *)(v35 + 128) = 0;
    *(_QWORD *)(v35 + 136) = 0;
    *(_QWORD *)(v35 + 144) = 0;
    *(_QWORD *)(v35 + 152) = 0;
    *(_QWORD *)(v35 + 160) = 0;
    *(_QWORD *)(v35 + 168) = 0;
    *(_QWORD *)(v35 + 176) = 0;
    *(_QWORD *)(v35 + 184) = 0;
    *(_QWORD *)(v35 + 192) = 0;
    *(_QWORD *)(v35 + 200) = 0;
    *(_QWORD *)(v35 + 208) = 0;
    *(_QWORD *)(v35 + 216) = 0;
    *(_QWORD *)(v35 + 224) = 0;
    *(_QWORD *)(v35 + 232) = 0;
    *(_QWORD *)(v35 + 240) = 0;
    *(_QWORD *)(v35 + 248) = 0;
    *(_QWORD *)(v35 + 256) = 0;
    *(_QWORD *)(v35 + 264) = 0;
    *(_QWORD *)(v35 + 272) = 0;
    *(_WORD *)(v35 + 280) &= 0xF000u;
    v38 = a23;
    *(_QWORD *)(a1 + 104) = v35;
    v39 = *(_BYTE *)(a27 + 3);
    *(_QWORD *)(v35 + 288) = 0;
    v40 = (v39 >> 2) & 0x1F;
    v41 = v40 & 1;
    if ( (v40 & 1) != 0 )
    {
      v69 = *(_BYTE *)(v35 + 3) & 0x83;
      *(_DWORD *)(v35 + 220) = *(_DWORD *)(a27 + 220);
      *(_BYTE *)(v35 + 3) = v69 | 4;
      v37 = 5;
    }
    if ( (v40 & 4) != 0 )
    {
      v68 = *(_BYTE *)(v35 + 3) & 0x83;
      *(_DWORD *)(v35 + 228) = *(_DWORD *)(a27 + 228);
      *(_BYTE *)(v35 + 3) = (4 * v37) | v68;
      v41 = v37;
    }
    if ( (v40 & 2) != 0 )
    {
      v41 |= 2u;
      v67 = *(_BYTE *)(v35 + 3) & 0x83;
      *(_DWORD *)(v35 + 224) = *(_DWORD *)(a27 + 224);
      *(_BYTE *)(v35 + 3) = (4 * (v41 & 0x1F)) | v67;
    }
    if ( (v40 & 8) != 0 )
    {
      v65 = 4 * (v41 & 0x17 | 8);
      v66 = *(_BYTE *)(v35 + 3);
      *(_DWORD *)(v35 + 236) = *(_DWORD *)(a27 + 236);
      *(_BYTE *)(v35 + 3) = v66 & 0x83 | v65;
    }
    v42 = *(const void **)(a27 + 40);
    v43 = 8LL * *(unsigned int *)(a27 + 48);
    v44 = v43 >> 3;
    if ( (unsigned __int64)v43 > 0x10 )
    {
      v75 = 8LL * *(unsigned int *)(a27 + 48);
      v74 = *(const void **)(a27 + 40);
      v72 = v35;
      sub_2237220(v35 + 40, v36, v44, 8);
      v35 = v72;
      LODWORD(v44) = v75 >> 3;
      v42 = v74;
      v43 = v75;
      v38 = a23;
      v36 = (void *)(*(_QWORD *)(v72 + 40) + 8LL * *(unsigned int *)(v72 + 48));
    }
    else if ( !v43 )
    {
LABEL_16:
      *(_DWORD *)(a27 + 48) = 0;
      *(_DWORD *)(v35 + 48) = v43 + v44;
      v76 = v38;
      sub_15D8C50(v35 + 72, a27 + 72);
      *(_DWORD *)(a27 + 88) = 0;
      sub_15D8C50(*(_QWORD *)(a1 + 104) + 72LL, a27 + 72);
      *(_DWORD *)(a27 + 88) = 0;
      v33 = v76;
      goto LABEL_17;
    }
    v71 = v35;
    v73 = v44;
    v77 = v38;
    memcpy(v36, v42, v43);
    v35 = v71;
    LODWORD(v44) = v73;
    v38 = v77;
    LODWORD(v43) = *(_DWORD *)(v71 + 48);
    goto LABEL_16;
  }
LABEL_17:
  if ( a6 )
  {
    if ( (*(_BYTE *)(v33 + 721) & 1) != 0 || a6 > 0x10 )
    {
      v50 = (_QWORD *)operator new[](32LL * a6 + 8);
      v49 = v50 + 1;
      *v50 = a6;
      v51 = &v50[4 * a6 + 1];
      v52 = v49;
      do
      {
        *((_DWORD *)v52 + 2) = 0;
        v52 += 4;
        *(v52 - 1) = 0;
      }
      while ( v52 != v51 );
      *(_BYTE *)(a1 + 57) |= 1u;
      *(_QWORD *)(a1 + 96) = v49;
    }
    else
    {
      *(_QWORD *)(a1 + 96) = v33 + 856;
      *(_DWORD *)(v33 + 864) = 0;
      *(_QWORD *)(v33 + 880) = 0;
      if ( a6 != 1 )
      {
        *(_DWORD *)(v33 + 896) = 0;
        *(_QWORD *)(v33 + 912) = 0;
        if ( a6 != 2 )
        {
          *(_DWORD *)(v33 + 928) = 0;
          *(_QWORD *)(v33 + 944) = 0;
          if ( a6 != 3 )
          {
            *(_DWORD *)(v33 + 960) = 0;
            *(_QWORD *)(v33 + 976) = 0;
            if ( a6 != 4 )
            {
              *(_DWORD *)(v33 + 992) = 0;
              *(_QWORD *)(v33 + 1008) = 0;
              if ( a6 != 5 )
              {
                *(_DWORD *)(v33 + 1024) = 0;
                *(_QWORD *)(v33 + 1040) = 0;
                if ( a6 != 6 )
                {
                  *(_DWORD *)(v33 + 1056) = 0;
                  *(_QWORD *)(v33 + 1072) = 0;
                  if ( a6 != 7 )
                  {
                    *(_DWORD *)(v33 + 1088) = 0;
                    *(_QWORD *)(v33 + 1104) = 0;
                    if ( a6 != 8 )
                    {
                      *(_DWORD *)(v33 + 1120) = 0;
                      *(_QWORD *)(v33 + 1136) = 0;
                      if ( a6 != 9 )
                      {
                        *(_DWORD *)(v33 + 1152) = 0;
                        *(_QWORD *)(v33 + 1168) = 0;
                        if ( a6 != 10 )
                        {
                          *(_DWORD *)(v33 + 1184) = 0;
                          *(_QWORD *)(v33 + 1200) = 0;
                          if ( a6 != 11 )
                          {
                            *(_DWORD *)(v33 + 1216) = 0;
                            *(_QWORD *)(v33 + 1232) = 0;
                            if ( a6 != 12 )
                            {
                              *(_DWORD *)(v33 + 1248) = 0;
                              *(_QWORD *)(v33 + 1264) = 0;
                              if ( a6 != 13 )
                              {
                                *(_DWORD *)(v33 + 1280) = 0;
                                *(_QWORD *)(v33 + 1296) = 0;
                                if ( a6 != 14 )
                                {
                                  *(_DWORD *)(v33 + 1312) = 0;
                                  *(_QWORD *)(v33 + 1328) = 0;
                                  if ( a6 != 15 )
                                  {
                                    *(_DWORD *)(v33 + 1344) = 0;
                                    *(_QWORD *)(v33 + 1360) = 0;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      *(_BYTE *)(a1 + 57) &= ~1u;
      *(_BYTE *)(v33 + 721) |= 1u;
      v49 = *(_QWORD **)(a1 + 96);
    }
    v53 = a6 - 1;
    v54 = 0;
    v55 = 32 * v53;
    while ( 1 )
    {
      v56 = &v49[v54 / 8];
      v57 = *(_QWORD *)(a5 + v54 + 24);
      *v56 = *(_QWORD *)(a5 + v54);
      *((_DWORD *)v56 + 2) = *(_DWORD *)(a5 + v54 + 8);
      v56[2] = *(_QWORD *)(a5 + v54 + 16);
      *(_QWORD *)(a5 + v54 + 24) = 0;
      v58 = (void **)v56[3];
      v56[3] = v57;
      if ( v58 )
      {
        if ( *v58 != v58 + 2 )
          free(*v58);
        operator delete(v58, 0x70u);
      }
      if ( v55 == v54 )
        break;
      v49 = *(_QWORD **)(a1 + 96);
      v54 += 32LL;
    }
    v32 = a19;
  }
  if ( a12 > 8 )
  {
    if ( a12 != 11 )
      goto LABEL_22;
    *(_QWORD *)(a1 + 120) = a18;
    if ( !a20 )
      return a1;
  }
  else
  {
    if ( a12 < 6 )
    {
      if ( a12 == 2 )
      {
        if ( a16 )
        {
          *(_DWORD *)(a1 + 76) = a16;
          v59 = 2LL * a16;
          v60 = (_QWORD *)operator new[](v59 * 8);
          v61 = v60;
          do
          {
            *v61 = 0;
            v61 += 2;
            *((_DWORD *)v61 - 2) = 0;
            *((_DWORD *)v61 - 1) = 0;
          }
          while ( v61 != &v60[v59] );
          *(_QWORD *)(a1 + 120) = v60;
          *v60 = *a14;
          v60[1] = *a15;
          if ( a16 != 1 )
          {
            v62 = 1;
            do
            {
              v63 = v62++;
              v64 = 16 * v63;
              *(_QWORD *)(*(_QWORD *)(a1 + 120) + v64) = a14[v63];
              *(_QWORD *)(*(_QWORD *)(a1 + 120) + v64 + 8) = a15[v63];
            }
            while ( a16 != v62 );
          }
        }
      }
LABEL_22:
      if ( !a20 )
        return a1;
      goto LABEL_23;
    }
    *(_QWORD *)(a1 + 120) = a17;
    if ( !a20 )
      return a1;
  }
LABEL_23:
  *(_DWORD *)(a1 + 76) = a20;
  v45 = -1;
  if ( a20 <= 0xFFFFFFFFFFFFFFFLL )
    v45 = 8 * a20;
  v46 = (_QWORD *)operator new[](v45);
  *(_QWORD *)(a1 + 120) = v46;
  *v46 = *v32;
  if ( a20 > 1 )
  {
    v47 = 1;
    do
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 120) + v47 * 8) = v32[v47];
      ++v47;
    }
    while ( v47 != a20 );
  }
  return a1;
}
