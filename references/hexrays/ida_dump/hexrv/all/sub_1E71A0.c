unsigned __int64 __fastcall sub_1E71A0(__int64 a1)
{
  unsigned __int64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rbp
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // r11
  int v10; // ecx
  _QWORD *v11; // r8
  _QWORD *v12; // rax
  _QWORD *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rbp
  _QWORD *v17; // r12
  int v18; // r10d
  __int64 v19; // r14
  __int64 v20; // rax
  unsigned __int64 v21; // r9
  int v22; // r15d
  int *v23; // r11
  unsigned __int64 v24; // rcx
  unsigned int v25; // edx
  int v26; // esi
  int *v27; // rdi
  int v28; // eax
  unsigned __int64 v29; // rsi
  _QWORD *v30; // rdx
  __int64 v31; // rsi
  _QWORD *v32; // rdx
  int v33; // r8d
  unsigned int v34; // r9d
  __int64 v35; // rax
  _QWORD *v36; // rcx
  unsigned __int64 v37; // rax
  __int16 v38; // si
  int v39; // edx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // r12
  __int64 v44; // rbp
  _QWORD *v45; // rbx
  __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // r15
  __int64 v51; // r14
  __int64 *v52; // rbp
  __int64 v53; // rdi
  __int64 v54; // r12
  __int64 i; // r13
  _QWORD *v56; // rbx
  __int64 v57; // rdi
  __int64 v59; // rdx
  __int64 v60; // rcx
  int v61; // edx
  __int64 v62; // rcx
  __int64 v63; // rdx
  unsigned __int64 v64; // r12
  __int64 *v65; // rbp
  __int64 v66; // r14
  int v67; // r10d
  __int64 v68; // rdx
  unsigned __int64 v69; // r9
  int *v70; // r11
  unsigned __int64 v71; // rdx
  unsigned int v72; // eax
  int v73; // esi
  int *v74; // rcx
  int v75; // edi
  unsigned __int64 v76; // rsi
  _QWORD *v77; // rax
  __int64 v78; // rsi
  __int64 v79; // rax
  __int64 v80; // rdx
  int v81; // eax
  __int64 v82; // rdx
  _QWORD *v83; // rax
  __int64 v84; // rdx
  unsigned __int64 v85; // rsi
  __int64 v86; // [rsp+0h] [rbp-150h]
  int v87; // [rsp+8h] [rbp-148h]
  char v88; // [rsp+10h] [rbp-140h]
  __int64 v89; // [rsp+18h] [rbp-138h]
  int v90; // [rsp+24h] [rbp-12Ch]
  _QWORD *v91; // [rsp+28h] [rbp-128h]
  __int64 v92; // [rsp+30h] [rbp-120h]
  _QWORD *v93; // [rsp+38h] [rbp-118h]
  int v94; // [rsp+40h] [rbp-110h]
  __int64 v95; // [rsp+48h] [rbp-108h]
  __int64 v96; // [rsp+58h] [rbp-F8h] BYREF
  __int128 v97; // [rsp+60h] [rbp-F0h]
  __int64 v98; // [rsp+78h] [rbp-D8h] BYREF
  __int128 v99; // [rsp+80h] [rbp-D0h]
  __int64 v100; // [rsp+90h] [rbp-C0h]
  __int128 v101; // [rsp+98h] [rbp-B8h]
  __int64 *v102; // [rsp+A8h] [rbp-A8h] BYREF
  _BYTE v103[24]; // [rsp+B0h] [rbp-A0h] BYREF
  __int64 v104; // [rsp+C8h] [rbp-88h]
  __int128 v105; // [rsp+D0h] [rbp-80h]
  __int64 v106; // [rsp+E0h] [rbp-70h]
  __int64 v107; // [rsp+E8h] [rbp-68h]
  __int64 v108; // [rsp+F0h] [rbp-60h]
  __int128 v109; // [rsp+F8h] [rbp-58h]
  unsigned __int64 v110; // [rsp+110h] [rbp-40h]

  v1 = *(int *)(a1 + 64);
  v110 = __readfsqword(0x28u);
  v99 = 0;
  v98 = 0;
  v100 = 0;
  v96 = 0;
  v102 = &v98;
  memset(v103, 0, sizeof(v103));
  v104 = 0;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v101 = 0;
  v97 = 0;
  v105 = 0;
  v109 = 0;
  if ( v1 )
  {
    v3 = qvector_reserve(&v96, 0, v1, 96);
    v4 = v97;
    v96 = v3;
    if ( (unsigned __int64)v97 < v1 )
    {
      while ( 1 )
      {
        sub_1E7040(v3 + 96 * v4++, (__int64 *)&v102);
        if ( v1 == v4 )
          break;
        v3 = v96;
      }
    }
    *(_QWORD *)&v97 = v1;
    if ( v108 )
    {
      *(_QWORD *)&v109 = 0;
      qfree(v108);
    }
    v5 = v106;
  }
  else
  {
    v5 = 0;
  }
  qfree(v5);
  if ( v104 )
  {
    *(_QWORD *)&v105 = 0;
    qfree(v104);
  }
  if ( *(_QWORD *)v103 )
  {
    *(_QWORD *)&v103[8] = 0;
    qfree(*(_QWORD *)v103);
  }
  v6 = 0;
  if ( *(int *)(a1 + 64) > 0 )
  {
    do
    {
      sub_1E6D40(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v6), v96 + 96 * v6);
      v7 = *(_DWORD *)(a1 + 64);
      if ( v7 <= (int)v6 + 1 )
        goto LABEL_14;
      ++v6;
    }
    while ( (unsigned int)v6 < v7 );
    if ( !under_debugger )
      sub_37DDE0(52719);
LABEL_134:
    BUG();
  }
