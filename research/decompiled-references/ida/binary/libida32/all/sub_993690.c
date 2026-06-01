void __fastcall sub_993690(void *a1)
{
  __int64 v2; // rdi
  bool v3; // zf
  __int64 v4; // rdi
  char v5; // al
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  int v10; // r13d
  __int64 v11; // r9
  _QWORD *v12; // rax
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // esi
  int v18; // edx
  __int64 v19; // r14
  int v20; // r13d
  int v21; // esi
  int v22; // r11d
  __int64 v23; // r15
  __int64 v24; // r9
  int v25; // r13d
  int v26; // eax
  __int64 v27; // r9
  int v28; // r10d
  __int64 v29; // r10
  __int64 v30; // r9
  int v31; // r11d
  int v32; // eax
  __int64 v33; // r9
  int v34; // r10d
  __int64 v35; // r8
  __int64 v36; // rcx
  int v37; // r11d
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r10
  int v41; // eax
  __int64 v42; // r8
  __int64 v43; // r11
  int v44; // r10d
  int v45; // eax
  __int64 v46; // r11
  __int64 v47; // r9
  int v48; // eax
  __int64 v49; // r13
  __int64 v50; // r10
  int v51; // edx
  int v52; // eax
  int v53; // eax
  __int64 v54; // r8
  __int64 v55; // rcx
  int v56; // r10d
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // r9
  int v60; // eax
  __int64 v61; // rsi
  __int64 v62; // rdi
  _DWORD *v63; // rdx
  __int64 v64; // rsi
  __int64 v65; // rdi
  _DWORD *v66; // rdx
  int v67; // eax
  __int64 v68; // rsi
  __int64 v69; // rdi
  _DWORD *v70; // rdx
  __int64 v71; // [rsp+0h] [rbp-218h]
  __int64 v72; // [rsp+8h] [rbp-210h]
  __int64 v73; // [rsp+8h] [rbp-210h]
  int v74; // [rsp+8h] [rbp-210h]
  __int64 v75; // [rsp+8h] [rbp-210h]
  __int64 v76; // [rsp+8h] [rbp-210h]
  __int64 v77; // [rsp+8h] [rbp-210h]
  int v78; // [rsp+8h] [rbp-210h]
  __int64 v79; // [rsp+8h] [rbp-210h]
  __int64 v80; // [rsp+8h] [rbp-210h]
  __int64 v81; // [rsp+8h] [rbp-210h]
  __int64 v82; // [rsp+8h] [rbp-210h]
  __int64 v83; // [rsp+8h] [rbp-210h]
  __int64 v84; // [rsp+8h] [rbp-210h]
  __int64 v85; // [rsp+8h] [rbp-210h]
  int v86; // [rsp+10h] [rbp-208h]
  __int64 v87; // [rsp+10h] [rbp-208h]
  __int64 v88; // [rsp+10h] [rbp-208h]
  __int64 v89; // [rsp+10h] [rbp-208h]
  int v90; // [rsp+10h] [rbp-208h]
  __int64 v91; // [rsp+10h] [rbp-208h]
  __int64 v92; // [rsp+10h] [rbp-208h]
  __int64 v93; // [rsp+10h] [rbp-208h]
  __int64 v94; // [rsp+10h] [rbp-208h]
  __int64 v95; // [rsp+10h] [rbp-208h]
  __int64 v96; // [rsp+10h] [rbp-208h]
  __int64 v97; // [rsp+10h] [rbp-208h]
  int v98; // [rsp+10h] [rbp-208h]
  int v99; // [rsp+10h] [rbp-208h]
  __int64 v100; // [rsp+18h] [rbp-200h]
  int v101; // [rsp+18h] [rbp-200h]
  __int64 v102; // [rsp+18h] [rbp-200h]
  __int64 v103; // [rsp+18h] [rbp-200h]
  int v104; // [rsp+18h] [rbp-200h]
  int v105; // [rsp+18h] [rbp-200h]
  __int64 v106; // [rsp+18h] [rbp-200h]
  __int64 v107; // [rsp+18h] [rbp-200h]
  int v108; // [rsp+18h] [rbp-200h]
  __int64 v109; // [rsp+18h] [rbp-200h]
  __int64 v110; // [rsp+18h] [rbp-200h]
  __int64 v111; // [rsp+18h] [rbp-200h]
  __int64 v112; // [rsp+20h] [rbp-1F8h]
  int v113; // [rsp+20h] [rbp-1F8h]
  int v114; // [rsp+20h] [rbp-1F8h]
  __int64 v115; // [rsp+20h] [rbp-1F8h]
  __int64 v116; // [rsp+20h] [rbp-1F8h]
  int v117; // [rsp+20h] [rbp-1F8h]
  __int64 v118; // [rsp+20h] [rbp-1F8h]
  int v119; // [rsp+20h] [rbp-1F8h]
  int v120; // [rsp+28h] [rbp-1F0h]
  int v121; // [rsp+28h] [rbp-1F0h]
  void *ptr; // [rsp+30h] [rbp-1E8h] BYREF
  __int64 v123; // [rsp+38h] [rbp-1E0h]
  _BYTE v124[128]; // [rsp+40h] [rbp-1D8h] BYREF
  void *v125; // [rsp+C0h] [rbp-158h] BYREF
  __int64 v126; // [rsp+C8h] [rbp-150h]
  _BYTE v127[128]; // [rsp+D0h] [rbp-148h] BYREF
  void *v128; // [rsp+150h] [rbp-C8h] BYREF
  __int64 v129; // [rsp+158h] [rbp-C0h]
  _QWORD v130[23]; // [rsp+160h] [rbp-B8h] BYREF

  v2 = *((_QWORD *)a1 + 1);
  if ( v2 )
  {
    v3 = (*(_DWORD *)(v2 + 52))-- == 1;
    if ( v3 )
      sub_993690();
  }
  v4 = *((_QWORD *)a1 + 2);
  if ( v4 )
  {
    v3 = (*(_DWORD *)(v4 + 52))-- == 1;
    if ( v3 )
      sub_993690();
  }
  v5 = *((_BYTE *)a1 + 43);
  v6 = *(_QWORD *)a1;
  if ( (v5 & 0x40) != 0 )
  {
    v7 = *((_QWORD *)a1 + 4);
    v8 = *((_QWORD *)a1 + 3);
    if ( v7 )
    {
      *(_QWORD *)(v7 + 24) = v8;
      v8 = *((_QWORD *)a1 + 3);
    }
    if ( v8 )
    {
      *(_QWORD *)(v8 + 32) = v7;
      goto LABEL_12;
    }
    if ( (v5 & 0x20) != 0 )
    {
      v10 = *((_DWORD *)a1 + 12);
    }
    else
    {
      v19 = *((_QWORD *)a1 + 1);
      v71 = *((_QWORD *)a1 + 2);
      if ( v19 )
      {
        if ( (*(_BYTE *)(v19 + 43) & 0x20) != 0 )
        {
          v20 = *(_DWORD *)(v19 + 48);
        }
        else
        {
          v23 = *(_QWORD *)(v19 + 8);
          v24 = *(_QWORD *)(v19 + 16);
          v25 = 0;
          if ( v23 )
          {
            if ( (*(_BYTE *)(v23 + 43) & 0x20) != 0 )
            {
              v25 = *(_DWORD *)(v23 + 48);
            }
            else
            {
              v49 = *(_QWORD *)(v23 + 8);
              v50 = *(_QWORD *)(v23 + 16);
              v51 = 0;
              if ( v49 )
              {
                if ( (*(_BYTE *)(v49 + 43) & 0x20) != 0 )
                {
                  v51 = *(_DWORD *)(v49 + 48);
                }
                else
                {
                  v97 = *(_QWORD *)(v23 + 16);
                  v83 = *(_QWORD *)(v19 + 16);
                  v67 = sub_9935B0(*(_QWORD *)(v49 + 8), *(_QWORD *)(v49 + 16), (_DWORD *)(v49 + 44));
                  *(_BYTE *)(v49 + 43) |= 0x20u;
                  v50 = v97;
                  v51 = v67;
                  *(_DWORD *)(v49 + 48) = v67;
                  v24 = v83;
                }
              }
              v114 = v51;
              v103 = v50;
              LODWORD(v130[0]) = *(_DWORD *)(v23 + 44);
              v91 = v24;
              v128 = v130;
              v129 = 0x2000000001LL;
              v52 = sub_961DD0(v130, (__int64)v130 + 4);
              v24 = v91;
              v25 = v114 + v52;
              if ( v103 )
              {
                if ( (*(_BYTE *)(v103 + 43) & 0x20) != 0 )
                {
                  v53 = *(_DWORD *)(v103 + 48);
                }
                else
                {
                  v53 = sub_9935B0(*(_QWORD *)(v103 + 8), *(_QWORD *)(v103 + 16), (_DWORD *)(v103 + 44));
                  *(_BYTE *)(v103 + 43) |= 0x20u;
                  *(_DWORD *)(v103 + 48) = v53;
                  v24 = v91;
                }
                v25 += v53;
              }
              if ( v128 != v130 )
              {
                v77 = v24;
                free(v128);
                v24 = v77;
              }
              *(_DWORD *)(v23 + 48) = v25;
              *(_BYTE *)(v23 + 43) |= 0x20u;
            }
          }
          v72 = v24;
          v125 = v127;
          v126 = 0x2000000000LL;
          sub_993300((__int64)&v125, *(_DWORD *)(v19 + 44));
          v26 = sub_961DD0(v125, (__int64)v125 + 4 * (unsigned int)v126);
          v27 = v72;
          v20 = v26 + v25;
          if ( v72 )
          {
            if ( (*(_BYTE *)(v72 + 43) & 0x20) != 0 )
            {
              v28 = *(_DWORD *)(v72 + 48);
            }
            else
            {
              v42 = *(_QWORD *)(v72 + 8);
              v43 = *(_QWORD *)(v72 + 16);
              v44 = 0;
              if ( v42 )
              {
                if ( (*(_BYTE *)(v42 + 43) & 0x20) != 0 )
                {
                  v44 = *(_DWORD *)(v42 + 48);
                }
                else
                {
                  v107 = *(_QWORD *)(v72 + 16);
                  v95 = v72;
                  v80 = *(_QWORD *)(v72 + 8);
                  v44 = sub_9935B0(*(_QWORD *)(v42 + 8), *(_QWORD *)(v42 + 16), (_DWORD *)(v42 + 44));
                  *(_BYTE *)(v80 + 43) |= 0x20u;
                  v43 = v107;
                  *(_DWORD *)(v80 + 48) = v44;
                  v27 = v95;
                }
              }
              v113 = v44;
              v102 = v43;
              LODWORD(v130[0]) = *(_DWORD *)(v27 + 44);
              v89 = v27;
              v128 = v130;
              v129 = 0x2000000001LL;
              v45 = sub_961DD0(v130, (__int64)v130 + 4);
              v46 = v102;
              v47 = v89;
              v28 = v45 + v113;
              if ( v102 )
              {
                if ( (*(_BYTE *)(v102 + 43) & 0x20) != 0 )
                {
                  v48 = *(_DWORD *)(v102 + 48);
                }
                else
                {
                  v61 = *(_QWORD *)(v102 + 16);
                  v62 = *(_QWORD *)(v102 + 8);
                  v63 = (_DWORD *)(v102 + 44);
                  v108 = v45 + v113;
                  v81 = v46;
                  v48 = sub_9935B0(v62, v61, v63);
                  *(_BYTE *)(v81 + 43) |= 0x20u;
                  v28 = v108;
                  v47 = v89;
                  *(_DWORD *)(v81 + 48) = v48;
                }
                v28 += v48;
              }
              if ( v128 != v130 )
              {
                v90 = v28;
                v76 = v47;
                free(v128);
                v28 = v90;
                v47 = v76;
              }
              *(_DWORD *)(v47 + 48) = v28;
              *(_BYTE *)(v47 + 43) |= 0x20u;
            }
            v20 += v28;
          }
          if ( v125 != v127 )
            free(v125);
          *(_DWORD *)(v19 + 48) = v20;
          *(_BYTE *)(v19 + 43) |= 0x20u;
        }
      }
      else
      {
        v20 = 0;
      }
      v21 = *((_DWORD *)a1 + 11);
      ptr = v124;
      v123 = 0x2000000000LL;
      sub_993300((__int64)&ptr, v21);
      v10 = sub_961DD0(ptr, (__int64)ptr + 4 * (unsigned int)v123) + v20;
      if ( v71 )
      {
        if ( (*(_BYTE *)(v71 + 43) & 0x20) != 0 )
        {
          v22 = *(_DWORD *)(v71 + 48);
        }
        else
        {
          v29 = *(_QWORD *)(v71 + 8);
          v30 = *(_QWORD *)(v71 + 16);
          v31 = 0;
          if ( v29 )
          {
            if ( (*(_BYTE *)(v29 + 43) & 0x20) != 0 )
            {
              v31 = *(_DWORD *)(v29 + 48);
            }
            else
            {
              v35 = *(_QWORD *)(v29 + 8);
              v36 = *(_QWORD *)(v29 + 16);
              v37 = 0;
              if ( v35 )
              {
                if ( (*(_BYTE *)(v35 + 43) & 0x20) != 0 )
                {
                  v37 = *(_DWORD *)(v35 + 48);
                }
                else
                {
                  v116 = *(_QWORD *)(v29 + 16);
                  v106 = *(_QWORD *)(v71 + 8);
                  v94 = *(_QWORD *)(v71 + 16);
                  v79 = *(_QWORD *)(v29 + 8);
                  v37 = sub_9935B0(*(_QWORD *)(v35 + 8), *(_QWORD *)(v35 + 16), (_DWORD *)(v35 + 44));
                  *(_BYTE *)(v79 + 43) |= 0x20u;
                  v36 = v116;
                  v29 = v106;
                  v30 = v94;
                  *(_DWORD *)(v79 + 48) = v37;
                }
              }
              v120 = v37;
              v112 = v36;
              LODWORD(v130[0]) = *(_DWORD *)(v29 + 44);
              v100 = v30;
              v87 = v29;
              v128 = v130;
              v129 = 0x2000000001LL;
              v38 = sub_961DD0(v130, (__int64)v130 + 4);
              v39 = v112;
              v40 = v87;
              v31 = v38 + v120;
              v30 = v100;
              if ( v112 )
              {
                if ( (*(_BYTE *)(v112 + 43) & 0x20) != 0 )
                {
                  v41 = *(_DWORD *)(v112 + 48);
                }
                else
                {
                  v64 = *(_QWORD *)(v112 + 16);
                  v65 = *(_QWORD *)(v112 + 8);
                  v66 = (_DWORD *)(v112 + 44);
                  v117 = v38 + v120;
                  v109 = v87;
                  v96 = v30;
                  v82 = v39;
                  v41 = sub_9935B0(v65, v64, v66);
                  *(_BYTE *)(v82 + 43) |= 0x20u;
                  v31 = v117;
                  v40 = v109;
                  *(_DWORD *)(v82 + 48) = v41;
                  v30 = v96;
                }
                v31 += v41;
              }
              if ( v128 != v130 )
              {
                v101 = v31;
                v88 = v40;
                v75 = v30;
                free(v128);
                v31 = v101;
                v40 = v88;
                v30 = v75;
              }
              *(_DWORD *)(v40 + 48) = v31;
              *(_BYTE *)(v40 + 43) |= 0x20u;
            }
          }
          v86 = v31;
          v125 = v127;
          v126 = 0x2000000000LL;
          v73 = v30;
          sub_993300((__int64)&v125, *(_DWORD *)(v71 + 44));
          v32 = sub_961DD0(v125, (__int64)v125 + 4 * (unsigned int)v126);
          v33 = v73;
          v22 = v32 + v86;
          if ( v73 )
          {
            if ( (*(_BYTE *)(v73 + 43) & 0x20) != 0 )
            {
              v34 = *(_DWORD *)(v73 + 48);
            }
            else
            {
              v54 = *(_QWORD *)(v73 + 8);
              v55 = *(_QWORD *)(v73 + 16);
              v56 = 0;
              if ( v54 )
              {
                if ( (*(_BYTE *)(v54 + 43) & 0x20) != 0 )
                {
                  v56 = *(_DWORD *)(v54 + 48);
                }
                else
                {
                  v118 = *(_QWORD *)(v73 + 16);
                  v110 = v73;
                  v98 = v32 + v86;
                  v84 = *(_QWORD *)(v73 + 8);
                  v56 = sub_9935B0(*(_QWORD *)(v54 + 8), *(_QWORD *)(v54 + 16), (_DWORD *)(v54 + 44));
                  *(_BYTE *)(v84 + 43) |= 0x20u;
                  v55 = v118;
                  v33 = v110;
                  v22 = v98;
                  *(_DWORD *)(v84 + 48) = v56;
                }
              }
              v121 = v56;
              v115 = v55;
              LODWORD(v130[0]) = *(_DWORD *)(v33 + 44);
              v104 = v22;
              v92 = v33;
              v128 = v130;
              v129 = 0x2000000001LL;
              v57 = sub_961DD0(v130, (__int64)v130 + 4);
              v58 = v115;
              v59 = v92;
              v34 = v57 + v121;
              v22 = v104;
              if ( v115 )
              {
                if ( (*(_BYTE *)(v115 + 43) & 0x20) != 0 )
                {
                  v60 = *(_DWORD *)(v115 + 48);
                }
                else
                {
                  v68 = *(_QWORD *)(v115 + 16);
                  v69 = *(_QWORD *)(v115 + 8);
                  v70 = (_DWORD *)(v115 + 44);
                  v119 = v57 + v121;
                  v111 = v92;
                  v99 = v22;
                  v85 = v58;
                  v60 = sub_9935B0(v69, v68, v70);
                  *(_BYTE *)(v85 + 43) |= 0x20u;
                  v34 = v119;
                  v59 = v111;
                  *(_DWORD *)(v85 + 48) = v60;
                  v22 = v99;
                }
                v34 += v60;
              }
              if ( v128 != v130 )
              {
                v105 = v34;
                v93 = v59;
                v78 = v22;
                free(v128);
                v34 = v105;
                v59 = v93;
                v22 = v78;
              }
              *(_DWORD *)(v59 + 48) = v34;
              *(_BYTE *)(v59 + 43) |= 0x20u;
            }
            v22 += v34;
          }
          if ( v125 != v127 )
          {
            v74 = v22;
            free(v125);
            v22 = v74;
          }
          *(_DWORD *)(v71 + 48) = v22;
          *(_BYTE *)(v71 + 43) |= 0x20u;
        }
        v10 += v22;
      }
      if ( ptr != v124 )
        free(ptr);
      *((_DWORD *)a1 + 12) = v10;
      *((_BYTE *)a1 + 43) |= 0x20u;
    }
    LODWORD(ptr) = v10 & 0xFFFFFFFD;
    v3 = (unsigned __int8)sub_9919F0((__int64 *)v6, (int *)&ptr, &v125) == 0;
    v12 = v125;
    if ( !v3 )
      goto LABEL_23;
    v13 = *(_DWORD *)(v6 + 8);
    v128 = v125;
    v14 = (unsigned int)(v13 + 1);
    v15 = *(unsigned int *)(v6 + 16);
    v16 = (unsigned int)(4 * v14);
    v17 = 2 * v15;
    if ( (unsigned int)v16 < 3 * (int)v15 )
    {
      if ( (int)v15 - *(_DWORD *)(v6 + 12) - (int)v14 > (unsigned int)v15 >> 3 )
      {
LABEL_20:
        *(_DWORD *)(v6 + 8) = v14;
        if ( *(_DWORD *)v12 != -1 )
          --*(_DWORD *)(v6 + 12);
        v18 = (int)ptr;
        v12[1] = 0;
        *(_DWORD *)v12 = v18;
LABEL_23:
        v12[1] = v7;
        v6 = *(_QWORD *)a1;
        goto LABEL_12;
      }
      v17 = *(_DWORD *)(v6 + 16);
    }
    sub_992320(v6, v17, v14, v15, v16, v11);
    sub_9919F0((__int64 *)v6, (int *)&ptr, &v128);
    LODWORD(v14) = *(_DWORD *)(v6 + 8) + 1;
    v12 = v128;
    goto LABEL_20;
  }
LABEL_12:
  *((_BYTE *)a1 + 43) &= ~0x10u;
  v9 = *(_QWORD **)(v6 + 64);
  v128 = a1;
  if ( v9 == *(_QWORD **)(v6 + 72) )
  {
    sub_9925E0(v6 + 56, v9, (__int64 *)&v128);
  }
  else
  {
    *v9 = a1;
    *(_QWORD *)(v6 + 64) = v9 + 1;
  }
}

