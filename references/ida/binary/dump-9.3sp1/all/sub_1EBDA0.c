unsigned __int64 __fastcall sub_1EBDA0(__int64 a1, __int64 **a2)
{
  unsigned __int64 v2; // r13
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r11
  int v14; // ecx
  _QWORD *v15; // r8
  _QWORD *v16; // rax
  _QWORD *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rbp
  _QWORD *v21; // r12
  int v22; // r10d
  __int64 v23; // r14
  __int64 v24; // rax
  unsigned __int64 v25; // r9
  int v26; // r15d
  int *v27; // r11
  unsigned __int64 v28; // rcx
  unsigned int v29; // edx
  int v30; // esi
  int *v31; // rdi
  int v32; // eax
  unsigned __int64 v33; // rsi
  _QWORD *v34; // rdx
  __int64 v35; // rsi
  _QWORD *v36; // rdx
  int v37; // r8d
  unsigned int v38; // r9d
  __int64 v39; // rax
  _QWORD *v40; // rcx
  unsigned __int64 v41; // rax
  __int16 v42; // si
  int v43; // edx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // r12
  __int64 v48; // rbp
  _QWORD *v49; // rbx
  __int64 v50; // rdi
  __int64 v51; // rdi
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 v54; // r15
  __int64 v55; // r14
  __int64 *v56; // rbp
  __int64 v57; // rdi
  __int64 v58; // r12
  __int64 i; // r13
  __int64 *v60; // rbx
  __int64 v61; // rdi
  __int64 v63; // rdx
  __int64 v64; // rcx
  int v65; // edx
  __int64 v66; // rcx
  __int64 v67; // rdx
  unsigned __int64 v68; // r12
  __int64 *v69; // rbp
  __int64 v70; // r14
  int v71; // r10d
  __int64 v72; // rdx
  unsigned __int64 v73; // r9
  int *v74; // r11
  unsigned __int64 v75; // rdx
  unsigned int v76; // eax
  int v77; // esi
  int *v78; // rcx
  int v79; // edi
  unsigned __int64 v80; // rsi
  _QWORD *v81; // rax
  __int64 v82; // rsi
  __int64 v83; // rax
  __int64 v84; // rdx
  int v85; // eax
  __int64 v86; // rdx
  _QWORD *v87; // rax
  __int64 v88; // rdx
  unsigned __int64 v89; // rsi
  __int64 v90; // [rsp+0h] [rbp-150h]
  int v91; // [rsp+8h] [rbp-148h]
  char v92; // [rsp+10h] [rbp-140h]
  __int64 v93; // [rsp+18h] [rbp-138h]
  int v94; // [rsp+24h] [rbp-12Ch]
  _QWORD *v95; // [rsp+28h] [rbp-128h]
  __int64 v96; // [rsp+30h] [rbp-120h]
  _QWORD *v97; // [rsp+38h] [rbp-118h]
  int v98; // [rsp+40h] [rbp-110h]
  __int64 v99; // [rsp+48h] [rbp-108h]
  __int64 v100; // [rsp+58h] [rbp-F8h] BYREF
  __int128 v101; // [rsp+60h] [rbp-F0h]
  __int64 v102; // [rsp+78h] [rbp-D8h] BYREF
  __int128 v103; // [rsp+80h] [rbp-D0h]
  __int64 v104; // [rsp+90h] [rbp-C0h]
  __int128 v105; // [rsp+98h] [rbp-B8h]
  __int64 *v106; // [rsp+A8h] [rbp-A8h] BYREF
  _BYTE v107[24]; // [rsp+B0h] [rbp-A0h] BYREF
  __int64 v108; // [rsp+C8h] [rbp-88h]
  __int128 v109; // [rsp+D0h] [rbp-80h]
  __int64 v110; // [rsp+E0h] [rbp-70h]
  __int64 v111; // [rsp+E8h] [rbp-68h]
  __int64 v112; // [rsp+F0h] [rbp-60h]
  __int128 v113; // [rsp+F8h] [rbp-58h]
  unsigned __int64 v114; // [rsp+110h] [rbp-40h]

  v2 = *(int *)(a1 + 64);
  v114 = __readfsqword(0x28u);
  v103 = 0;
  v102 = 0;
  v104 = 0;
  v100 = 0;
  v106 = &v102;
  memset(v107, 0, sizeof(v107));
  v108 = 0;
  v110 = 0;
  v111 = 0;
  v112 = 0;
  v105 = 0;
  v101 = 0;
  v109 = 0;
  v113 = 0;
  if ( v2 )
  {
    a2 = nullptr;
    v4 = qvector_reserve((__int64)&v100, 0, v2, 96);
    v6 = v101;
    v100 = v4;
    if ( (unsigned __int64)v101 < v2 )
    {
      while ( 1 )
      {
        a2 = &v106;
        sub_1EBC40(v4 + 96 * v6, &v106, 96 * v6, v5);
        if ( v2 == ++v6 )
          break;
        v4 = v100;
      }
    }
    *(_QWORD *)&v101 = v2;
    if ( v112 )
    {
      *(_QWORD *)&v113 = 0;
      qfree(v112);
    }
    v7 = v110;
  }
  else
  {
    v7 = 0;
  }
  qfree(v7);
  if ( v108 )
  {
    *(_QWORD *)&v109 = 0;
    qfree(v108);
  }
  if ( *(_QWORD *)v107 )
  {
    *(_QWORD *)&v107[8] = 0;
    qfree(*(__int64 *)v107);
  }
  v10 = 0;
  if ( *(int *)(a1 + 64) > 0 )
  {
    do
    {
      a2 = (__int64 **)(v100 + 96 * v10);
      sub_1EB940(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v10), (unsigned __int64)a2);
      v11 = *(_DWORD *)(a1 + 64);
      v8 = (unsigned int)(v10 + 1);
      if ( v11 <= (int)v8 )
        goto LABEL_14;
      ++v10;
    }
    while ( (unsigned int)v10 < v11 );
    if ( !under_debugger )
      sub_383060(52719);
LABEL_134:
    BUG();
  }
