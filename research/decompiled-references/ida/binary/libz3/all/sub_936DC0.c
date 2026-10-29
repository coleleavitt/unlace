void __fastcall sub_936DC0(_QWORD *a1)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  unsigned int *v4; // r13
  _QWORD *v5; // rbx
  _DWORD *v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // esi
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // r15
  int v12; // r12d
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rax
  void *v16; // rdi
  void *v17; // rdi
  __int64 v18; // r13
  _DWORD *v19; // rbx
  unsigned int v20; // eax
  void *v21; // rdi
  _DWORD *v22; // rax
  unsigned int v23; // eax
  _QWORD *v24; // r9
  __int64 v25; // rax
  _QWORD *v26; // rax
  void *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rdx
  void *v30; // rbp
  unsigned int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // rax
  unsigned int v34; // r12d
  void *v35; // r15
  int v36; // eax
  int v37; // eax
  void *v38; // rdi
  int *v39; // rdx
  unsigned int *v40; // rcx
  unsigned int *v41; // r15
  unsigned int v42; // r10d
  size_t v43; // rdi
  __int64 v44; // rax
  _DWORD *v45; // r8
  unsigned int v46; // r10d
  _DWORD *v47; // r11
  __int64 v48; // rax
  _QWORD *v49; // rdx
  _DWORD *v50; // rdi
  _DWORD *i; // rax
  int v52; // ecx
  char v53; // si
  __int64 v54; // rcx
  char v55; // si
  __int64 v56; // rcx
  __int64 v57; // rax
  _DWORD *v58; // r12
  _DWORD *v59; // rbx
  void *v60; // r13
  _DWORD *v61; // rsi
  _QWORD *v62; // rax
  char **exception; // rbp
  _QWORD *v64; // [rsp+8h] [rbp-140h]
  _DWORD *v65; // [rsp+18h] [rbp-130h]
  __int64 v66; // [rsp+28h] [rbp-120h]
  __int64 v67; // [rsp+28h] [rbp-120h]
  void *v68; // [rsp+30h] [rbp-118h]
  _DWORD *v69; // [rsp+30h] [rbp-118h]
  void *v70; // [rsp+30h] [rbp-118h]
  void *v71; // [rsp+30h] [rbp-118h]
  unsigned int v72; // [rsp+38h] [rbp-110h]
  unsigned int v73; // [rsp+38h] [rbp-110h]
  _QWORD *v74; // [rsp+38h] [rbp-110h]
  _DWORD *v75; // [rsp+48h] [rbp-100h]
  _QWORD *v76; // [rsp+58h] [rbp-F0h]
  int v77; // [rsp+60h] [rbp-E8h]
  unsigned int v78; // [rsp+64h] [rbp-E4h]
  __int64 v79; // [rsp+68h] [rbp-E0h]
  _DWORD *v80; // [rsp+70h] [rbp-D8h]
  _DWORD *v81; // [rsp+78h] [rbp-D0h]
  unsigned int v82; // [rsp+78h] [rbp-D0h]
  __int64 v83; // [rsp+80h] [rbp-C8h]
  _DWORD *v84; // [rsp+80h] [rbp-C8h]
  _QWORD *v85; // [rsp+88h] [rbp-C0h]
  unsigned int v86; // [rsp+94h] [rbp-B4h]
  _DWORD *v87; // [rsp+98h] [rbp-B0h]
  _QWORD v88[2]; // [rsp+A0h] [rbp-A8h] BYREF
  _QWORD v89[2]; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v90[4]; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v91; // [rsp+E0h] [rbp-68h]
  __int64 v92; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v93; // [rsp+F0h] [rbp-58h]
  __int64 v94; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v95; // [rsp+100h] [rbp-48h]

  v2 = a1[30];
  if ( v2 )
  {
    v78 = *(_DWORD *)(v2 - 4) - 1;
    v3 = 48LL * v78;
  }
  else
  {
    v78 = -1;
    v3 = 0x2FFFFFFFD0LL;
  }
  v4 = (unsigned int *)(v2 + v3);
  v5 = (_QWORD *)a1[31];
  v6 = (_DWORD *)a1[41];
  v7 = v4[1];
  v8 = *v4;
  v88[0] = 0;
  v89[0] = 1;
  v9 = v5[v7];
  v77 = v7;
  v88[1] = 0;
  v89[1] = 0;
  v64 = v5;
  v66 = v9;
  v80 = v6;
  if ( !v9 || (v10 = v9 + 48LL * *(unsigned int *)(v9 - 4), v9 == v10) )
  {
    v65 = v6;
    goto LABEL_19;
  }
  v65 = v6;
  v11 = v9 + 8;
  v12 = 0;
  while ( 1 )
  {
    if ( *(_DWORD *)(v11 - 8) == -1 || v12 == v8 )
      goto LABEL_11;
    v17 = qword_1C7F2C0;
    if ( (v4[3] & 1) != 0 )
    {
      v68 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, v88, v4 + 2);
      v17 = v68;
      if ( (v4[7] & 1) != 0 )
      {
LABEL_17:
        sub_182C690(v17, v89, v4 + 6);
        goto LABEL_8;
      }
    }
    else
    {
      v13 = v4[2];
      BYTE4(v88[0]) &= ~1u;
      LODWORD(v88[0]) = v13;
      if ( (v4[7] & 1) != 0 )
        goto LABEL_17;
    }
    v14 = v4[6];
    BYTE4(v89[0]) &= ~1u;
    LODWORD(v89[0]) = v14;
