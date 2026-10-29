__int64 __fastcall sub_D87BC0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v5; // r12
  __int64 v6; // r15
  unsigned __int64 v7; // r13
  unsigned int v8; // ebp
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  _DWORD *v16; // r8
  _DWORD *v17; // rax
  bool v18; // cl
  __int64 v19; // rdi
  __int64 v20; // r9
  unsigned __int64 v21; // r13
  unsigned __int64 *v22; // r14
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rdi
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rax
  char v32; // r15
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // rbp
  __int64 v38; // rdx
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // r15
  unsigned __int8 **v41; // rax
  unsigned __int8 **v42; // rdx
  unsigned __int8 *v43; // rax
  unsigned __int8 *v44; // rcx
  __int64 v45; // rax
  unsigned __int8 *v46; // rax
  unsigned __int8 *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rsi
  unsigned __int64 v58; // r13
  __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // r8
  __int64 v62; // rdi
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rcx
  _DWORD *v65; // r8
  _DWORD *v66; // rax
  bool v67; // cl
  __int64 v68; // rdi
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  unsigned __int8 *v74; // rcx
  int v75; // eax
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rsi
  __int64 v79; // rcx
  unsigned __int8 **v80; // r15
  __int64 v81; // rbx
  unsigned __int8 *v82; // r14
  void *v83; // rdi
  unsigned __int8 *v84; // rcx
  int v85; // eax
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rsi
  __int64 v89; // rcx
  unsigned __int8 *v90; // r15
  __int64 v91; // rbx
  unsigned __int8 **v92; // r14
  void *v93; // rdi
  int v94; // r8d
  int v95; // r8d
  __int64 v98; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v99; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v100; // [rsp+10h] [rbp-B8h]
  unsigned __int8 **v101; // [rsp+10h] [rbp-B8h]
  unsigned __int8 **v102; // [rsp+10h] [rbp-B8h]
  __int64 v103; // [rsp+20h] [rbp-A8h]
  __int64 v104; // [rsp+20h] [rbp-A8h]
  unsigned __int64 *v105; // [rsp+28h] [rbp-A0h]
  unsigned __int64 *v106; // [rsp+28h] [rbp-A0h]
  _BYTE v107[48]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v108; // [rsp+60h] [rbp-68h] BYREF
  __int128 v109; // [rsp+68h] [rbp-60h]
  int v110; // [rsp+78h] [rbp-50h]
  __int64 v111; // [rsp+80h] [rbp-48h]
  __int64 v112; // [rsp+88h] [rbp-40h]

  v4 = a3;
  v5 = *(_QWORD **)(a4 + 40);
  if ( (*(_BYTE *)(a4 + 19) & 2) != 0 )
  {
    if ( *((_DWORD *)v5 + 2) <= 0x40u )
      v5 = (_QWORD *)*v5;
    else
      v5 = *(_QWORD **)*v5;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a4 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 2 <= 1 )
    {
      if ( v5 )
      {
        v7 = 0;
        v8 = 1;
        while ( 1 )
        {
          v9 = *(_DWORD *)(v4 + 24);
          if ( v9 == 1 )
            break;
          if ( v9 == 2 )
          {
            v72 = *(_QWORD *)(v4 + 32);
            v108 = v7;
            v109 = 0;
            v110 = 2;
            v111 = v72;
            goto LABEL_68;
          }
          v10 = *(unsigned int *)(v4 + 40);
          if ( (_DWORD)v10 == -1 )
          {
            if ( v9 == 3 )
              goto LABEL_194;
            sub_DFF4E0(
              &v108,
              *(_QWORD *)(v4 + 32),
              v10,
              *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 32LL) + 20LL));
          }
          else
          {
            if ( v9 )
            {
              if ( v9 == 3 )
                goto LABEL_195;
              v11 = *(_QWORD *)(v4 + 32);
              v12 = (unsigned int)v10;
              v13 = *(_QWORD *)(v11 + 32);
              v14 = v7 * *(unsigned int *)(v13 + 16);
            }
            else
            {
              v11 = *(_QWORD *)(v4 + 32);
              v13 = *(_QWORD *)(v11 + 32);
              if ( *(_DWORD *)(v13 + 24) == (_DWORD)v10 || !(_DWORD)v10 )
              {
                v12 = (unsigned int)v10;
                v14 = v7 * *(unsigned int *)(v13 + 16);
              }
              else
              {
                v12 = (unsigned int)v10;
                v14 = v7 * *(unsigned int *)(*(_QWORD *)(v11 + (unsigned int)v10 + 32) + 16LL);
              }
              if ( *(_DWORD *)(v13 + 24) != (_DWORD)v10 && (_DWORD)v10 )
                v13 = *(_QWORD *)(v11 + v12 + 32);
            }
            v15 = v14 + 32;
            if ( *(_QWORD *)(v13 + 40) )
              v15 = v14 + 16;
            sub_DFF4E0(&v108, v11, v10, v15 + v12);
          }
          if ( v110 || !v111 )
            goto LABEL_68;
          v16 = *(_DWORD **)(v111 + 32);
          v17 = v16;
          v18 = v16[6] == (_DWORD)v112 || (_DWORD)v112 == 0;
          if ( !v18 )
            v17 = *(_DWORD **)(v111 + (unsigned int)v112 + 32);
          if ( v17[5] == -1 )
            goto LABEL_68;
          v19 = v108;
          if ( (_DWORD)v112 == -1 )
          {
            if ( v108 )
              v19 = 0xFFFFFFFFLL;
            sub_DFF4E0(v107, v111, 16, v19);
            goto LABEL_69;
          }
          v20 = *(_QWORD *)(v111 + 32);
          if ( !v18 )
            v20 = *(_QWORD *)(v111 + (unsigned int)v112 + 32);
          if ( *(_DWORD *)(v20 + 20) == -1 )
          {
            if ( v108 == (unsigned int)v112 )
              goto LABEL_68;
          }
          else
          {
            if ( v108 > (unsigned int)v16[7] )
              goto LABEL_187;
            if ( v18 )
            {
              v95 = v16[5];
              if ( (unsigned int)v112 == v108 )
                goto LABEL_185;
            }
            else
            {
              v95 = *(_DWORD *)(*(_QWORD *)(v111 + (unsigned int)v112 + 32) + 20LL);
              if ( (unsigned int)v112 == v108 )
              {
LABEL_185:
                if ( (_DWORD)v108 - (_DWORD)v112 == v95 && v95 )
                  goto LABEL_187;
                goto LABEL_68;
              }
            }
            if ( (_DWORD)v108 - (_DWORD)v112 - (*((_QWORD *)v17 + 5) == 0 ? 32 : 16) == v95 && v95 )
            {
LABEL_187:
              sub_DFF4E0(v107, v111, (unsigned int)v112, 0xFFFFFFFFLL);
              goto LABEL_69;
            }
          }
          if ( !*((_QWORD *)v17 + 5) && *((_BYTE *)v17 + 60) )
            goto LABEL_68;
          sub_DFF4E0(v107, v111, (unsigned int)v108, v108);
LABEL_69:
          ++v7;
          sub_DFF560(&v108);
          v8 &= sub_D87BC0(a1, a2, v107);
          sub_DFF560(v107);
          if ( (_QWORD *)v7 == v5 )
            return v8;
        }
        v51 = *(_QWORD *)(v4 + 40);
        v52 = *(_QWORD *)(v4 + 32);
        v108 = v7;
        v110 = 1;
        v112 = v51;
        v111 = v52;
        v109 = 0;
