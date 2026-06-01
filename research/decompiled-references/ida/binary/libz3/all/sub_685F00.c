__int64 __fastcall sub_685F00(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned int v15; // edx
  _DWORD *v16; // r15
  __int64 v17; // rcx
  unsigned int v18; // r13d
  unsigned int v19; // eax
  unsigned int v20; // ebx
  unsigned int **v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rax
  _DWORD *v24; // rdx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // edx
  __int64 v31; // r15
  __int64 v32; // rax
  int v34; // eax
  __int64 v35; // r10
  __int64 v36; // r13
  int v37; // r15d
  __int64 v38; // rax
  unsigned int v39; // edx
  __int64 v40; // r14
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rsi
  __int64 v44; // r8
  unsigned int v45; // eax
  unsigned int v46; // edx
  __int64 v47; // rcx
  __int64 *v48; // r14
  __int64 v49; // rdx
  __int64 v50; // r15
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r13
  unsigned int v54; // eax
  int v55; // eax
  __int64 v56; // r14
  __int64 v57; // rdi
  unsigned int v58; // r13d
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // r15
  unsigned int v63; // esi
  __int64 v64; // rax
  __int64 *v65; // r15
  __int64 v66; // rdi
  __int64 v67; // rsi
  int v68; // eax
  __int64 v69; // rdi
  __int64 v70; // rax
  __int64 v71; // r15
  __int64 v72; // rdi
  __int64 *v73; // r13
  __int64 v74; // rsi
  __int64 v75; // rax
  int v76; // eax
  __int64 v77; // rsi
  __int64 v78; // rdi
  __int64 v79; // r13
  unsigned int *v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdi
  __int64 v83; // rdi
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rsi
  __int64 v87; // rdi
  __int64 v88; // [rsp+10h] [rbp-C0h]
  __int64 v89; // [rsp+18h] [rbp-B8h]
  __int64 v90; // [rsp+20h] [rbp-B0h]
  __int64 v91; // [rsp+20h] [rbp-B0h]
  __int64 v92; // [rsp+28h] [rbp-A8h]
  __int64 v93; // [rsp+28h] [rbp-A8h]
  _QWORD *v94; // [rsp+38h] [rbp-98h]
  __int64 v95; // [rsp+40h] [rbp-90h]
  unsigned int v96; // [rsp+48h] [rbp-88h]
  __int64 v97; // [rsp+48h] [rbp-88h]
  __int64 v98; // [rsp+48h] [rbp-88h]
  __int64 v99; // [rsp+48h] [rbp-88h]
  __int64 v100; // [rsp+48h] [rbp-88h]
  __int64 v101; // [rsp+50h] [rbp-80h]
  int v102[2]; // [rsp+50h] [rbp-80h]
  unsigned int *v103; // [rsp+50h] [rbp-80h]
  __int64 v104; // [rsp+50h] [rbp-80h]
  _DWORD *v106; // [rsp+68h] [rbp-68h] BYREF
  _DWORD *v107; // [rsp+70h] [rbp-60h] BYREF
  __int64 v108; // [rsp+78h] [rbp-58h]
  _DWORD *v109; // [rsp+80h] [rbp-50h] BYREF
  __int64 v110; // [rsp+88h] [rbp-48h]
  __int64 v111; // [rsp+90h] [rbp-40h] BYREF
  unsigned int *v112; // [rsp+98h] [rbp-38h] BYREF

  v3 = *(unsigned int **)(a2 + 32);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
  v5 = sub_67B850(*(__int64 **)(a1 + 16), (unsigned int *)a2);
  sub_1374250(&v107, v4, v5);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
  v7 = sub_67B850(*(__int64 **)(a1 + 16), v3);
  sub_1374250(&v109, v6, v7);
  v8 = sub_15D1F10(a2);
  v94 = (_QWORD *)sub_678D40((const __m128i *)a1, (__int64)v107, v8);
  v9 = sub_15D1F10(v3);
  v101 = sub_678D40((const __m128i *)a1, (__int64)v109, v9);
  if ( v109 == v107 )
  {
    sub_675460((__int64)v109, v110);
    return sub_675460((__int64)v107, v108);
  }
  sub_2FCDE0((__int64 *)(a1 + 80));
  v10 = 0;
  if ( *(_DWORD *)(a2 + 24) > 1u )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
      v12 = sub_67B850(*(__int64 **)(a1 + 16), *(unsigned int **)(a2 + 8LL * v10 + 32));
      sub_1374250(&v111, v11, v12);
      v13 = *(_QWORD *)(a1 + 88);
      v14 = v111;
      if ( !v13 || (v15 = *(_DWORD *)(v13 - 4), v15 == *(_DWORD *)(v13 - 8)) )
      {
        sub_23A6F0((unsigned int **)(a1 + 88));
        v13 = *(_QWORD *)(a1 + 88);
        v15 = *(_DWORD *)(v13 - 4);
      }
      *(_QWORD *)(v13 + 8LL * v15) = v14;
      *(_DWORD *)(v13 - 4) = v15 + 1;
      if ( v10 + 2 >= *(_DWORD *)(a2 + 24) )
        break;
      ++v10;
    }
  }
  v16 = v107;
  v17 = *(_QWORD *)(a1 + 160);
  v18 = *v107;
  if ( !v17 )
  {
    v20 = v18 + 1;
    if ( v18 == -1 )
      goto LABEL_18;
    v96 = 0;
    v21 = (unsigned int **)(a1 + 160);
    goto LABEL_14;
  }
  v19 = *(_DWORD *)(v17 - 4);
  v96 = v19;
  if ( v18 >= v19 )
  {
    v20 = v18 + 1;
    v21 = (unsigned int **)(a1 + 160);
    if ( v19 >= v18 + 1 )
    {
      *(_DWORD *)(v17 - 4) = v20;
      goto LABEL_18;
    }
LABEL_14:
    while ( !v17 || *(_DWORD *)(v17 - 8) < v20 )
    {
      sub_2FD3F0(v21);
      v17 = *(_QWORD *)(a1 + 160);
    }
    *(_DWORD *)(v17 - 4) = v20;
    v22 = 4LL * v20;
    v23 = 4LL * v96;
    if ( v23 != v22 )
    {
      v97 = v17;
      memset((void *)(v17 + v23), 0, v22 - v23);
      v17 = v97;
    }
  }
