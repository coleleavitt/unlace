__int64 __fastcall sub_612610(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r12
  __int64 v7; // r14
  _DWORD *v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // r14
  char *v12; // rdx
  unsigned int v13; // r14d
  unsigned int v14; // r14d
  unsigned int v15; // esi
  __int64 v16; // rdi
  int v17; // eax
  unsigned __int64 v18; // rsi
  __int16 v19; // ax
  unsigned __int64 v20; // rsi
  __int16 v21; // ax
  unsigned __int64 v22; // rsi
  __int16 v23; // ax
  unsigned __int64 v24; // rsi
  char v25; // al
  unsigned __int64 v26; // rsi
  char v27; // dl
  char *v28; // rax
  int v29; // eax
  int v30; // eax
  unsigned __int64 v31; // rsi
  char *v32; // rdx
  char *v33; // rax
  char v34; // dl
  __int16 v35; // ax
  int v36; // r13d
  unsigned __int64 v37; // r12
  char *v38; // rax
  char v39; // dl
  int v40; // eax
  unsigned __int64 v41; // rsi
  char *v42; // rdx
  char *v43; // rax
  char v44; // dl
  __int16 v45; // ax
  unsigned __int64 v46; // rsi
  int v47; // eax
  unsigned __int64 v48; // rsi
  char *v49; // rax
  char *v50; // rdx
  char v51; // al
  __int16 v52; // ax
  unsigned __int64 v53; // rsi
  char *v54; // rdx
  char *v55; // rax
  char v56; // dl
  __int64 v57; // r12
  int v58; // eax
  unsigned __int64 v59; // r14
  _QWORD *v60; // rdx
  __int64 v61; // rax
  int v62; // eax
  unsigned __int64 v63; // rsi
  char *v64; // rax
  char v66; // cl
  char v67; // cl
  char v68; // cl
  char v69; // cl
  char v70; // cl
  char v71; // cl
  char v72; // cl
  char v73; // cl
  char v74; // cl
  char v75; // cl
  char v76; // cl
  char v77; // cl
  char v78; // cl
  char v79; // cl
  char v80; // cl
  char v81; // cl
  char v82; // cl
  char v83; // cl
  char v84; // cl
  unsigned __int64 v85; // rcx
  __int64 v86; // r12
  char *v87; // rdx
  unsigned int v88; // r12d
  unsigned int v89; // r12d
  unsigned int v90; // esi
  __int64 v91; // rdi
  unsigned int v92; // eax
  bool v93; // cf
  char *v94; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v95; // [rsp+8h] [rbp-40h]
  unsigned __int64 v96; // [rsp+18h] [rbp-30h]

  v4 = a3 + a4;
  v96 = __readfsqword(0x28u);
  v94 = (char *)(a3 + 3);
  v95 = a3 + a4;
  *(_DWORD *)a1 = 4277321;
  if ( a3 + a4 >= (unsigned __int64)(a3 + 5) )
  {
    v94 = (char *)(a3 + 5);
    *(_WORD *)(a1 + 4) = *(_WORD *)(a3 + 3);
  }
  v7 = a1 + 6;
  LODWORD(v9) = unpack_dd(&v94);
  v8 = v94;
  v9 = (unsigned int)v9;
  if ( !__CFADD__((unsigned int)v9, v94) && v4 >= (unsigned __int64)&v94[(unsigned int)v9] )
  {
    v94 += (unsigned int)v9;
    if ( v8 )
    {
      if ( (unsigned int)v9 > 0xFuLL )
        v9 = 15;
      if ( (unsigned int)v9 < 8 )
      {
        if ( (v9 & 4) != 0 )
        {
          *(_DWORD *)(a1 + 6) = *v8;
          *(_DWORD *)(v7 + v9 - 4) = *(_DWORD *)((char *)v8 + v9 - 4);
        }
        else if ( (_DWORD)v9 )
        {
          *(_BYTE *)(a1 + 6) = *(_BYTE *)v8;
          if ( (v9 & 2) != 0 )
            *(_WORD *)(v7 + v9 - 2) = *(_WORD *)((char *)v8 + v9 - 2);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 6) = *(_QWORD *)v8;
        *(_QWORD *)(v7 + v9 - 8) = *(_QWORD *)((char *)v8 + v9 - 8);
        v10 = (a1 + 14) & 0xFFFFFFFFFFFFFFF8LL;
        v11 = v7 - v10;
        v12 = (char *)v8 - v11;
        v13 = (v9 + v11) & 0xFFFFFFF8;
        if ( v13 >= 8 )
        {
          v14 = v13 & 0xFFFFFFF8;
          v15 = 0;
          do
          {
            v16 = v15;
            v15 += 8;
            *(_QWORD *)(v10 + v16) = *(_QWORD *)&v12[v16];
          }
          while ( v15 < v14 );
        }
      }
      *(_BYTE *)(a1 + v9 + 6) = 0;
      *(_WORD *)(a1 + 22) = unpack_dw(&v94, v95);
      *(_DWORD *)(a1 + 24) = unpack_dd(&v94);
      v17 = unpack_dd(&v94);
      v18 = v95;
      *(_DWORD *)(a1 + 28) = v17;
      v19 = unpack_dw(&v94, v18);
      v20 = v95;
      *(_WORD *)(a1 + 32) = v19;
      v21 = unpack_dw(&v94, v20);
      v22 = v95;
      *(_WORD *)(a1 + 34) = v21;
      v23 = unpack_dw(&v94, v22);
      v24 = v95;
      *(_WORD *)(a1 + 36) = v23;
      v25 = unpack_dw(&v94, v24);
      v26 = v95;
      v27 = 0;
      *(_BYTE *)(a1 + 38) = v25;
      v28 = v94;
      if ( (unsigned __int64)v94 < v26 )
      {
        v27 = *v94;
        v28 = v94 + 1;
      }
      *(_BYTE *)(a1 + 39) = v27;
      v94 = v28;
      *(_DWORD *)(a1 + 40) = unpack_dd(&v94);
      *(_DWORD *)(a1 + 44) = unpack_dd(&v94);
      *(_DWORD *)(a1 + 48) = unpack_dd(&v94);
      *(_DWORD *)(a1 + 52) = unpack_dd(&v94);
      *(_DWORD *)(a1 + 56) = unpack_dd(&v94);
      *(_DWORD *)(a1 + 60) = unpack_dd(&v94);
      *(_DWORD *)(a1 + 64) = unpack_dd(&v94);
      *(_DWORD *)(a1 + 68) = unpack_dd(&v94);
      *(_DWORD *)(a1 + 72) = unpack_dd(&v94);
      *(_DWORD *)(a1 + 76) = unpack_dd(&v94);
      *(_DWORD *)(a1 + 80) = unpack_dd(&v94);
      *(_DWORD *)(a1 + 84) = unpack_dd(&v94);
      *(_DWORD *)(a1 + 88) = unpack_dd(&v94);
      *(_DWORD *)(a1 + 92) = unpack_dd(&v94);
      *(_DWORD *)(a1 + 96) = unpack_dd(&v94);
      *(_DWORD *)(a1 + 100) = unpack_dd(&v94);
      v29 = unpack_dd(&v94);
      *(_DWORD *)(a1 + 104) = v29;
      *(_DWORD *)(a1 + 108) = unpack_dd(&v94) + v29;
      v30 = unpack_dd(&v94);
      v31 = v95;
      v32 = v94;
      *(_DWORD *)(a1 + 112) = v30;
      if ( (unsigned __int64)v32 < v31 )
      {
        v82 = *v32;
        v33 = v32 + 1;
        v94 = v32 + 1;
        *(_BYTE *)(a1 + 116) = v82;
        if ( (unsigned __int64)(v32 + 1) < v31 )
        {
          v83 = v32[1];
          v33 = v32 + 2;
          v94 = v32 + 2;
          *(_BYTE *)(a1 + 117) = v83;
          if ( (unsigned __int64)(v32 + 2) < v31 )
          {
            v84 = v32[2];
            v33 = v32 + 3;
            v94 = v32 + 3;
            *(_BYTE *)(a1 + 118) = v84;
            if ( (unsigned __int64)(v32 + 3) >= v31 )
            {
              v34 = 0;
            }
            else
            {
              v33 = v32 + 4;
              v34 = v32[3];
            }
LABEL_18:
            *(_BYTE *)(a1 + 119) = v34;
            v94 = v33;
            v35 = unpack_dw(&v94, v31);
            v36 = a2 & 0x10000;
            v37 = v95;
            *(_WORD *)(a1 + 120) = v35;
            v38 = v94;
            if ( !v36 )
            {
              v92 = unpack_dd(&v94);
              v93 = __CFADD__(v94, v92);
              v38 = &v94[v92];
              if ( v93 || v37 < (unsigned __int64)v38 )
                v38 = v94;
              v37 = v95;
              v39 = 0;
              if ( (unsigned __int64)v38 >= v95 )
              {
LABEL_21:
                *(_BYTE *)(a1 + 122) = v39;
                v94 = v38;
                *(_DWORD *)(a1 + 124) = unpack_dd(&v94);
                v40 = unpack_dd(&v94);
                v41 = v95;
                v42 = v94;
                *(_DWORD *)(a1 + 128) = v40;
                if ( (unsigned __int64)v42 < v41 )
                {
                  v79 = *v42;
                  v43 = v42 + 1;
                  v94 = v42 + 1;
                  *(_BYTE *)(a1 + 132) = v79;
                  if ( (unsigned __int64)(v42 + 1) < v41 )
                  {
                    v80 = v42[1];
                    v43 = v42 + 2;
                    v94 = v42 + 2;
                    *(_BYTE *)(a1 + 133) = v80;
                    if ( (unsigned __int64)(v42 + 2) < v41 )
                    {
                      v81 = v42[2];
                      v43 = v42 + 3;
                      v94 = v42 + 3;
                      *(_BYTE *)(a1 + 134) = v81;
                      if ( (unsigned __int64)(v42 + 3) >= v41 )
                      {
                        v44 = 0;
                      }
                      else
                      {
                        v43 = v42 + 4;
                        v44 = v42[3];
                      }
                      goto LABEL_25;
                    }
LABEL_24:
                    *(_BYTE *)(a1 + 134) = 0;
                    v44 = 0;
LABEL_25:
                    *(_BYTE *)(a1 + 135) = v44;
                    v94 = v43;
                    v45 = unpack_dw(&v94, v41);
                    v46 = v95;
                    *(_WORD *)(a1 + 136) = v45;
                    *(_WORD *)(a1 + 138) = unpack_dw(&v94, v46);
                    v47 = unpack_dd(&v94);
                    v48 = v95;
                    *(_DWORD *)(a1 + 140) = v47;
                    v49 = v94;
                    if ( (unsigned __int64)v94 < v48 )
                    {
                      v78 = *v94;
                      v50 = ++v94;
                      *(_BYTE *)(a1 + 144) = v78;
                      if ( (unsigned __int64)(v49 + 1) >= v48 )
                      {
                        v51 = 0;
                      }
                      else
                      {
                        v50 = v49 + 2;
                        v51 = v49[1];
                      }
                    }
                    else
                    {
                      *(_BYTE *)(a1 + 144) = 0;
                      v50 = v49;
                      v51 = 0;
                    }
                    *(_BYTE *)(a1 + 145) = v51;
                    v94 = v50;
                    v52 = unpack_dw(&v94, v48);
                    v53 = v95;
                    v54 = v94;
                    *(_WORD *)(a1 + 146) = v52;
                    if ( (unsigned __int64)v54 < v53 )
                    {
                      v75 = *v54;
                      v55 = v54 + 1;
                      v94 = v54 + 1;
                      *(_BYTE *)(a1 + 148) = v75;
                      if ( (unsigned __int64)(v54 + 1) < v53 )
                      {
                        v76 = v54[1];
                        v55 = v54 + 2;
                        v94 = v54 + 2;
                        *(_BYTE *)(a1 + 149) = v76;
                        if ( (unsigned __int64)(v54 + 2) < v53 )
                        {
                          v77 = v54[2];
                          v55 = v54 + 3;
                          v94 = v54 + 3;
                          *(_BYTE *)(a1 + 150) = v77;
                          if ( (unsigned __int64)(v54 + 3) >= v53 )
                          {
                            v56 = 0;
                          }
                          else
                          {
                            v55 = v54 + 4;
                            v56 = v54[3];
                          }
LABEL_31:
                          *(_BYTE *)(a1 + 151) = v56;
                          v57 = a1 + 156;
                          v94 = v55;
                          v58 = unpack_dd(&v94);
                          v59 = v95;
                          *(_DWORD *)(a1 + 152) = v58;
                          LODWORD(v61) = unpack_dd(&v94);
                          v60 = v94;
                          v61 = (unsigned int)v61;
                          if ( !__CFADD__((unsigned int)v61, v94) && v59 >= (unsigned __int64)&v94[(unsigned int)v61] )
                          {
                            v94 += (unsigned int)v61;
                            if ( v60 )
                            {
                              if ( (unsigned int)v61 > 0xFuLL )
                                v61 = 15;
                              if ( (unsigned int)v61 >= 8 )
                              {
                                *(_QWORD *)(a1 + 156) = *v60;
                                *(_QWORD *)(v57 + v61 - 8) = *(_QWORD *)((char *)v60 + v61 - 8);
                                v85 = (a1 + 164) & 0xFFFFFFFFFFFFFFF8LL;
                                v86 = v57 - v85;
                                v87 = (char *)v60 - v86;
                                v88 = (v61 + v86) & 0xFFFFFFF8;
                                if ( v88 >= 8 )
                                {
                                  v89 = v88 & 0xFFFFFFF8;
                                  v90 = 0;
                                  do
                                  {
                                    v91 = v90;
                                    v90 += 8;
                                    *(_QWORD *)(v85 + v91) = *(_QWORD *)&v87[v91];
                                  }
                                  while ( v90 < v89 );
                                }
                              }
                              else if ( (v61 & 4) != 0 )
                              {
                                *(_DWORD *)(a1 + 156) = *(_DWORD *)v60;
                                *(_DWORD *)(v57 + v61 - 4) = *(_DWORD *)((char *)v60 + v61 - 4);
                              }
                              else if ( (_DWORD)v61 )
                              {
                                *(_BYTE *)(a1 + 156) = *(_BYTE *)v60;
                                if ( (v61 & 2) != 0 )
                                  *(_WORD *)(v57 + v61 - 2) = *(_WORD *)((char *)v60 + v61 - 2);
                              }
                              *(_BYTE *)(a1 + v61 + 156) = 0;
                            }
                          }
                          *(_DWORD *)(a1 + 172) = unpack_dd(&v94);
                          v62 = unpack_dd(&v94);
                          v63 = v95;
                          *(_DWORD *)(a1 + 176) = v62;
                          v64 = v94;
                          if ( !v36 )
                          {
                            if ( (unsigned __int64)v94 >= v63 )
                              goto LABEL_44;
                            v64 = ++v94;
                          }
                          if ( (unsigned __int64)v64 < v63 )
                          {
                            v66 = *v64;
                            v94 = v64 + 1;
                            *(_BYTE *)(a1 + 180) = v66;
                            if ( (unsigned __int64)(v64 + 1) < v63 )
                            {
                              v67 = v64[1];
                              v94 = v64 + 2;
                              *(_BYTE *)(a1 + 181) = v67;
                              if ( (unsigned __int64)(v64 + 2) < v63 )
                              {
                                v68 = v64[2];
                                v94 = v64 + 3;
                                *(_BYTE *)(a1 + 182) = v68;
                                if ( (unsigned __int64)(v64 + 3) < v63 )
                                {
                                  v69 = v64[3];
                                  v94 = v64 + 4;
                                  *(_BYTE *)(a1 + 183) = v69;
                                  if ( (unsigned __int64)(v64 + 4) < v63 )
                                  {
                                    v70 = v64[4];
                                    v94 = v64 + 5;
                                    *(_BYTE *)(a1 + 184) = v70;
                                    if ( (unsigned __int64)(v64 + 5) < v63 )
                                    {
                                      v71 = v64[5];
                                      v94 = v64 + 6;
                                      *(_BYTE *)(a1 + 185) = v71;
                                      if ( (unsigned __int64)(v64 + 6) < v63 )
                                      {
                                        v72 = v64[6];
                                        v94 = v64 + 7;
                                        *(_BYTE *)(a1 + 186) = v72;
                                        if ( (unsigned __int64)(v64 + 7) < v63 )
                                        {
                                          v73 = v64[7];
                                          v94 = v64 + 8;
                                          *(_BYTE *)(a1 + 187) = v73;
                                          if ( (unsigned __int64)(v64 + 8) < v63 )
                                          {
                                            *(_BYTE *)(a1 + 188) = v64[8];
                                            if ( (unsigned __int64)(v64 + 9) < v63 )
                                            {
                                              v74 = v64[9];
                                              v94 = v64 + 10;
                                              *(_BYTE *)(a1 + 189) = v74;
                                              if ( v36 )
                                                goto LABEL_54;
                                              if ( (unsigned __int64)(v64 + 10) >= v63 )
                                                v64 += 10;
                                              else
                                                v64 += 11;
                                              goto LABEL_73;
                                            }
                                            v64 += 9;
LABEL_53:
                                            v94 = v64;
                                            *(_BYTE *)(a1 + 189) = 0;
                                            if ( v36 )
                                            {
LABEL_54:
                                              *(_DWORD *)(a1 + 196) = unpack_dd(&v94);
                                              *(_DWORD *)(a1 + 200) = unpack_dd(&v94);
                                              *(_DWORD *)(a1 + 192) = unpack_dd(&v94);
                                              return 1;
                                            }
LABEL_73:
                                            v94 = v64;
                                            goto LABEL_54;
                                          }
                                          v64 += 8;
LABEL_52:
                                          *(_BYTE *)(a1 + 188) = 0;
                                          goto LABEL_53;
                                        }
                                        v64 += 7;
LABEL_51:
                                        *(_BYTE *)(a1 + 187) = 0;
                                        goto LABEL_52;
                                      }
                                      v64 += 6;
LABEL_50:
                                      *(_BYTE *)(a1 + 186) = 0;
                                      goto LABEL_51;
                                    }
                                    v64 += 5;
LABEL_49:
                                    *(_BYTE *)(a1 + 185) = 0;
                                    goto LABEL_50;
                                  }
                                  v64 += 4;
LABEL_48:
                                  *(_BYTE *)(a1 + 184) = 0;
                                  goto LABEL_49;
                                }
                                v64 += 3;
LABEL_47:
                                *(_BYTE *)(a1 + 183) = 0;
                                goto LABEL_48;
                              }
                              v64 += 2;
LABEL_46:
                              *(_BYTE *)(a1 + 182) = 0;
                              goto LABEL_47;
                            }
                            ++v64;
LABEL_45:
                            *(_BYTE *)(a1 + 181) = 0;
                            goto LABEL_46;
                          }
LABEL_44:
                          *(_BYTE *)(a1 + 180) = 0;
                          goto LABEL_45;
                        }
LABEL_30:
                        *(_BYTE *)(a1 + 150) = 0;
                        v56 = 0;
                        goto LABEL_31;
                      }
                    }
                    else
                    {
                      *(_BYTE *)(a1 + 148) = 0;
                      v55 = v54;
                    }
                    *(_BYTE *)(a1 + 149) = 0;
                    goto LABEL_30;
                  }
                }
                else
                {
                  *(_BYTE *)(a1 + 132) = 0;
                  v43 = v42;
                }
                *(_BYTE *)(a1 + 133) = 0;
                goto LABEL_24;
              }
              v94 = ++v38;
            }
            v39 = 0;
            if ( (unsigned __int64)v38 < v37 )
              v39 = *v38++;
            goto LABEL_21;
          }
LABEL_17:
          *(_BYTE *)(a1 + 118) = 0;
          v34 = 0;
          goto LABEL_18;
        }
      }
      else
      {
        *(_BYTE *)(a1 + 116) = 0;
        v33 = v32;
      }
      *(_BYTE *)(a1 + 117) = 0;
      goto LABEL_17;
    }
  }
  return 0;
}