LABEL_8:
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v88, v11, (__int64)v88);
    v15 = a1[31];
    if ( *(_DWORD *)(*(_QWORD *)(v15 + 8LL * v8) + v11 + -8 - v66) == -1
      || sub_3ED700((__int64)qword_1C7F2C0, (__int64)v88, *(_QWORD *)(v15 + 8LL * v8) + v11 - v66) )
    {
      v16 = qword_1C7F2C0;
      *v65 = v12;
      sub_27B950((__int64)v16, (__int64)(v65 + 2), (int *)v88);
      v65 += 10;
    }
LABEL_11:
    ++v12;
    if ( v10 == v11 + 40 )
      break;
    v11 += 48;
  }
  v64 = (_QWORD *)a1[31];
LABEL_19:
  if ( v64 )
  {
    v76 = &v64[*((unsigned int *)v64 - 1)];
    if ( v76 != v64 )
    {
      v67 = 0;
      v79 = 48LL * v8;
      while ( 1 )
      {
        if ( v77 != (_DWORD)v67 )
        {
          v18 = *v64 + v79;
          if ( *(_DWORD *)v18 != -1 )
          {
            v19 = v80;
            if ( v65 != v80 )
              break;
          }
        }
LABEL_22:
        ++v64;
        ++v67;
        if ( v64 == v76 )
          goto LABEL_79;
      }
      while ( 2 )
      {
        v34 = *v19;
        if ( *v19 != (_DWORD)v67 )
        {
          v35 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v18 + 12) & 1) != 0 )
          {
            sub_182C690(qword_1C7F2C0, v88, v18 + 8);
          }
          else
          {
            v36 = *(_DWORD *)(v18 + 8);
            BYTE4(v88[0]) &= ~1u;
            LODWORD(v88[0]) = v36;
          }
          if ( (*(_BYTE *)(v18 + 28) & 1) != 0 )
          {
            sub_182C690(v35, v89, v18 + 24);
          }
          else
          {
            v37 = *(_DWORD *)(v18 + 24);
            BYTE4(v89[0]) &= ~1u;
            LODWORD(v89[0]) = v37;
          }
          v38 = qword_1C7F2C0;
          if ( v19[2] )
          {
            v39 = v19 + 2;
            if ( LODWORD(v88[0]) )
            {
              if ( (v89[0] & 0x100000000LL) != 0 || LODWORD(v89[0]) != 1 || (v19[7] & 1) != 0 || v19[6] != 1 )
              {
                sub_1851D20(qword_1C7F2C0, v88, v39, v88);
              }
              else
              {
                v71 = qword_1C7F2C0;
                sub_1831A80(qword_1C7F2C0, v88, v39, v88);
                sub_182CBA0(v71, v89);
                BYTE4(v89[0]) &= ~1u;
                LODWORD(v89[0]) = 1;
              }
            }
            else
            {
              sub_27B950((__int64)qword_1C7F2C0, (__int64)v88, v39);
            }
          }
          else
          {
            if ( (v88[0] & 0x100000000LL) != 0 )
            {
              v70 = qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, v88, v88);
              v38 = v70;
            }
            else
            {
              BYTE4(v88[0]) &= ~1u;
            }
            if ( (v89[0] & 0x100000000LL) != 0 )
              sub_182C690(v38, v89, v89);
            else
              BYTE4(v89[0]) &= ~1u;
          }
          v40 = (unsigned int *)(*(_QWORD *)(a1[31] + 8 * v67) + 48LL * v34);
          v20 = *v40;
          v41 = v40;
          if ( *v40 == -1 )
          {
            v69 = v40 + 2;
LABEL_29:
            WORD1(v91) = v34;
            HIDWORD(v91) = v20;
            LOWORD(v91) = v67;
            v21 = qword_1C7F2C0;
            v92 = 0;
            v93 = 0;
            v94 = 1;
            v95 = 0;
            if ( (v41[3] & 1) != 0 )
            {
              sub_182C690(qword_1C7F2C0, &v92, v69);
              v22 = v41 + 6;
              v75 = v41 + 6;
              if ( (v41[7] & 1) != 0 )
                goto LABEL_75;
LABEL_31:
              v23 = v41[6];
              v24 = (_QWORD *)a1[33];
              BYTE4(v94) &= ~1u;
              LODWORD(v94) = v23;
              if ( v24 )
                goto LABEL_32;
LABEL_76:
              v62 = (_QWORD *)sub_186B270(0x58u);
              v24 = v62 + 1;
              *v62 = 2;
              a1[33] = v62 + 1;
              v26 = v62 + 1;
            }
            else
            {
              LODWORD(v92) = v41[2];
              v22 = v41 + 6;
              v75 = v41 + 6;
              if ( (v41[7] & 1) == 0 )
                goto LABEL_31;
LABEL_75:
              sub_182C690(v21, &v94, v22);
              v24 = (_QWORD *)a1[33];
              if ( !v24 )
                goto LABEL_76;
LABEL_32:
              v25 = *((unsigned int *)v24 - 1);
              if ( (_DWORD)v25 == *((_DWORD *)v24 - 2) )
              {
                v42 = (unsigned int)(3 * v25 + 1) >> 1;
                v43 = 40 * v42 + 8;
                if ( 40 * (int)v25 + 8 >= (unsigned int)v43 || (unsigned int)v25 >= v42 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_91CD50(v90, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v90);
                  sub_233E40((__int64)v90);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v72 = (unsigned int)(3 * v25 + 1) >> 1;
                v44 = sub_186B270(v43);
                v45 = (_DWORD *)a1[33];
                v46 = v72;
                v47 = (_DWORD *)v44;
                v24 = (_QWORD *)(v44 + 8);
                if ( v45 )
                {
                  v48 = (unsigned int)*(v45 - 1);
                  v49 = v24;
                  v47[1] = v48;
                  v50 = &v45[10 * v48];
                  for ( i = v45; v50 != i; *(v49 - 1) = v56 )
                  {
                    v52 = *i;
                    v53 = *((_BYTE *)v49 + 12);
                    i += 10;
                    v49 += 5;
                    *((_DWORD *)v49 - 10) = v52;
                    *((_DWORD *)v49 - 9) = *(i - 9);
                    *((_DWORD *)v49 - 8) = *(i - 8);
                    *((_BYTE *)v49 - 28) = v53 & 0xFC | *(_BYTE *)(i - 7) & 3;
                    v54 = *((_QWORD *)i - 3);
                    *((_QWORD *)i - 3) = 0;
                    v55 = *((_BYTE *)v49 - 12);
                    *(v49 - 3) = v54;
                    *((_DWORD *)v49 - 4) = *(i - 4);
                    *((_BYTE *)v49 - 12) = v55 & 0xFC | *(_BYTE *)(i - 3) & 3;
                    v56 = *((_QWORD *)i - 1);
                    *((_QWORD *)i - 1) = 0;
                  }
                  v57 = (unsigned int)*(v45 - 1);
                  if ( (_DWORD)v57 )
                  {
                    v83 = v18;
                    v85 = v24;
                    v86 = v72;
                    v87 = v47;
                    v73 = v34;
                    v58 = &v45[10 * v57];
                    v81 = v19;
                    v59 = v45;
                    do
                    {
                      v60 = qword_1C7F2C0;
                      sub_182CBA0(qword_1C7F2C0, v59 + 2);
                      v61 = v59 + 6;
                      v59 += 10;
                      sub_182CBA0(v60, v61);
                    }
                    while ( v59 != v58 );
                    v34 = v73;
                    v19 = v81;
                    v18 = v83;
                    v24 = v85;
                    v46 = v86;
                    v47 = v87;
                    v45 = (_DWORD *)a1[33];
                  }
                  v84 = v47;
                  v82 = v46;
                  v74 = v24;
                  sub_186B220(v45 - 2);
                  v47 = v84;
                  v24 = v74;
                  v46 = v82;
                  v26 = &v74[5 * (unsigned int)v84[1]];
                }
                else
                {
                  *(_DWORD *)(v44 + 4) = 0;
                  v26 = (_QWORD *)(v44 + 8);
                }
                a1[33] = v24;
                *v47 = v46;
              }
              else
              {
                v26 = &v24[5 * v25];
              }
            }
            *v26 = v91;
            v27 = qword_1C7F2C0;
            *((_DWORD *)v26 + 2) = v92;
            *((_BYTE *)v26 + 12) = BYTE4(v92) & 3 | *((_BYTE *)v26 + 12) & 0xFC;
            v28 = v93;
            v93 = 0;
            v26[2] = v28;
            *((_DWORD *)v26 + 6) = v94;
            *((_BYTE *)v26 + 28) = BYTE4(v94) & 3 | *((_BYTE *)v26 + 28) & 0xFC;
            v29 = v95;
            v95 = 0;
            v26[4] = v29;
            ++*((_DWORD *)v24 - 1);
            sub_182CBA0(v27, &v92);
            sub_182CBA0(v27, &v94);
            v30 = qword_1C7F2C0;
            *v41 = v78;
            if ( (v88[0] & 0x100000000LL) != 0 )
            {
              sub_182C690(v30, v69, v88);
            }
            else
            {
              v31 = v88[0];
              *((_BYTE *)v41 + 12) &= ~1u;
              v41[2] = v31;
            }
            if ( (v89[0] & 0x100000000LL) != 0 )
            {
              sub_182C690(v30, v75, v89);
            }
            else
            {
              v32 = v89[0];
              *((_BYTE *)v41 + 28) &= ~1u;
              v41[6] = v32;
            }
            v33 = *((_QWORD *)v41 + 5);
            if ( v33 && *(_DWORD *)(v33 - 4) )
              sub_936BC0((__int64)a1, v67, v34);
          }
          else
          {
            v69 = v40 + 2;
            if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)v88, (__int64)(v40 + 2)) )
            {
              v20 = *v41;
              goto LABEL_29;
            }
          }
        }
        v19 += 10;
        if ( v19 == v65 )
          goto LABEL_22;
        continue;
      }
    }
  }
LABEL_79:
  sub_25A130((char *)v88);
}

