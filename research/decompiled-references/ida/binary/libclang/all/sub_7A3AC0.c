unsigned __int64 __fastcall sub_7A3AC0(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  _QWORD **v11; // rdx
  unsigned __int64 result; // rax
  __int64 v13; // r10
  __int64 v14; // r12
  _QWORD **v15; // r13
  _QWORD *v16; // r14
  unsigned __int64 v17; // rbx
  _QWORD *v18; // r15
  __int64 v19; // r8
  __int64 v20; // r12
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r12
  unsigned int v23; // ecx
  __int64 *v24; // r11
  int v25; // edi
  unsigned __int64 v26; // rsi
  unsigned int v27; // ebx
  unsigned int v28; // edi
  unsigned __int64 *v29; // rdx
  unsigned __int64 v30; // r9
  unsigned __int64 *v31; // rax
  int v32; // r10d
  unsigned __int64 *v33; // rax
  int v34; // edx
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 *v38; // rsi
  int v39; // edi
  __int64 v40; // rdx
  __int64 *v41; // rax
  __int64 *v42; // rcx
  __int64 *v43; // rax
  __int64 v44; // rsi
  int v45; // edx
  int v46; // r11d
  int v47; // edi
  _QWORD *v48; // r10
  __int64 v49; // r9
  _QWORD *v50; // rdx
  __int64 v51; // rbx
  int v52; // r11d
  __int64 v53; // rcx
  unsigned __int64 v54; // r10
  int v55; // r9d
  unsigned __int64 *v56; // rdi
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 *v61; // rsi
  int v62; // edi
  __int64 v63; // rdx
  __int64 *v64; // rax
  __int64 *v65; // r9
  __int64 *v66; // rax
  _QWORD *v67; // r15
  __int64 v68; // rsi
  int v69; // edx
  int v70; // r11d
  int v71; // ecx
  _QWORD *v72; // r10
  unsigned int v73; // edi
  _QWORD *v74; // rdx
  __int64 v75; // r14
  int v76; // r11d
  unsigned __int64 *v77; // rcx
  int v78; // edi
  __int64 v79; // r10
  unsigned __int64 v80; // r9
  __int64 *v81; // rdx
  unsigned __int64 v82; // rax
  __int64 *v83; // rdx
  int v84; // edx
  __int64 *v85; // rdi
  unsigned int v86; // eax
  int v87; // ebx
  __int64 *v88; // rax
  unsigned __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rdi
  _QWORD *v92; // rax
  __int64 v93; // rdx
  _QWORD *v94; // rdx
  unsigned __int64 v95; // [rsp+8h] [rbp-80h]
  _QWORD **v98; // [rsp+20h] [rbp-68h]
  __int64 *v99; // [rsp+28h] [rbp-60h]
  __int64 v100; // [rsp+28h] [rbp-60h]
  __int64 *v101; // [rsp+28h] [rbp-60h]
  unsigned int v102; // [rsp+30h] [rbp-58h]
  unsigned int v103; // [rsp+30h] [rbp-58h]
  _QWORD *v104; // [rsp+30h] [rbp-58h]
  __int64 v105; // [rsp+38h] [rbp-50h]
  __int64 v106; // [rsp+38h] [rbp-50h]

  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 )
  {
    v5 = 4 * v4;
    v6 = *(unsigned int *)(a2 + 16);
    if ( (unsigned int)(4 * v4) < 0x40 )
      v5 = 64;
    if ( v5 < (unsigned int)v6 )
    {
      v85 = *(__int64 **)a2;
      v86 = v4 - 1;
      if ( v86 )
      {
        _BitScanReverse(&v86, v86);
        v87 = 1 << (v86 + 2);
        if ( v87 < 64 )
          v87 = 64;
        if ( v87 == (_DWORD)v6 )
        {
          v88 = &v85[2 * (unsigned int)v6];
          *(_QWORD *)(a2 + 8) = 0;
          if ( ((16 * (_BYTE)v6) & 0x10) == 0 || (*v85 = -4096, v85 += 2, v88 != v85) )
          {
            do
            {
              *v85 = -4096;
              v85 += 4;
              *(v85 - 2) = -4096;
            }
            while ( v88 != v85 );
          }
          goto LABEL_10;
        }
        operator delete();
        v89 = (4 * v87 / 3u + 1)
            | ((unsigned __int64)(4 * v87 / 3u + 1) >> 1)
            | (((4 * v87 / 3u + 1) | ((unsigned __int64)(4 * v87 / 3u + 1) >> 1)) >> 2)
            | (((4 * v87 / 3u + 1)
              | ((unsigned __int64)(4 * v87 / 3u + 1) >> 1)
              | (((4 * v87 / 3u + 1) | ((unsigned __int64)(4 * v87 / 3u + 1) >> 1)) >> 2)) >> 4)
            | (((4 * v87 / 3u + 1)
              | ((unsigned __int64)(4 * v87 / 3u + 1) >> 1)
              | (((4 * v87 / 3u + 1) | ((unsigned __int64)(4 * v87 / 3u + 1) >> 1)) >> 2)
              | (((4 * v87 / 3u + 1)
                | ((unsigned __int64)(4 * v87 / 3u + 1) >> 1)
                | (((4 * v87 / 3u + 1) | ((unsigned __int64)(4 * v87 / 3u + 1) >> 1)) >> 2)) >> 4)) >> 8);
        v90 = (v89 | (v89 >> 16)) + 1;
        v91 = 16 * v90;
      }
      else
      {
        operator delete();
        LODWORD(v90) = 128;
        v91 = 2048;
      }
      *(_DWORD *)(a2 + 16) = v90;
      v92 = (_QWORD *)sub_25CC9C0(v91, 8);
      v93 = *(unsigned int *)(a2 + 16);
      *(_QWORD *)(a2 + 8) = 0;
      *(_QWORD *)a2 = v92;
      v94 = &v92[2 * v93];
      if ( v92 != v94 )
      {
        if ( (((_BYTE)v94 - (_BYTE)v92) & 0x10) == 0 || (*v92 = -4096, v92 += 2, v94 != v92) )
        {
          do
          {
            *v92 = -4096;
            v92 += 4;
            *(v92 - 2) = -4096;
          }
          while ( v94 != v92 );
        }
      }
      goto LABEL_10;
    }
    goto LABEL_5;
  }
  if ( !*(_DWORD *)(a2 + 12) )
    goto LABEL_10;
  v6 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v6 )
  {
    if ( (unsigned int)v6 <= 0x40 )
    {
LABEL_5:
      v7 = *(__int64 **)a2;
      v8 = *(_QWORD *)a2 + 16 * v6;
      if ( *(_QWORD *)a2 != v8 )
      {
        if ( (((_BYTE)v8 - (_BYTE)v7) & 0x10) == 0 || (*v7 = -4096, v7 += 2, (__int64 *)v8 != v7) )
        {
          do
          {
            *v7 = -4096;
            v7 += 4;
            *(v7 - 2) = -4096;
          }
          while ( (__int64 *)v8 != v7 );
        }
      }
      goto LABEL_9;
    }
    operator delete();
    *(_DWORD *)(a2 + 16) = 0;
    *(_QWORD *)a2 = 0;
  }
