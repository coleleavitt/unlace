/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_32690
// Address: 0x00032690

//----- (00032690) --------------------------------------------------------
int __fastcall sub_32690(unsigned __int64 a1, int a2, int (***a3)())
{
  int v3; // r8
  unsigned int v4; // r7
  unsigned int v5; // r2
  int v6; // r5
  unsigned int v7; // r6
  unsigned int v8; // r1
  unsigned int v9; // r3
  int v10; // r6
  __int64 v11; // r0
  unsigned int v12; // r2
  unsigned int v13; // r12
  unsigned int v14; // r10
  int v15; // r5
  void *v16; // r0
  unsigned int v17; // r8
  int v18; // r6
  char *v19; // r4
  int v20; // r7
  char *v21; // r4
  void *v22; // r0
  void *v23; // r0
  unsigned int v25; // r8
  int v26; // r11
  unsigned int v27; // r9
  int v28; // r8
  char *v29; // r5
  void *v30; // r0
  void *v31; // r0
  _BOOL4 v32; // lr
  __int64 v33; // r0
  __int64 v34; // r2
  bool v35; // zf
  int v36; // r5
  int v37; // r0
  __int64 v38; // r0
  int v39; // r0
  int v40; // r1
  bool v41; // zf
  int v42; // r8
  unsigned int v43; // r5
  unsigned int v44; // r2
  char *v45; // r1
  int v46; // r3
  bool v47; // zf
  bool v48; // zf
  char *v49; // r1
  int v50; // r9
  int v51; // r5
  unsigned int v52; // r7
  int v53; // r1
  int v54; // r2
  int v55; // r3
  int v56; // r1
  unsigned int v57; // r3
  int v58; // r5
  int (*v59)(); // r3
  int *v60; // r2
  void *v61; // r0
  void *v62; // r7
  void *v63; // r0
  unsigned int v64; // r9
  int v65; // r8
  void **v66; // r5
  unsigned int v67; // r7
  void *v68; // r1
  void *v69; // r2
  void *v70; // r3
  void *v71; // r1
  char *v72; // r0
  void *v73; // r0
  void *v74; // r7
  void *v75; // r0
  int v77; // [sp+1Ch] [bp-108h]
  unsigned int v79; // [sp+2Ch] [bp-F8h]
  size_t v80; // [sp+2Ch] [bp-F8h]
  size_t n; // [sp+30h] [bp-F4h]
  void *na; // [sp+30h] [bp-F4h]
  size_t nb; // [sp+30h] [bp-F4h]
  size_t nc; // [sp+30h] [bp-F4h]
  size_t v85; // [sp+34h] [bp-F0h]
  void *v86; // [sp+34h] [bp-F0h]
  void *v87; // [sp+3Ch] [bp-E8h] BYREF
  int v88; // [sp+40h] [bp-E4h]
  int v89; // [sp+44h] [bp-E0h]
  int v90; // [sp+48h] [bp-DCh]
  __int64 v91; // [sp+50h] [bp-D4h]
  _UNKNOWN **v92; // [sp+58h] [bp-CCh] BYREF
  int v93; // [sp+5Ch] [bp-C8h]
  unsigned __int64 v94; // [sp+60h] [bp-C4h]
  unsigned __int64 v95; // [sp+68h] [bp-BCh]
  unsigned int v96; // [sp+70h] [bp-B4h]
  void *ptr; // [sp+74h] [bp-B0h] BYREF
  unsigned int v98; // [sp+78h] [bp-ACh]
  unsigned int v99; // [sp+7Ch] [bp-A8h]
  __int64 v100; // [sp+80h] [bp-A4h]
  unsigned int v101; // [sp+88h] [bp-9Ch]
  unsigned int v102; // [sp+8Ch] [bp-98h]
  void *v103; // [sp+94h] [bp-90h] BYREF
  unsigned int v104; // [sp+98h] [bp-8Ch]
  int v105; // [sp+9Ch] [bp-88h]
  void *v106; // [sp+A0h] [bp-84h]
  unsigned int v107; // [sp+A4h] [bp-80h]
  int v108; // [sp+A8h] [bp-7Ch]
  int v109; // [sp+ACh] [bp-78h]
  int v110; // [sp+B0h] [bp-74h]
  int v111; // [sp+B4h] [bp-70h]
  int v112; // [sp+B8h] [bp-6Ch]
  int v113; // [sp+BCh] [bp-68h]
  int v114; // [sp+C0h] [bp-64h]
  __int64 v115; // [sp+C4h] [bp-60h]
  int v116; // [sp+CCh] [bp-58h]
  int v117; // [sp+D0h] [bp-54h]
  char v118; // [sp+D4h] [bp-50h]
  char v119; // [sp+D5h] [bp-4Fh]
  char v120; // [sp+D6h] [bp-4Eh]
  void *v121; // [sp+D8h] [bp-4Ch] BYREF
  size_t v122; // [sp+DCh] [bp-48h]
  void *v123; // [sp+E4h] [bp-40h]
  unsigned int v124; // [sp+E8h] [bp-3Ch]
  void *v125; // [sp+F0h] [bp-34h]
  void *v126; // [sp+F4h] [bp-30h]
  void *v127; // [sp+F8h] [bp-2Ch]
  void *v128; // [sp+FCh] [bp-28h]
  void *v129; // [sp+100h] [bp-24h]
  void *v130; // [sp+104h] [bp-20h]
  __int64 v131; // [sp+108h] [bp-1Ch]
  void *v132; // [sp+110h] [bp-14h]
  void *v133; // [sp+114h] [bp-10h]
  char v134; // [sp+118h] [bp-Ch]
  char v135; // [sp+119h] [bp-Bh]
  char v136; // [sp+11Ah] [bp-Ah]

  v3 = a1;
  LODWORD(a1) = 0;
  v4 = *(_DWORD *)(HIDWORD(a1) + 24);
  v5 = *(_DWORD *)(HIDWORD(a1) + 28);
  v6 = *(_DWORD *)(HIDWORD(a1) + 4);
  v93 = v3;
  v94 = __PAIR64__(v5, v4);
  v77 = v3;
  v7 = *(_DWORD *)(HIDWORD(a1) + 56);
  v92 = &off_CF618;
  v96 = v7;
  v95 = 0;
  v100 = 0;
  ptr = nullptr;
  v98 = 0;
  v99 = 0;
  v101 = 0;
  v102 = 0;
  if ( v6 == 8 )
    HIDWORD(a1) = 0;
  else
    a1 = sub_22E68((_DWORD *)(v3 + 40), (_QWORD *)HIDWORD(a1));
  if ( v7 )
    v95 = a1 / v7;
  else
    v95 = a1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    if ( v8 < v9 )
      goto LABEL_57;
    v11 = v100;
    v13 = HIDWORD(v100);
    v12 = v100;
    v14 = v95 - v100;
    if ( v95 == v100 )
      goto LABEL_8;
    v25 = v98;
    if ( v14 != v98 )
    {
      v110 = 0;
      v103 = nullptr;
      v104 = 0;
      v105 = 0;
      v106 = nullptr;
      v107 = 0;
      v108 = 0;
      v109 = 0;
      v111 = 0;
      v112 = 0;
      v113 = 0;
      v114 = 0;
      v115 = 0;
      v116 = 0;
      v117 = 0;
      v118 = 0;
      v119 = 0;
      v120 = 0;
      if ( v14 >= v98 )
      {
        if ( v14 <= v98 )
        {
LABEL_35:
          v13 = HIDWORD(v11);
          v12 = v11;
          goto LABEL_36;
        }
        v49 = (char *)ptr;
        if ( ptr <= &v103 && &v103 < (void **)((char *)ptr + 68 * v99) )
        {
          sub_23428((int)&v121, (int)&v103);
          if ( v14 > v99 )
            ptr = sub_77EB0((int)&ptr, ptr, v14, 0x44u);
          v64 = v98;
          if ( v14 > v98 )
          {
            v65 = 68 * v98;
            do
            {
              v66 = (void **)((char *)ptr + v65);
              *v66 = nullptr;
              v66[1] = nullptr;
              v66[2] = nullptr;
              v66[3] = nullptr;
              v66[4] = nullptr;
              v66[5] = nullptr;
              v66[6] = nullptr;
              *((_BYTE *)v66 + 28) = 0;
              *((_BYTE *)v66 + 29) = 0;
              *((_WORD *)v66 + 15) = 0;
              v66[8] = nullptr;
              v66[9] = nullptr;
              v66[10] = nullptr;
              v66[11] = nullptr;
              if ( v66 != &v121 )
              {
                nb = v122;
                if ( v122 )
                {
                  v85 = v122 - 1;
                  if ( v122 != 1 )
                  {
                    v74 = v121;
                    v75 = sub_77EB0((int)v66, nullptr, v122, 1u);
                    *v66 = v75;
                    v66[1] = (void *)nb;
                    memmove(v75, v74, v85);
                    *((_BYTE *)*v66 + v85) = 0;
                  }
                }
                v67 = v124;
                if ( v124 && (nc = v124 - 1, v124 != 1) )
                {
                  v73 = v66[3];
                  v86 = v123;
                  if ( v124 > (unsigned int)v66[5] )
                  {
                    v73 = sub_77EB0((int)(v66 + 3), v73, v124, 1u);
                    v66[3] = v73;
                  }
                  v66[4] = (void *)v67;
                  memmove(v73, v86, nc);
                  *((_BYTE *)v66[3] + nc) = 0;
                }
                else
                {
                  v66[4] = nullptr;
                }
              }
              v68 = v126;
              v69 = v127;
              v70 = v128;
              ++v64;
              v65 += 68;
              v66[6] = v125;
              v66[7] = v68;
              v66[8] = v69;
              v66[9] = v70;
              v71 = v130;
              v66[10] = v129;
              v66[11] = v71;
              *((_QWORD *)v66 + 6) = v131;
              v66[14] = v132;
              v66[15] = v133;
              *((_BYTE *)v66 + 64) = v134;
              *((_BYTE *)v66 + 65) = v135;
              *((_BYTE *)v66 + 66) = v136;
            }
            while ( v14 > v64 );
          }
          v98 = v14;
          if ( v123 )
          {
            v124 = 0;
            sub_77E08(v123);
          }
          if ( v121 )
          {
            v122 = 0;
            sub_77E08(v121);
          }
        }
        else
        {
          if ( v14 <= v99
            || (v72 = (char *)sub_77EB0((int)&ptr, ptr, v14, 0x44u), v25 = v98, v49 = v72, ptr = v72, v14 > v98) )
          {
            v50 = 68 * v25;
            while ( 1 )
            {
              v51 = (int)&v49[v50];
              *(_DWORD *)&v49[v50] = 0;
              *(_DWORD *)(v51 + 4) = 0;
              *(_DWORD *)(v51 + 8) = 0;
              *(_DWORD *)(v51 + 12) = 0;
              *(_DWORD *)(v51 + 16) = 0;
              *(_DWORD *)(v51 + 20) = 0;
              *(_DWORD *)(v51 + 24) = 0;
              *(_BYTE *)(v51 + 28) = 0;
              *(_BYTE *)(v51 + 29) = 0;
              *(_WORD *)(v51 + 30) = 0;
              *(_DWORD *)(v51 + 32) = 0;
              *(_DWORD *)(v51 + 36) = 0;
              *(_DWORD *)(v51 + 40) = 0;
              *(_DWORD *)(v51 + 44) = 0;
              if ( &v49[v50] != (char *)&v103 )
              {
                v79 = v104;
                if ( v104 )
                {
                  n = v104 - 1;
                  if ( v104 != 1 )
                  {
                    v62 = v103;
                    v63 = sub_77EB0(v51, nullptr, v104, 1u);
                    *(_DWORD *)v51 = v63;
                    *(_DWORD *)(v51 + 4) = v79;
                    memmove(v63, v62, n);
                    *(_BYTE *)(*(_DWORD *)v51 + n) = 0;
                  }
                }
                v52 = v107;
                if ( v107 && (v80 = v107 - 1, v107 != 1) )
                {
                  v61 = *(void **)(v51 + 12);
                  na = v106;
                  if ( v107 > *(_DWORD *)(v51 + 20) )
                  {
                    v61 = sub_77EB0(v51 + 12, v61, v107, 1u);
                    *(_DWORD *)(v51 + 12) = v61;
                  }
                  *(_DWORD *)(v51 + 16) = v52;
                  memmove(v61, na, v80);
                  *(_BYTE *)(*(_DWORD *)(v51 + 12) + v80) = 0;
                }
                else
                {
                  *(_DWORD *)(v51 + 16) = 0;
                }
              }
              v53 = v110;
              v54 = v111;
              v55 = v112;
              ++v25;
              v50 += 68;
              *(_DWORD *)(v51 + 24) = v109;
              *(_DWORD *)(v51 + 28) = v53;
              *(_DWORD *)(v51 + 32) = v54;
              *(_DWORD *)(v51 + 36) = v55;
              v56 = v114;
              *(_DWORD *)(v51 + 40) = v113;
              *(_DWORD *)(v51 + 44) = v56;
              *(_QWORD *)(v51 + 48) = v115;
              *(_DWORD *)(v51 + 56) = v116;
              *(_DWORD *)(v51 + 60) = v117;
              *(_BYTE *)(v51 + 64) = v118;
              *(_BYTE *)(v51 + 65) = v119;
              *(_BYTE *)(v51 + 66) = v120;
              if ( v14 <= v25 )
                break;
              v49 = (char *)ptr;
            }
          }
          v98 = v14;
        }
      }
      else
      {
        v26 = 68 * v14;
        v27 = v98;
        v28 = v95 - v100;
        do
        {
          v29 = (char *)ptr + v26;
          v30 = *(void **)((char *)ptr + v26 + 12);
          if ( v30 )
          {
            *((_DWORD *)v29 + 4) = 0;
            sub_77E08(v30);
          }
          v31 = *(void **)v29;
          if ( *(_DWORD *)v29 )
          {
            *((_DWORD *)v29 + 1) = 0;
            sub_77E08(v31);
          }
          ++v28;
          v26 += 68;
        }
        while ( v27 != v28 );
        v98 = v14;
      }
      if ( v106 )
      {
        v107 = 0;
        sub_77E08(v106);
      }
      if ( v103 )
      {
        v104 = 0;
        sub_77E08(v103);
      }
      v11 = v100;
      goto LABEL_35;
    }
LABEL_36:
    v101 = 0;
    if ( !v11 )
    {
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(v93 + 472) + 8))(*(_DWORD *)(v93 + 472));
      v13 = HIDWORD(v100);
      v12 = v100;
    }
    v32 = (v12 | v13) == 0;
    if ( !v96 )
      v32 = 1;
    if ( !v32 )
    {
      v33 = 0;
      if ( v13 )
      {
        LODWORD(v34) = (v12 * (unsigned __int64)v96) >> 32;
        HIDWORD(v34) = 0;
        v33 = (v13 * (unsigned __int64)v96 + v34) >> 32 != 0;
      }
      if ( v33 )
        goto LABEL_67;
    }
    v35 = v14 == 0;
    if ( v14 )
      v35 = v96 == 0;
    if ( !v35 && !is_mul_ok(v14, v96) )
    {
LABEL_67:
      v15 = 0;
      v102 = 0;
      goto LABEL_9;
    }
    v36 = v93;
    v37 = *(_DWORD *)(v93 + 364);
    v90 = v93;
    LODWORD(v38) = sub_74C30(v37, 0, 1);
    v91 = v38 - *(_QWORD *)(v36 + 368);
    v39 = sub_74C30(*(_DWORD *)(v90 + 364), v100 * v96 + v94 + *(_QWORD *)(v90 + 368), 0);
    v41 = ++v40 == 0;
    if ( !v40 )
      v41 = v39 == -1;
    if ( v41 || !v14 )
      break;
    v42 = 0;
    v43 = 0;
    while ( sub_2D370((int)&v92, (int)ptr + v42) )
    {
      ++v43;
      v42 += 68;
      if ( v14 <= v43 )
      {
        sub_74C30(*(_DWORD *)(v90 + 364), v91 + *(_QWORD *)(v90 + 368), 0);
        v102 = v43;
        goto LABEL_56;
      }
    }
    sub_74C30(*(_DWORD *)(v90 + 364), v91 + *(_QWORD *)(v90 + 368), 0);
    v102 = v43;
    if ( !v43 )
      goto LABEL_8;