LABEL_14:
  v12 = sub_670E0((_QWORD *)a1, (__int64)a2, v8, v9);
  v93 = sub_110340(v12, 0);
  if ( !v93 )
  {
    if ( !under_debugger )
      sub_383060(50446);
    goto LABEL_134;
  }
  ++*(_DWORD *)(v93 + 24);
  v106 = nullptr;
  memset(v107, 0, 20);
  nullsub_40();
  sub_66C80((__int64)&v106);
  v13 = 0;
  v14 = 0;
  if ( *(int *)(a1 + 64) > 0 )
  {
    while ( 1 )
    {
      v15 = (_QWORD *)(v13 + *(_QWORD *)v93);
      v16 = (_QWORD *)*v15;
      if ( *v15 )
      {
        if ( v15[1] )
        {
          v17 = (_QWORD *)v16[1];
          if ( v17 != v16 )
            break;
        }
      }
LABEL_39:
      ++v14;
      v13 += 24;
      if ( *(_DWORD *)(a1 + 64) <= v14 )
        goto LABEL_40;
    }
    v99 = 4 * v13;
LABEL_20:
    if ( v17[4] != 1 )
      goto LABEL_35;
    v18 = *(int *)v17[3];
    if ( !(_DWORD)v18 )
      goto LABEL_35;
    v92 = *((_BYTE *)v17 + 56);
    if ( v92 == 1 )
    {
      v90 = *((int *)v17 + 12);
    }
    else
    {
      if ( v92 != 5 )
      {
        if ( !under_debugger )
          sub_383060(51893);
        goto LABEL_134;
      }
      v90 = v17[6];
    }
    v19 = v100 + 96 * v18;
    v91 = *((_DWORD *)v17 + 16);
    v20 = *(_QWORD *)(v19 + 16);
    if ( !v20 )
      goto LABEL_35;
    v21 = *(_QWORD **)v19;
    v94 = v14;
    v22 = 0;
    v95 = v15;
    v23 = *(_QWORD *)(v19 + 8);
    v24 = 0;
    v25 = v21[4];
    v96 = v13;
    v97 = v17;
    v26 = *((_DWORD *)v17 + 16);
    while ( 1 )
    {
      v27 = (int *)(v23 + 8 * v24);
      v28 = (unsigned int)*v27;
      v29 = *v27;
      if ( v28 >= v25 )
      {
        v32 = *v27;
        v30 = 0;
      }
      else
      {
        v30 = 0;
        while ( 1 )
        {
          v31 = (int *)(v21[3] + 8 * v28);
          v32 = v29;
          v29 = *v31;
          if ( *v31 == v32 )
            break;
          v28 = v29;
          v30 += v31[1];
          if ( v29 >= v25 )
          {
            v32 = *v31;
            break;
          }
        }
      }
      v33 = (unsigned int)(v27[1] + v30);
      v34 = (_QWORD *)(*v21 + 24 * v28);
      if ( v33 >= v34[1] )
      {
        if ( !under_debugger )
          sub_383060(51105);
        goto LABEL_134;
      }
      v35 = *v34 + (v33 << 6);
      if ( *(_BYTE *)(v35 + 56) )
      {
        v63 = *(_QWORD *)(v35 + 8);
        if ( *(_BYTE *)v63 == 1 )
        {
          v66 = *(int *)(v63 + 8);
          v65 = *(_DWORD *)(v63 + 4);
          if ( v92 != 1 )
            goto LABEL_33;
        }
        else
        {
          if ( *(_BYTE *)v63 != 5 || v92 != 5 )
            goto LABEL_33;
          v64 = *(_QWORD *)(v63 + 8);
          v65 = *(_DWORD *)(v63 + 4);
          v66 = *(_QWORD *)(v64 + 8);
        }
        if ( v90 >= v66 && v90 <= v66 && v65 >= v26 )
        {
          v14 = v94;
          v13 = v96;
          v17 = v97;
          if ( v32 == -1 )
            goto LABEL_35;
          v67 = v99 + v100;
          v68 = *(_QWORD *)(v99 + v100 + 40);
          if ( !v68 )
            goto LABEL_35;
          v69 = *(__int64 **)v67;
          v70 = *(_QWORD *)(v67 + 32);
          v98 = v32;
          v71 = 0;
          v72 = 0;
          v73 = v69[4];
          while ( 2 )
          {
            v74 = (int *)(v70 + 8 * v72);
            v75 = (unsigned int)*v74;
            v76 = *v74;
            if ( v75 >= v73 )
            {
              v79 = *v74;
              v77 = 0;
            }
            else
            {
              v77 = 0;
              while ( 1 )
              {
                v78 = (int *)(v69[3] + 8 * v75);
                v79 = v76;
                v76 = *v78;
                if ( *v78 == v79 )
                  break;
                v75 = v76;
                v77 += v78[1];
                if ( v76 >= v73 )
                {
                  v79 = *v78;
                  break;
                }
              }
            }
            v80 = (unsigned int)(v74[1] + v77);
            v81 = (_QWORD *)(*v69 + 24 * v75);
            if ( v80 >= v81[1] )
            {
              if ( !under_debugger )
                sub_383060(51105);
              goto LABEL_134;
            }
            v82 = *v81 + (v80 << 6);
            if ( *(_BYTE *)(v82 + 56) )
              goto LABEL_97;
            v83 = *(_QWORD *)(v82 + 8);
            if ( *(_BYTE *)v83 == 1 )
            {
              v86 = *(int *)(v83 + 8);
              v85 = *(_DWORD *)(v83 + 4);
              if ( v92 == 1 )
                goto LABEL_105;
LABEL_97:
              v72 = ++v71;
              if ( v71 >= v68 )
              {
                v14 = v94;
                v13 = v96;
                goto LABEL_35;
              }
              continue;
            }
            break;
          }
          if ( *(_BYTE *)v83 != 5 || v92 != 5 )
            goto LABEL_97;
          v84 = *(_QWORD *)(v83 + 8);
          v85 = *(_DWORD *)(v83 + 4);
          v86 = *(_QWORD *)(v84 + 8);
LABEL_105:
          if ( v90 < v86 || v90 > v86 || v85 > v91 )
            goto LABEL_97;
          v14 = v94;
          v13 = v96;
          if ( v79 != -1 )
          {
            sub_1EB110(v69, v79, v98);
            v13 = v96;
            v15 = v95;
            v14 = v94;
          }
LABEL_35:
          if ( (*v17 & 2) != 0 )
          {
LABEL_38:
            if ( (_QWORD *)*v15 == v17 )
              goto LABEL_39;
          }
          else
          {
            v36 = (_QWORD *)v17[2];
            if ( (*(_BYTE *)v36 & 2) == 0 )
            {
              do
              {
                v17 = v36;
                v36 = (_QWORD *)v36[1];
              }
              while ( (*(_BYTE *)v36 & 2) == 0 );
              goto LABEL_38;
            }
            v87 = (_QWORD *)(*v17 & 0xFFFFFFFFFFFFFFFCLL);
            v88 = *v87;
            if ( (*v87 & 2) != 0 )
            {
LABEL_112:
              v17 = v87;
              if ( (_QWORD *)*v15 == v87 )
                goto LABEL_39;
            }
            else
            {
              while ( 1 )
              {
                if ( v17 != (_QWORD *)v87[2] )
                  goto LABEL_112;
                v17 = v87;
                v89 = v88 & 0xFFFFFFFFFFFFFFFCLL;
                v88 = *(_QWORD *)(v88 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v88 & 2) != 0 )
                  break;
                v87 = (_QWORD *)v89;
              }
              v17 = (_QWORD *)v89;
              if ( *v15 == v89 )
                goto LABEL_39;
            }
          }
          goto LABEL_20;
        }
      }
LABEL_33:
      v24 = ++v22;
      if ( v22 >= v20 )
      {
        v14 = v94;
        v13 = v96;
        v17 = v97;
        goto LABEL_35;
      }
    }
  }
