__int64 __fastcall sub_1C4D120(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        double a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11)
{
  __int64 result; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // rbx
  __int64 v14; // r12
  unsigned __int64 v16; // rbp
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // r15
  unsigned int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // r15
  unsigned int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rbx
  __int64 v28; // r15
  __int64 v29; // r10
  unsigned int *v30; // r10
  __int64 v31; // r11
  unsigned int *v32; // r10
  __int64 v33; // rbp
  __int64 v34; // r15
  __int64 *v35; // r12
  unsigned int v36; // ebx
  unsigned __int64 v37; // rdi
  unsigned int v38; // eax
  __int64 v39; // r13
  unsigned __int8 v40; // al
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // r15
  unsigned int v45; // eax
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rax
  char *v51; // rbx
  __int64 v52; // rax
  void *v53; // rdi
  unsigned __int64 v54; // rax
  __int64 v55; // r15
  unsigned __int64 v56; // rax
  __int64 v57; // rax
  unsigned int *v58; // rax
  unsigned __int64 v59; // r12
  char *v60; // rbp
  char *v61; // rbx
  unsigned int v62; // edx
  unsigned int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  _QWORD *v69; // rax
  char *v70; // rbx
  __int64 v71; // rax
  unsigned int v72; // [rsp+14h] [rbp-254h]
  unsigned __int64 v75; // [rsp+20h] [rbp-248h]
  char *v76; // [rsp+20h] [rbp-248h]
  char *v77; // [rsp+20h] [rbp-248h]
  __int64 v78; // [rsp+28h] [rbp-240h]
  __int64 v80; // [rsp+40h] [rbp-228h]
  __int64 v81; // [rsp+40h] [rbp-228h]
  __int64 v82; // [rsp+40h] [rbp-228h]
  unsigned __int64 v83; // [rsp+48h] [rbp-220h]
  unsigned __int8 *v84; // [rsp+50h] [rbp-218h] BYREF
  unsigned __int64 v85; // [rsp+58h] [rbp-210h]
  _QWORD v86[2]; // [rsp+70h] [rbp-1F8h] BYREF
  char v87; // [rsp+80h] [rbp-1E8h]
  _QWORD v88[2]; // [rsp+90h] [rbp-1D8h] BYREF
  char v89; // [rsp+A0h] [rbp-1C8h]
  _QWORD v90[3]; // [rsp+B0h] [rbp-1B8h] BYREF
  char v91; // [rsp+C8h] [rbp-1A0h]
  void *ptr; // [rsp+D0h] [rbp-198h] BYREF
  __int64 v93; // [rsp+D8h] [rbp-190h]
  _BYTE v94[80]; // [rsp+E0h] [rbp-188h] BYREF
  __int64 v95[2]; // [rsp+130h] [rbp-138h] BYREF
  unsigned int v96; // [rsp+140h] [rbp-128h]
  void *v97; // [rsp+148h] [rbp-120h]
  __int64 v98; // [rsp+150h] [rbp-118h]
  _BYTE v99[72]; // [rsp+158h] [rbp-110h] BYREF
  unsigned __int64 v100; // [rsp+1A0h] [rbp-C8h] BYREF
  __int64 *v101; // [rsp+1A8h] [rbp-C0h]
  __int64 v102; // [rsp+1B0h] [rbp-B8h]
  unsigned __int8 *v103; // [rsp+1C0h] [rbp-A8h] BYREF
  char v104; // [rsp+218h] [rbp-50h]
  unsigned int v105; // [rsp+220h] [rbp-48h]
  char v106; // [rsp+224h] [rbp-44h]

  result = 1;
  v12 = a11;
  if ( a10 )
    return result;
  v13 = a5;
  v14 = a4;
  v72 = a2;
  v17 = (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0;
  v16 = a9 & 0xFFFFFFFFFFFFFFFELL;
  LOBYTE(v17) = (a4 == 0) | v17;
  if ( (_BYTE)v17 )
    goto LABEL_3;
  if ( (*(_WORD *)a4 & 0x1FF) != 0xF5 )
    goto LABEL_39;
  v29 = *(_QWORD *)(a4 + 8);
  if ( (v29 & 1) != 0 )
  {
    v30 = (unsigned int *)(v29 & 0xFFFFFFFFFFFFFFFELL);
    v31 = (__int64)&v30[2 * *v30 + 2];
    v32 = v30 + 2;
    goto LABEL_23;
  }
  if ( !v29 )
  {
LABEL_39:
    if ( !v16 )
      goto LABEL_41;
    goto LABEL_40;
  }
  v31 = a4 + 16;
  v32 = (unsigned int *)(a4 + 8);
LABEL_23:
  if ( v32 == (unsigned int *)v31 )
    goto LABEL_39;
  v33 = v31;
  v78 = a4;
  v34 = 0;
  v35 = (__int64 *)v32;
  v36 = v17;
  do
  {
    v39 = *v35;
    v40 = *(_BYTE *)(*v35 + 28) & 0x7F;
    a4 = v40;
    a2 = (unsigned int)v40 - 40;
    if ( (unsigned int)a2 <= 6 )
    {
      LOBYTE(v17) = v40 != 40;
      v36 = v17;
      LOBYTE(v36) = (v40 != 46) & v17;
      if ( !(_BYTE)v36 )
      {
        v37 = *(_QWORD *)(v39 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v39 + 16) & 4) != 0 )
          v37 = *(_QWORD *)(v37 + 8);
        v36 = 1;
        if ( v37 )
        {
          a4 = *(_BYTE *)(sub_B8EAA0(v37) + 8) & 0x7F;
          if ( (unsigned __int8)a4 > 0x12u )
          {
            a4 = ((_BYTE)a4 + 94) & 0x7F;
            if ( (unsigned __int8)a4 > 5u )
              goto LABEL_33;
          }
          else if ( ((1LL << a4) & 0x40182) == 0 )
          {
            goto LABEL_33;
          }
          LOBYTE(v38) = sub_9B48E0(v39);
          v36 = v38;
          if ( !(_BYTE)v38 )
          {
            a2 = a1 + 8;
            sub_168B9F0(
              (__int64)&v100,
              (__int64 *)(a1 + 8),
              *(_DWORD *)(v39 + 24),
              (**(_BYTE **)(a1 + 232) & 8) == 0 ? 5509 : 6640,
              0);
            v36 = 1;
            sub_15F7200(&v100);
          }
        }
      }
    }
    else if ( !v34 && v40 != 9 )
    {
      v34 = *v35;
    }
LABEL_33:
    ++v35;
  }
  while ( (__int64 *)v33 != v35 );
  v17 = v36;
  v16 = a9 & 0xFFFFFFFFFFFFFFFELL;
  v14 = v78;
  v12 = a11;
  v13 = a5;
  if ( v34 && (_BYTE)v17 != 1 )
  {
    a2 = a1 + 8;
    sub_168B9F0(
      (__int64)&v100,
      (__int64 *)(a1 + 8),
      *(_DWORD *)(v34 + 24),
      (**(_BYTE **)(a1 + 232) & 8) == 0 ? 5510 : 6641,
      0);
    sub_15F7200(&v100);
  }
