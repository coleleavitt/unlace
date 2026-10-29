unsigned __int64 *__fastcall sub_6B8E80(__int64 a1, _BYTE *a2, __int64 a3, char a4)
{
  __int64 v4; // r12
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 *v9; // r14
  int v10; // ecx
  __int64 v11; // rbp
  unsigned __int64 v12; // rsi
  int v13; // r8d
  unsigned int v14; // r13d
  __int64 *v15; // rax
  unsigned int v16; // edi
  __int64 *v17; // r15
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  unsigned __int64 *result; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  unsigned __int64 v23; // rbp
  __int64 v24; // rax
  int v25; // edi
  void (*v26)(); // rax
  unsigned __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rdi
  _QWORD *v31; // rcx
  int v32; // esi
  __int64 v33; // rdi
  _QWORD *v34; // rax
  __int64 v35; // r13
  __int64 *i; // r15
  __int64 v37; // rax
  int v38; // ecx
  int v39; // ecx
  __int64 v40; // r8
  int v41; // r11d
  _QWORD *v42; // r10
  __int64 v43; // rsi
  _QWORD *v44; // rdx
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rax
  void **v48; // rax
  int v49; // esi
  unsigned int v50; // edx
  __int64 v51; // r8
  int v52; // r10d
  __int64 *v53; // r9
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdi
  _QWORD *v58; // rcx
  int v59; // esi
  __int64 v60; // rdi
  _QWORD *v61; // rax
  __int64 v62; // r9
  __int64 v63; // rax
  __int64 *v64; // r15
  __int64 v65; // r12
  __int64 *v66; // rbp
  __int64 v67; // r8
  __int64 v68; // rax
  int v69; // ecx
  int v70; // ecx
  __int64 v71; // r10
  unsigned int v72; // esi
  _QWORD *v73; // rdx
  __int64 v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rax
  void **v77; // rax
  int v78; // esi
  int v79; // r9d
  __int64 *v80; // r8
  unsigned int v81; // r13d
  __int64 v82; // rdx
  _QWORD *v83; // rdx
  _QWORD *v84; // rdx
  _QWORD *v85; // r11
  unsigned int v86; // [rsp+8h] [rbp-50h]
  unsigned int v87; // [rsp+8h] [rbp-50h]
  void **v88; // [rsp+8h] [rbp-50h]
  __int64 v89; // [rsp+8h] [rbp-50h]
  int v90; // [rsp+8h] [rbp-50h]
  void **v91; // [rsp+10h] [rbp-48h]
  __int64 v92; // [rsp+10h] [rbp-48h]
  __int64 v93; // [rsp+10h] [rbp-48h]
  __int64 v94; // [rsp+18h] [rbp-40h]

  v4 = a3;
  if ( a4 )
  {
    v6 = *(_QWORD *)(a1 + 18208);
    if ( v6 )
    {
      if ( (a2[8] & 6) != 0 )
      {
        v26 = *(void (**)())(*(_QWORD *)v6 + 176LL);
        if ( v26 != nullsub_83 )
          ((void (__fastcall *)(__int64, _BYTE *, __int64))v26)(v6, a2, a3);
      }
    }
  }
  v7 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 32LL))(a2);
  v8 = *(_DWORD *)(a1 + 1688);
  v9 = *(__int64 **)(a1 + 1672);
  v10 = 0;
  v11 = v7;
  if ( !v8 )
    goto LABEL_30;
  v12 = v8 - 1;
  v13 = 1;
  v14 = ((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4);
  v15 = nullptr;
  v16 = v12 & v14;
  v17 = &v9[2 * ((unsigned int)v12 & v14)];
  v18 = *v17;
  if ( v11 != *v17 )
  {
    while ( v18 != -4096 )
    {
      if ( v18 == -8192 && !v15 )
        v15 = v17;
      v16 = v12 & (v13 + v16);
      v17 = &v9[2 * v16];
      v18 = *v17;
      if ( v11 == *v17 )
        goto LABEL_6;
      ++v13;
    }
    v10 = 2 * v8;
    if ( !v15 )
      v15 = v17;
    v25 = *(_DWORD *)(a1 + 1680) + 1;
    if ( 4 * v25 < 3 * v8 )
    {
      if ( v8 >> 3 < v8 - *(_DWORD *)(a1 + 1684) - v25 )
      {
LABEL_24:
        *(_DWORD *)(a1 + 1680) = v25;
        if ( *v15 != -4096 )
          --*(_DWORD *)(a1 + 1684);
        *v15 = v11;
        result = (unsigned __int64 *)(v15 + 1);
        *result = 0;
        goto LABEL_27;
      }
      v87 = *(_DWORD *)(a1 + 1688);
      v54 = ((((v12 | (v12 >> 1)) >> 2) | v12 | (v12 >> 1)) >> 4) | ((v12 | (v12 >> 1)) >> 2) | v12 | (v12 >> 1);
      v55 = ((((v54 >> 8) | v54) >> 16) | (v54 >> 8) | v54) + 1;
      if ( (unsigned int)v55 < 0x40 )
        LODWORD(v55) = 64;
      *(_DWORD *)(a1 + 1688) = v55;
      v56 = sub_25CC9C0(16LL * (unsigned int)v55, 8);
      v57 = *(unsigned int *)(a1 + 1688);
      *(_QWORD *)(a1 + 1672) = v56;
      v58 = (_QWORD *)v56;
      v59 = v57;
      v60 = 16 * v57;
      v61 = (_QWORD *)(v56 + v60);
      if ( v9 )
      {
        *(_QWORD *)(a1 + 1680) = 0;
        v62 = 16LL * v87;
        if ( v60 )
        {
          if ( (((_BYTE)v61 - (_BYTE)v58) & 0x10) == 0 || (*v58 = -4096, v58 += 2, v58 != v61) )
          {
            do
            {
              *v58 = -4096;
              v58 += 4;
              *(v58 - 2) = -4096;
            }
            while ( v58 != v61 );
          }
        }
        v63 = v4;
        v64 = v9;
        v65 = v11;
        v66 = &v9[2 * v87];
        v67 = v63;
        do
        {
          v68 = *v64;
          if ( *v64 != -8192 && v68 != -4096 )
          {
            v69 = *(_DWORD *)(a1 + 1688);
            if ( !v69 )
            {
              *(_QWORD *)&dword_0 = *v64;
              BUG();
            }
            v70 = v69 - 1;
            v71 = *(_QWORD *)(a1 + 1672);
            v72 = v70 & (((unsigned int)v68 >> 9) ^ ((unsigned int)v68 >> 4));
            v73 = (_QWORD *)(v71 + 16LL * v72);
            v74 = *v73;
            if ( *v73 != v68 )
            {
              v90 = 1;
              v85 = nullptr;
              while ( v74 != -4096 )
              {
                if ( !v85 && v74 == -8192 )
                  v85 = v73;
                v72 = v70 & (v90 + v72);
                v73 = (_QWORD *)(v71 + 16LL * v72);
                v74 = *v73;
                if ( v68 == *v73 )
                  goto LABEL_78;
                ++v90;
              }
              if ( v85 )
                v73 = v85;
            }
LABEL_78:
            *v73 = v68;
            v75 = v64[1];
            v64[1] = 0;
            v73[1] = v75;
            ++*(_DWORD *)(a1 + 1680);
            v76 = v64[1];
            if ( v76 )
            {
              if ( (v76 & 4) != 0 )
              {
                v77 = (void **)(v76 & 0xFFFFFFFFFFFFFFF8LL);
                if ( v77 )
                {
                  if ( *v77 != v77 + 2 )
                  {
                    v94 = v67;
                    v92 = v62;
                    v88 = v77;
                    free(*v77);
                    v67 = v94;
                    v62 = v92;
                    v77 = v88;
                  }
                  v93 = v67;
                  v89 = v62;
                  operator delete(v77, 0x30u);
                  v67 = v93;
                  v62 = v89;
                }
              }
            }
          }
          v64 += 2;
        }
        while ( v66 != v64 );
        v11 = v65;
        v4 = v67;
        operator delete();
        v58 = *(_QWORD **)(a1 + 1672);
        v59 = *(_DWORD *)(a1 + 1688);
        v25 = *(_DWORD *)(a1 + 1680) + 1;
      }
      else
      {
        *(_QWORD *)(a1 + 1680) = 0;
        if ( v58 != v61 )
        {
          v84 = v58;
          if ( (((_BYTE)v61 - (_BYTE)v58) & 0x10) == 0 || (v84 = v58 + 2, *v58 = -4096, v58 + 2 != v61) )
          {
            do
            {
              *v84 = -4096;
              v84 += 4;
              *(v84 - 2) = -4096;
            }
            while ( v84 != v61 );
          }
        }
        v25 = 1;
      }
      if ( v59 )
      {
        v78 = v59 - 1;
        v79 = 1;
        v80 = nullptr;
        v81 = v78 & v14;
        v15 = &v58[2 * v81];
        v82 = *v15;
        if ( v11 != *v15 )
        {
          while ( v82 != -4096 )
          {
            if ( !v80 && v82 == -8192 )
              v80 = v15;
            v81 = v78 & (v79 + v81);
            v15 = &v58[2 * v81];
            v82 = *v15;
            if ( v11 == *v15 )
              goto LABEL_24;
            ++v79;
          }
          if ( v80 )
            v15 = v80;
        }
        goto LABEL_24;
      }
LABEL_124:
      *(_DWORD *)(a1 + 1680) = v25;
      BUG();
    }
LABEL_30:
    v86 = *(_DWORD *)(a1 + 1688);
    v27 = (((((((((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
              | (unsigned int)(v10 - 1)
              | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 4)
            | (((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
            | (unsigned int)(v10 - 1)
            | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 8)
          | (((((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
            | (unsigned int)(v10 - 1)
            | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 4)
          | (((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
          | (unsigned int)(v10 - 1)
          | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 16)
        | (((((((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
            | (unsigned int)(v10 - 1)
            | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 4)
          | (((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
          | (unsigned int)(v10 - 1)
          | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 8)
        | (((((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
          | (unsigned int)(v10 - 1)
          | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 4)
        | (((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
        | (unsigned int)(v10 - 1)
        | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1);
    v28 = v27 + 1;
    if ( v28 < 0x40 )
      v28 = 64;
    *(_DWORD *)(a1 + 1688) = v28;
    v29 = sub_25CC9C0(16LL * v28, 8);
    v30 = *(unsigned int *)(a1 + 1688);
    *(_QWORD *)(a1 + 1672) = v29;
    v31 = (_QWORD *)v29;
    v32 = v30;
    v33 = 16 * v30;
    v34 = (_QWORD *)(v29 + v33);
    if ( v9 )
    {
      *(_QWORD *)(a1 + 1680) = 0;
      v35 = 2LL * v86;
      if ( v33 )
      {
        if ( (((_BYTE)v34 - (_BYTE)v31) & 0x10) == 0 || (*v31 = -4096, v31 += 2, v31 != v34) )
        {
          do
          {
            *v31 = -4096;
            v31 += 4;
            *(v31 - 2) = -4096;
          }
          while ( v31 != v34 );
        }
      }
      for ( i = v9; &v9[v35] != i; i += 2 )
      {
        v37 = *i;
        if ( *i != -8192 && v37 != -4096 )
        {
          v38 = *(_DWORD *)(a1 + 1688);
          if ( !v38 )
          {
            *(_QWORD *)&dword_0 = *i;
            BUG();
          }
          v39 = v38 - 1;
          v40 = *(_QWORD *)(a1 + 1672);
          v41 = 1;
          v42 = nullptr;
          LODWORD(v43) = v39 & (((unsigned int)v37 >> 9) ^ ((unsigned int)v37 >> 4));
          v44 = (_QWORD *)(v40 + 16LL * (unsigned int)v43);
          v45 = *v44;
          if ( v37 != *v44 )
          {
            while ( v45 != -4096 )
            {
              if ( v45 == -8192 && !v42 )
                v42 = v44;
              v43 = v39 & (unsigned int)(v43 + v41);
              v44 = (_QWORD *)(v40 + 16 * v43);
              v45 = *v44;
              if ( v37 == *v44 )
                goto LABEL_42;
              ++v41;
            }
            if ( v42 )
              v44 = v42;
          }
LABEL_42:
          *v44 = v37;
          v46 = i[1];
          i[1] = 0;
          v44[1] = v46;
          ++*(_DWORD *)(a1 + 1680);
          v47 = i[1];
          if ( v47 )
          {
            if ( (v47 & 4) != 0 )
            {
              v48 = (void **)(v47 & 0xFFFFFFFFFFFFFFF8LL);
              if ( v48 )
              {
                if ( *v48 != v48 + 2 )
                {
                  v91 = v48;
                  free(*v48);
                  v48 = v91;
                }
                operator delete(v48, 0x30u);
              }
            }
          }
        }
      }
      operator delete();
      v31 = *(_QWORD **)(a1 + 1672);
      v32 = *(_DWORD *)(a1 + 1688);
      v25 = *(_DWORD *)(a1 + 1680) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 1680) = 0;
      if ( v31 != v34 )
      {
        v83 = v31;
        if ( (((_BYTE)v34 - (_BYTE)v31) & 0x10) == 0 || (v83 = v31 + 2, *v31 = -4096, v31 + 2 != v34) )
        {
          do
          {
            *v83 = -4096;
            v83 += 4;
            *(v83 - 2) = -4096;
          }
          while ( v83 != v34 );
        }
      }
      v25 = 1;
    }
    if ( v32 )
    {
      v49 = v32 - 1;
      v50 = v49 & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
      v15 = &v31[2 * v50];
      v51 = *v15;
      if ( v11 != *v15 )
      {
        v52 = 1;
        v53 = nullptr;
        while ( v51 != -4096 )
        {
          if ( v51 == -8192 && !v53 )
            v53 = v15;
          v50 = v49 & (v52 + v50);
          v15 = &v31[2 * v50];
          v51 = *v15;
          if ( v11 == *v15 )
            goto LABEL_24;
          ++v52;
        }
        if ( v53 )
          v15 = v53;
      }
      goto LABEL_24;
    }
    goto LABEL_124;
  }
LABEL_6:
  v19 = v17[1];
  result = (unsigned __int64 *)(v17 + 1);
  if ( v19 <= 7 )
  {
LABEL_27:
    *result = v4 & 0xFFFFFFFFFFFFFFFBLL;
    return result;
  }
  if ( (v19 & 4) == 0 )
  {
    v22 = operator new(0x30u);
    *(_QWORD *)v22 = v22 + 16;
    *(_QWORD *)(v22 + 8) = 0x400000000LL;
    v23 = v22 & 0xFFFFFFFFFFFFFFF8LL;
    v17[1] = v22 | 4;
    v24 = *(unsigned int *)((v22 & 0xFFFFFFFFFFFFFFF8LL) + 8);
    if ( *(unsigned int *)(v23 + 12) < (unsigned __int64)(v24 + 1) )
    {
      sub_25D6060(v23, v23 + 16, v24 + 1, 8);
      v24 = *(unsigned int *)(v23 + 8);
    }
    *(_QWORD *)(*(_QWORD *)v23 + 8 * v24) = v19 & 0xFFFFFFFFFFFFFFF8LL;
    ++*(_DWORD *)(v23 + 8);
    v19 = v17[1];
  }
  v21 = v19 & 0xFFFFFFFFFFFFFFF8LL;
  result = (unsigned __int64 *)*(unsigned int *)(v21 + 8);
  if ( *(unsigned int *)(v21 + 12) < (unsigned __int64)result + 1 )
  {
    sub_25D6060(v21, v21 + 16, (char *)result + 1, 8);
    result = (unsigned __int64 *)*(unsigned int *)(v21 + 8);
  }
  *(_QWORD *)(*(_QWORD *)v21 + 8LL * (_QWORD)result) = v4;
  ++*(_DWORD *)(v21 + 8);
  return result;
}