LABEL_18:
  v24 = (_DWORD *)(v17 + 4LL * v18);
  if ( !(*v24)++ )
  {
    ++v16[2];
    v106 = v16;
    sub_675F80((_QWORD *)(a1 + 56), &v106);
  }
  v26 = *(_QWORD *)(v101 + 16);
  v27 = v26 + 40LL * *(unsigned int *)(v101 + 24);
  v95 = v27;
  if ( v26 != v27 )
  {
    while ( *(_DWORD *)(v26 + 4) != 2 )
    {
      v26 += 40;
      if ( v27 == v26 )
        goto LABEL_34;
    }
    if ( v27 != v26 )
    {
      do
      {
        v28 = *(_QWORD *)(a1 + 24);
        v29 = *(_QWORD *)(v28 + 24);
        if ( v29 )
          v30 = *(_DWORD *)(v29 - 4);
        else
          v30 = 0;
        if ( v30 >= *(_DWORD *)(v28 + 32) )
          break;
        v31 = sub_15D1F10(a2);
        if ( v31 != sub_15D1F10(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 32LL)) )
          goto LABEL_29;
        v98 = v26 + 8;
        v34 = sub_675480(
                (_QWORD *)(*(_QWORD *)(*v94 + 40LL) + 8LL * *(unsigned int *)(v26 + 32)),
                *(unsigned int *)(*(_QWORD *)(v26 + 16) + 24LL));
        v36 = *(_QWORD *)(v35 + 16);
        v37 = v34;
        v38 = *(unsigned int *)(v35 + 24);
        v39 = v38 - 1;
        v38 *= 40;
        v40 = v36 + v38;
        v41 = 40LL * (v37 & v39);
        *(_QWORD *)v102 = v36 + v41;
        if ( v41 != v38 )
        {
          v36 += v41;
          v92 = v35 + 8;
          while ( 1 )
          {
            v42 = *(_DWORD *)(v36 + 4);
            if ( v42 == 2 )
            {
              if ( *(_DWORD *)v36 == v37 && (unsigned __int8)sub_675CE0(v92, v36 + 8, v98) )
              {
LABEL_42:
                v43 = *(_QWORD *)(a1 + 40);
                if ( *(_QWORD *)(v43
                               + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(v26 + 16) + 24LL) + *(_DWORD *)(v26 + 32))) != *(_QWORD *)(v43 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(v36 + 16) + 24LL) + *(_DWORD *)(v36 + 32))) )
                {
                  v44 = *(_QWORD *)(a1 + 88);
                  if ( v44 )
                    v45 = *(_DWORD *)(v44 - 4);
                  else
                    v45 = 0;
                  while ( 1 )
                  {
                    v46 = v45--;
                    if ( v46 <= 1 )
                      break;
                    if ( *(_QWORD *)(v44 + 8LL * v45) != *(_QWORD *)(v43 + 8LL * (*(_DWORD *)(v26 + 32) + v45)) )
                      goto LABEL_47;
                  }
                }
                goto LABEL_29;
              }
            }
            else if ( !v42 )
            {
              goto LABEL_47;
            }
            v36 += 40;
            if ( v40 == v36 )
            {
              v36 = v94[2];
              break;
            }
          }
        }
        while ( *(_QWORD *)v102 != v36 )
        {
          v55 = *(_DWORD *)(v36 + 4);
          if ( v55 == 2 )
          {
            if ( *(_DWORD *)v36 == v37 && (unsigned __int8)sub_675CE0((__int64)(v94 + 1), v36 + 8, v98) )
              goto LABEL_42;
          }
          else if ( !v55 )
          {
            break;
          }
          v36 += 40;
        }