LABEL_3:
  if ( !v16 )
  {
LABEL_41:
    if ( v13 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
      {
        a2 = v13;
        sub_1C39B10((__int64 *)a1, v13);
      }
LABEL_6:
      if ( a8 )
        goto LABEL_7;
    }
    else if ( a8 )
    {
      goto LABEL_14;
    }
    if ( v16 )
      goto LABEL_53;
    goto LABEL_7;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
  {
LABEL_40:
    a2 = v16;
    sub_1C39B10((__int64 *)a1, v16);
    goto LABEL_41;
  }
  if ( v13 )
    goto LABEL_6;
  if ( !a8 )
  {
LABEL_53:
    v44 = *(_QWORD *)(a1 + 264);
    v45 = sub_EEB7E0(v16, a2, a7);
    a2 = 7557;
    if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v44 + 32), 0x1D85u, v45, v44, v46, v47) != 1 )
    {
      sub_168B9B0((__int64)&v84, a1 + 8, 7557);
      v97 = v99;
      v98 = 0x800000000LL;
      ptr = v94;
      v93 = 0xA00000000LL;
      v48 = *(_QWORD *)(a1 + 248);
      v90[2] = &ptr;
      v95[0] = 0;
      v95[1] = 0;
      v96 = 0;
      v90[0] = v48;
      v90[1] = v95;
      v91 = 1;
      sub_1C4C820((__int64)v90, v16, a7);
      if ( !v91 )
        goto LABEL_64;
      if ( !(_DWORD)v98 )
        goto LABEL_64;
      v49 = *(_QWORD *)v97;
      v50 = *(_QWORD *)(*(_QWORD *)v97 + 48LL);
      if ( (v50 & 4) != 0 || (byte_8[v50 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0 )
        goto LABEL_64;
      v76 = (char *)v97 + 8 * (unsigned int)v98;
      v80 = v13;
      v51 = (char *)v97 + 8;
      while ( 1 )
      {
        if ( !sub_9B48E0(v49) )
        {
LABEL_63:
          v13 = v80;
          goto LABEL_64;
        }
        if ( v76 == v51 )
          break;
        v49 = *(_QWORD *)v51;
        v52 = *(_QWORD *)(*(_QWORD *)v51 + 48LL);
        if ( (v52 & 4) == 0 )
        {
          v51 += 8;
          if ( (byte_8[v52 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
            continue;
        }
        goto LABEL_63;
      }
      v56 = *(_QWORD *)(a1 + 248);
      v101 = v95;
      v13 = v80;
      LOBYTE(v102) = 0;
      v100 = v56;
      sub_1C33A70((__int64)&v100, v16);
      if ( (_BYTE)v102 )
        goto LABEL_64;
      v57 = *(_QWORD *)(a1 + 248);
      v88[1] = v95;
      v89 = 0;
      v88[0] = v57;
      if ( v80 )
      {
        sub_1C33A70((__int64)v88, v80);
        if ( !v89 )
        {
          v57 = *(_QWORD *)(a1 + 248);
          goto LABEL_86;
        }
LABEL_64:
        v53 = ptr;
        if ( ptr != v94 )
LABEL_65:
          free(v53);
      }
      else
      {
LABEL_86:
        v86[0] = v57;
        v86[1] = v95;
        v87 = 0;
        if ( v12 )
        {
          sub_1C33A70((__int64)v86, v12);
          if ( v87 )
            goto LABEL_64;
        }
        if ( (unsigned int)v98 <= 4uLL )
        {
          sub_AE9DF0(&v84, (unsigned int)v98, 3u);
          v70 = (char *)v97;
          v77 = (char *)v97 + 8 * (unsigned int)v98;
          while ( v77 != v70 )
          {
            v71 = *(_QWORD *)v70;
            v70 += 8;
            sub_AE9DF0(&v84, *(_QWORD *)(v71 + 40), 9u);
          }
          v13 = v80;
        }
        else
        {
          sub_1C2FE50(&v84, 0);
        }
        v58 = (unsigned int *)ptr;
        if ( ptr != (char *)ptr + 8 * (unsigned int)v93 )
        {
          v81 = v14;
          v59 = v16;
          v60 = (char *)ptr + 8 * (unsigned int)v93;
          v83 = v13;
          v61 = (char *)ptr;
          do
          {
            v62 = *(_DWORD *)v61;
            v63 = *((_DWORD *)v61 + 1);
            v61 += 8;
            LOBYTE(v101) = 1;
            v100 = __PAIR64__(v63, v62);
            sub_AEC610((__int64 *)&v84, (__int64 *)&v100);
          }
          while ( v60 != v61 );
          v16 = v59;
          v14 = v81;
          v13 = v83;
          v58 = (unsigned int *)ptr;
        }
        sub_168CDE0((__int64)&v100, (__int64 *)(a1 + 8), *v58, (__int64)&v84, 0);
        sub_15F7200(&v100);
        v53 = ptr;
        if ( ptr != v94 )
          goto LABEL_65;
      }
      if ( v97 != v99 )
        free(v97);
      operator delete(v95[0], 8LL * v96, 8);
      a2 = (__int64)v84;
      if ( v84 && v85 )
        sub_1580C40(v85, (unsigned __int64)v84);
    }
LABEL_7:
    if ( v12 )
    {
      if ( v13 )
      {
        if ( (*(_WORD *)v12 & 0x1FF) == 0xF9 )
        {
          v18 = *(_DWORD *)(v12 + 4);
          if ( v18 )
          {
            v19 = *(_QWORD *)(v12 + 8LL * (unsigned int)(v18 - 1) + 16);
            if ( v19 )
            {
              v75 = *(_QWORD *)(a1 + 264);
              v20 = sub_EEB7E0(v13, a2, a7);
              a2 = 7322;
              if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v75 + 32), 0x1C9Au, v20, v75, v21, v22) != 1 )
              {
                a2 = (__int64)v86;
                if ( sub_1C2FD00(v13, v86, v90) )
                {
                  a2 = (__int64)v88;
                  if ( sub_1C2FD00(v19, v88, &ptr) && LOBYTE(v86[0]) == LOBYTE(v88[0]) )
                  {
                    v17 = v90[0];
                    if ( *(_QWORD *)(v90[0] + 16LL) == *((_QWORD *)ptr + 2) )
                    {
                      v54 = *(_QWORD *)(a1 + 248);
                      a2 = v12;
                      v101 = nullptr;
                      LOBYTE(v102) = 0;
                      v100 = v54;
                      sub_1C302A0((__int64)&v100, v12);
                      if ( !HIDWORD(v101) )
                      {
                        sub_168B9F0((__int64)&v100, (__int64 *)(a1 + 8), *((_DWORD *)ptr + 1), 0x1C9Au, 0);
                        v55 = *((_QWORD *)ptr + 2);
                        if ( v104 )
                        {
                          sub_AE9DF0(&v103, *((_QWORD *)ptr + 2), 0xAu);
                        }
                        else if ( v106 )
                        {
                          v82 = sub_168B9E0(&v100);
                          v68 = v102;
                          if ( v102 )
                            v68 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v102 + 32LL))(v102);
                          v95[0] = v68;
                          v69 = sub_1587BC0(v82, v95, v64, v65, v66, v67);
                          sub_AE9DF0((unsigned __int8 **)(*v69 + 32LL * v105 + 8), v55, 0xAu);
                        }
                        sub_15890D0((__int64)&v100, (unsigned __int8 *)v88);
                        sub_15F7200(&v100);
                        sub_168B9F0((__int64)&v100, (__int64 *)(a1 + 8), *(_DWORD *)(v90[0] + 4LL), 0x17BBu, 0);
                        a2 = (__int64)v86;
                        sub_15890D0((__int64)&v100, (unsigned __int8 *)v86);
                        sub_15F7200(&v100);
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
LABEL_14:
  if ( v16 )
  {
    v23 = *(_QWORD *)(a1 + 264);
    v24 = sub_C00A40(v16, a2, v17, a4, a5);
    if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v23 + 32), 0x1A12u, v24, v23, v25, v26) != 1 )
    {
      v41 = *(_QWORD *)(a1 + 248);
      v101 = (__int64 *)a1;
      v100 = v41;
      sub_1C31860((__int64)&v100, v16);
    }
  }
  v27 = v13 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(_WORD *)v12 & 0x1FF) == 0xEE )
  {
    v42 = *(unsigned int *)(a1 + 40);
    if ( !(_DWORD)v42 )
      BUG();
    v43 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v42 - 8);
    *(_BYTE *)(*(_QWORD *)(v43 + 360) + 8LL * *(unsigned int *)(v43 + 368) - 8) = 1;
  }
  v28 = sub_EEE9A0(56, *(_QWORD **)(a1 + 248), 8u);
  sub_EEF330(v28, *(_QWORD **)(a1 + 248), v14, v16, a8, v27, v12, v72, a3, a6);
  return v28;
}
