__int64 __fastcall sub_82040(_DWORD *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  _DWORD *v5; // r11
  unsigned __int64 v6; // rsi
  int *v8; // rax
  _BYTE *v9; // rdx
  int *v10; // rdi
  int v11; // ecx
  __int64 v12; // rbp
  unsigned __int64 v13; // r13
  __int64 v14; // rax
  _BYTE *v15; // rbx
  unsigned int *v16; // rdi
  char *v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  unsigned int *v20; // r12
  __int64 v21; // rdi
  unsigned int v22; // r10d
  unsigned __int64 v23; // r14
  unsigned __int64 i; // rbp
  __int64 v25; // rax
  _BYTE *v26; // r14
  unsigned int *v27; // rcx
  __int64 *v28; // r9
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // r8
  __int64 v31; // rsi
  __int64 v32; // rdi
  unsigned int *v33; // rdi
  unsigned __int64 v34; // rbp
  __int64 v35; // r12
  unsigned __int64 v36; // r11
  __int64 *v37; // r10
  __int64 v38; // rcx
  _DWORD *v39; // rbx
  unsigned int v40; // r8d
  __int64 *v41; // rbp
  unsigned __int64 v42; // rbx
  __int64 v43; // rbp
  unsigned __int64 v44; // r10
  __int64 *v45; // r8
  __int64 v46; // rax
  _DWORD *v47; // r11
  unsigned int v48; // esi
  __int64 *v49; // rbx
  unsigned int *v50; // rsi
  unsigned int v51; // ebx
  unsigned int v52; // r11d
  unsigned int v53; // r10d
  bool v54; // cf
  unsigned int v55; // ebp
  unsigned __int64 v56; // r11
  unsigned int v57; // ebx
  unsigned __int64 j; // rdi
  __int64 v59; // rsi
  unsigned int *v60; // rbp
  _DWORD *v61; // r10
  __int64 v62; // r8
  unsigned __int64 v63; // r12
  char v64; // r14
  __int64 v65; // rax
  unsigned __int64 v66; // rcx
  unsigned int *v67; // rax
  unsigned int v68; // ecx
  unsigned __int64 v70; // [rsp+0h] [rbp-20B8h]
  unsigned __int64 v71; // [rsp+0h] [rbp-20B8h]
  unsigned __int64 v72; // [rsp+0h] [rbp-20B8h]
  __int64 v73; // [rsp+8h] [rbp-20B0h]
  unsigned int *v74; // [rsp+10h] [rbp-20A8h]
  unsigned __int64 v75; // [rsp+10h] [rbp-20A8h]
  unsigned int *v76; // [rsp+20h] [rbp-2098h]
  _DWORD *v77; // [rsp+28h] [rbp-2090h]
  __int64 v78; // [rsp+30h] [rbp-2088h]
  unsigned __int64 v79; // [rsp+38h] [rbp-2080h]
  unsigned __int64 v80; // [rsp+40h] [rbp-2078h]
  unsigned int *v81; // [rsp+50h] [rbp-2068h]
  unsigned __int64 v82; // [rsp+58h] [rbp-2060h]
  __int64 v83; // [rsp+60h] [rbp-2058h] BYREF
  __int64 v84; // [rsp+68h] [rbp-2050h]
  _DWORD v85[3]; // [rsp+870h] [rbp-1848h] BYREF
  char v86; // [rsp+87Ch] [rbp-183Ch] BYREF
  _BYTE v87[6136]; // [rsp+880h] [rbp-1838h] BYREF
  unsigned __int64 v88; // [rsp+2078h] [rbp-40h]

  v5 = a1;
  v6 = a3;
  v88 = __readfsqword(0x28u);
  if ( a3 )
  {
    v8 = a1;
    v9 = v87;
    v10 = &a1[v6];
    do
    {
      v11 = *v8++;
      v9 += 12;
      *((_DWORD *)v9 - 3) = v11;
    }
    while ( v10 != v8 );
  }
  v83 = 0;
  v12 = 0;
  *(_QWORD *)v85 = 0;
  if ( !v6 )
    return v12;
  v13 = a4;
  v82 = v6 + 1;
  v14 = 3 * (v6 + 1);
  v15 = v87;
  v16 = &v85[v14 + 1];
  v81 = &v85[v14];
  while ( 2 )
  {
    v17 = &v86;
    v18 = 1;
    v19 = 0;
    v20 = v16;
    while ( 1 )
    {
      v22 = *((_DWORD *)v17 + 1);
      *(_DWORD *)v17 = 0;
      *((_DWORD *)v17 + 2) = 0;
      if ( v22 )
        break;
      v21 = v18 + 1;
      v17 += 12;
      if ( v6 == v18 )
        goto LABEL_13;
LABEL_8:
      v18 = v21;
    }
    v70 = v19 + 1;
    v23 = v19 + 1;
    for ( i = (v19 + 1) >> 1; ; i >>= 1 )
    {
      v25 = *(&v83 + i);
      if ( *(_QWORD *)&v85[3 * v25] <= __PAIR64__(v22, 0) )
        break;
      *(&v83 + v23) = v25;
      v23 = i;
    }
    *(&v83 + v23) = v18;
    v19 = v70;
    v21 = v18 + 1;
    v17 += 12;
    if ( v6 != v18 )
      goto LABEL_8;
LABEL_13:
    v16 = v20;
    if ( v19 == 1 )
    {
      if ( *v5 )
        v19 = v6;
      v85[3 * v19 + 1] = 1;
      goto LABEL_62;
    }
    if ( v19 > 1 )
    {
      v78 = a2;
      v26 = v15;
      v80 = v13;
      v27 = v81;
      v28 = &v83 + v19;
      v29 = v19 - 2;
      v76 = v20;
      v30 = v82;
      v77 = v5;
      v79 = v6;
      while ( 1 )
      {
        v31 = *v28;
        --v19;
        v32 = 3 * v84;
        v84 = *v28;
        v33 = &v85[v32];
        if ( v19 == 1 )
        {
          v84 = *(v28 - 1);
        }
        else
        {
          v71 = v30;
          v34 = 2;
          v35 = 1;
          v74 = v27;
          while ( 1 )
          {
            if ( v34 >= v19
              || (v36 = v34 + 1,
                  v37 = &v83 + v34 + 1,
                  v38 = *v37,
                  v39 = &v85[3 * *v37],
                  v40 = v39[1],
                  *(_QWORD *)v39 >= *(_QWORD *)&v85[3 * *(&v83 + 2 * v35)]) )
            {
              v37 = &v83 + v34;
              v36 = v34;
              v38 = *v37;
              v39 = &v85[3 * *v37];
              v40 = v39[1];
            }
            v41 = &v83 + v35;
            if ( __PAIR64__(v40, *v39) >= *(_QWORD *)&v85[3 * *v41] )
              break;
            *v37 = *v41;
            *v41 = v38;
            v34 = 2 * v36;
            if ( v19 < 2 * v36 )
              break;
            v35 = v36;
          }
          v31 = v84;
          v30 = v71;
          v84 = *(v28 - 1);
          v27 = v74;
          if ( v29 > 1 )
          {
            v72 = v19;
            v42 = 2;
            v43 = 1;
            v73 = v31;
            v75 = v30;
            while ( 1 )
            {
              if ( v42 >= v29
                || (v44 = v42 + 1,
                    v45 = &v83 + v42 + 1,
                    v46 = *v45,
                    v47 = &v85[3 * *v45],
                    v48 = v47[1],
                    *(_QWORD *)v47 >= *(_QWORD *)&v85[3 * *(&v83 + 2 * v43)]) )
              {
                v45 = &v83 + v42;
                v44 = v42;
                v46 = *v45;
                v47 = &v85[3 * *v45];
                v48 = v47[1];
              }
              v49 = &v83 + v43;
              if ( __PAIR64__(v48, *v47) >= *(_QWORD *)&v85[3 * *v49] )
                break;
              *v45 = *v49;
              *v49 = v46;
              v42 = 2 * v44;
              if ( v29 < 2 * v44 )
                break;
              v43 = v44;
            }
            v19 = v72;
            v31 = v73;
            v30 = v75;
          }
        }
        v50 = &v85[3 * v31];
        v27[1] = v33[1] + v50[1];
        v51 = *v33;
        v52 = *v50;
        v27[2] = 0;
        v53 = v51 + 1;
        v54 = v51 < v52;
        v55 = v52 + 1;
        v56 = v19;
        if ( v54 )
          v53 = v55;
        *v27 = v53;
        v50[2] = v30;
        v33[2] = v30;
        v57 = v27[1];
        for ( j = v19 >> 1; ; j >>= 1 )
        {
          while ( 1 )
          {
            v59 = *(&v83 + j);
            v60 = &v85[3 * v59];
            if ( v57 >= v60[1] )
              break;
            *(&v83 + v56) = v59;
            v56 = j;
            j >>= 1;
          }
          if ( v57 != v60[1] || *v27 >= *v60 )
            break;
          *(&v83 + v56) = v59;
          v56 = j;
        }
        *(&v83 + v56) = v30;
        --v28;
        v27 += 3;
        --v29;
        if ( v19 == 1 )
          break;
        ++v30;
      }
      v16 = v76;
      v5 = v77;
      v15 = v26;
      a2 = v78;
      v6 = v79;
      v13 = v80;
    }
    v61 = v15;
    v62 = 1;
    v12 = 0;
    v63 = 0;
    while ( 1 )
    {
      v64 = 0;
      if ( *v61 )
      {
        v65 = (unsigned int)v61[1];
        v66 = 0;
        if ( v61[1] )
        {
          do
          {
            ++v66;
            v65 = (unsigned int)v85[3 * v65 + 2];
          }
          while ( v65 );
          v64 = v66;
          v63 |= v13 < v66;
        }
        v12 += v66 * (unsigned int)v5[v62 - 1];
      }
      *(_BYTE *)(a2 + v62 - 1) = v64;
      v61 += 3;
      if ( v6 == v62 )
        break;
      ++v62;
    }
    v67 = (unsigned int *)v15;
    if ( v63 )
    {
      do
      {
        v68 = *v67;
        v67 += 3;
        *(v67 - 3) = (v68 >> 1) + 1;
      }
      while ( v67 != v16 );
LABEL_62:
      v83 = 0;
      *(_QWORD *)v85 = 0;
      continue;
    }
    return v12;
  }
}

