__int64 __fastcall sub_9E0040(__int64 a1, char a2)
{
  unsigned int *v3; // r14
  unsigned int *v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // edx
  void *v9; // r15
  __int64 v10; // rdx
  char v11; // cl
  __int64 v12; // rdx
  void *v13; // r12
  __int64 v14; // r15
  __int64 v15; // rax
  unsigned int v16; // r13d
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  int v21; // edx
  void *v22; // r15
  __int64 v23; // rdx
  char v24; // cl
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // eax
  void *v29; // r15
  __int64 v30; // rax
  char v31; // dl
  int v32; // edx
  __int64 v33; // rdx
  void *v34; // r12
  __int64 v35; // r15
  unsigned int v36; // r13d
  __int64 v37; // r12
  __int64 v38; // rax
  __int64 v39; // r15
  __int64 v40; // rax
  int v41; // eax
  void *v42; // r15
  __int64 v43; // rax
  char v44; // dl
  int v45; // edx
  __int64 v46; // rdx
  __int64 v47; // rdi
  __int64 v48; // rbp
  int *v49; // rax
  int v50; // esi
  int v51; // edx
  int v52; // ecx
  __int64 v53; // r8
  __int64 v54; // rdx
  _DWORD *v55; // r9
  int v56; // ecx
  int v57; // edx
  int v58; // r11d
  __int64 v59; // rbx
  __int64 v60; // rax
  unsigned int v61; // ecx
  int v62; // r12d
  __int64 v63; // rax
  unsigned int *v64; // r10
  unsigned int v65; // edx
  void *v66; // rbp
  void *v67; // rbx
  __int64 v69; // r8
  unsigned int v70; // ecx
  unsigned int *v71; // rdi
  size_t v72; // rdx
  _DWORD *v73; // rax
  int v74; // ecx
  _DWORD *v75; // rdx
  unsigned int v76; // [rsp+Ch] [rbp-BCh]
  __int64 v77; // [rsp+20h] [rbp-A8h]
  __int64 v78; // [rsp+28h] [rbp-A0h]
  _QWORD v79[2]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v80[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v81; // [rsp+50h] [rbp-78h] BYREF
  __int64 v82; // [rsp+58h] [rbp-70h]
  __int64 v83; // [rsp+60h] [rbp-68h] BYREF
  __int64 v84; // [rsp+68h] [rbp-60h]
  int v85; // [rsp+70h] [rbp-58h] BYREF
  char v86; // [rsp+74h] [rbp-54h]
  __int64 v87; // [rsp+78h] [rbp-50h]
  int v88; // [rsp+80h] [rbp-48h] BYREF
  char v89; // [rsp+84h] [rbp-44h]
  __int64 v90; // [rsp+88h] [rbp-40h]

  v3 = *(unsigned int **)(a1 + 800);
  v79[0] = 0;
  v79[1] = 0;
  v4 = v3 + 1;
  v80[0] = 1;
  v80[1] = 0;
  v81 = 0;
  v82 = 0;
  v83 = 1;
  v84 = 0;
  if ( v3 )
  {
    v5 = *(v3 - 1);
    v3 += v5;
    if ( 4 * v5 == 4 )
      goto LABEL_77;
  }
  v76 = -1;
  if ( !a2 )
  {
    while ( 1 )
    {
      v14 = *v4;
      v15 = *(_QWORD *)(a1 + 616);
      v16 = *v4;
      if ( *(_QWORD *)(v15 + 8 * v14) )
      {
        v78 = *(_QWORD *)(v15 + 8 * v14);
        v6 = sub_999800(a1, v14);
        if ( (*(_BYTE *)(v6 + 20) & 1) != 0
          || *(_DWORD *)(v6 + 16) != 1
          || (*(_BYTE *)(v78 + 36) & 1) != 0
          || *(_DWORD *)(v78 + 32) != 1 )
        {
          if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, v6, v78 + 16) )
            goto LABEL_8;
        }
        else if ( (*(_BYTE *)(v6 + 4) & 1) != 0 || (*(_BYTE *)(v78 + 20) & 1) != 0 )
        {
          if ( (int)sub_182C7B0(qword_1C7F2C0, v6, v78 + 16) < 0 )
          {
LABEL_8:
            v7 = sub_999800(a1, v16);
            sub_3EBB80((__int64)&v85, *(_QWORD *)(*(_QWORD *)(a1 + 616) + 8 * v14) + 16LL, v7);
            v8 = v85;
            v9 = qword_1C7F2C0;
            v85 = v81;
            LODWORD(v81) = v8;
            v10 = v87;
            v87 = v82;
            v82 = v10;
            v11 = v86 & 1;
            LOBYTE(v10) = BYTE4(v81) & 0xFC | v86 & 2;
            v86 = BYTE4(v81) & 1 | v86 & 0xFC | BYTE4(v81) & 2;
            BYTE4(v81) = v11 | v10;
            LODWORD(v10) = v88;
            v88 = v83;
            LODWORD(v83) = v10;
            v12 = v90;
            v90 = v84;
            v84 = v12;
            LOBYTE(v12) = v89 & 1 | BYTE4(v83) & 0xFC | v89 & 2;
            v89 = BYTE4(v83) & 1 | v89 & 0xFC | BYTE4(v83) & 2;
            BYTE4(v83) = v12;
            sub_182CBA0(qword_1C7F2C0, &v85);
            sub_182CBA0(v9, &v88);
LABEL_9:
            if ( v76 == -1 || sub_3ED700((__int64)qword_1C7F2C0, (__int64)v79, (__int64)&v81) )
            {
              v13 = qword_1C7F2C0;
              if ( (v81 & 0x100000000LL) != 0 )
              {
                sub_182C690(qword_1C7F2C0, v79, &v81);
              }
              else
              {
                BYTE4(v79[0]) &= ~1u;
                LODWORD(v79[0]) = v81;
              }
              if ( (v83 & 0x100000000LL) != 0 )
              {
                sub_182C690(v13, v80, &v83);
              }
              else
              {
                BYTE4(v80[0]) &= ~1u;
                LODWORD(v80[0]) = v83;
              }
              v76 = v16;
            }
            goto LABEL_16;
          }
        }
        else if ( *(_DWORD *)v6 < *(_DWORD *)(v78 + 16) )
        {
          goto LABEL_8;
        }
      }
      v17 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8 * v14);
      if ( v17 )
      {
        v18 = sub_999800(a1, v16);
        if ( sub_3ED700((__int64)qword_1C7F2C0, v17 + 16, v18) )
        {
          v19 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8 * v14) + 16LL;
          v20 = sub_999800(a1, v16);
          sub_3EBB80((__int64)&v85, v20, v19);
          v21 = v85;
          v22 = qword_1C7F2C0;
          v85 = v81;
          LODWORD(v81) = v21;
          v23 = v87;
          v87 = v82;
          v82 = v23;
          v24 = v86 & 1;
          LOBYTE(v23) = BYTE4(v81) & 0xFC | v86 & 2;
          v86 = BYTE4(v81) & 1 | v86 & 0xFC | BYTE4(v81) & 2;
          BYTE4(v81) = v24 | v23;
          LODWORD(v23) = v88;
          v88 = v83;
          LODWORD(v83) = v23;
          v25 = v90;
          v90 = v84;
          v84 = v25;
          LOBYTE(v25) = v89 & 1 | BYTE4(v83) & 0xFC | v89 & 2;
          v89 = BYTE4(v83) & 1 | v89 & 0xFC | BYTE4(v83) & 2;
          BYTE4(v83) = v25;
          sub_182CBA0(qword_1C7F2C0, &v85);
          sub_182CBA0(v22, &v88);
          goto LABEL_9;
        }
      }