LABEL_14:
  v8 = sub_62D60((_QWORD *)a1);
  v89 = sub_10BE80(v8, 0);
  if ( !v89 )
  {
    if ( !under_debugger )
      sub_37DDE0(50446);
    goto LABEL_134;
  }
  ++*(_DWORD *)(v89 + 24);
  v102 = nullptr;
  memset(v103, 0, 20);
  nullsub_40();
  sub_62900((__int64 *)&v102);
  v9 = 0;
  v10 = 0;
  if ( *(int *)(a1 + 64) > 0 )
  {
    while ( 1 )
    {
      v11 = (_QWORD *)(v9 + *(_QWORD *)v89);
      v12 = (_QWORD *)*v11;
      if ( *v11 )
      {
        if ( v11[1] )
        {
          v13 = (_QWORD *)v12[1];
          if ( v13 != v12 )
            break;
        }
      }
LABEL_39:
      ++v10;
      v9 += 24;
      if ( *(_DWORD *)(a1 + 64) <= v10 )
        goto LABEL_40;
    }
    v95 = 4 * v9;
LABEL_20:
    if ( v13[4] != 1 )
      goto LABEL_35;
    v14 = *(int *)v13[3];
    if ( !(_DWORD)v14 )
      goto LABEL_35;
    v88 = *((_BYTE *)v13 + 56);
    if ( v88 == 1 )
    {
      v86 = *((int *)v13 + 12);
    }
    else
    {
      if ( v88 != 5 )
      {
        if ( !under_debugger )
          sub_37DDE0(51893);
        goto LABEL_134;
      }
      v86 = v13[6];
    }
    v15 = v96 + 96 * v14;
    v87 = *((_DWORD *)v13 + 16);
    v16 = *(_QWORD *)(v15 + 16);
    if ( !v16 )
      goto LABEL_35;
    v17 = *(_QWORD **)v15;
    v90 = v10;
    v18 = 0;
    v91 = v11;
    v19 = *(_QWORD *)(v15 + 8);
    v20 = 0;
    v21 = v17[4];
    v92 = v9;
    v93 = v13;
    v22 = *((_DWORD *)v13 + 16);
    while ( 1 )
    {
      v23 = (int *)(v19 + 8 * v20);
      v24 = (unsigned int)*v23;
      v25 = *v23;
      if ( v24 >= v21 )
      {
        v28 = *v23;
        v26 = 0;
      }
      else
      {
        v26 = 0;
        while ( 1 )
        {
          v27 = (int *)(v17[3] + 8 * v24);
          v28 = v25;
          v25 = *v27;
          if ( *v27 == v28 )
            break;
          v24 = v25;
          v26 += v27[1];
          if ( v25 >= v21 )
          {
            v28 = *v27;
            break;
          }
        }
      }
      v29 = (unsigned int)(v23[1] + v26);
      v30 = (_QWORD *)(*v17 + 24 * v24);
      if ( v29 >= v30[1] )
      {
        if ( !under_debugger )
          sub_37DDE0(51105);
        goto LABEL_134;
      }
      v31 = *v30 + (v29 << 6);
      if ( *(_BYTE *)(v31 + 56) )
      {
        v59 = *(_QWORD *)(v31 + 8);
        if ( *(_BYTE *)v59 == 1 )
        {
          v62 = *(int *)(v59 + 8);
          v61 = *(_DWORD *)(v59 + 4);
          if ( v88 != 1 )
            goto LABEL_33;
        }
        else
        {
          if ( *(_BYTE *)v59 != 5 || v88 != 5 )
            goto LABEL_33;
          v60 = *(_QWORD *)(v59 + 8);
          v61 = *(_DWORD *)(v59 + 4);
          v62 = *(_QWORD *)(v60 + 8);
        }
        if ( v86 >= v62 && v86 <= v62 && v61 >= v22 )
        {
          v10 = v90;
          v9 = v92;
          v13 = v93;
          if ( v28 == -1 )
            goto LABEL_35;
          v63 = v95 + v96;
          v64 = *(_QWORD *)(v95 + v96 + 40);
          if ( !v64 )
            goto LABEL_35;
          v65 = *(__int64 **)v63;
          v66 = *(_QWORD *)(v63 + 32);
          v94 = v28;
          v67 = 0;
          v68 = 0;
          v69 = v65[4];
          while ( 2 )
          {
            v70 = (int *)(v66 + 8 * v68);
            v71 = (unsigned int)*v70;
            v72 = *v70;
            if ( v71 >= v69 )
            {
              v75 = *v70;
              v73 = 0;
            }
            else
            {
              v73 = 0;
              while ( 1 )
              {
                v74 = (int *)(v65[3] + 8 * v71);
                v75 = v72;
                v72 = *v74;
                if ( *v74 == v75 )
                  break;
                v71 = v72;
                v73 += v74[1];
                if ( v72 >= v69 )
                {
                  v75 = *v74;
                  break;
                }
              }
            }
            v76 = (unsigned int)(v70[1] + v73);
            v77 = (_QWORD *)(*v65 + 24 * v71);
            if ( v76 >= v77[1] )
            {
              if ( !under_debugger )
                sub_37DDE0(51105);
              goto LABEL_134;
            }
            v78 = *v77 + (v76 << 6);
            if ( *(_BYTE *)(v78 + 56) )
              goto LABEL_97;
            v79 = *(_QWORD *)(v78 + 8);
            if ( *(_BYTE *)v79 == 1 )
            {
              v82 = *(int *)(v79 + 8);
              v81 = *(_DWORD *)(v79 + 4);
              if ( v88 == 1 )
                goto LABEL_105;
LABEL_97:
              v68 = ++v67;
              if ( v67 >= v64 )
              {
                v10 = v90;
                v9 = v92;
                goto LABEL_35;
              }
              continue;
            }
            break;
          }
          if ( *(_BYTE *)v79 != 5 || v88 != 5 )
            goto LABEL_97;
          v80 = *(_QWORD *)(v79 + 8);
          v81 = *(_DWORD *)(v79 + 4);
          v82 = *(_QWORD *)(v80 + 8);
LABEL_105:
          if ( v86 < v82 || v86 > v82 || v81 > v87 )
            goto LABEL_97;
          v10 = v90;
          v9 = v92;
          if ( v75 != -1 )
          {
            sub_1E6510(v65, v75, v94);
            v9 = v92;
            v11 = v91;
            v10 = v90;
          }
LABEL_35:
          if ( (*v13 & 2) != 0 )
          {
LABEL_38:
            if ( (_QWORD *)*v11 == v13 )
              goto LABEL_39;
          }
          else
          {
            v32 = (_QWORD *)v13[2];
            if ( (*(_BYTE *)v32 & 2) == 0 )
            {
              do
              {
                v13 = v32;
                v32 = (_QWORD *)v32[1];
              }
              while ( (*(_BYTE *)v32 & 2) == 0 );
              goto LABEL_38;
            }
            v83 = (_QWORD *)(*v13 & 0xFFFFFFFFFFFFFFFCLL);
            v84 = *v83;
            if ( (*v83 & 2) != 0 )
            {
LABEL_112:
              v13 = v83;
              if ( (_QWORD *)*v11 == v83 )
                goto LABEL_39;
            }
            else
            {
              while ( 1 )
              {
                if ( v13 != (_QWORD *)v83[2] )
                  goto LABEL_112;
                v13 = v83;
                v85 = v84 & 0xFFFFFFFFFFFFFFFCLL;
                v84 = *(_QWORD *)(v84 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v84 & 2) != 0 )
                  break;
                v83 = (_QWORD *)v85;
              }
              v13 = (_QWORD *)v85;
              if ( *v11 == v85 )
                goto LABEL_39;
            }
          }
          goto LABEL_20;
        }
      }
LABEL_33:
      v20 = ++v18;
      if ( v18 >= v16 )
      {
        v10 = v90;
        v9 = v92;
        v13 = v93;
        goto LABEL_35;
      }
    }
  }
