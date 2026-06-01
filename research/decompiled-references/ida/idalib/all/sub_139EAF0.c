__int64 __fastcall sub_139EAF0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        unsigned __int64 a8,
        __int64 a9,
        __int64 a10)
{
  const char *v12; // r10
  __int64 v13; // rdx
  __int64 v14; // r13
  unsigned int v16; // ebp
  __int64 v17; // rbx
  int v18; // esi
  __int64 v19; // r9
  unsigned __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rcx
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // r8
  int *v35; // r9
  unsigned __int64 v36; // rcx
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned int *v40; // rbp
  unsigned int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  int *v45; // r9
  __int64 v46; // r13
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rbp
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int *v55; // rax
  char *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rdx
  unsigned int v62; // esi
  __int64 v63; // rdi
  unsigned int v64; // r13d
  unsigned int v65; // ebp
  __int64 *v66; // rax
  __int64 v67; // rcx
  _QWORD *v68; // rbp
  unsigned int v69; // eax
  int v70; // eax
  int v71; // r11d
  __int64 v72; // r13
  __int64 v73; // r10
  unsigned int v74; // ebp
  __int64 v75; // rsi
  __int64 v76; // rax
  unsigned int *v77; // rax
  int v78; // eax
  int v79; // r11d
  unsigned int v80; // r13d
  __int64 v81; // rbp
  int v82; // edi
  __int64 *v83; // rsi
  int v84; // r10d
  __int64 *v85; // rdi
  __int64 v86; // [rsp+10h] [rbp-88h]
  __int64 v87; // [rsp+10h] [rbp-88h]
  __int64 v88; // [rsp+10h] [rbp-88h]
  __int64 v89; // [rsp+10h] [rbp-88h]
  __int64 v90; // [rsp+10h] [rbp-88h]
  __int64 v91; // [rsp+10h] [rbp-88h]
  __int64 v92; // [rsp+10h] [rbp-88h]
  __int64 *v93; // [rsp+10h] [rbp-88h]
  __int64 v95; // [rsp+18h] [rbp-80h]
  __int64 v96; // [rsp+18h] [rbp-80h]
  __int64 v97; // [rsp+18h] [rbp-80h]
  __int64 v98; // [rsp+18h] [rbp-80h]
  int v99; // [rsp+18h] [rbp-80h]
  __int64 v100; // [rsp+20h] [rbp-78h]
  const char *v101; // [rsp+20h] [rbp-78h]
  __int64 v102; // [rsp+20h] [rbp-78h]
  unsigned __int64 v103; // [rsp+20h] [rbp-78h]
  __int64 v104; // [rsp+20h] [rbp-78h]
  __int64 v105; // [rsp+28h] [rbp-70h]
  int v106; // [rsp+3Ch] [rbp-5Ch] BYREF
  __int64 v107; // [rsp+40h] [rbp-58h] BYREF
  __int64 v108; // [rsp+48h] [rbp-50h]
  __int64 v109; // [rsp+50h] [rbp-48h]

  v12 = a4;
  v13 = 0;
  v14 = a6;
  v16 = a5;
  v17 = *(_QWORD *)(a1 + 32);
  v18 = *(_DWORD *)(v17 + 1532);
  *(_DWORD *)(v17 + 1528) = 0;
  if ( !v18 )
  {
    v100 = a2;
    v86 = a3;
    sub_2237220(v17 + 1520, v17 + 1536, 1, 8);
    a2 = v100;
    v12 = a4;
    a3 = v86;
    v13 = 8LL * *(unsigned int *)(v17 + 1528);
  }
  *(_QWORD *)(*(_QWORD *)(v17 + 1520) + v13) = 2;
  v19 = dword_26112C0[a7];
  v20 = *(unsigned int *)(v17 + 1532);
  v21 = (unsigned int)(*(_DWORD *)(v17 + 1528) + 1);
  *(_DWORD *)(v17 + 1528) = v21;
  if ( v21 + 1 > v20 )
  {
    v105 = a2;
    v101 = v12;
    v95 = a3;
    v87 = v19;
    sub_2237220(v17 + 1520, v17 + 1536, v21 + 1, 8);
    v21 = *(unsigned int *)(v17 + 1528);
    a2 = v105;
    v12 = v101;
    a3 = v95;
    v19 = v87;
  }
  v22 = *(_QWORD *)(v17 + 1520);
  *(_QWORD *)(v22 + 8 * v21) = v19;
  ++*(_DWORD *)(v17 + 1528);
  v107 = a2;
  v108 = a3;
  if ( v12 )
  {
    LODWORD(v26) = sub_139DC10(a1, v12, v22, v21, a5, v19);
    v24 = *(unsigned int *)(v17 + 1528);
    v25 = *(unsigned int *)(v17 + 1532);
    v26 = (unsigned int)v26;
    if ( v24 + 1 > v25 )
    {
      v25 = v17 + 1536;
      v88 = (unsigned int)v26;
      sub_2237220(v17 + 1520, v17 + 1536, v24 + 1, 8);
      v24 = *(unsigned int *)(v17 + 1528);
      v26 = v88;
    }
    v27 = v16;
    *(_QWORD *)(*(_QWORD *)(v17 + 1520) + 8 * v24) = v26;
    v28 = *(unsigned int *)(v17 + 1532);
    v29 = (unsigned int)(*(_DWORD *)(v17 + 1528) + 1);
    *(_DWORD *)(v17 + 1528) = v29;
    if ( v29 + 1 > v28 )
    {
      v25 = v17 + 1536;
      sub_2237220(v17 + 1520, v17 + 1536, v29 + 1, 8);
      v29 = *(unsigned int *)(v17 + 1528);
      v27 = v16;
    }
    *(_QWORD *)(*(_QWORD *)(v17 + 1520) + 8 * v29) = v27;
    v30 = *(unsigned int *)(v17 + 1532);
    v31 = (unsigned int)(*(_DWORD *)(v17 + 1528) + 1);
    *(_DWORD *)(v17 + 1528) = v31;
    if ( v31 + 1 > v30 )
    {
      v25 = v17 + 1536;
      sub_2237220(v17 + 1520, v17 + 1536, v31 + 1, 8);
      v31 = *(unsigned int *)(v17 + 1528);
    }
    v32 = *(_QWORD *)(v17 + 1520);
    *(_QWORD *)(v32 + 8 * v31) = v14;
    ++*(_DWORD *)(v17 + 1528);
    v33 = sub_101BA60((__int64)&v107, v25, v32, v30, v27, v23);
    v36 = *(unsigned int *)(v17 + 1532);
    v37 = v33;
    v38 = *(unsigned int *)(v17 + 1528);
    if ( v38 + 1 > v36 )
    {
      sub_2237220(v17 + 1520, v17 + 1536, v38 + 1, 8);
      v38 = *(unsigned int *)(v17 + 1528);
    }
    v39 = *(_QWORD *)(v17 + 1520);
    *(_QWORD *)(v39 + 8 * v38) = v37;
    ++*(_DWORD *)(v17 + 1528);
  }
  else
  {
    sub_9B9C90(v17 + 1520, 0);
    sub_9B9C90(v17 + 1520, 0);
    sub_9B9C90(v17 + 1520, 0);
    sub_9B9C90(v17 + 1520, 0);
  }
  if ( a10 )
  {
    if ( (a10 & 4) == 0 )
    {
      v40 = (unsigned int *)(a10 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (a10 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v41 = sub_FD31C0(v40[3]);
        v46 = (unsigned int)sub_139D2D0(a1, v41, v42, v43, v44, v45);
        v47 = *(unsigned int *)(v17 + 1528);
        if ( v47 + 1 > (unsigned __int64)*(unsigned int *)(v17 + 1532) )
        {
          sub_2237220(v17 + 1520, v17 + 1536, v47 + 1, 8);
          v47 = *(unsigned int *)(v17 + 1528);
        }
        *(_QWORD *)(*(_QWORD *)(v17 + 1520) + 8 * v47) = v46;
        v48 = (unsigned int)(*(_DWORD *)(v17 + 1528) + 1);
        *(_DWORD *)(v17 + 1528) = v48;
        if ( a7 == 1 )
        {
          v49 = 0;
LABEL_22:
          if ( v48 + 1 > (unsigned __int64)*(unsigned int *)(v17 + 1532) )
          {
            v91 = v49;
            sub_2237220(v17 + 1520, v17 + 1536, v48 + 1, 8);
            v48 = *(unsigned int *)(v17 + 1528);
            v49 = v91;
          }
          *(_QWORD *)(*(_QWORD *)(v17 + 1520) + 8 * v48) = v49;
          v50 = (unsigned int)(*(_DWORD *)(v17 + 1528) + 1);
          *(_DWORD *)(v17 + 1528) = v50;
          goto LABEL_30;
        }
        v57 = sub_FD4050(*(_QWORD *)(*(_QWORD *)v40 + 32LL), v40[3]);
        v59 = (__int64)v57;
        v49 = v60;
        if ( !v60 )
        {
LABEL_38:
          v48 = *(unsigned int *)(v17 + 1528);
          goto LABEL_22;
        }
        v61 = *(_QWORD *)(a1 + 32);
        v62 = *(_DWORD *)(v61 + 2392);
        if ( !v62 )
          goto LABEL_40;
        v63 = *(_QWORD *)(v61 + 2376);
        v64 = ((unsigned int)v57 >> 4) ^ ((unsigned int)v57 >> 9);
        v65 = (v62 - 1) & v64;
        v66 = (__int64 *)(v63 + 32LL * v65);
        v67 = *v66;
        if ( v59 == *v66 )
        {
LABEL_36:
          v68 = v66 + 1;
          v69 = *((_DWORD *)v66 + 2);
          if ( v69 )
          {
LABEL_37:
            v49 = v69;
            goto LABEL_38;
          }
LABEL_45:
          v76 = *(unsigned int *)(v61 + 2384);
          v68[1] = v59;
          v68[2] = v49;
          *(_DWORD *)v68 = v76;
          v90 = v61;
          v103 = v59;
          v107 = 4;
          v108 = v76;
          v109 = v49;
          v97 = v49;
          v106 = 4;
          v77 = sub_A25EE0(v61 + 1496, &v106);
          sub_A26740(v90 + 1312, *v77, (__int64)&v107, 3, v103, v97, 0);
          v69 = *(_DWORD *)v68;
          goto LABEL_37;
        }
        if ( v67 != -4096 )
        {
          v99 = 1;
          v93 = nullptr;
          while ( 1 )
          {
            if ( !v93 )
            {
              if ( v67 != -8192 )
                v66 = nullptr;
              v93 = v66;
            }
            v65 = (v62 - 1) & (v99 + v65);
            v66 = (__int64 *)(v63 + 32LL * v65);
            v67 = *v66;
            if ( *v66 == v59 )
              goto LABEL_36;
            if ( v67 == -4096 )
              break;
            ++v99;
          }
          if ( v93 )
            v66 = v93;
        }
        v58 = (unsigned int)(*(_DWORD *)(v61 + 2384) + 1);
        if ( 4 * (int)v58 < 3 * v62 )
        {
          if ( v62 - *(_DWORD *)(v61 + 2388) - (unsigned int)v58 > v62 >> 3 )
          {
            v73 = *v66;
            goto LABEL_42;
          }
          v92 = v61;
          v104 = v59;
          v98 = v49;
          sub_139E900((__int64 *)(v61 + 2376), v62, v61, v58, v59, v49);
          v61 = v92;
          v78 = *(_DWORD *)(v92 + 2392);
          if ( v78 )
          {
            v79 = v78 - 1;
            v59 = v104;
            v49 = v98;
            v80 = (v78 - 1) & v64;
            v81 = *(_QWORD *)(v92 + 2376);
            LODWORD(v58) = *(_DWORD *)(v92 + 2384) + 1;
            v66 = (__int64 *)(v81 + 32LL * v80);
            v73 = *v66;
            if ( *v66 == v104 )
            {
LABEL_52:
              v73 = v59;
LABEL_42:
              *(_DWORD *)(v61 + 2384) = v58;
              if ( v73 != -4096 )
                --*(_DWORD *)(v61 + 2388);
              goto LABEL_44;
            }
            v82 = 1;
            v83 = nullptr;
            if ( v73 != -4096 )
            {
              while ( 1 )
              {
                if ( v73 == -8192 && !v83 )
                  v83 = v66;
                v80 = v79 & (v82 + v80);
                v66 = (__int64 *)(v81 + 32LL * v80);
                v73 = *v66;
                if ( v104 == *v66 )
                  goto LABEL_42;
                if ( v73 == -4096 )
                {
                  if ( !v83 )
                    goto LABEL_64;
                  v73 = *v83;
                  v66 = v83;
                  goto LABEL_42;
                }
                ++v82;
              }
            }
            goto LABEL_64;
          }
        }
        else
        {
LABEL_40:
          v89 = v61;
          v102 = v59;
          v96 = v49;
          sub_139E900((__int64 *)(v61 + 2376), 2 * v62, v61, v58, v59, v49);
          v61 = v89;
          v70 = *(_DWORD *)(v89 + 2392);
          if ( v70 )
          {
            v59 = v102;
            v71 = v70 - 1;
            v49 = v96;
            v72 = *(_QWORD *)(v89 + 2376);
            v73 = v102;
            LODWORD(v58) = *(_DWORD *)(v89 + 2384) + 1;
            v74 = (v70 - 1) & (((unsigned int)v102 >> 9) ^ ((unsigned int)v102 >> 4));
            v66 = (__int64 *)(v72 + 32LL * v74);
            v75 = *v66;
            if ( *v66 == v102 )
              goto LABEL_42;
            v84 = 1;
            v85 = nullptr;
            if ( v75 != -4096 )
            {
              while ( 1 )
              {
                if ( !v85 && v75 == -8192 )
                  v85 = v66;
                v74 = v71 & (v84 + v74);
                v66 = (__int64 *)(v72 + 32LL * v74);
                v75 = *v66;
                if ( *v66 == v102 )
                  goto LABEL_52;
                if ( v75 == -4096 )
                {
                  if ( !v85 )
                    break;
                  v73 = *v85;
                  v66 = v85;
                  goto LABEL_42;
                }
                ++v84;
              }
            }
LABEL_64:
            *(_DWORD *)(v61 + 2384) = v58;
LABEL_44:
            *((_DWORD *)v66 + 2) = 0;
            v68 = v66 + 1;
            v66[2] = 0;
            v66[3] = 0;
            *v66 = v59;
            v61 = *(_QWORD *)(a1 + 32);
            goto LABEL_45;
          }
        }
        ++*(_DWORD *)(v61 + 2384);
        BUG();
      }
    }
  }
  v51 = (unsigned int)sub_139D2D0(a1, 0, v39, v36, v34, v35);
  v52 = *(unsigned int *)(v17 + 1528);
  if ( v52 + 1 > (unsigned __int64)*(unsigned int *)(v17 + 1532) )
  {
    sub_2237220(v17 + 1520, v17 + 1536, v52 + 1, 8);
    v52 = *(unsigned int *)(v17 + 1528);
  }
  *(_QWORD *)(*(_QWORD *)(v17 + 1520) + 8 * v52) = v51;
  v53 = *(unsigned int *)(v17 + 1532);
  v54 = (unsigned int)(*(_DWORD *)(v17 + 1528) + 1);
  *(_DWORD *)(v17 + 1528) = v54;
  if ( v54 + 1 > v53 )
  {
    sub_2237220(v17 + 1520, v17 + 1536, v54 + 1, 8);
    v54 = *(unsigned int *)(v17 + 1528);
  }
  *(_QWORD *)(*(_QWORD *)(v17 + 1520) + 8 * v54) = 0;
  v50 = (unsigned int)(*(_DWORD *)(v17 + 1528) + 1);
  *(_DWORD *)(v17 + 1528) = v50;
LABEL_30:
  if ( v50 + 1 > (unsigned __int64)*(unsigned int *)(v17 + 1532) )
  {
    sub_2237220(v17 + 1520, v17 + 1536, v50 + 1, 8);
    v50 = *(unsigned int *)(v17 + 1528);
  }
  *(_QWORD *)(*(_QWORD *)(v17 + 1520) + 8 * v50) = a9;
  ++*(_DWORD *)(v17 + 1528);
  LODWORD(v107) = 2;
  v55 = sub_A25EE0(v17 + 1496, (int *)&v107);
  return sub_A26740(v17 + 1312, *v55, *(_QWORD *)(v17 + 1520), *(unsigned int *)(v17 + 1528), a8, a9, 0);
}