LABEL_68:
        sub_DFF4A0(v107, &v108);
        goto LABEL_69;
      }
      return 1;
    }
    if ( v5 )
    {
      v21 = 0;
      v8 = 1;
      v22 = &v108;
      while ( 1 )
      {
        v23 = *(_DWORD *)(v4 + 24);
        if ( v23 == 1 )
        {
          v30 = *(_QWORD *)(v4 + 40);
          v31 = *(_QWORD *)(v4 + 32);
          v108 = v21;
          v110 = 1;
          v112 = v30;
          v111 = v31;
          v109 = 0;
        }
        else if ( v23 == 2 )
        {
          v50 = *(_QWORD *)(v4 + 32);
          v108 = v21;
          v109 = 0;
          v110 = 2;
          v111 = v50;
        }
        else
        {
          v24 = *(unsigned int *)(v4 + 40);
          if ( (_DWORD)v24 == -1 )
          {
            if ( v23 == 3 )
              goto LABEL_194;
            sub_DFF4E0(
              v22,
              *(_QWORD *)(v4 + 32),
              v24,
              *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 32LL) + 20LL));
          }
          else
          {
            if ( v23 )
            {
              if ( v23 == 3 )
                goto LABEL_195;
              v25 = *(_QWORD *)(v4 + 32);
              v26 = (unsigned int)v24;
              v27 = *(_QWORD *)(v25 + 32);
              v28 = v21 * *(unsigned int *)(v27 + 16);
            }
            else
            {
              v25 = *(_QWORD *)(v4 + 32);
              v27 = *(_QWORD *)(v25 + 32);
              if ( *(_DWORD *)(v27 + 24) != (_DWORD)v24 && (_DWORD)v24 )
              {
                v26 = (unsigned int)v24;
                v28 = v21 * *(unsigned int *)(*(_QWORD *)(v25 + (unsigned int)v24 + 32) + 16LL);
              }
              else
              {
                v26 = (unsigned int)v24;
                v28 = v21 * *(unsigned int *)(v27 + 16);
              }
              if ( *(_DWORD *)(v27 + 24) != (_DWORD)v24 && (_DWORD)v24 )
                v27 = *(_QWORD *)(v25 + v26 + 32);
            }
            v29 = v28 + 32;
            if ( *(_QWORD *)(v27 + 40) )
              v29 = v28 + 16;
            sub_DFF4E0(v22, v25, v24, v29 + v26);
          }
        }
        v32 = sub_DFFEE0(v22);
        sub_DFF560(v22);
        if ( !v32 )
          break;
