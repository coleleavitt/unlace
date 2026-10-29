unsigned __int64 __fastcall sub_69B340(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rsi
  int v6; // ebp
  char *v7; // r14
  __int64 v8; // rax
  __int64 v9; // r15
  unsigned __int64 v10; // rdx
  char *v11; // rax
  unsigned int j; // eax
  unsigned int v13; // ebp
  int v14; // eax
  int v15; // r8d
  __int64 v16; // rax
  char *v17; // r14
  unsigned __int64 v18; // rdx
  char *v19; // rax
  __int64 v20; // rsi
  unsigned int k; // eax
  char *v22; // rax
  __int64 v23; // rsi
  unsigned int v24; // r14d
  int v25; // r9d
  _QWORD *v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r9
  __int64 *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rsi
  bool v35; // cf
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 *v43; // rdi
  __int64 v44; // rax
  char *v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r10
  __int64 *v48; // rdi
  __int64 v49; // rax
  char *v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rbp
  __int64 *v53; // rdi
  __int64 v54; // rax
  char *v55; // rdx
  __int64 v56; // rcx
  int v57; // r12d
  char *v58; // rbp
  __int64 v59; // rax
  __int64 v60; // r14
  unsigned __int64 v61; // rdx
  __int64 v62; // rsi
  char v63; // al
  char *v64; // rbp
  char *v65; // r14
  const char *v66; // r13
  char *v67; // r12
  __int64 v68; // rdi
  char *v70; // rax
  __int64 v71; // r9
  __int64 *v72; // rdi
  __int64 v73; // rax
  char *v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r12
  __int64 *v77; // rdi
  __int64 v78; // rax
  char *v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r13
  __int64 *v82; // rdi
  __int64 v83; // rax
  char *v84; // rdx
  __int64 v85; // rcx
  int v86[2]; // [rsp+0h] [rbp-D8h]
  _QWORD *v87; // [rsp+0h] [rbp-D8h]
  int v88; // [rsp+0h] [rbp-D8h]
  int v89[2]; // [rsp+0h] [rbp-D8h]
  int v90[2]; // [rsp+0h] [rbp-D8h]
  int v91; // [rsp+0h] [rbp-D8h]
  int v92[2]; // [rsp+0h] [rbp-D8h]
  __int64 v93; // [rsp+8h] [rbp-D0h]
  __int64 v94; // [rsp+8h] [rbp-D0h]
  _QWORD *v95; // [rsp+8h] [rbp-D0h]
  __int64 v96; // [rsp+8h] [rbp-D0h]
  __int64 v97; // [rsp+8h] [rbp-D0h]
  char v98; // [rsp+10h] [rbp-C8h]
  unsigned int i; // [rsp+20h] [rbp-B8h]
  unsigned int v100; // [rsp+24h] [rbp-B4h]
  _QWORD *v101; // [rsp+28h] [rbp-B0h]
  int v102; // [rsp+38h] [rbp-A0h] BYREF
  int v103; // [rsp+3Ch] [rbp-9Ch] BYREF
  void *v104; // [rsp+40h] [rbp-98h] BYREF
  __int128 v105; // [rsp+48h] [rbp-90h]
  void *ptr; // [rsp+60h] [rbp-78h] BYREF
  __int128 v107; // [rsp+68h] [rbp-70h]
  __int64 v108[3]; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v109; // [rsp+98h] [rbp-40h]

  v100 = a2;
  v109 = __readfsqword(0x28u);
  v3 = *a1;
  v105 = 0;
  v104 = nullptr;
  v101 = *(_QWORD **)(v3 + 1480);
  for ( i = sub_6A9D10(*(_QWORD *)(v3 + 1680), a2); ; i = sub_6A9D70(*(_QWORD *)(*a1 + 1680), v100) )
  {
    v103 = -1;
    if ( i == -1 )
    {
      v103 = sub_3B90A0(v101, v100);
    }
    else
    {
      v4 = sub_3B90A0(v101, v100);
      v5 = *a1;
      LODWORD(v108[0]) = v4;
      v6 = sub_79B3A0(v108, v5, i, 109) - 1;
      v7 = (char *)v104;
      v8 = v105;
      BYTE4(v108[0]) = 0;
      v103 = v6;
      v9 = *((_QWORD *)&v105 + 1);
      LODWORD(v108[0]) = v6;
      v10 = v105 + 1;
      if ( v108 < v104 || v108 >= (__int64 *)((char *)v104 + 8 * *((_QWORD *)&v105 + 1)) )
      {
        if ( *((_QWORD *)&v105 + 1) < v10 )
        {
          v7 = (char *)qvector_reserve(&v104, 0, v10, 8);
          v52 = *((_QWORD *)&v105 + 1);
          *((_QWORD *)&v105 + 1) = v9;
          v53 = (__int64 *)v104;
          v54 = v105 - 1;
          if ( (__int64)v105 - 1 >= 0 )
          {
            v55 = v7;
            do
            {
              v56 = *v53;
              v55 += 8;
              ++v53;
              *((_QWORD *)v55 - 1) = v56;
              v35 = v54-- == 0;
            }
            while ( !v35 );
            v53 = (__int64 *)v104;
          }
          qfree(v53);
          v104 = v7;
          v8 = v105;
          *((_QWORD *)&v105 + 1) = v52;
        }
        *(_QWORD *)&v7[8 * v8] = v108[0];
      }
      else
      {
        if ( *((_QWORD *)&v105 + 1) < v10 )
        {
          v7 = (char *)qvector_reserve(&v104, 0, v10, 8);
          v71 = *((_QWORD *)&v105 + 1);
          *((_QWORD *)&v105 + 1) = v9;
          v72 = (__int64 *)v104;
          v73 = v105 - 1;
          if ( (__int64)v105 - 1 >= 0 )
          {
            v74 = v7;
            do
            {
              v75 = *v72;
              v74 += 8;
              ++v72;
              *((_QWORD *)v74 - 1) = v75;
              v35 = v73-- == 0;
            }
            while ( !v35 );
            v72 = (__int64 *)v104;
          }
          *(_QWORD *)v92 = v71;
          qfree(v72);
          v8 = v105;
          v104 = v7;
          *((_QWORD *)&v105 + 1) = *(_QWORD *)v92;
        }
        v11 = &v7[8 * v8];
        *(_DWORD *)v11 = v6;
        v11[4] = 0;
      }
      *(_QWORD *)&v105 = v105 + 1;
    }
    for ( j = sub_79B7E0(&v103, *a1, 69); ; j = sub_79B840(&v103, *a1, v13, 69) )
    {
      v13 = j;
      v14 = sub_79B3A0(&v103, *a1, j, 69);
      v15 = v14 - 1;
      LODWORD(ptr) = v14 - 1;
      if ( v14 )
      {
        v16 = v105;
        v17 = (char *)v104;
        LODWORD(v108[0]) = v15;
        BYTE4(v108[0]) = 1;
        v18 = v105 + 1;
        if ( v108 < v104 || v108 >= (__int64 *)((char *)v104 + 8 * *((_QWORD *)&v105 + 1)) )
        {
          if ( *((_QWORD *)&v105 + 1) < v18 )
          {
            *(_QWORD *)v89 = *((_QWORD *)&v105 + 1);
            v17 = (char *)qvector_reserve(&v104, 0, v18, 8);
            v42 = *((_QWORD *)&v105 + 1);
            v43 = (__int64 *)v104;
            *((_QWORD *)&v105 + 1) = *(_QWORD *)v89;
            v44 = v105 - 1;
            if ( (__int64)v105 - 1 >= 0 )
            {
              v45 = v17;
              do
              {
                v46 = *v43;
                v45 += 8;
                ++v43;
                *((_QWORD *)v45 - 1) = v46;
                v35 = v44-- == 0;
              }
              while ( !v35 );
              v43 = (__int64 *)v104;
            }
            *(_QWORD *)v90 = v42;
            qfree(v43);
            v16 = v105;
            v104 = v17;
            *((_QWORD *)&v105 + 1) = *(_QWORD *)v90;
          }
          *(_QWORD *)&v17[8 * v16] = v108[0];
        }
        else
        {
          if ( *((_QWORD *)&v105 + 1) < v18 )
          {
            v91 = v15;
            v96 = *((_QWORD *)&v105 + 1);
            v17 = (char *)qvector_reserve(&v104, 0, v18, 8);
            v47 = *((_QWORD *)&v105 + 1);
            v48 = (__int64 *)v104;
            v49 = v105 - 1;
            *((_QWORD *)&v105 + 1) = v96;
            if ( (__int64)v105 - 1 >= 0 )
            {
              v50 = v17;
              do
              {
                v51 = *v48;
                v50 += 8;
                ++v48;
                *((_QWORD *)v50 - 1) = v51;
                v35 = v49-- == 0;
              }
              while ( !v35 );
              v48 = (__int64 *)v104;
            }
            v97 = v47;
            qfree(v48);
            v16 = v105;
            v104 = v17;
            v15 = v91;
            *((_QWORD *)&v105 + 1) = v97;
          }
          v19 = &v17[8 * v16];
          *(_DWORD *)v19 = v15;
          v19[4] = 1;
        }
        v20 = *a1;
        *(_QWORD *)&v105 = v105 + 1;
        for ( k = sub_79B7E0(&ptr, v20, 115); ; k = sub_79B840(&ptr, v23, v24, 115) )
        {
          v24 = k;
          if ( k == -1 )
            break;
          v25 = sub_79B3A0(&ptr, *a1, k, 115) - 1;
          v26 = v104;
          v27 = v105;
          BYTE4(v108[0]) = 1;
          LODWORD(v108[0]) = v25;
          v28 = v105 + 1;
          if ( v108 < v104 || v108 >= (__int64 *)((char *)v104 + 8 * *((_QWORD *)&v105 + 1)) )
          {
            if ( *((_QWORD *)&v105 + 1) < v28 )
            {
              *(_QWORD *)v86 = *((_QWORD *)&v105 + 1);
              v29 = qvector_reserve(&v104, 0, v28, 8);
              v30 = *((_QWORD *)&v105 + 1);
              v31 = (__int64 *)v104;
              *((_QWORD *)&v105 + 1) = *(_QWORD *)v86;
              v32 = v105 - 1;
              if ( (__int64)v105 - 1 >= 0 )
              {
                v33 = v29;
                do
                {
                  v34 = *v31;
                  v33 += 8;
                  ++v31;
                  *(_QWORD *)(v33 - 8) = v34;
                  v35 = v32-- == 0;
                }
                while ( !v35 );
                v31 = (__int64 *)v104;
              }
              v93 = v30;
              v87 = (_QWORD *)v29;
              qfree(v31);
              v26 = v87;
              v27 = v105;
              v104 = v87;
              *((_QWORD *)&v105 + 1) = v93;
            }
            v26[v27] = v108[0];
          }
          else
          {
            if ( *((_QWORD *)&v105 + 1) < v28 )
            {
              v88 = v25;
              v94 = *((_QWORD *)&v105 + 1);
              v36 = qvector_reserve(&v104, 0, v28, 8);
              v37 = *((_QWORD *)&v105 + 1);
              v38 = (__int64 *)v104;
              v39 = v105 - 1;
              *((_QWORD *)&v105 + 1) = v94;
              if ( (__int64)v105 - 1 >= 0 )
              {
                v40 = v36;
                do
                {
                  v41 = *v38;
                  v40 += 8;
                  ++v38;
                  *(_QWORD *)(v40 - 8) = v41;
                  v35 = v39-- == 0;
                }
                while ( !v35 );
                v38 = (__int64 *)v104;
              }
              v95 = (_QWORD *)v36;
              qfree(v38);
              v26 = v95;
              v27 = v105;
              v25 = v88;
              v104 = v95;
              *((_QWORD *)&v105 + 1) = v37;
            }
            v22 = (char *)&v26[v27];
            *(_DWORD *)v22 = v25;
            v22[4] = 1;
          }
          v23 = *a1;
          *(_QWORD *)&v105 = v105 + 1;
        }
      }
      if ( v13 == -1 )
        break;
    }
    if ( i == -1 )
      break;
  }
  v102 = sub_3B90A0(v101, v100);
  v57 = v102;
  v58 = (char *)v104;
  LODWORD(v108[0]) = v102;
  v59 = v105;
  BYTE4(v108[0]) = 1;
  v60 = *((_QWORD *)&v105 + 1);
  v61 = v105 + 1;
  if ( v108 >= v104 && v108 < (__int64 *)((char *)v104 + 8 * *((_QWORD *)&v105 + 1)) )
  {
    if ( *((_QWORD *)&v105 + 1) < v61 )
    {
      v58 = (char *)qvector_reserve(&v104, 0, v61, 8);
      v81 = *((_QWORD *)&v105 + 1);
      *((_QWORD *)&v105 + 1) = v60;
      v82 = (__int64 *)v104;
      v83 = v105 - 1;
      if ( (__int64)v105 - 1 >= 0 )
      {
        v84 = v58;
        do
        {
          v85 = *v82;
          v84 += 8;
          ++v82;
          *((_QWORD *)v84 - 1) = v85;
          v35 = v83-- == 0;
        }
        while ( !v35 );
        v82 = (__int64 *)v104;
      }
      qfree(v82);
      v104 = v58;
      v59 = v105;
      *((_QWORD *)&v105 + 1) = v81;
    }
    v70 = &v58[8 * v59];
    *(_DWORD *)v70 = v57;
    v70[4] = 1;
  }
  else
  {
    if ( *((_QWORD *)&v105 + 1) < v61 )
    {
      v58 = (char *)qvector_reserve(&v104, 0, v61, 8);
      v76 = *((_QWORD *)&v105 + 1);
      *((_QWORD *)&v105 + 1) = v60;
      v77 = (__int64 *)v104;
      v78 = v105 - 1;
      if ( (__int64)v105 - 1 >= 0 )
      {
        v79 = v58;
        do
        {
          v80 = *v77;
          v79 += 8;
          ++v77;
          *((_QWORD *)v79 - 1) = v80;
          v35 = v78-- == 0;
        }
        while ( !v35 );
        v77 = (__int64 *)v104;
      }
      qfree(v77);
      v104 = v58;
      v59 = v105;
      *((_QWORD *)&v105 + 1) = v76;
    }
    *(_QWORD *)&v58[8 * v59] = v108[0];
  }
  v62 = *a1;
  *(_QWORD *)&v105 = v105 + 1;
  v63 = sub_79B3A0(&v102, v62, 4294967291LL, 65);
  v64 = (char *)v104;
  v98 = (v63 & 2) != 0;
  v65 = (char *)v104 + 8 * v105;
  if ( v65 != v104 )
  {
    while ( 1 )
    {
      v68 = *(unsigned int *)v64;
      ptr = nullptr;
      v107 = 0;
      v103 = v68;
      netnode_get_name(v68, &ptr);
      if ( v64[4] )
      {
        sub_79BF70(v64, *a1, 65);
        sub_79BF70(v64, *a1, 69);
        sub_79BF70(v64, *a1, 69);
        sub_79BF70(v64, *a1, 115);
        sub_79BF70(v64, *a1, 83);
      }
      else
      {
        sub_79BCF0((int)v64);
      }
      if ( (unsigned __int64)v107 > 1 )
        break;
LABEL_75:
      if ( ptr )
      {
        *(_QWORD *)&v107 = 0;
        qfree(ptr);
      }
      v64 += 8;
      if ( v65 == v64 )
        goto LABEL_82;
    }
    v66 = (const char *)ptr;
    if ( (unsigned __int64)(v107 - 1) > 2
      && *(_BYTE *)ptr == 36
      && *((_BYTE *)ptr + 1) == 36
      && *((_BYTE *)ptr + 2) == 32 )
    {
      ptr = nullptr;
      v107 = 0;
    }
    else
    {
      sub_698E00(v108, (const char *)ptr);
      v67 = (char *)v108[0];
      if ( !v108[1] )
      {
        v66 = haystack;
        goto LABEL_71;
      }
      v66 = (const char *)v108[0];
    }
    v67 = (char *)v66;
LABEL_71:
    netnode_check(v108, v66, 0, 0);
    if ( LODWORD(v108[0]) != -1 )
      sub_79BCF0((int)v108);
    sub_79BD70(&v103, *a1, v66, 0);
    if ( v67 )
      qfree(v67);
    goto LABEL_75;
  }
LABEL_82:
  sub_69B2A0(a1, v100, 1u, v98);
  if ( v104 )
  {
    *(_QWORD *)&v105 = 0;
    qfree(v104);
  }
  return v109 - __readfsqword(0x28u);
}