LABEL_16:
      if ( v3 == ++v4 )
        goto LABEL_38;
    }
  }
  do
  {
    v35 = *v4;
    v36 = *v4;
    v77 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 8 * v35);
    if ( v77 )
    {
      v26 = sub_999800(a1, v35);
      if ( (*(_BYTE *)(v26 + 20) & 1) != 0
        || *(_DWORD *)(v26 + 16) != 1
        || (*(_BYTE *)(v77 + 36) & 1) != 0
        || *(_DWORD *)(v77 + 32) != 1 )
      {
        if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, v26, v77 + 16) )
          goto LABEL_25;
      }
      else if ( (*(_BYTE *)(v26 + 4) & 1) != 0 || (*(_BYTE *)(v77 + 20) & 1) != 0 )
      {
        if ( (int)sub_182C7B0(qword_1C7F2C0, v26, v77 + 16) < 0 )
        {
LABEL_25:
          v27 = sub_999800(a1, v36);
          sub_3EBB80((__int64)&v85, *(_QWORD *)(*(_QWORD *)(a1 + 616) + 8 * v35) + 16LL, v27);
          v28 = v81;
          v29 = qword_1C7F2C0;
          LODWORD(v81) = v85;
          v85 = v28;
          v30 = v82;
          v82 = v87;
          v87 = v30;
          v31 = BYTE4(v81) & 0xFC | v86 & 2 | v86 & 1;
          v86 = BYTE4(v81) & 1 | v86 & 0xFC | BYTE4(v81) & 2;
          BYTE4(v81) = v31;
          v32 = v88;
          v88 = v83;
          LODWORD(v83) = v32;
          v33 = v90;
          v90 = v84;
          v84 = v33;
          LOBYTE(v33) = BYTE4(v83) & 0xFC | v89 & 2 | v89 & 1;
          v89 = BYTE4(v83) & 1 | v89 & 0xFC | BYTE4(v83) & 2;
          BYTE4(v83) = v33;
          sub_182CBA0(qword_1C7F2C0, &v85);
          sub_182CBA0(v29, &v88);
          goto LABEL_26;
        }
      }
      else if ( *(_DWORD *)v26 < *(_DWORD *)(v77 + 16) )
      {
        goto LABEL_25;
      }
    }
    v37 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8 * v35);
    if ( !v37 )
      goto LABEL_33;
    v38 = sub_999800(a1, v36);
    if ( !sub_3ED700((__int64)qword_1C7F2C0, v37 + 16, v38) )
      goto LABEL_33;
    v39 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8 * v35) + 16LL;
    v40 = sub_999800(a1, v36);
    sub_3EBB80((__int64)&v85, v40, v39);
    v41 = v81;
    v42 = qword_1C7F2C0;
    LODWORD(v81) = v85;
    v85 = v41;
    v43 = v82;
    v82 = v87;
    v87 = v43;
    v44 = BYTE4(v81) & 0xFC | v86 & 2 | v86 & 1;
    v86 = BYTE4(v81) & 1 | v86 & 0xFC | BYTE4(v81) & 2;
    BYTE4(v81) = v44;
    v45 = v88;
    v88 = v83;
    LODWORD(v83) = v45;
    v46 = v90;
    v90 = v84;
    v84 = v46;
    LOBYTE(v46) = BYTE4(v83) & 0xFC | v89 & 2 | v89 & 1;
    v89 = BYTE4(v83) & 1 | v89 & 0xFC | BYTE4(v83) & 2;
    BYTE4(v83) = v46;
    sub_182CBA0(qword_1C7F2C0, &v85);
    sub_182CBA0(v42, &v88);