LABEL_43:
        if ( (_QWORD *)++v21 == v5 )
          return v8;
      }
      v34 = *(_DWORD *)(v4 + 24);
      if ( v34 == 1 )
      {
        v37 = *(_QWORD *)(v4 + 32);
        goto LABEL_55;
      }
      if ( v34 )
      {
        if ( v34 == 2 || v34 == 3 )
          goto LABEL_108;
        v35 = *(_QWORD *)(v4 + 32);
      }
      else
      {
        v35 = *(_QWORD *)(v4 + 32);
        if ( v35 )
        {
          v36 = *(unsigned int *)(v4 + 40);
          if ( *(_DWORD *)(*(_QWORD *)(v35 + 32) + 24LL) != (_DWORD)v36 )
          {
            if ( (_DWORD)v36 )
            {
              v37 = *(_QWORD *)(v35 + v36 + 32);
LABEL_55:
              if ( !v37 )
              {
                v40 = 0;
                goto LABEL_61;
              }
              v38 = *(_QWORD *)v37 & 2LL;
              if ( (*(_QWORD *)v37 & 2) == 0 )
              {
                v39 = *(_QWORD *)v37 & 0xFFFFFFFFFFFFFFFCLL;
                v40 = v39;
                v37 = v39;
                if ( v39 )
                {
                  v40 = v38;
                  if ( (*(_BYTE *)(v39 + 28) & 0x7Fu) - 49 < 3 )
                    v40 = v39;
                  v37 = v40;
                }
                goto LABEL_61;
              }
LABEL_108:
              v40 = 0;
              v37 = 0;
LABEL_61:
              v41 = (unsigned __int8 **)sub_E0FF40(a1, a2, 2490, 0);
              v42 = v41;
              if ( v41 )
              {
                v43 = *v41;
                if ( !v43 )
                {
                  v84 = v42[1];
                  v85 = *((_DWORD *)v84 + 3744);
                  if ( v85 )
                  {
                    v86 = (unsigned int)(v85 - 1);
                    *((_DWORD *)v84 + 3744) = v86;
                    v43 = *(unsigned __int8 **)&v84[8 * v86 + 14848];
                    v87 = *((unsigned int *)v43 + 134);
                    *v43 = 0;
                    v88 = *((_QWORD *)v43 + 66);
                    *((_DWORD *)v43 + 106) = 0;
                    v89 = v88 + (v87 << 6);
                    if ( v88 != v89 )
                    {
                      v100 = v40;
                      v90 = v43;
                      v104 = v4;
                      v91 = v89;
                      v106 = v22;
                      v92 = v42;
                      do
                      {
                        while ( 1 )
                        {
                          v91 -= 64;
                          v93 = *(void **)(v91 + 24);
                          if ( v93 == (void *)(v91 + 40) )
                            break;
                          operator delete(v93);
                          if ( v88 == v91 )
                            goto LABEL_161;
                        }
                      }
                      while ( v88 != v91 );
LABEL_161:
                      v42 = v92;
                      v43 = v90;
                      v40 = v100;
                      v4 = v104;
                      v22 = v106;
                    }
                    *((_DWORD *)v43 + 134) = 0;
                  }
                  else
                  {
                    v101 = v42;
                    v43 = (unsigned __int8 *)operator new(0x3A0u);
                    *v43 = 0;
                    *((_QWORD *)v43 + 12) = v43 + 112;
                    *((_QWORD *)v43 + 16) = v43 + 144;
                    *((_QWORD *)v43 + 20) = v43 + 176;
                    *((_QWORD *)v43 + 24) = v43 + 208;
                    *((_QWORD *)v43 + 28) = v43 + 240;
                    *((_QWORD *)v43 + 32) = v43 + 272;
                    *((_QWORD *)v43 + 36) = v43 + 304;
                    *((_QWORD *)v43 + 40) = v43 + 336;
                    *((_QWORD *)v43 + 44) = v43 + 368;
                    *((_QWORD *)v43 + 48) = v43 + 400;
                    *((_QWORD *)v43 + 52) = v43 + 432;
                    *((_QWORD *)v43 + 13) = 0;
                    v43[112] = 0;
                    *((_QWORD *)v43 + 17) = 0;
                    v43[144] = 0;
                    *((_QWORD *)v43 + 21) = 0;
                    v43[176] = 0;
                    *((_QWORD *)v43 + 25) = 0;
                    v43[208] = 0;
                    *((_QWORD *)v43 + 29) = 0;
                    v43[240] = 0;
                    *((_QWORD *)v43 + 33) = 0;
                    v43[272] = 0;
                    *((_QWORD *)v43 + 37) = 0;
                    v43[304] = 0;
                    *((_QWORD *)v43 + 41) = 0;
                    v43[336] = 0;
                    *((_QWORD *)v43 + 45) = 0;
                    v43[368] = 0;
                    *((_QWORD *)v43 + 49) = 0;
                    v43[400] = 0;
                    *((_QWORD *)v43 + 53) = 0x800000000LL;
                    v42 = v101;
                    *((_QWORD *)v43 + 66) = v43 + 544;
                    *((_QWORD *)v43 + 67) = 0x600000000LL;
                  }
                  *v42 = v43;
                }
                v43[*v43 + 1] = 2;
                v44 = *v42;
                v45 = **v42;
                *v44 = v45 + 1;
                *(_QWORD *)&v44[8 * v45 + 16] = 1;
                v46 = *v42;
                if ( !*v42 )
                {
                  v74 = v42[1];
                  v75 = *((_DWORD *)v74 + 3744);
                  if ( v75 )
                  {
                    v76 = (unsigned int)(v75 - 1);
                    *((_DWORD *)v74 + 3744) = v76;
                    v46 = *(unsigned __int8 **)&v74[8 * v76 + 14848];
                    v77 = *((unsigned int *)v46 + 134);
                    *v46 = 0;
                    v78 = *((_QWORD *)v46 + 66);
                    *((_DWORD *)v46 + 106) = 0;
                    v79 = v78 + (v77 << 6);
                    if ( v78 != v79 )
                    {
                      v99 = v40;
                      v80 = v42;
                      v103 = v4;
                      v81 = v79;
                      v105 = v22;
                      v82 = v46;
                      do
                      {
                        while ( 1 )
                        {
                          v81 -= 64;
                          v83 = *(void **)(v81 + 24);
                          if ( v83 == (void *)(v81 + 40) )
                            break;
                          operator delete(v83);
                          if ( v78 == v81 )
                            goto LABEL_154;
                        }
                      }
                      while ( v78 != v81 );
LABEL_154:
                      v46 = v82;
                      v42 = v80;
                      v40 = v99;
                      v4 = v103;
                      v22 = v105;
                    }
                    *((_DWORD *)v46 + 134) = 0;
                  }
                  else
                  {
                    v102 = v42;
                    v46 = (unsigned __int8 *)operator new(0x3A0u);
                    *v46 = 0;
                    *((_QWORD *)v46 + 12) = v46 + 112;
                    *((_QWORD *)v46 + 16) = v46 + 144;
                    *((_QWORD *)v46 + 20) = v46 + 176;
                    *((_QWORD *)v46 + 24) = v46 + 208;
                    *((_QWORD *)v46 + 28) = v46 + 240;
                    *((_QWORD *)v46 + 32) = v46 + 272;
                    *((_QWORD *)v46 + 36) = v46 + 304;
                    *((_QWORD *)v46 + 40) = v46 + 336;
                    *((_QWORD *)v46 + 44) = v46 + 368;
                    *((_QWORD *)v46 + 48) = v46 + 400;
                    *((_QWORD *)v46 + 52) = v46 + 432;
                    *((_QWORD *)v46 + 13) = 0;
                    v46[112] = 0;
                    *((_QWORD *)v46 + 17) = 0;
                    v46[144] = 0;
                    *((_QWORD *)v46 + 21) = 0;
                    v46[176] = 0;
                    *((_QWORD *)v46 + 25) = 0;
                    v46[208] = 0;
                    *((_QWORD *)v46 + 29) = 0;
                    v46[240] = 0;
                    *((_QWORD *)v46 + 33) = 0;
                    v46[272] = 0;
                    *((_QWORD *)v46 + 37) = 0;
                    v46[304] = 0;
                    *((_QWORD *)v46 + 41) = 0;
                    v46[336] = 0;
                    *((_QWORD *)v46 + 45) = 0;
                    v46[368] = 0;
                    *((_QWORD *)v46 + 49) = 0;
                    v46[400] = 0;
                    *((_QWORD *)v46 + 53) = 0x800000000LL;
                    v42 = v102;
                    *((_QWORD *)v46 + 66) = v46 + 544;
                    *((_QWORD *)v46 + 67) = 0x600000000LL;
                  }
                  *v42 = v46;
                }
                v46[*v46 + 1] = 10;
                v47 = *v42;
                v48 = *v47;
                *v47 = v48 + 1;
                *(_QWORD *)&v47[8 * v48 + 16] = v40;
              }
              v49 = *(unsigned int *)(v37 + 24);
              v8 = 0;
              sub_E10070(a1, v49, 2486);
              goto LABEL_43;
            }
          }
        }
      }
      v37 = *(_QWORD *)(v35 + 32);
      goto LABEL_55;
    }
    return 1;
  }
  v53 = *(_DWORD *)(a3 + 24);
  if ( v53 == 1 )
  {
    v55 = *(_QWORD *)(a3 + 32);
  }
  else if ( v53 )
  {
    if ( v53 == 2 || v53 == 3 )
      BUG();
    v55 = *(_QWORD *)(*(_QWORD *)(a3 + 32) + 32LL);
  }
  else
  {
    v54 = *(_QWORD *)(a3 + 32);
    if ( v54 )
    {
      v55 = *(_QWORD *)(v54 + 32);
      v56 = *(unsigned int *)(v4 + 40);
      if ( *(_DWORD *)(v55 + 24) != (_DWORD)v56 && (_DWORD)v56 )
        v55 = *(_QWORD *)(v54 + v56 + 32);
    }
    else
    {
      v55 = 64;
    }
  }
  v57 = *(_QWORD *)(v55 + 40);
  v98 = v57;
  if ( v57 )
    v98 = *(_QWORD *)(v57 + 32);
  if ( !v5 )
    return 1;
  v58 = 0;
  v8 = 1;
  if ( v53 == 1 )
    goto LABEL_106;
