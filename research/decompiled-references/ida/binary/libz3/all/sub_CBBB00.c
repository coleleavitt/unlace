__int64 __fastcall sub_CBBB00(__int64 *a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v7; // r12d
  __int64 v8; // rsi
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // r14
  int v15; // edx
  __int64 v16; // rsi
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // r12
  __int64 v22; // r13
  __int64 *v23; // r13
  int v24; // r8d
  int v25; // r9d
  int v26; // r13d
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // r14
  __int64 *v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdi
  bool v33; // zf
  __int64 v34; // rsi
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // r14
  __int64 v40; // rsi
  __int64 v41; // rax
  int v42; // ecx
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rdi
  __int64 v48; // rcx
  __int64 v49; // r13
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // rcx
  __int64 v54; // r12
  __int64 v55; // rcx
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // r14
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r12
  __int64 v64; // rax
  int v65; // ecx
  __int64 v66; // rax
  __int64 v67; // r13
  __int64 v68; // rax
  __int64 v69; // r13
  __int64 v70; // rax
  __int64 v71; // rax
  unsigned int v72; // r13d
  unsigned __int64 v73; // r14
  __int64 *v74; // rbx
  __int64 v75; // rsi
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdi
  int v83; // ecx
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // r13
  __int64 v90; // rax
  __int64 v91; // rdi
  __int64 v92; // rsi
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // r13
  _DWORD *v96; // rax
  unsigned int v97; // [rsp+0h] [rbp-98h]
  int v98[2]; // [rsp+0h] [rbp-98h]
  int v99[2]; // [rsp+0h] [rbp-98h]
  __int64 v100; // [rsp+0h] [rbp-98h]
  __int64 *v101; // [rsp+8h] [rbp-90h]
  unsigned int v102; // [rsp+8h] [rbp-90h]
  __int64 v103; // [rsp+8h] [rbp-90h]
  __int64 v104; // [rsp+10h] [rbp-88h]
  int v105; // [rsp+18h] [rbp-80h]
  __int64 *v106; // [rsp+18h] [rbp-80h]
  int v107; // [rsp+20h] [rbp-78h]
  _QWORD *v108; // [rsp+20h] [rbp-78h]
  char v109; // [rsp+28h] [rbp-70h]
  __int64 v110; // [rsp+28h] [rbp-70h]
  __int64 v111; // [rsp+30h] [rbp-68h] BYREF
  __int64 v112; // [rsp+38h] [rbp-60h] BYREF
  __int64 v113; // [rsp+40h] [rbp-58h] BYREF
  void *v114; // [rsp+48h] [rbp-50h] BYREF
  __int64 v115; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v116[8]; // [rsp+58h] [rbp-40h] BYREF

  v3 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  switch ( v3 )
  {
    case 2:
      v34 = 515;
LABEL_24:
      sub_1872CE0("");
      sub_1873130(107, v34);
    case 3:
      v34 = 520;
      goto LABEL_24;
    case 0:
      v7 = *(_DWORD *)(a2 + 24);
      while ( 1 )
      {
        v11 = *(_DWORD *)(a3 + 8);
        v12 = v11 >> 6;
        if ( v11 >> 6 >= v7 )
          break;
        v8 = *(_QWORD *)(a2 + 8LL * v12 + 32);
        v9 = ((v12 + 1) << 6) | v11 & 0x3F;
        *(_DWORD *)(a3 + 8) = v9;
        result = sub_CBB3E0((__int64)a1, v8, ((unsigned __int8)v9 >> 4) & 3);
        if ( !(_BYTE)result )
          return result;
      }
      v13 = a1[7];
      v14 = *(_QWORD *)(a2 + 16);
      if ( v13 )
        v15 = *(_DWORD *)(v13 - 4);
      else
        v15 = 0;
      v16 = *(unsigned int *)(a3 + 12);
      v97 = v15 - v16;
      v101 = (__int64 *)(v13 + 8LL * (unsigned int)v16);
      v104 = a1[1];
      sub_1584610(a1, v16);
      v19 = a1[11];
      if ( v19 )
        v20 = *(_DWORD *)(v19 - 4);
      else
        v20 = 0;
      if ( v20 == *(_DWORD *)(a3 + 12) )
      {
        ++*(_DWORD *)(a2 + 8);
        sub_CB1640(a1[62], a1[63]);
        v21 = a2;
        v22 = 0;
      }
      else
      {
        v77 = sub_15DC610(
                a1[1],
                v14,
                v97,
                (int)v101,
                v17,
                v18,
                v97,
                (int)v101,
                v104,
                v105,
                v107,
                v109,
                v111,
                v112,
                v113,
                v114);
        v21 = v77;
        if ( v77 )
          ++*(_DWORD *)(v77 + 8);
        v78 = sub_15E2980(a1[1]);
        v22 = v78;
        if ( v78 )
          ++*(_DWORD *)(v78 + 8);
        sub_CB1640(a1[62], a1[63]);
      }
      a1[62] = v22;
      v23 = (__int64 *)a1[18];
      sub_CB1640(a1[64], a1[65]);
      a1[64] = 0;
      v26 = sub_CB6370(v23, v14, v97, v101, a1 + 60);
      if ( v26 == 5 )
      {
        if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
        {
          v66 = sub_15DC610(
                  a1[1],
                  v14,
                  v97,
                  (int)v101,
                  v24,
                  v25,
                  v97,
                  (int)v101,
                  v104,
                  (int)a1 + 480,
                  v107,
                  v109,
                  v111,
                  v112,
                  v113,
                  v114);
          v67 = v66;
          if ( v66 )
            ++*(_DWORD *)(v66 + 8);
          sub_CB1660(a1[60], a1[61]);
          a1[60] = v67;
          v68 = sub_15DE370(a1[1]);
          v69 = v68;
          if ( v68 )
            ++*(_DWORD *)(v68 + 8);
          sub_CB1640(a1[62], a1[63]);
          a1[62] = v69;
        }
        else
        {
          ++*(_DWORD *)(a2 + 8);
          sub_CB1660(a1[60], a1[61]);
          a1[60] = a2;
        }
        sub_39BEE0(a1 + 6, *(_DWORD *)(a3 + 12));
        v70 = a1[60];
        v115 = v70;
        if ( v70 )
          ++*(_DWORD *)(v70 + 8);
        sub_CB55F0(a1 + 7, &v115);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_15843A0(a1, a2, a1[60], a1[62]);
        v71 = a1[11];
        if ( v71 )
        {
          v72 = *(_DWORD *)(a3 + 12);
          v73 = v71 + 8LL * *(unsigned int *)(v71 - 4);
          v74 = (__int64 *)(v71 + 8LL * v72);
          if ( (unsigned __int64)v74 >= v73 )
            goto LABEL_97;
          do
          {
            v75 = *v74;
            if ( *v74 )
            {
              v76 = a1[10];
              v33 = (*(_DWORD *)(v75 + 8))-- == 1;
              if ( v33 )
                sub_15D7BC0(v76, v75);
            }
            ++v74;
          }
          while ( (unsigned __int64)v74 < v73 );
          v71 = a1[11];
          if ( v71 )
LABEL_97:
            *(_DWORD *)(v71 - 4) = v72;
        }
        v80 = a1[62];
        v116[0] = v80;
        if ( v80 )
          ++*(_DWORD *)(v80 + 8);
        sub_CB5530(a1 + 11, v116);
        sub_CB1640(a1[62], a1[63]);
        v81 = a1[5];
        v82 = a1[60];
        a1[62] = 0;
        v83 = *(_DWORD *)(v81 - 4);
        *(_DWORD *)(v81 - 4) = v83 - 1;
        if ( a2 != v82 && v83 != 1 )
        {
          *(_BYTE *)(v81 + 16LL * (unsigned int)(v83 - 2) + 8) |= 2u;
          v82 = a1[60];
        }
        sub_CB1660(v82, a1[61]);
        a1[60] = 0;
        return sub_CB1640(v21, v104);
      }
      v106 = a1 + 6;
      sub_39BEE0(a1 + 6, *(_DWORD *)(a3 + 12));
      v27 = a1[60];
      v111 = v27;
      if ( v27 )
        ++*(_DWORD *)(v27 + 8);
      v108 = a1 + 7;
      sub_CB55F0(a1 + 7, &v111);
      v28 = a1[11];
      if ( v28 )
      {
        v29 = v28 + 8LL * *(unsigned int *)(v28 - 4);
        v102 = *(_DWORD *)(a3 + 12);
        v30 = (__int64 *)(v28 + 8LL * v102);
        if ( (unsigned __int64)v30 >= v29 )
          goto LABEL_26;
        do
        {
          v31 = *v30;
          if ( *v30 )
          {
            v32 = a1[10];
            v33 = (*(_DWORD *)(v31 + 8))-- == 1;
            if ( v33 )
            {
              *(_QWORD *)v98 = v30;
              sub_15D7BC0(v32, v31);
              v30 = *(__int64 **)v98;
            }
          }
          ++v30;
        }
        while ( (unsigned __int64)v30 < v29 );
        v28 = a1[11];
        if ( v28 )
LABEL_26:
          *(_DWORD *)(v28 - 4) = v102;
      }
      v35 = a1[64];
      if ( !v35 )
      {
        v79 = sub_15DE370(a1[1]);
        v35 = v79;
        if ( v79 )
          ++*(_DWORD *)(v79 + 8);
        sub_CB1640(a1[64], a1[65]);
        a1[64] = v35;
      }
      v36 = sub_15E2470(a1[1], a1[62], v35);
      v37 = a1[63];
      v38 = a1[62];
      v39 = v36;
      if ( v36 )
      {
        ++*(_DWORD *)(v36 + 8);
        sub_CB1640(v38, v37);
        a1[62] = v39;
        ++*(_DWORD *)(v39 + 8);
        v112 = v39;
      }
      else
      {
        sub_CB1640(v38, v37);
        a1[62] = 0;
        v112 = 0;
      }
      sub_CB5530(a1 + 11, &v112);
      sub_CB1640(a1[64], a1[65]);
      a1[64] = 0;
      v40 = a1[60];
      if ( v26 == 4 )
      {
        if ( (*(_BYTE *)(a3 + 8) & 1) == 0 )
          goto LABEL_33;
      }
      else
      {
        *(_BYTE *)(a3 + 8) = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
        if ( !(unsigned __int8)sub_CBB3E0((__int64)a1, v40, 2) )
        {
LABEL_35:
          sub_CB1660(a1[60], a1[61]);
          v43 = a1[63];
          v44 = a1[62];
          a1[60] = 0;
          sub_CB1640(v44, v43);
          a1[62] = 0;
          return sub_CB1640(v21, v104);
        }
        v84 = a1[11];
        v103 = a1[1];
        v85 = 0x7FFFFFFF8LL;
        if ( v84 )
          v85 = 8LL * (unsigned int)(*(_DWORD *)(v84 - 4) - 1);
        v86 = *(_QWORD *)(v84 + v85);
        v100 = v86;
        if ( v86 )
          ++*(_DWORD *)(v86 + 8);
        sub_3A8160(a1 + 10);
        v87 = a1[11];
        v88 = 0x7FFFFFFF8LL;
        if ( v87 )
          v88 = 8LL * (unsigned int)(*(_DWORD *)(v87 - 4) - 1);
        v89 = *(_QWORD *)(v87 + v88);
        if ( v89 )
          ++*(_DWORD *)(v89 + 8);
        sub_3A8160(a1 + 10);
        v90 = sub_15E2470(a1[1], v89, v100);
        v91 = a1[62];
        v92 = a1[63];
        if ( v90 )
        {
          ++*(_DWORD *)(v90 + 8);
          v110 = v90;
          sub_CB1640(v91, v92);
          a1[62] = v110;
          ++*(_DWORD *)(v110 + 8);
          v113 = v110;
        }
        else
        {
          sub_CB1640(v91, v92);
          a1[62] = 0;
          v113 = 0;
        }
        sub_CB5530(a1 + 11, &v113);
        sub_CB1640(v89, v103);
        sub_CB1640(v100, v103);
        v93 = a1[7];
        v94 = 0x7FFFFFFF8LL;
        if ( v93 )
          v94 = 8LL * (unsigned int)(*(_DWORD *)(v93 - 4) - 1);
        v95 = *(_QWORD *)(v93 + v94);
        if ( v95 )
          ++*(_DWORD *)(v95 + 8);
        sub_CB1660(a1[60], a1[61]);
        a1[60] = v95;
        sub_39BF70(v106);
        sub_39BF70(v106);
        v96 = (_DWORD *)a1[60];
        v114 = v96;
        if ( v96 )
          ++v96[2];
        sub_CB55F0(v108, &v114);
        if ( (*(_BYTE *)(a3 + 8) & 1) == 0 )
        {
LABEL_33:
          v41 = a1[5];
          v42 = *(_DWORD *)(v41 - 4);
          *(_DWORD *)(v41 - 4) = v42 - 1;
          if ( v42 != 1 )
            *(_BYTE *)(v41 + 16LL * (unsigned int)(v42 - 2) + 8) |= 2u;
          goto LABEL_35;
        }
      }
      sub_15843A0(a1, a2, a1[60], a1[62]);
      goto LABEL_33;
  }
  v45 = a1[1];
  v46 = a1[11];
  v47 = a1[10];
  *(_QWORD *)v99 = v45;
  if ( v46 )
  {
    v48 = (unsigned int)(*(_DWORD *)(v46 - 4) - 1);
    v49 = *(_QWORD *)(v46 + 8 * v48);
    v50 = *(_DWORD *)(v46 - 4) - 1;
    if ( !v49 )
    {
      *(_DWORD *)(v46 - 4) = v48;
      goto LABEL_44;
    }
    ++*(_DWORD *)(v49 + 8);
    v51 = (unsigned int)(*(_DWORD *)(v46 - 4) - 1);
    v52 = *(_QWORD *)(v46 + 8 * v51);
    v50 = *(_DWORD *)(v46 - 4) - 1;
    *(_DWORD *)(v46 - 4) = v51;
    if ( !v52 )
      goto LABEL_44;
  }
  else
  {
    v49 = MEMORY[0x7FFFFFFF8];
    if ( !MEMORY[0x7FFFFFFF8] )
    {
      v50 = --MEMORY[0xFFFFFFFFFFFFFFFC];
      goto LABEL_44;
    }
    ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
    v52 = MEMORY[0x7FFFFFFF8];
    --MEMORY[0xFFFFFFFFFFFFFFFC];
  }
  v33 = (*(_DWORD *)(v52 + 8))-- == 1;
  if ( !v33 )
  {
    v50 = *(_DWORD *)(v46 - 4);
    goto LABEL_44;
  }
  sub_15D7BC0(v47, v52);
  v46 = a1[11];
  if ( v46 )
  {
    v50 = *(_DWORD *)(v46 - 4);
    v47 = a1[10];
LABEL_44:
    v53 = (unsigned int)(v50 - 1);
    v54 = *(_QWORD *)(v46 + 8 * v53);
    if ( v54 )
    {
      ++*(_DWORD *)(v54 + 8);
      v55 = (unsigned int)(*(_DWORD *)(v46 - 4) - 1);
      v56 = *(_QWORD *)(v46 + 8 * v55);
      *(_DWORD *)(v46 - 4) = v55;
      if ( v56 )
        goto LABEL_46;
    }
    else
    {
      *(_DWORD *)(v46 - 4) = v53;
    }
    goto LABEL_48;
  }
  v54 = MEMORY[0x7FFFFFFF8];
  if ( MEMORY[0x7FFFFFFF8] )
  {
    ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
    v56 = MEMORY[0x7FFFFFFF8];
    v47 = a1[10];
    --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_46:
    v33 = (*(_DWORD *)(v56 + 8))-- == 1;
    if ( v33 )
      sub_15D7BC0(v47, v56);
    goto LABEL_48;
  }
  --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_48:
  v57 = sub_15E2470(a1[1], v54, v49);
  v58 = a1[63];
  v59 = a1[62];
  v60 = v57;
  if ( v57 )
  {
    ++*(_DWORD *)(v57 + 8);
    sub_CB1640(v59, v58);
    a1[62] = v60;
    ++*(_DWORD *)(v60 + 8);
    v116[0] = v60;
  }
  else
  {
    sub_CB1640(v59, v58);
    a1[62] = 0;
    v116[0] = 0;
  }
  sub_CB5530(a1 + 11, v116);
  if ( v54 )
  {
    v33 = (*(_DWORD *)(v54 + 8))-- == 1;
    if ( v33 )
      sub_15D7BC0(*(_QWORD *)v99, v54);
  }
  if ( v49 )
  {
    v33 = (*(_DWORD *)(v49 + 8))-- == 1;
    if ( v33 )
      sub_15D7BC0(*(_QWORD *)v99, v49);
  }
  v61 = 0x7FFFFFFF8LL;
  v62 = a1[7];
  if ( v62 )
    v61 = 8LL * (unsigned int)(*(_DWORD *)(v62 - 4) - 1);
  v63 = *(_QWORD *)(v62 + v61);
  if ( v63 )
    ++*(_DWORD *)(v63 + 8);
  sub_CB1660(a1[60], a1[61]);
  a1[60] = v63;
  sub_39BF70(a1 + 6);
  sub_39BF70(a1 + 6);
  v64 = a1[60];
  v116[0] = v64;
  if ( v64 )
    ++*(_DWORD *)(v64 + 8);
  sub_CB55F0(a1 + 7, v116);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
    sub_15843A0(a1, a2, a1[60], a1[62]);
  result = a1[5];
  v65 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v65 - 1;
  if ( v65 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v65 - 2) + 8) |= 2u;
  return result;
}

