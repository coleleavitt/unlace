__int64 __fastcall sub_CCAF10(__int64 a1, _WORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // r14d
  __int64 *v9; // r13
  unsigned int v10; // r12d
  unsigned int v11; // eax
  unsigned __int64 v12; // rsi
  int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // edi
  __int64 v22; // rsi
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  __int64 v28; // rsi
  int v29; // r10d
  __int64 *v30; // r9
  _QWORD *v31; // rcx
  __int64 *v32; // rdx
  int i; // r12d
  __int64 v34; // rcx
  unsigned int v35; // r8d
  __int64 v36; // rdi
  __int64 v37; // r11
  int v38; // ecx
  int v39; // esi
  unsigned int v40; // edi
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rdx
  __int64 v46; // rsi
  int v47; // r10d
  _QWORD *v48; // rcx
  __int64 *v49; // rdx
  int v50; // r14d
  unsigned int v51; // r8d
  __int64 v52; // rdi
  __int64 v53; // r11
  int v54; // ecx
  int v55; // esi
  int v56; // edi
  unsigned int v57; // r12d
  __int64 v58; // rcx
  _QWORD *v59; // rcx
  _QWORD *v60; // rdx
  __int64 v61; // rcx
  _QWORD *v62; // rcx
  _QWORD *v63; // rdx
  int v64; // r15d
  __int64 v65; // r14
  __int64 v66; // r15
  int v67; // r10d
  int v68; // [rsp+4h] [rbp-44h]

  v8 = *(_DWORD *)(a1 + 696);
  v9 = *(__int64 **)(a1 + 680);
  if ( !v8 )
    goto LABEL_21;
  v10 = (unsigned int)a2;
  v11 = (unsigned int)a2;
  v12 = v8 - 1;
  v13 = (v11 >> 9) ^ (v10 >> 4);
  a4 = (unsigned int)v12 & v13;
  v14 = (__int64)&v9[2 * a4];
  v15 = *(_QWORD *)v14;
  if ( a2 != *(_WORD **)v14 )
  {
    v21 = 1;
    a5 = 0;
    if ( v15 != -4096 )
    {
      while ( 1 )
      {
        if ( !a5 && v15 == -8192 )
          a5 = v14;
        a6 = (unsigned int)(v21 + 1);
        a4 = (unsigned int)v12 & (v21 + (_DWORD)a4);
        v14 = (__int64)&v9[2 * (unsigned int)a4];
        v15 = *(_QWORD *)v14;
        if ( a2 == *(_WORD **)v14 )
          goto LABEL_3;
        if ( v15 == -4096 )
          break;
        ++v21;
      }
      if ( a5 )
        v14 = a5;
    }
    a4 = (unsigned int)(*(_DWORD *)(a1 + 688) + 1);
    if ( 4 * (int)a4 < 3 * v8 )
    {
      if ( v8 - *(_DWORD *)(a1 + 692) - (unsigned int)a4 > v8 >> 3 )
      {
LABEL_8:
        v22 = *(_QWORD *)v14;
        goto LABEL_9;
      }
      v41 = (((((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4) | (v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 8)
          | (((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4)
          | (v12 >> 1)
          | v12
          | (((v12 >> 1) | v12) >> 2);
      v42 = ((v41 >> 16) | v41) + 1;
      if ( (unsigned int)v42 < 0x40 )
        LODWORD(v42) = 64;
      *(_DWORD *)(a1 + 696) = v42;
      v43 = sub_22300B0(16LL * (unsigned int)v42, 8, 64, a4, a5, a6);
      *(_QWORD *)(a1 + 680) = v43;
      if ( v9 )
      {
        v44 = *(unsigned int *)(a1 + 696);
        v45 = (_QWORD *)v43;
        *(_QWORD *)(a1 + 688) = 0;
        v46 = 2LL * v8;
        v47 = v44;
        v48 = (_QWORD *)(v43 + 16 * v44);
        if ( (_QWORD *)v43 != v48 )
        {
          do
          {
            *v45 = -4096;
            v45 += 2;
          }
          while ( v48 != v45 );
        }
        v49 = v9;
        v50 = v47 - 1;
        do
        {
          v34 = *v49;
          if ( *v49 != -4096 && v34 != -8192 )
          {
            if ( !v47 )
              goto LABEL_104;
            v51 = v50 & (((unsigned int)v34 >> 9) ^ ((unsigned int)v34 >> 4));
            v52 = v43 + 16LL * v51;
            v53 = *(_QWORD *)v52;
            if ( v34 != *(_QWORD *)v52 && v53 != -4096 )
            {
              v68 = 1;
              v66 = 0;
              while ( 1 )
              {
                if ( v53 == -8192 && !v66 )
                  v66 = v52;
                v51 = v50 & (v68 + v51);
                v52 = v43 + 16LL * v51;
                v53 = *(_QWORD *)v52;
                if ( v34 == *(_QWORD *)v52 )
                  break;
                if ( v53 == -4096 )
                {
                  if ( v66 )
                    v52 = v66;
                  break;
                }
                ++v68;
              }
            }
            *(_QWORD *)v52 = v34;
            v54 = *((_DWORD *)v49 + 2);
            ++*(_DWORD *)(a1 + 688);
            *(_DWORD *)(v52 + 8) = v54;
          }
          v49 += 2;
        }
        while ( &v9[v46] != v49 );
        operator delete(v9, v46 * 8, 8);
        v43 = *(_QWORD *)(a1 + 680);
        v55 = *(_DWORD *)(a1 + 696);
        a4 = (unsigned int)(*(_DWORD *)(a1 + 688) + 1);
      }
      else
      {
        v61 = *(unsigned int *)(a1 + 696);
        *(_QWORD *)(a1 + 688) = 0;
        v55 = v61;
        v62 = (_QWORD *)(v43 + 16 * v61);
        if ( (_QWORD *)v43 != v62 )
        {
          v63 = (_QWORD *)v43;
          do
          {
            *v63 = -4096;
            v63 += 2;
          }
          while ( v62 != v63 );
        }
        a4 = 1;
      }
      if ( v55 )
      {
        v56 = v55 - 1;
        v57 = (v55 - 1) & v13;
        v14 = v43 + 16LL * v57;
        v22 = *(_QWORD *)v14;
        if ( a2 != *(_WORD **)v14 )
        {
          if ( v22 != -4096 )
          {
            a5 = v43 + 16LL * v57;
            a6 = 1;
            v14 = 0;
            while ( 1 )
            {
              if ( v22 == -8192 && !v14 )
                v14 = a5;
              v57 = v56 & (a6 + v57);
              a5 = v43 + 16LL * v57;
              v22 = *(_QWORD *)a5;
              if ( a2 == *(_WORD **)a5 )
              {
                v14 = v43 + 16LL * v57;
                goto LABEL_9;
              }
              if ( v22 == -4096 )
                break;
              a6 = (unsigned int)(a6 + 1);
            }
            if ( v14 )
              goto LABEL_8;
            v14 = v43 + 16LL * v57;
          }
LABEL_37:
          *(_DWORD *)(a1 + 688) = a4;
LABEL_11:
          *(_QWORD *)v14 = a2;
          v16 = 0;
          *(_DWORD *)(v14 + 8) = 0;
          goto LABEL_4;
        }
        goto LABEL_9;
      }
      goto LABEL_105;
    }
LABEL_21:
    v23 = (((((((2 * v8 - 1) | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 2)
            | (2 * v8 - 1)
            | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 4)
          | (((2 * v8 - 1) | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 2)
          | (2 * v8 - 1)
          | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 8)
        | (((((2 * v8 - 1) | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 2)
          | (2 * v8 - 1)
          | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 4)
        | (((2 * v8 - 1) | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 2)
        | (2 * v8 - 1)
        | ((unsigned __int64)(2 * v8 - 1) >> 1);
    v24 = ((v23 >> 16) | v23) + 1;
    if ( (unsigned int)v24 < 0x40 )
      LODWORD(v24) = 64;
    *(_DWORD *)(a1 + 696) = v24;
    v25 = sub_22300B0(16LL * (unsigned int)v24, 8, 64, a4, a5, a6);
    *(_QWORD *)(a1 + 680) = v25;
    if ( v9 )
    {
      v26 = *(unsigned int *)(a1 + 696);
      v27 = (_QWORD *)v25;
      *(_QWORD *)(a1 + 688) = 0;
      v28 = 2LL * v8;
      v29 = v26;
      v30 = &v9[v28];
      v31 = (_QWORD *)(v25 + 16 * v26);
      if ( (_QWORD *)v25 != v31 )
      {
        do
        {
          *v27 = -4096;
          v27 += 2;
        }
        while ( v31 != v27 );
      }
      v32 = v9;
      for ( i = v29 - 1; v30 != v32; v32 += 2 )
      {
        v34 = *v32;
        if ( *v32 != -8192 && v34 != -4096 )
        {
          if ( !v29 )
          {
LABEL_104:
            *(_QWORD *)&dword_0 = v34;
            BUG();
          }
          v35 = i & (((unsigned int)v34 >> 9) ^ ((unsigned int)v34 >> 4));
          v36 = v25 + 16LL * v35;
          v37 = *(_QWORD *)v36;
          if ( *(_QWORD *)v36 != v34 )
          {
            v64 = 1;
            v65 = 0;
            if ( v37 != -4096 )
            {
              while ( 1 )
              {
                if ( !v65 && v37 == -8192 )
                  v65 = v36;
                v35 = i & (v64 + v35);
                v36 = v25 + 16LL * v35;
                v37 = *(_QWORD *)v36;
                if ( v34 == *(_QWORD *)v36 )
                  break;
                if ( v37 == -4096 )
                {
                  if ( v65 )
                    v36 = v65;
                  break;
                }
                ++v64;
              }
            }
          }
          *(_QWORD *)v36 = v34;
          v38 = *((_DWORD *)v32 + 2);
          ++*(_DWORD *)(a1 + 688);
          *(_DWORD *)(v36 + 8) = v38;
        }
      }
      operator delete(v9, v28 * 8, 8);
      v25 = *(_QWORD *)(a1 + 680);
      v39 = *(_DWORD *)(a1 + 696);
      a4 = (unsigned int)(*(_DWORD *)(a1 + 688) + 1);
    }
    else
    {
      v58 = *(unsigned int *)(a1 + 696);
      *(_QWORD *)(a1 + 688) = 0;
      v39 = v58;
      v59 = (_QWORD *)(v25 + 16 * v58);
      if ( (_QWORD *)v25 != v59 )
      {
        v60 = (_QWORD *)v25;
        do
        {
          *v60 = -4096;
          v60 += 2;
        }
        while ( v59 != v60 );
      }
      a4 = 1;
    }
    if ( v39 )
    {
      a5 = (unsigned int)(v39 - 1);
      v40 = a5 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v14 = v25 + 16LL * v40;
      v22 = *(_QWORD *)v14;
      if ( a2 != *(_WORD **)v14 )
      {
        if ( v22 != -4096 )
        {
          a6 = v25 + 16LL * ((unsigned int)a5 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)));
          v67 = 1;
          v14 = 0;
          while ( 1 )
          {
            if ( v22 == -8192 && !v14 )
              v14 = a6;
            v40 = a5 & (v67 + v40);
            a6 = v25 + 16LL * v40;
            v22 = *(_QWORD *)a6;
            if ( a2 == *(_WORD **)a6 )
            {
              v14 = v25 + 16LL * v40;
              goto LABEL_9;
            }
            if ( v22 == -4096 )
              break;
            ++v67;
          }
          if ( v14 )
            goto LABEL_8;
          v14 = v25 + 16LL * v40;
        }
        goto LABEL_37;
      }
LABEL_9:
      *(_DWORD *)(a1 + 688) = a4;
      if ( v22 != -4096 )
        --*(_DWORD *)(a1 + 692);
      goto LABEL_11;
    }
LABEL_105:
    ++*(_DWORD *)(a1 + 688);
    BUG();
  }
LABEL_3:
  v16 = *(_DWORD *)(v14 + 8);
LABEL_4:
  sub_CAE070(a1, v16, v14, a4, a5, a6);
  return sub_CC99A0(a1, *(_QWORD *)&a2[4 * ((*a2 & 0x200) != 0) + 16], v17, v18, v19);
}