LABEL_83:
  if ( v53 == 2 )
  {
    v73 = *(_QWORD *)(v4 + 32);
    v108 = v58;
    v109 = 0;
    v110 = 2;
    v111 = v73;
    sub_DFF4A0(v107, &v108);
    goto LABEL_104;
  }
  v59 = *(unsigned int *)(v4 + 40);
  if ( (_DWORD)v59 == -1 )
  {
    if ( v53 == 3 )
LABEL_194:
      BUG();
    sub_DFF4E0(&v108, *(_QWORD *)(v4 + 32), v59, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 32LL) + 20LL));
  }
  else
  {
    if ( v53 )
    {
      if ( v53 == 3 )
LABEL_195:
        BUG();
      v60 = *(_QWORD *)(v4 + 32);
      v61 = (unsigned int)v59;
      v62 = *(_QWORD *)(v60 + 32);
      v63 = v58 * *(unsigned int *)(v62 + 16);
    }
    else
    {
      v60 = *(_QWORD *)(v4 + 32);
      v62 = *(_QWORD *)(v60 + 32);
      if ( *(_DWORD *)(v62 + 24) == (_DWORD)v59 || !(_DWORD)v59 )
      {
        v61 = (unsigned int)v59;
        v63 = v58 * *(unsigned int *)(v62 + 16);
      }
      else
      {
        v61 = (unsigned int)v59;
        v63 = v58 * *(unsigned int *)(*(_QWORD *)(v60 + (unsigned int)v59 + 32) + 16LL);
      }
      if ( *(_DWORD *)(v62 + 24) != (_DWORD)v59 && (_DWORD)v59 )
        v62 = *(_QWORD *)(v60 + v61 + 32);
    }
    v64 = v63 + 32;
    if ( *(_QWORD *)(v62 + 40) )
      v64 = v63 + 16;
    sub_DFF4E0(&v108, v60, v59, v61 + v64);
  }
  if ( !v110 && v111 )
  {
    v65 = *(_DWORD **)(v111 + 32);
    v66 = v65;
    v67 = v65[6] == (_DWORD)v112 || (_DWORD)v112 == 0;
    if ( !v67 )
      v66 = *(_DWORD **)(v111 + (unsigned int)v112 + 32);
    if ( v66[5] != -1 )
    {
      v68 = v108;
      if ( (_DWORD)v112 == -1 )
      {
        if ( v108 )
          v68 = 0xFFFFFFFFLL;
        sub_DFF4E0(v107, v111, 16, v68);
        goto LABEL_104;
      }
      v69 = *(_QWORD *)(v111 + 32);
      if ( !v67 )
        v69 = *(_QWORD *)(v111 + (unsigned int)v112 + 32);
      if ( *(_DWORD *)(v69 + 20) == -1 )
      {
        if ( v108 == (unsigned int)v112 )
          goto LABEL_107;
        goto LABEL_101;
      }
      if ( (unsigned int)v65[7] >= v108 )
      {
        if ( v67 )
        {
          v94 = v65[5];
          if ( (unsigned int)v112 == v108 )
          {
LABEL_166:
            if ( (_DWORD)v108 - (_DWORD)v112 != v94 || !v94 )
              goto LABEL_107;
            goto LABEL_168;
          }
        }
        else
        {
          v94 = *(_DWORD *)(*(_QWORD *)(v111 + (unsigned int)v112 + 32) + 20LL);
          if ( (unsigned int)v112 == v108 )
            goto LABEL_166;
        }
        if ( (_DWORD)v108 - (_DWORD)v112 - (*((_QWORD *)v66 + 5) == 0 ? 32 : 16) != v94 || !v94 )
        {
LABEL_101:
          if ( *((_QWORD *)v66 + 5) || !*((_BYTE *)v66 + 60) )
          {
            sub_DFF4E0(v107, v111, (unsigned int)v108, v108);
            goto LABEL_104;
          }
          goto LABEL_107;
        }
      }
LABEL_168:
      sub_DFF4E0(v107, v111, (unsigned int)v112, 0xFFFFFFFFLL);
      goto LABEL_104;
    }
  }
LABEL_107:
  while ( 1 )
  {
    sub_DFF4A0(v107, &v108);
LABEL_104:
    ++v58;
    sub_DFF560(&v108);
    v8 &= sub_D86A70(a1, a2, (__int64)v107, v98);
    sub_DFF560(v107);
    if ( (_QWORD *)v58 == v5 )
      return v8;
    v53 = *(_DWORD *)(v4 + 24);
    if ( v53 != 1 )
      goto LABEL_83;
LABEL_106:
    v70 = *(_QWORD *)(v4 + 40);
    v71 = *(_QWORD *)(v4 + 32);
    v108 = v58;
    v110 = 1;
    v112 = v70;
    v111 = v71;
    v109 = 0;
  }
}