LABEL_56:
    v8 = v101;
    v100 += v43;
    if ( v101 >= v43 )
    {
LABEL_8:
      v15 = 0;
      goto LABEL_9;
    }
LABEL_57:
    v44 = v8 + 1;
    v101 = v8 + 1;
    if ( v10 )
    {
      v45 = (char *)ptr + 68 * v8;
      v46 = *((unsigned __int16 *)v45 + 15);
      v47 = v46 == 65280;
      if ( v46 != 65280 )
        v47 = v46 == 0;
      if ( v47 )
        goto LABEL_66;
      v48 = v46 == 65521;
      if ( v46 != 65521 )
        v48 = v46 == 65311;
      if ( v48 || (v45[28] & 0xFu) - 1 > 1 || (v57 = *((_DWORD *)v45 + 6)) == 0 )
      {
LABEL_66:
        ++v10;
        v9 = v102;
        v8 = v44;
      }
      else
      {
        v58 = *((_DWORD *)v45 + 8);
        v87 = nullptr;
        v88 = 0;
        v89 = 0;
        if ( dword_D39C8 != -1 )
          v58 -= dword_D39C8;
        sub_325F0(v77, (int)&v87, a2, v57);
        v59 = **a3;
        if ( v88 )
          v60 = (int *)v87;
        else
          v60 = &dword_8DA5C;
        if ( v59 == sub_15A1C )
        {
          ++v10;
          if ( v87 )
          {
            v88 = 0;
            sub_77E08(v87);
          }
        }
        else
        {
          v15 = ((int (__fastcall *)(int (***)(), int, int *))v59)(a3, v58, v60);
          ++v10;
          if ( v87 )
          {
            v88 = 0;
            sub_77E08(v87);
            if ( v15 )
              goto LABEL_9;
          }
          else if ( v15 )
          {
            goto LABEL_9;
          }
        }
        v8 = v101;
        v9 = v102;
      }
    }
    else
    {
      ++v8;
      v9 = v102;
      v10 = 1;
    }
  }
  v15 = 0;
  sub_74C30(*(_DWORD *)(v90 + 364), *(_QWORD *)(v90 + 368) + v91, 0);
  v102 = 0;
LABEL_9:
  v16 = ptr;
  v92 = &off_CF618;
  if ( ptr )
  {
    v17 = v98;
    if ( v98 )
    {
      v18 = 0;
      v19 = (char *)ptr;
      v20 = 0;
      while ( 1 )
      {
        v21 = &v19[v18];
        v22 = *((void **)v21 + 3);
        if ( v22 )
        {
          *((_DWORD *)v21 + 4) = 0;
          sub_77E08(v22);
        }
        v23 = *(void **)v21;
        if ( *(_DWORD *)v21 )
        {
          *((_DWORD *)v21 + 1) = 0;
          sub_77E08(v23);
        }
        ++v20;
        v18 += 68;
        if ( v17 == v20 )
          break;
        v19 = (char *)ptr;
      }
      v16 = ptr;
    }
    v98 = 0;
    sub_77E08(v16);
  }
  return v15;
}
// 328D6: variable 'v38' is possibly undefined
// 328FE: variable 'v40' is possibly undefined
// 8DA5C: using guessed type int dword_8DA5C;
// CF618: using guessed type _UNKNOWN *off_CF618;
// D39C8: using guessed type int dword_D39C8;