LABEL_9:
  *(_QWORD *)(a2 + 8) = 0;
LABEL_10:
  *a3 = 0;
  v9 = *(_QWORD *)(a1 + 128);
  v10 = *(_QWORD *)(v9 + 128);
  if ( (v10 & 4) != 0 )
  {
    v82 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    v11 = *(_QWORD ***)v82;
    result = *(unsigned int *)(v82 + 8);
    v13 = (__int64)&v11[result];
  }
  else
  {
    v11 = (_QWORD **)(v9 + 128);
    result = v10 > 7;
    v13 = v9 + 128 + 8 * result;
  }
  if ( (_QWORD **)v13 == v11 )
    return result;
  v98 = (_QWORD **)v13;
  v14 = *(_QWORD *)(a1 + 128);
  v15 = v11;
  do
  {
    v16 = *v15;
    v17 = sub_7868A0(a1);
    result = 16LL * ((*(_DWORD *)(v14 + 104) >> 5) & 0x7FFF);
    v18 = (_QWORD *)((char *)v16 + result);
    if ( v16 == (_QWORD *)((char *)v16 + result) )
      goto LABEL_26;
    v95 = v17;
    v19 = v14;
    do
    {
      v20 = *v16;
      if ( *v16 > 7u )
      {
        v22 = v20 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(v22 + 28) & 0x7Fu) - 24 > 0x1A )
          goto LABEL_19;
        v23 = *(_DWORD *)(a2 + 16);
        v24 = *(__int64 **)a2;
        v25 = 0;
        if ( !v23 )
          goto LABEL_43;
        v26 = v23 - 1;
        v27 = ((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4);
        v28 = v26 & v27;
        v29 = (unsigned __int64 *)&v24[2 * ((unsigned int)v26 & v27)];
        v30 = *v29;
        if ( *v29 == v22 )
        {
LABEL_31:
          v31 = v29 + 1;
LABEL_32:
          *v31 = v95;
          goto LABEL_19;
        }
        v32 = 1;
        v33 = nullptr;
        while ( v30 != -4096 )
        {
          if ( !v33 && v30 == -8192 )
            v33 = v29;
          v84 = v32++;
          v28 = v26 & (v84 + v28);
          v29 = (unsigned __int64 *)&v24[2 * v28];
          v30 = *v29;
          if ( *v29 == v22 )
            goto LABEL_31;
        }
        if ( !v33 )
          v33 = v29;
        v34 = *(_DWORD *)(a2 + 8) + 1;
        v25 = 2 * v23;
        if ( 4 * v34 < 3 * v23 )
        {
          if ( v23 >> 3 >= v23 - *(_DWORD *)(a2 + 12) - v34 )
          {
            v106 = v19;
            v103 = *(_DWORD *)(a2 + 16);
            v101 = *(__int64 **)a2;
            v57 = ((((v26 | (v26 >> 1)) >> 2) | v26 | (v26 >> 1)) >> 4) | ((v26 | (v26 >> 1)) >> 2) | v26 | (v26 >> 1);
            v58 = ((((v57 >> 8) | v57) >> 16) | (v57 >> 8) | v57) + 1;
            if ( (unsigned int)v58 < 0x40 )
              LODWORD(v58) = 64;
            *(_DWORD *)(a2 + 16) = v58;
            v59 = sub_25CC9C0(16LL * (unsigned int)v58, 8);
            v60 = *(unsigned int *)(a2 + 16);
            v61 = (__int64 *)v59;
            v19 = v106;
            *(_QWORD *)a2 = v59;
            v62 = v60;
            v63 = 16 * v60;
            v64 = (__int64 *)(v59 + v63);
            if ( v101 )
            {
              *(_QWORD *)(a2 + 8) = 0;
              v65 = &v101[2 * v103];
              if ( v63 )
              {
                if ( (((_BYTE)v64 - (_BYTE)v61) & 0x10) == 0 || (*v61 = -4096, v61 += 2, v61 != v64) )
                {
                  do
                  {
                    *v61 = -4096;
                    v61 += 4;
                    *(v61 - 2) = -4096;
                  }
                  while ( v61 != v64 );
                }
              }
              v66 = v101;
              v104 = v18;
              v67 = v16;
              do
              {
                v68 = *v66;
                if ( *v66 != -4096 && v68 != -8192 )
                {
                  v69 = *(_DWORD *)(a2 + 16);
                  if ( !v69 )
                  {
                    *(_QWORD *)&dword_0 = *v66;
                    BUG();
                  }
                  v70 = v69 - 1;
                  v71 = 1;
                  v72 = nullptr;
                  v73 = (v69 - 1) & (((unsigned int)v68 >> 9) ^ ((unsigned int)v68 >> 4));
                  v74 = (_QWORD *)(*(_QWORD *)a2 + 16LL * v73);
                  v75 = *v74;
                  if ( *v74 != v68 )
                  {
                    while ( v75 != -4096 )
                    {
                      if ( !v72 && v75 == -8192 )
                        v72 = v74;
                      v73 = v70 & (v71 + v73);
                      v74 = (_QWORD *)(*(_QWORD *)a2 + 16LL * v73);
                      v75 = *v74;
                      if ( v68 == *v74 )
                        goto LABEL_78;
                      ++v71;
                    }
                    if ( v72 )
                      v74 = v72;
                  }
LABEL_78:
                  *v74 = v68;
                  v74[1] = v66[1];
                  ++*(_DWORD *)(a2 + 8);
                }
                v66 += 2;
              }
              while ( v65 != v66 );
              v16 = v67;
              v18 = v104;
              operator delete();
              v61 = *(__int64 **)a2;
              v62 = *(_DWORD *)(a2 + 16);
              v19 = v106;
              v34 = *(_DWORD *)(a2 + 8) + 1;
            }
            else
            {
              *(_QWORD *)(a2 + 8) = 0;
              if ( v61 != v64 )
              {
                v83 = v61;
                if ( (((_BYTE)v64 - (_BYTE)v61) & 0x10) == 0 || (v83 = v61 + 2, *v61 = -4096, v61 + 2 != v64) )
                {
                  do
                  {
                    *v83 = -4096;
                    v83 += 4;
                    *(v83 - 2) = -4096;
                  }
                  while ( v83 != v64 );
                }
              }
              v34 = 1;
            }
            if ( !v62 )
              goto LABEL_151;
            v76 = v62 - 1;
            v77 = nullptr;
            v78 = 1;
            v79 = v76 & v27;
            v33 = (unsigned __int64 *)&v61[2 * v79];
            v80 = *v33;
            if ( *v33 != v22 )
            {
              while ( v80 != -4096 )
              {
                if ( v80 == -8192 && !v77 )
                  v77 = v33;
                v79 = v76 & (unsigned int)(v79 + v78);
                v33 = (unsigned __int64 *)&v61[2 * v79];
                v80 = *v33;
                if ( *v33 == v22 )
                  goto LABEL_40;
                ++v78;
              }
              if ( v77 )
                v33 = v77;
            }
          }
        }
        else
        {
LABEL_43:
          v105 = v19;
          v102 = *(_DWORD *)(a2 + 16);
          v99 = *(__int64 **)a2;
          v35 = ((((((((((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
                     | (unsigned int)(v25 - 1)
                     | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 4)
                   | (((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
                   | (unsigned int)(v25 - 1)
                   | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 8)
                 | (((((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
                   | (unsigned int)(v25 - 1)
                   | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 4)
                 | (((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
                 | (unsigned int)(v25 - 1)
                 | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 16)
               | (((((((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
                   | (unsigned int)(v25 - 1)
                   | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 4)
                 | (((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
                 | (unsigned int)(v25 - 1)
                 | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 8)
               | (((((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
                 | (unsigned int)(v25 - 1)
                 | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 4)
               | (((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
               | (unsigned int)(v25 - 1)
               | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1))
              + 1;
          if ( (unsigned int)v35 < 0x40 )
            LODWORD(v35) = 64;
          *(_DWORD *)(a2 + 16) = v35;
          v36 = sub_25CC9C0(16LL * (unsigned int)v35, 8);
          v37 = *(unsigned int *)(a2 + 16);
          v38 = (__int64 *)v36;
          v19 = v105;
          *(_QWORD *)a2 = v36;
          v39 = v37;
          v40 = 16 * v37;
          v41 = (__int64 *)(v36 + v40);
          if ( v99 )
          {
            *(_QWORD *)(a2 + 8) = 0;
            v42 = &v99[2 * v102];
            if ( v40 )
            {
              if ( (((_BYTE)v41 - (_BYTE)v38) & 0x10) == 0 || (*v38 = -4096, v38 += 2, v38 != v41) )
              {
                do
                {
                  *v38 = -4096;
                  v38 += 4;
                  *(v38 - 2) = -4096;
                }
                while ( v38 != v41 );
              }
            }
            v43 = v99;
            if ( v99 != v42 )
            {
              do
              {
                v44 = *v43;
                if ( *v43 != -8192 && v44 != -4096 )
                {
                  v45 = *(_DWORD *)(a2 + 16);
                  if ( !v45 )
                  {
                    *(_QWORD *)&dword_0 = *v43;
                    BUG();
                  }
                  v46 = v45 - 1;
                  v47 = 1;
                  v48 = nullptr;
                  LODWORD(v49) = (v45 - 1) & (((unsigned int)v44 >> 9) ^ ((unsigned int)v44 >> 4));
                  v50 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)v49);
                  v51 = *v50;
                  if ( v44 != *v50 )
                  {
                    while ( v51 != -4096 )
                    {
                      if ( v51 == -8192 && !v48 )
                        v48 = v50;
                      v49 = v46 & (unsigned int)(v49 + v47);
                      v50 = (_QWORD *)(*(_QWORD *)a2 + 16 * v49);
                      v51 = *v50;
                      if ( v44 == *v50 )
                        goto LABEL_55;
                      ++v47;
                    }
                    if ( v48 )
                      v50 = v48;
                  }
LABEL_55:
                  *v50 = v44;
                  v50[1] = v43[1];
                  ++*(_DWORD *)(a2 + 8);
                }
                v43 += 2;
              }
              while ( v42 != v43 );
              v19 = v105;
            }
            v100 = v19;
            operator delete();
            v38 = *(__int64 **)a2;
            v39 = *(_DWORD *)(a2 + 16);
            v19 = v100;
            v34 = *(_DWORD *)(a2 + 8) + 1;
          }
          else
          {
            *(_QWORD *)(a2 + 8) = 0;
            if ( v38 != v41 )
            {
              v81 = v38;
              if ( (((_BYTE)v41 - (_BYTE)v38) & 0x10) == 0 || (v81 = v38 + 2, *v38 = -4096, v38 + 2 != v41) )
              {
                do
                {
                  *v81 = -4096;
                  v81 += 4;
                  *(v81 - 2) = -4096;
                }
                while ( v81 != v41 );
              }
            }
            v34 = 1;
          }
          if ( !v39 )
          {
LABEL_151:
            *(_DWORD *)(a2 + 8) = v34;
            BUG();
          }
          v52 = v39 - 1;
          LODWORD(v53) = (v39 - 1) & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
          v33 = (unsigned __int64 *)&v38[2 * (unsigned int)v53];
          v54 = *v33;
          if ( v22 != *v33 )
          {
            v55 = 1;
            v56 = nullptr;
            while ( v54 != -4096 )
            {
              if ( v54 == -8192 && !v56 )
                v56 = v33;
              v53 = v52 & (unsigned int)(v53 + v55);
              v33 = (unsigned __int64 *)&v38[2 * v53];
              v54 = *v33;
              if ( *v33 == v22 )
                goto LABEL_40;
              ++v55;
            }
            if ( v56 )
              v33 = v56;
          }
        }
LABEL_40:
        *(_DWORD *)(a2 + 8) = v34;
        if ( *v33 != -4096 )
          --*(_DWORD *)(a2 + 12);
        *v33 = v22;
        v31 = v33 + 1;
        *v31 = 0;
        goto LABEL_32;
      }
      if ( (v20 & 4) != 0 )
        *a3 = v95;
LABEL_19:
      v16 += 2;
      result = *(_QWORD *)(v95 + 8);
      v21 = result & 0xFFFFFFFFFFFFFFF8LL;
      if ( result > 7 )
      {
        while ( 1 )
        {
          result = (*(_BYTE *)(v21 + 28) & 0x7Fu) - 47;
          if ( (unsigned int)result <= 2 )
            break;
          result = *(_QWORD *)(v21 + 8);
          v21 = result & 0xFFFFFFFFFFFFFFF8LL;
          if ( result <= 7 )
            goto LABEL_33;
        }
        v95 = v21;
      }
      else
      {
LABEL_33:
        v95 = 0;
      }
    }
    while ( v18 != v16 );
    v14 = v19;
LABEL_26:
    ++v15;
  }
  while ( v98 != v15 );
  return result;
}

