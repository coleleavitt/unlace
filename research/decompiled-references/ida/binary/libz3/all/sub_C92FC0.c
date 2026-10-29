__int64 __fastcall sub_C92FC0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v7; // r12d
  __int64 v8; // rsi
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // r13
  int v15; // edx
  __int64 v16; // rsi
  __int64 *v17; // r14
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  __int64 v23; // r12
  __int64 v24; // rax
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 *v29; // r14
  unsigned __int64 v30; // r13
  __int64 v31; // rsi
  __int64 v32; // rdi
  bool v33; // zf
  __int64 v34; // rsi
  __int64 v35; // r13
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // r13
  __int64 v40; // rax
  int v41; // ecx
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // r13
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rsi
  __int64 v52; // rcx
  __int64 v53; // r12
  __int64 v54; // rcx
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // r14
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // r12
  __int64 v63; // rsi
  __int64 v64; // rdi
  int v65; // ecx
  __int64 v66; // rsi
  __int64 v67; // rdi
  __int64 v68; // rax
  int v69; // ecx
  __int64 v70; // rax
  __int64 v71; // r13
  __int64 v72; // rax
  __int64 v73; // r13
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 *v77; // r14
  unsigned __int64 v78; // r13
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  unsigned int v84; // r13d
  unsigned __int64 v85; // r14
  __int64 *v86; // rbx
  __int64 v87; // rsi
  __int64 v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdi
  int v92; // ecx
  __int64 v93; // [rsp+0h] [rbp-78h]
  int v94[2]; // [rsp+0h] [rbp-78h]
  __int64 *v95; // [rsp+8h] [rbp-70h]
  int v96; // [rsp+8h] [rbp-70h]
  int v97[2]; // [rsp+8h] [rbp-70h]
  int v98; // [rsp+8h] [rbp-70h]
  int v99; // [rsp+10h] [rbp-68h]
  __int64 v100; // [rsp+18h] [rbp-60h]
  __int64 v101; // [rsp+20h] [rbp-58h] BYREF
  __int64 v102; // [rsp+28h] [rbp-50h] BYREF
  __int64 v103; // [rsp+30h] [rbp-48h] BYREF
  __int64 v104; // [rsp+38h] [rbp-40h] BYREF
  int v105; // [rsp+40h] [rbp-38h]
  void *v106; // [rsp+48h] [rbp-30h]

  v3 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v3 == 2 )
  {
    v34 = 515;
LABEL_24:
    sub_1872CE0("");
    sub_1873130(107, v34);
  }
  if ( v3 == 3 )
  {
    v34 = 520;
    goto LABEL_24;
  }
  if ( v3 )
  {
    v44 = a1[1];
    v45 = a1[11];
    v46 = a1[10];
    *(_QWORD *)v94 = v44;
    if ( v45 )
    {
      v47 = (unsigned int)(*(_DWORD *)(v45 - 4) - 1);
      v48 = *(_QWORD *)(v45 + 8 * v47);
      v49 = *(_DWORD *)(v45 - 4) - 1;
      if ( !v48 )
      {
        *(_DWORD *)(v45 - 4) = v47;
        goto LABEL_43;
      }
      ++*(_DWORD *)(v48 + 8);
      v50 = (unsigned int)(*(_DWORD *)(v45 - 4) - 1);
      v51 = *(_QWORD *)(v45 + 8 * v50);
      v49 = *(_DWORD *)(v45 - 4) - 1;
      *(_DWORD *)(v45 - 4) = v50;
      if ( !v51 )
        goto LABEL_43;
    }
    else
    {
      v48 = MEMORY[0x7FFFFFFF8];
      if ( !MEMORY[0x7FFFFFFF8] )
      {
        v49 = --MEMORY[0xFFFFFFFFFFFFFFFC];
        goto LABEL_43;
      }
      ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
      v51 = MEMORY[0x7FFFFFFF8];
      --MEMORY[0xFFFFFFFFFFFFFFFC];
    }
    v33 = (*(_DWORD *)(v51 + 8))-- == 1;
    if ( v33 )
    {
      sub_15D7BC0(v46, v51);
      v45 = a1[11];
      if ( !v45 )
      {
        v53 = MEMORY[0x7FFFFFFF8];
        if ( MEMORY[0x7FFFFFFF8] )
        {
          ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
          v55 = MEMORY[0x7FFFFFFF8];
          v46 = a1[10];
          --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_45:
          v33 = (*(_DWORD *)(v55 + 8))-- == 1;
          if ( v33 )
            sub_15D7BC0(v46, v55);
          goto LABEL_47;
        }
        --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_47:
        v56 = sub_15E2470(a1[1], v53, v48);
        v57 = a1[63];
        v58 = a1[62];
        v59 = v56;
        if ( v56 )
        {
          ++*(_DWORD *)(v56 + 8);
          sub_C8A9D0(v58, v57);
          a1[62] = v59;
          ++*(_DWORD *)(v59 + 8);
          v104 = v59;
        }
        else
        {
          sub_C8A9D0(v58, v57);
          a1[62] = 0;
          v104 = 0;
        }
        sub_C8B230(a1 + 11, &v104);
        if ( v53 )
        {
          v33 = (*(_DWORD *)(v53 + 8))-- == 1;
          if ( v33 )
            sub_15D7BC0(*(_QWORD *)v94, v53);
        }
        if ( v48 )
        {
          v33 = (*(_DWORD *)(v48 + 8))-- == 1;
          if ( v33 )
            sub_15D7BC0(*(_QWORD *)v94, v48);
        }
        v60 = 0x7FFFFFFF8LL;
        v61 = a1[7];
        if ( v61 )
          v60 = 8LL * (unsigned int)(*(_DWORD *)(v61 - 4) - 1);
        v62 = *(_QWORD *)(v61 + v60);
        if ( v62 )
          ++*(_DWORD *)(v62 + 8);
        v63 = a1[60];
        if ( v63 )
        {
          v64 = a1[61];
          v33 = (*(_DWORD *)(v63 + 8))-- == 1;
          if ( v33 )
          {
            sub_15D7BC0(v64, v63);
            v61 = a1[7];
          }
        }
        v65 = *(_DWORD *)(v61 - 4);
        a1[60] = v62;
        v66 = *(_QWORD *)(v61 + 8LL * (unsigned int)(v65 - 1));
        *(_DWORD *)(v61 - 4) = v65 - 1;
        if ( v66 )
        {
          v67 = a1[6];
          v33 = (*(_DWORD *)(v66 + 8))-- == 1;
          if ( v33 )
            sub_15D7BC0(v67, v66);
        }
        sub_39BF70(a1 + 6);
        v68 = a1[60];
        v104 = v68;
        if ( v68 )
          ++*(_DWORD *)(v68 + 8);
        sub_C8B2F0(a1 + 7, &v104);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_15843A0(a1, a2, a1[60], a1[62]);
        result = a1[5];
        v69 = *(_DWORD *)(result - 4);
        *(_DWORD *)(result - 4) = v69 - 1;
        if ( v69 != 1 )
          *(_BYTE *)(result + 16LL * (unsigned int)(v69 - 2) + 8) |= 2u;
        return result;
      }
      v49 = *(_DWORD *)(v45 - 4);
      v46 = a1[10];
    }
    else
    {
      v49 = *(_DWORD *)(v45 - 4);
    }
LABEL_43:
    v52 = (unsigned int)(v49 - 1);
    v53 = *(_QWORD *)(v45 + 8 * v52);
    if ( v53 )
    {
      ++*(_DWORD *)(v53 + 8);
      v54 = (unsigned int)(*(_DWORD *)(v45 - 4) - 1);
      v55 = *(_QWORD *)(v45 + 8 * v54);
      *(_DWORD *)(v45 - 4) = v54;
      if ( v55 )
        goto LABEL_45;
    }
    else
    {
      *(_DWORD *)(v45 - 4) = v52;
    }
    goto LABEL_47;
  }
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
    result = sub_C8DA40(a1, v8, ((unsigned __int8)v9 >> 4) & 3);
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
  HIDWORD(v100) = v15 - v16;
  v17 = (__int64 *)(v13 + 8LL * (unsigned int)v16);
  v93 = a1[1];
  sub_1584610(a1, v16);
  v20 = a1[11];
  if ( v20 )
    v21 = *(_DWORD *)(v20 - 4);
  else
    v21 = 0;
  v22 = v21 - *(_DWORD *)(a3 + 12);
  if ( v22 )
  {
    v74 = sub_15DC610(
            a1[1],
            v14,
            SHIDWORD(v100),
            (int)v17,
            v18,
            v19,
            v93,
            v22,
            v99,
            v100,
            v101,
            v102,
            v103,
            v104,
            v105,
            v106);
    v23 = v74;
    if ( v74 )
      ++*(_DWORD *)(v74 + 8);
    v75 = sub_15E2980(a1[1]);
    if ( v75 )
      ++*(_DWORD *)(v75 + 8);
    *(_QWORD *)v97 = v75;
    sub_C8A9D0(a1[62], a1[63]);
    v24 = *(_QWORD *)v97;
  }
  else
  {
    ++*(_DWORD *)(a2 + 8);
    sub_C8A9D0(a1[62], a1[63]);
    v23 = a2;
    v24 = 0;
  }
  a1[62] = v24;
  v95 = (__int64 *)a1[18];
  sub_C8A9D0(a1[64], a1[65]);
  a1[64] = 0;
  if ( (unsigned int)sub_C8AAA0(v95, v14, v17, a1 + 60) == 5 )
  {
    if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
    {
      v70 = sub_15DC610(
              a1[1],
              v14,
              SHIDWORD(v100),
              (int)v17,
              v25,
              v26,
              v93,
              (int)v95,
              (int)a1 + 480,
              v100,
              v101,
              v102,
              v103,
              v104,
              v105,
              v106);
      v71 = v70;
      if ( v70 )
        ++*(_DWORD *)(v70 + 8);
      sub_C8A9F0(a1[60], a1[61]);
      a1[60] = v71;
      v72 = sub_15DE370(a1[1]);
      v73 = v72;
      if ( v72 )
        ++*(_DWORD *)(v72 + 8);
      sub_C8A9D0(a1[62], a1[63]);
      a1[62] = v73;
    }
    else
    {
      ++*(_DWORD *)(a2 + 8);
      sub_C8A9F0(a1[60], a1[61]);
      a1[60] = a2;
    }
    v76 = a1[7];
    if ( v76 )
    {
      v77 = (__int64 *)(v76 + 8LL * *(unsigned int *)(a3 + 12));
      v78 = v76 + 8LL * *(unsigned int *)(v76 - 4);
      v98 = *(_DWORD *)(a3 + 12);
      if ( (unsigned __int64)v77 >= v78 )
        goto LABEL_98;
      do
      {
        v79 = *v77;
        if ( *v77 )
        {
          v80 = a1[6];
          v33 = (*(_DWORD *)(v79 + 8))-- == 1;
          if ( v33 )
            sub_15D7BC0(v80, v79);
        }
        ++v77;
      }
      while ( (unsigned __int64)v77 < v78 );
      v76 = a1[7];
      if ( v76 )
LABEL_98:
        *(_DWORD *)(v76 - 4) = v98;
    }
    v82 = a1[60];
    v103 = v82;
    if ( v82 )
      ++*(_DWORD *)(v82 + 8);
    sub_C8B2F0(a1 + 7, &v103);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_15843A0(a1, a2, a1[60], a1[62]);
    v83 = a1[11];
    if ( v83 )
    {
      v84 = *(_DWORD *)(a3 + 12);
      v85 = v83 + 8LL * *(unsigned int *)(v83 - 4);
      v86 = (__int64 *)(v83 + 8LL * v84);
      if ( (unsigned __int64)v86 >= v85 )
        goto LABEL_111;
      do
      {
        v87 = *v86;
        if ( *v86 )
        {
          v88 = a1[10];
          v33 = (*(_DWORD *)(v87 + 8))-- == 1;
          if ( v33 )
            sub_15D7BC0(v88, v87);
        }
        ++v86;
      }
      while ( (unsigned __int64)v86 < v85 );
      v83 = a1[11];
      if ( v83 )
LABEL_111:
        *(_DWORD *)(v83 - 4) = v84;
    }
    v89 = a1[62];
    v104 = v89;
    if ( v89 )
      ++*(_DWORD *)(v89 + 8);
    sub_C8B230(a1 + 11, &v104);
    sub_C8A9D0(a1[62], a1[63]);
    v90 = a1[5];
    v91 = a1[60];
    a1[62] = 0;
    v92 = *(_DWORD *)(v90 - 4);
    *(_DWORD *)(v90 - 4) = v92 - 1;
    if ( a2 != v91 && v92 != 1 )
    {
      *(_BYTE *)(v90 + 16LL * (unsigned int)(v92 - 2) + 8) |= 2u;
      v91 = a1[60];
    }
    sub_C8A9F0(v91, a1[61]);
    a1[60] = 0;
  }
  else
  {
    sub_39BEE0(a1 + 6, *(_DWORD *)(a3 + 12));
    v27 = a1[60];
    v101 = v27;
    if ( v27 )
      ++*(_DWORD *)(v27 + 8);
    sub_C8B2F0(a1 + 7, &v101);
    v28 = a1[11];
    if ( v28 )
    {
      v29 = (__int64 *)(v28 + 8LL * *(unsigned int *)(a3 + 12));
      v30 = v28 + 8LL * *(unsigned int *)(v28 - 4);
      v96 = *(_DWORD *)(a3 + 12);
      if ( (unsigned __int64)v29 >= v30 )
        goto LABEL_26;
      do
      {
        v31 = *v29;
        if ( *v29 )
        {
          v32 = a1[10];
          v33 = (*(_DWORD *)(v31 + 8))-- == 1;
          if ( v33 )
            sub_15D7BC0(v32, v31);
        }
        ++v29;
      }
      while ( (unsigned __int64)v29 < v30 );
      v28 = a1[11];
      if ( v28 )
LABEL_26:
        *(_DWORD *)(v28 - 4) = v96;
    }
    v35 = a1[64];
    if ( !v35 )
    {
      v81 = sub_15DE370(a1[1]);
      v35 = v81;
      if ( v81 )
        ++*(_DWORD *)(v81 + 8);
      sub_C8A9D0(a1[64], a1[65]);
      a1[64] = v35;
    }
    v36 = sub_15E2470(a1[1], a1[62], v35);
    v37 = a1[63];
    v38 = a1[62];
    v39 = v36;
    if ( v36 )
    {
      ++*(_DWORD *)(v36 + 8);
      sub_C8A9D0(v38, v37);
      a1[62] = v39;
      ++*(_DWORD *)(v39 + 8);
      v102 = v39;
    }
    else
    {
      sub_C8A9D0(v38, v37);
      a1[62] = 0;
      v102 = 0;
    }
    sub_C8B230(a1 + 11, &v102);
    sub_C8A9D0(a1[64], a1[65]);
    a1[64] = 0;
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_15843A0(a1, a2, a1[60], a1[62]);
    v40 = a1[5];
    v41 = *(_DWORD *)(v40 - 4);
    *(_DWORD *)(v40 - 4) = v41 - 1;
    if ( v41 != 1 )
      *(_BYTE *)(v40 + 16LL * (unsigned int)(v41 - 2) + 8) |= 2u;
    sub_C8A9F0(a1[60], a1[61]);
    v42 = a1[63];
    v43 = a1[62];
    a1[60] = 0;
    sub_C8A9D0(v43, v42);
    a1[62] = 0;
  }
  return sub_C8A9D0(v23, v93);
}

