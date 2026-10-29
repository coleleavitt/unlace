__int64 __fastcall sub_CA71D0(__int64 a1, _WORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  int v28; // r10d
  __int64 *v29; // r9
  _QWORD *v30; // rcx
  __int64 *v31; // rdx
  int i; // r12d
  __int64 v33; // rcx
  unsigned int v34; // r8d
  __int64 v35; // rdi
  __int64 v36; // r11
  int v37; // ecx
  int v38; // esi
  unsigned int v39; // edi
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rdx
  int v45; // r10d
  __int64 *v46; // r9
  _QWORD *v47; // rcx
  __int64 *v48; // rdx
  int v49; // r14d
  unsigned int v50; // r8d
  __int64 v51; // rdi
  __int64 v52; // r11
  int v53; // ecx
  int v54; // esi
  int v55; // edi
  unsigned int v56; // r12d
  __int64 v57; // rcx
  _QWORD *v58; // rcx
  _QWORD *v59; // rdx
  __int64 v60; // rcx
  _QWORD *v61; // rcx
  _QWORD *v62; // rdx
  int v63; // r15d
  __int64 v64; // r14
  __int64 v65; // r15
  int v66; // r10d
  int v67; // [rsp+4h] [rbp-44h]

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
      v40 = (((((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4) | (v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 8)
          | (((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4)
          | (v12 >> 1)
          | v12
          | (((v12 >> 1) | v12) >> 2);
      v41 = ((v40 >> 16) | v40) + 1;
      if ( (unsigned int)v41 < 0x40 )
        LODWORD(v41) = 64;
      *(_DWORD *)(a1 + 696) = v41;
      v42 = sub_220C370(16LL * (unsigned int)v41, 8, 64, a4, a5, a6);
      *(_QWORD *)(a1 + 680) = v42;
      if ( v9 )
      {
        v43 = *(unsigned int *)(a1 + 696);
        v44 = (_QWORD *)v42;
        *(_QWORD *)(a1 + 688) = 0;
        v45 = v43;
        v46 = &v9[2 * v8];
        v47 = (_QWORD *)(v42 + 16 * v43);
        if ( (_QWORD *)v42 != v47 )
        {
          do
          {
            *v44 = -4096;
            v44 += 2;
          }
          while ( v47 != v44 );
        }
        v48 = v9;
        v49 = v45 - 1;
        do
        {
          v33 = *v48;
          if ( *v48 != -4096 && v33 != -8192 )
          {
            if ( !v45 )
              goto LABEL_104;
            v50 = v49 & (((unsigned int)v33 >> 9) ^ ((unsigned int)v33 >> 4));
            v51 = v42 + 16LL * v50;
            v52 = *(_QWORD *)v51;
            if ( v33 != *(_QWORD *)v51 && v52 != -4096 )
            {
              v67 = 1;
              v65 = 0;
              while ( 1 )
              {
                if ( v52 == -8192 && !v65 )
                  v65 = v51;
                v50 = v49 & (v67 + v50);
                v51 = v42 + 16LL * v50;
                v52 = *(_QWORD *)v51;
                if ( v33 == *(_QWORD *)v51 )
                  break;
                if ( v52 == -4096 )
                {
                  if ( v65 )
                    v51 = v65;
                  break;
                }
                ++v67;
              }
            }
            *(_QWORD *)v51 = v33;
            v53 = *((_DWORD *)v48 + 2);
            ++*(_DWORD *)(a1 + 688);
            *(_DWORD *)(v51 + 8) = v53;
          }
          v48 += 2;
        }
        while ( v46 != v48 );
        operator delete();
        v42 = *(_QWORD *)(a1 + 680);
        v54 = *(_DWORD *)(a1 + 696);
        a4 = (unsigned int)(*(_DWORD *)(a1 + 688) + 1);
      }
      else
      {
        v60 = *(unsigned int *)(a1 + 696);
        *(_QWORD *)(a1 + 688) = 0;
        v54 = v60;
        v61 = (_QWORD *)(v42 + 16 * v60);
        if ( (_QWORD *)v42 != v61 )
        {
          v62 = (_QWORD *)v42;
          do
          {
            *v62 = -4096;
            v62 += 2;
          }
          while ( v61 != v62 );
        }
        a4 = 1;
      }
      if ( v54 )
      {
        v55 = v54 - 1;
        v56 = (v54 - 1) & v13;
        v14 = v42 + 16LL * v56;
        v22 = *(_QWORD *)v14;
        if ( a2 != *(_WORD **)v14 )
        {
          if ( v22 != -4096 )
          {
            a5 = v42 + 16LL * v56;
            a6 = 1;
            v14 = 0;
            while ( 1 )
            {
              if ( v22 == -8192 && !v14 )
                v14 = a5;
              v56 = v55 & (a6 + v56);
              a5 = v42 + 16LL * v56;
              v22 = *(_QWORD *)a5;
              if ( a2 == *(_WORD **)a5 )
              {
                v14 = v42 + 16LL * v56;
                goto LABEL_9;
              }
              if ( v22 == -4096 )
                break;
              a6 = (unsigned int)(a6 + 1);
            }
            if ( v14 )
              goto LABEL_8;
            v14 = v42 + 16LL * v56;
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
    v25 = sub_220C370(16LL * (unsigned int)v24, 8, 64, a4, a5, a6);
    *(_QWORD *)(a1 + 680) = v25;
    if ( v9 )
    {
      v26 = *(unsigned int *)(a1 + 696);
      v27 = (_QWORD *)v25;
      *(_QWORD *)(a1 + 688) = 0;
      v28 = v26;
      v29 = &v9[2 * v8];
      v30 = (_QWORD *)(v25 + 16 * v26);
      if ( (_QWORD *)v25 != v30 )
      {
        do
        {
          *v27 = -4096;
          v27 += 2;
        }
        while ( v30 != v27 );
      }
      v31 = v9;
      for ( i = v28 - 1; v29 != v31; v31 += 2 )
      {
        v33 = *v31;
        if ( *v31 != -8192 && v33 != -4096 )
        {
          if ( !v28 )
          {
LABEL_104:
            *(_QWORD *)&dword_0 = v33;
            BUG();
          }
          v34 = i & (((unsigned int)v33 >> 9) ^ ((unsigned int)v33 >> 4));
          v35 = v25 + 16LL * v34;
          v36 = *(_QWORD *)v35;
          if ( *(_QWORD *)v35 != v33 )
          {
            v63 = 1;
            v64 = 0;
            if ( v36 != -4096 )
            {
              while ( 1 )
              {
                if ( !v64 && v36 == -8192 )
                  v64 = v35;
                v34 = i & (v63 + v34);
                v35 = v25 + 16LL * v34;
                v36 = *(_QWORD *)v35;
                if ( v33 == *(_QWORD *)v35 )
                  break;
                if ( v36 == -4096 )
                {
                  if ( v64 )
                    v35 = v64;
                  break;
                }
                ++v63;
              }
            }
          }
          *(_QWORD *)v35 = v33;
          v37 = *((_DWORD *)v31 + 2);
          ++*(_DWORD *)(a1 + 688);
          *(_DWORD *)(v35 + 8) = v37;
        }
      }
      operator delete();
      v25 = *(_QWORD *)(a1 + 680);
      v38 = *(_DWORD *)(a1 + 696);
      a4 = (unsigned int)(*(_DWORD *)(a1 + 688) + 1);
    }
    else
    {
      v57 = *(unsigned int *)(a1 + 696);
      *(_QWORD *)(a1 + 688) = 0;
      v38 = v57;
      v58 = (_QWORD *)(v25 + 16 * v57);
      if ( (_QWORD *)v25 != v58 )
      {
        v59 = (_QWORD *)v25;
        do
        {
          *v59 = -4096;
          v59 += 2;
        }
        while ( v58 != v59 );
      }
      a4 = 1;
    }
    if ( v38 )
    {
      a5 = (unsigned int)(v38 - 1);
      v39 = a5 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v14 = v25 + 16LL * v39;
      v22 = *(_QWORD *)v14;
      if ( a2 != *(_WORD **)v14 )
      {
        if ( v22 != -4096 )
        {
          a6 = v25 + 16LL * ((unsigned int)a5 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)));
          v66 = 1;
          v14 = 0;
          while ( 1 )
          {
            if ( v22 == -8192 && !v14 )
              v14 = a6;
            v39 = a5 & (v66 + v39);
            a6 = v25 + 16LL * v39;
            v22 = *(_QWORD *)a6;
            if ( a2 == *(_WORD **)a6 )
            {
              v14 = v25 + 16LL * v39;
              goto LABEL_9;
            }
            if ( v22 == -4096 )
              break;
            ++v66;
          }
          if ( v14 )
            goto LABEL_8;
          v14 = v25 + 16LL * v39;
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
  sub_C8A330(a1, v16, v14, a4, a5, a6);
  return sub_CA5C60(a1, *(_QWORD *)&a2[4 * ((*a2 & 0x200) != 0) + 16], v17, v18, v19);
}