LABEL_40:
  v37 = 0;
  v38 = 0;
  v39 = 0;
  if ( (_QWORD)v103 )
  {
    while ( 1 )
    {
      v40 = (_QWORD *)(v102 + 24 * v39);
      v41 = v40[1];
      if ( v41 > 1 )
        break;
      v42 = 0;
      if ( v41 )
        goto LABEL_44;
LABEL_49:
      v39 = ++v37;
      if ( v37 >= (unsigned __int64)v103 )
        goto LABEL_50;
    }
    ++v38;
    v42 = 0;
    if ( v38 <= 0xFFFF )
      v42 = v38;
LABEL_44:
    v43 = 0;
    v44 = 0;
    do
    {
      while ( 1 )
      {
        v45 = *(_QWORD *)(*v40 + (v44 << 6) + 8);
        if ( *(_BYTE *)v45 == 1 && *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 60LL) == *(_DWORD *)(v45 + 8) )
          break;
        ++v43;
        *(_WORD *)(v45 + 2) = v42;
        v44 = v43;
        if ( (unsigned __int64)v43 >= v40[1] )
          goto LABEL_49;
      }
      v44 = ++v43;
    }
    while ( (unsigned __int64)v43 < v40[1] );
    goto LABEL_49;
  }
LABEL_50:
  sub_104E10(v93);
  v46 = v100;
  if ( v100 )
  {
    v47 = v101;
    if ( (_QWORD)v101 )
    {
      v48 = 0;
      do
      {
        v49 = (_QWORD *)(v46 + 96 * v48);
        v50 = v49[9];
        if ( v50 )
        {
          v49[10] = 0;
          qfree(v50);
        }
        qfree(v49[7]);
        v51 = v49[4];
        if ( v51 )
        {
          v49[5] = 0;
          qfree(v51);
        }
        v52 = v49[1];
        if ( v52 )
        {
          v49[2] = 0;
          qfree(v52);
        }
        ++v48;
        v46 = v100;
      }
      while ( v47 != v48 );
    }
    *(_QWORD *)&v101 = 0;
    qfree(v46);
  }
  if ( v104 )
  {
    *(_QWORD *)&v105 = 0;
    qfree(v104);
  }
  v53 = v102;
  if ( v102 )
  {
    v54 = v103;
    if ( (_QWORD)v103 )
    {
      v55 = 0;
      do
      {
        v56 = (__int64 *)(v53 + 24 * v55);
        v57 = *v56;
        if ( *v56 )
        {
          v58 = v56[1];
          if ( v58 )
          {
            for ( i = 0; i != v58; ++i )
            {
              v60 = (__int64 *)(v57 + (i << 6));
              v61 = v60[4];
              if ( v61 )
              {
                v60[5] = 0;
                qfree(v61);
              }
              qfree(v60[2]);
              v57 = *v56;
            }
          }
          v56[1] = 0;
          qfree(v57);
          v53 = v102;
        }
        ++v55;
      }
      while ( v54 != v55 );
    }
    *(_QWORD *)&v103 = 0;
    qfree(v53);
  }
  return v114 - __readfsqword(0x28u);
}