LABEL_26:
    if ( v76 == -1 || sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v81, (__int64)v79) )
    {
      v34 = qword_1C7F2C0;
      if ( (v81 & 0x100000000LL) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v79, &v81);
      }
      else
      {
        BYTE4(v79[0]) &= ~1u;
        LODWORD(v79[0]) = v81;
      }
      if ( (v83 & 0x100000000LL) != 0 )
      {
        sub_182C690(v34, v80, &v83);
      }
      else
      {
        BYTE4(v80[0]) &= ~1u;
        LODWORD(v80[0]) = v83;
      }
      v76 = v36;
    }
LABEL_33:
    ++v4;
  }
  while ( v3 != v4 );
LABEL_38:
  v47 = *(_QWORD *)(a1 + 800);
  if ( v76 == -1 )
  {
    if ( !v47 )
      goto LABEL_78;
    LODWORD(v5) = *(_DWORD *)(v47 - 4);
LABEL_77:
    if ( (_DWORD)v5 == 1 )
    {
LABEL_83:
      v76 = -1;
      goto LABEL_53;
    }
LABEL_78:
    v71 = *(unsigned int **)(a1 + 808);
    if ( v71 )
      v72 = 4LL * *(v71 - 1);
    else
      v72 = 0;
    memset(v71, 0, v72);
    v73 = *(_DWORD **)(a1 + 800);
    if ( !v73 || (v74 = *(v73 - 2), *(v73 - 1) = 0, v75 = v73, !v74) )
    {
      sub_313C10((unsigned int **)(a1 + 800));
      v73 = *(_DWORD **)(a1 + 800);
      v75 = &v73[*(v73 - 1)];
    }
    *v75 = -1;
    ++*(v73 - 1);
    goto LABEL_83;
  }
  v48 = *(_QWORD *)(a1 + 808);
  v49 = (int *)(v48 + 4LL * v76);
  v50 = *v49;
  if ( v47 )
  {
    v51 = *(_DWORD *)(v47 - 4);
    v52 = v51 - 1;
  }
  else
  {
    v52 = -1;
    v51 = 0;
  }
  if ( v50 == v52 )
  {
    *v49 = 0;
    --*(_DWORD *)(v47 - 4);
  }
  else
  {
    v53 = (unsigned int)v50;
    v54 = *(unsigned int *)(v47 + 4LL * (unsigned int)(v51 - 1));
    v55 = (_DWORD *)(v47 + 4LL * (unsigned int)v50);
    *v55 = v54;
    v56 = v54;
    *(_DWORD *)(v48 + 4 * v54) = v50;
    *v49 = 0;
    v57 = v50 >> 1;
    v58 = *(_DWORD *)(v47 - 4) - 1;
    *(_DWORD *)(v47 - 4) = v58;
    v59 = (unsigned int)*v55;
    if ( v50 >> 1 && (v60 = *(unsigned int *)(v47 + 4LL * (unsigned int)v57), v56 < (int)v60) )
    {
      while ( 1 )
      {
        v69 = 4 * v53;
        if ( (int)v60 <= (int)v59 )
          break;
        *(_DWORD *)(v47 + v69) = v60;
        v70 = v57 >> 1;
        *(_DWORD *)(v48 + 4 * v60) = v50;
        if ( !(v57 >> 1) )
        {
          v69 = 4;
          v50 = 1;
          break;
        }
        v53 = (unsigned int)v57;
        v57 >>= 1;
        v60 = *(unsigned int *)(v47 + 4LL * v70);
        v50 = v53;
      }
      *(_DWORD *)(v47 + v69) = v59;
      *(_DWORD *)(v48 + 4 * v59) = v50;
    }
    else
    {
      v61 = 2 * v50;
      if ( 2 * v50 < v58 )
      {
        while ( 1 )
        {
          v65 = v61 + 1;
          v64 = (unsigned int *)(v47 + 4LL * v61);
          v63 = *v64;
          if ( v58 <= (int)(v61 + 1) || (v62 = *(_DWORD *)(v47 + 4LL * v65), v62 >= (int)v63) )
          {
            v65 = v61;
            v55 = (_DWORD *)(v47 + 4 * v53);
            if ( (int)v63 >= (int)v59 )
              goto LABEL_52;
          }
          else
          {
            v63 = (unsigned int)v62;
            v64 = (unsigned int *)(v47 + 4LL * v65);
            v55 = (_DWORD *)(v47 + 4 * v53);
            if ( v62 >= (int)v59 )
              goto LABEL_52;
          }
          v61 = 2 * v65;
          *v55 = v63;
          *(_DWORD *)(v48 + 4 * v63) = v50;
          if ( v58 <= (int)(2 * v65) )
            break;
          v53 = v65;
          v50 = v65;
        }
        v55 = v64;
        v50 = v65;
      }
LABEL_52:
      *v55 = v59;
      *(_DWORD *)(v48 + 4 * v59) = v50;
    }
  }
LABEL_53:
  v66 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v81);
  sub_182CBA0(v66, &v83);
  v67 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v79);
  sub_182CBA0(v67, v80);
  return v76;
}