LABEL_40:
  v33 = 0;
  v34 = 0;
  v35 = 0;
  if ( (_QWORD)v99 )
  {
    while ( 1 )
    {
      v36 = (_QWORD *)(v98 + 24 * v35);
      v37 = v36[1];
      if ( v37 > 1 )
        break;
      v38 = 0;
      if ( v37 )
        goto LABEL_44;
LABEL_49:
      v35 = ++v33;
      if ( v33 >= (unsigned __int64)v99 )
        goto LABEL_50;
    }
    ++v34;
    v38 = 0;
    if ( v34 <= 0xFFFF )
      v38 = v34;
LABEL_44:
    v39 = 0;
    v40 = 0;
    do
    {
      while ( 1 )
      {
        v41 = *(_QWORD *)(*v36 + (v40 << 6) + 8);
        if ( *(_BYTE *)v41 == 1 && *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 60LL) == *(_DWORD *)(v41 + 8) )
          break;
        ++v39;
        *(_WORD *)(v41 + 2) = v38;
        v40 = v39;
        if ( (unsigned __int64)v39 >= v36[1] )
          goto LABEL_49;
      }
      v40 = ++v39;
    }
    while ( (unsigned __int64)v39 < v36[1] );
    goto LABEL_49;
  }
LABEL_50:
  sub_100950(v89);
  v42 = v96;
  if ( v96 )
  {
    v43 = v97;
    if ( (_QWORD)v97 )
    {
      v44 = 0;
      do
      {
        v45 = (_QWORD *)(v42 + 96 * v44);
        v46 = v45[9];
        if ( v46 )
        {
          v45[10] = 0;
          qfree(v46);
        }
        qfree(v45[7]);
        v47 = v45[4];
        if ( v47 )
        {
          v45[5] = 0;
          qfree(v47);
        }
        v48 = v45[1];
        if ( v48 )
        {
          v45[2] = 0;
          qfree(v48);
        }
        ++v44;
        v42 = v96;
      }
      while ( v43 != v44 );
    }
    *(_QWORD *)&v97 = 0;
    qfree(v42);
  }
  if ( v100 )
  {
    *(_QWORD *)&v101 = 0;
    qfree(v100);
  }
  v49 = v98;
  if ( v98 )
  {
    v50 = v99;
    if ( (_QWORD)v99 )
    {
      v51 = 0;
      do
      {
        v52 = (__int64 *)(v49 + 24 * v51);
        v53 = *v52;
        if ( *v52 )
        {
          v54 = v52[1];
          if ( v54 )
          {
            for ( i = 0; i != v54; ++i )
            {
              v56 = (_QWORD *)(v53 + (i << 6));
              v57 = v56[4];
              if ( v57 )
              {
                v56[5] = 0;
                qfree(v57);
              }
              qfree(v56[2]);
              v53 = *v52;
            }
          }
          v52[1] = 0;
          qfree(v53);
          v49 = v98;
        }
        ++v51;
      }
      while ( v50 != v51 );
    }
    *(_QWORD *)&v99 = 0;
    qfree(v49);
  }
  return v110 - __readfsqword(0x28u);
}