LABEL_47:
        v90 = *(_QWORD *)(a2 + 32);
        sub_2FCDE0((__int64 *)(a1 + 64));
        v47 = *(_QWORD *)(v26 + 16);
        v48 = (__int64 *)(v47 + 32);
        v99 = v47;
        v49 = *(unsigned int *)(v47 + 24);
        v50 = v47 + 32 + 8 * v49;
        if ( 8 * v49 )
        {
          v51 = *(_QWORD *)(v47 + 32);
          v52 = *(_QWORD *)(a1 + 72);
          v53 = v51;
          if ( v51 )
            ++*(_DWORD *)(v51 + 8);
          if ( !v52 )
          {
LABEL_51:
            sub_23A6F0((unsigned int **)(a1 + 72));
            v52 = *(_QWORD *)(a1 + 72);
            v54 = *(_DWORD *)(v52 - 4);
            goto LABEL_52;
          }
          while ( 1 )
          {
            v54 = *(_DWORD *)(v52 - 4);
            if ( v54 == *(_DWORD *)(v52 - 8) )
              goto LABEL_51;
LABEL_52:
            ++v48;
            *(_QWORD *)(v52 + 8LL * v54) = v53;
            *(_DWORD *)(v52 - 4) = v54 + 1;
            if ( (__int64 *)v50 == v48 )
              break;
            v53 = *v48;
            if ( *v48 )
              ++*(_DWORD *)(*v48 + 8);
          }
          v99 = *(_QWORD *)(v26 + 16);
          LODWORD(v49) = *(_DWORD *)(v99 + 24);
        }
        v56 = *(_QWORD *)(a1 + 8);
        if ( (unsigned int)v49 <= 1 )
        {
          v103 = nullptr;
          v60 = 0;
        }
        else
        {
          v57 = *(_QWORD *)(a1 + 8);
          v103 = nullptr;
          v58 = 1;
          while ( 1 )
          {
            v61 = sub_15E1B70(v57);
            v62 = v61;
            if ( v61 )
              ++*(_DWORD *)(v61 + 8);
            if ( !v103 || (v63 = *(v103 - 1), v63 == *(v103 - 2)) )
            {
              v111 = v56;
              v112 = v103;
              sub_23A6F0(&v112);
              v56 = v111;
              v103 = v112;
              v63 = *(v112 - 1);
            }
            v59 = v63;
            v60 = v63 + 1;
            ++v58;
            *(_QWORD *)&v103[2 * v59] = v62;
            *(v103 - 1) = v60;
            if ( v58 >= *(_DWORD *)(v99 + 24) )
              break;
            v57 = *(_QWORD *)(a1 + 8);
          }
        }
        v64 = sub_15EC1C0(v56, v60);
        v93 = v64;
        if ( v64 )
          ++*(_DWORD *)(v64 + 8);
        v111 = v56;
        v112 = v103;
        sub_2334C0(&v111);
        v65 = *(__int64 **)(a1 + 72);
        v66 = *(_QWORD *)(a1 + 64);
        v67 = *v65;
        ++*(_DWORD *)(a2 + 8);
        if ( v67 )
        {
          v68 = *(_DWORD *)(v67 + 8);
          *(_DWORD *)(v67 + 8) = v68 - 1;
          if ( v68 == 1 )
          {
            sub_15D7BC0(v66, v67);
            v85 = *(_QWORD *)(a1 + 72);
            v86 = *(_QWORD *)(a1 + 8);
            *v65 = a2;
            LODWORD(v65) = 0;
            v69 = *(_QWORD *)(a1 + 152);
            v89 = v86;
            if ( v85 )
              LODWORD(v65) = v85;
          }
          else
          {
            v89 = *(_QWORD *)(a1 + 8);
            *v65 = a2;
            v69 = *(_QWORD *)(a1 + 152);
          }
        }
        else
        {
          v84 = *(_QWORD *)(a1 + 8);
          v69 = *(_QWORD *)(a1 + 152);
          *v65 = a2;
          v89 = v84;
        }
        v70 = sub_15DCAD0(v69, (int)v65, 0);
        v71 = v70;
        if ( v70 )
          ++*(_DWORD *)(v70 + 8);
        v72 = *(_QWORD *)(a1 + 64);
        v73 = *(__int64 **)(a1 + 72);
        if ( v90 )
          ++*(_DWORD *)(v90 + 8);
        v74 = *v73;
        LODWORD(v75) = (_DWORD)v73;
        if ( *v73 )
        {
          v76 = *(_DWORD *)(v74 + 8);
          *(_DWORD *)(v74 + 8) = v76 - 1;
          if ( v76 == 1 )
          {
            sub_15D7BC0(v72, v74);
            v75 = *(_QWORD *)(a1 + 72);
            v87 = *(_QWORD *)(a1 + 8);
            *v73 = v90;
            v88 = v87;
            v78 = *(_QWORD *)(a1 + 152);
          }
          else
          {
            v77 = *(_QWORD *)(a1 + 8);
            LODWORD(v75) = (_DWORD)v73;
            *v73 = v90;
            v78 = *(_QWORD *)(a1 + 152);
            v88 = v77;
          }
        }
        else
        {
          v83 = *(_QWORD *)(a1 + 8);
          *v73 = v90;
          v88 = v83;
          v78 = *(_QWORD *)(a1 + 152);
        }
        v79 = sub_15DCAD0(v78, v75, 0);
        if ( v79 )
          ++*(_DWORD *)(v79 + 8);
        v104 = *(_QWORD *)(a1 + 8);
        sub_15E1B70(v104);
        v80 = (unsigned int *)sub_15E1B70(v104);
        v100 = (__int64)v80;
        if ( v80 )
          ++v80[2];
        v91 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
        v81 = sub_67B850(*(__int64 **)(a1 + 16), v80);
        if ( !(unsigned __int8)sub_1374270(v91, v81) )
        {
          v82 = *(_QWORD *)(a1 + 24);
          v106 = (_DWORD *)v100;
          if ( v100 )
            ++*(_DWORD *)(v100 + 8);
          sub_6761A0((unsigned int **)(v82 + 24), &v106);
        }
        sub_675460(v100, v104);
        sub_675460(v79, v88);
        sub_675460(v71, v89);
        sub_675460(v93, v56);
LABEL_29:
        v32 = v26 + 40;
        if ( v95 == v26 + 40 )
          break;
        while ( 1 )
        {
          v26 = v32;
          if ( *(_DWORD *)(v32 + 4) == 2 )
            break;
          v32 += 40;
          if ( v95 == v32 )
            goto LABEL_34;
        }
      }
      while ( v95 != v32 );
    }
  }
LABEL_34:
  sub_675460((__int64)v109, v110);
  return sub_675460((__int64)v107, v108);
}

