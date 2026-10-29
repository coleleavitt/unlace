__int64 __fastcall sub_64BEE0(__int64 a1, __int64 a2, char a3, int a4)
{
  unsigned int v7; // r13d
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi
  int i; // eax
  __int64 v12; // rdx
  unsigned int *v13; // rdx
  unsigned int v14; // r13d
  unsigned int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64, __int64, __int64); // rax
  int v21; // eax
  _DWORD *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r11d
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rsi
  unsigned int v29; // r15d
  unsigned int v30; // ebx
  _BYTE *v31; // r10
  _DWORD *v32; // r14
  unsigned __int64 v33; // r15
  __int64 v34; // rbp
  _BYTE *v35; // rax
  __int64 v36; // r10
  __int64 v37; // r10
  signed int v38; // edx
  unsigned __int64 v39; // rax
  unsigned int v40; // ecx
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // rsi
  unsigned int v43; // edi
  __int64 v44; // r15
  unsigned __int64 v45; // rt1
  bool v46; // dl
  __int64 v47; // r14
  unsigned __int64 j; // r9
  int v49; // ecx
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  _BYTE *v52; // rdx
  unsigned __int64 v53; // r8
  int v54; // r8d
  unsigned __int64 v55; // rdx
  unsigned int v56; // eax
  unsigned __int64 v57; // rsi
  int v58; // ebx
  unsigned int v59; // r10d
  __int64 v60; // rbp
  unsigned __int64 v61; // r14
  _DWORD *v62; // rbx
  __int64 v63; // rax
  unsigned int v64; // r11d
  unsigned __int64 v65; // rsi
  unsigned __int64 v66; // rcx
  _DWORD *v67; // rax
  unsigned __int64 v68; // rdx
  void *v69; // rdi
  __int64 v70; // rax
  _DWORD *v71; // r8
  unsigned __int64 v72; // r10
  unsigned __int64 k; // rax
  int v74; // edx
  __int64 v75; // rsi
  unsigned int v76; // r8d
  int v77; // r14d
  _DWORD *v78; // r9
  unsigned int v79; // r10d
  unsigned int v80; // ebp
  unsigned int v81; // r15d
  unsigned __int64 v82; // r9
  int v83; // r8d
  __int64 v84; // rcx
  int v85; // ecx
  int v86; // [rsp+4h] [rbp-84h]
  char v87; // [rsp+4h] [rbp-84h]
  __int64 v89; // [rsp+8h] [rbp-80h]
  int v90; // [rsp+8h] [rbp-80h]
  unsigned __int64 v91; // [rsp+10h] [rbp-78h]
  unsigned __int64 v92; // [rsp+18h] [rbp-70h]
  unsigned int v93; // [rsp+2Ch] [rbp-5Ch] BYREF
  void *v94; // [rsp+30h] [rbp-58h] BYREF
  __int128 v95; // [rsp+38h] [rbp-50h]
  unsigned __int64 v96; // [rsp+48h] [rbp-40h]

  v96 = __readfsqword(0x28u);
  v86 = a3 & 0x10;
  if ( (a3 & 0x10) != 0 )
  {
    *(_DWORD *)(a1 + 8) |= 2u;
    if ( (unsigned int)freadbytes(a2, a1 + 48, 4, 0) )
      return 1;
  }
  if ( (a3 & 0x20) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 48);
    if ( v7 )
    {
      v8 = (v7 + 63) & 0xFFFFFFC0;
      if ( (unsigned int)v8 >= v7 )
      {
        v9 = qcalloc(v8, 4);
        v10 = v9;
        if ( v9 )
        {
          *(_QWORD *)(a1 + 40) = v9;
          for ( i = 0; i != v7; ++i )
          {
            v12 = i;
            *(_DWORD *)(v10 + 4 * v12) = -1;
          }
          while ( !(unsigned int)freadbytes(a2, &v93, 4, 0) )
          {
            if ( v93 == -1 )
              goto LABEL_18;
            if ( v93 >= v7 )
              return 2;
            if ( (unsigned int)freadbytes(a2, &v94, 4, 0) )
              return 1;
            if ( (unsigned int)v94 >= v7 )
              return 2;
            v13 = (unsigned int *)(v10 + 4LL * v93);
            if ( *v13 != -1 )
              return 2;
            *v13 = (unsigned int)v94 | 0x80000000;
          }
          return 1;
        }
      }
      return 3;
    }
  }
LABEL_18:
  if ( (unsigned int)freadbytes(a2, a1 + 12, 4, 0) )
    return 1;
  v16 = *(_DWORD *)(a1 + 12);
  if ( v16 > 0x55555554 )
    return 1;
  if ( v86 && *(_DWORD *)(a1 + 48) < v16 )
    return 2;
  v14 = freadbytes(a2, &v93, 4, 0);
  if ( v14 )
    return 1;
  if ( *(_DWORD *)(a1 + 12) )
  {
    v17 = v93;
    if ( !v93 )
      return 2;
    *(_DWORD *)(a1 + 20) = v93;
    v18 = qalloc(v17);
    *(_QWORD *)(a1 + 32) = v18;
    v19 = v18;
    if ( !v18 )
      return 3;
    v20 = sub_647400;
    if ( (a3 & 1) == 0 )
      v20 = (__int64 (__fastcall *)(__int64, __int64, __int64))qfread;
    v21 = v20(a2, v19, v93);
    if ( v93 != v21 )
      return 2;
    if ( a4 <= 17 && (*(_BYTE *)(a1 + 8) & 1) != 0 )
    {
      v57 = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)(a1 + 12) )
      {
        if ( v57 )
        {
          v22 = *(_DWORD **)(a1 + 32);
          v58 = 0;
          if ( v57 + 4 <= v57 + *(unsigned int *)(a1 + 20) )
          {
            do
            {
              if ( (unsigned __int64)v22 < v57 )
                break;
              *v22 &= ~0x80000000;
              v57 = *(_QWORD *)(a1 + 32);
              v22 = sub_649150(*(_DWORD *)(a1 + 20), v57, v22);
              if ( !v22 )
                break;
              if ( (unsigned int)++v58 >= *(_DWORD *)(a1 + 12) )
                goto LABEL_31;
            }
            while ( (unsigned __int64)(v22 + 1) <= v57 + v59 );
          }
        }
        return 2;
      }
    }
LABEL_31:
    if ( !sub_64B100(a1, 1, (__int64)v22, v23, v24, v25) )
      return 2;
  }
  v26 = *(_DWORD *)(a1 + 8);
  if ( (v26 & 2) != 0 && !*(_QWORD *)(a1 + 40) )
  {
    if ( !sub_64AEC0(a1, 1) )
      return 2;
    v26 = *(_DWORD *)(a1 + 8);
  }
  v87 = v26 & 1;
  if ( (v26 & 1) != 0 )
  {
    v27 = *(unsigned int *)(a1 + 20);
    v28 = *(_QWORD *)(a1 + 32);
    v29 = *(_DWORD *)(a1 + 12);
    v30 = *(_DWORD *)(a1 + 20);
    v31 = (_BYTE *)(v28 + v27);
    if ( v29 )
    {
      if ( v28 )
      {
        v32 = *(_DWORD **)(a1 + 32);
        v92 = *(unsigned int *)(a1 + 20);
        v89 = v29;
        v33 = v28 + v27;
        v34 = 0;
        v91 = 0;
        if ( v28 + v27 >= v28 + 4 )
        {
          while ( (unsigned __int64)v32 >= v28 )
          {
            if ( *v32 == 2147483646 )
            {
              if ( v33 < (unsigned __int64)(v32 + 4) )
                return 2;
              v91 += (unsigned int)v32[1];
              v35 = sub_649150(v30, v28, v32);
              if ( !v35 )
                return 2;
              if ( ++v34 == v89 )
              {
LABEL_64:
                v27 = v92;
                v45 = v33;
                v44 = v37;
                v31 = (_BYTE *)v45;
                v46 = v92 < v91;
                goto LABEL_65;
              }
            }
            else
            {
              v35 = sub_649150(v30, v28, v32);
              if ( !v35 || v35 < (_BYTE *)v32 )
                return 2;
              ++v34;
              v37 = v35 - (_BYTE *)v32 + v36;
              if ( v89 == v34 )
                goto LABEL_64;
            }
            v32 = v35;
            if ( v33 < (unsigned __int64)(v35 + 4) )
              return 2;
          }
        }
      }
      return 2;
    }
    v91 = 0;
    v35 = *(_BYTE **)(a1 + 32);
    v46 = 0;
    v44 = 0;
LABEL_65:
    if ( v31 == v35 && !v46 && v27 == v44 + v91 )
    {
      v47 = *(_QWORD *)(a1 + 24);
      if ( v47 )
      {
        for ( j = 0; j < *(unsigned int *)(a1 + 16); ++j )
        {
          v49 = *(_DWORD *)(v47 + 4 * j);
          while ( 1 )
          {
            v50 = v49 & 0x7FFFFFFF;
            if ( (_DWORD)v50 == 0x7FFFFFFF )
              break;
            v51 = v28 + v50;
            if ( v51 )
            {
              v52 = (_BYTE *)(v51 + 4);
              if ( v51 >= v28 && v31 >= v52 )
              {
                v49 = *(_DWORD *)v51;
                if ( *(_DWORD *)v51 != 2147483646 && (unsigned __int64)v52 >= v28 )
                {
                  v53 = v28 + v27 - 1;
                  if ( (unsigned __int64)v52 < v53 )
                  {
                    while ( *v52 )
                    {
                      if ( ++v52 == (_BYTE *)v53 )
                        return 2;
                    }
                    if ( (unsigned __int64)v52 < v53 )
                    {
                      v54 = *(char *)(v51 + 4);
                      v55 = v51 + 5;
                      v56 = 0;
                      if ( (_BYTE)v54 )
                      {
                        do
                        {
                          ++v55;
                          v56 = v54 ^ __ROL4__(v56, 5);
                          v54 = *(char *)(v55 - 1);
                        }
                        while ( *(_BYTE *)(v55 - 1) );
                      }
                      if ( j == v56 % *(_DWORD *)(a1 + 16) )
                        continue;
                    }
                  }
                }
              }
            }
            return 2;
          }
        }
      }
      v38 = *(_DWORD *)(a1 + 52);
      if ( v38 != 0x7FFFFFFF )
        goto LABEL_53;
      goto LABEL_98;
    }
    return 2;
  }
  if ( *(_QWORD *)(a1 + 24) || *(_DWORD *)(a1 + 16) )
    return 2;
  v38 = *(_DWORD *)(a1 + 52);
  if ( v38 != 0x7FFFFFFF )
  {
    v91 = 0;
    v30 = *(_DWORD *)(a1 + 20);
LABEL_53:
    if ( v30 > 0xF )
    {
      v39 = *(_QWORD *)(a1 + 32);
      v40 = v38;
      v41 = v39 + v38;
      if ( v41 )
      {
        v42 = v39 + v30;
        while ( v42 >= v41 + 16 && v41 >= v39 )
        {
          v43 = *(_DWORD *)(v41 + 8);
          if ( v40 >= v43 )
          {
            v76 = v38;
            v77 = 0;
            v90 = 0;
            while ( 1 )
            {
              v78 = (_DWORD *)(v39 + v76);
              if ( !v78 )
                return 2;
              if ( v42 < (unsigned __int64)(v78 + 4) )
                return 2;
              if ( (unsigned __int64)v78 < v39 )
                return 2;
              if ( *v78 != 2147483646 )
                return 2;
              v79 = v78[1];
              if ( v79 <= 0xF )
                return 2;
              if ( v30 < v76 )
                return 2;
              if ( v30 - v76 >= v79 )
                return 2;
              v80 = v78[3];
              if ( v80 >= v30 )
                return 2;
              v81 = v78[2];
              if ( v81 >= v30 )
                return 2;
              if ( v76 != *(_DWORD *)(v39 + (int)v80 + 8) )
                return 2;
              v82 = v39 + (int)v81;
              if ( v76 != *(_DWORD *)(v82 + 12) )
                return 2;
              if ( v30 == ++v77 || v76 >= v81 && v40 != v76 )
                return 2;
              if ( v80 >= v76 && v43 != v76 )
                return 2;
              v90 += v79;
              if ( v81 == v38 )
              {
                if ( !v87 && (*(_DWORD *)(v82 + 8) != v81 || v90 != v91) )
                  return 2;
                goto LABEL_98;
              }
              v76 = v81;
            }
          }
          v40 = v43;
          v41 = v39 + (int)v43;
          if ( !v41 )
            return 2;
        }
      }
    }
    return 2;
  }
LABEL_98:
  if ( (v26 & 2) == 0 )
    return v14;
  v60 = *(_QWORD *)(a1 + 40);
  if ( !v60 )
    return 2;
  v61 = *(unsigned int *)(a1 + 48);
  v62 = *(_DWORD **)(a1 + 32);
  v94 = nullptr;
  v95 = 0;
  if ( v61 )
  {
    v94 = (void *)qvector_reserve(&v94, 0, v61, 4);
    v63 = v95;
    if ( (unsigned __int64)v95 < v61 )
    {
      do
        *((_DWORD *)v94 + v63++) = -1;
      while ( v61 != v63 );
    }
    *(_QWORD *)&v95 = v61;
  }
  if ( *(_DWORD *)(a1 + 12) )
  {
    v64 = *(_DWORD *)(a1 + 20);
    v65 = *(_QWORD *)(a1 + 32);
    while ( v62 )
    {
      v66 = v65 + v64;
      v67 = v62 + 1;
      if ( (unsigned __int64)v62 < v65 || v66 < (unsigned __int64)v67 )
        break;
      if ( *v62 != 2147483646 )
      {
        if ( (unsigned __int64)v67 < v65 )
          break;
        v68 = v65 + v64 - 1;
        if ( (unsigned __int64)v67 >= v68 )
          break;
        while ( *(_BYTE *)v67 )
        {
          v67 = (_DWORD *)((char *)v67 + 1);
          if ( v67 == (_DWORD *)v68 )
            goto LABEL_128;
        }
        v69 = v94;
        if ( (unsigned __int64)v67 >= v68 )
          goto LABEL_129;
        if ( (unsigned __int64)v67 + 1 < v65 )
          goto LABEL_129;
        if ( v66 < (unsigned __int64)v67 + 5 )
          goto LABEL_129;
        v70 = *(unsigned int *)((char *)v67 + 1);
        if ( (unsigned int)v70 >= *(_DWORD *)(a1 + 48) )
          goto LABEL_129;
        v71 = (_DWORD *)*(unsigned int *)(v60 + 4 * v70);
        if ( v71 != (_DWORD *)((char *)v62 - v65) )
          goto LABEL_129;
        *((_DWORD *)v94 + v70) = (_DWORD)v71;
      }
      v65 = *(_QWORD *)(a1 + 32);
      v62 = sub_649150(*(_DWORD *)(a1 + 20), v65, v62);
      if ( v72 >= *(unsigned int *)(a1 + 12) )
        goto LABEL_122;
    }
LABEL_128:
    v69 = v94;
LABEL_129:
    if ( v69 )
    {
      *(_QWORD *)&v95 = 0;
      qfree(v69);
    }
    return 2;
  }
LABEL_122:
  v69 = v94;
  for ( k = 0; k < *(unsigned int *)(a1 + 48); ++k )
  {
    v74 = *(_DWORD *)(v60 + 4 * k);
    if ( v74 == -1 )
    {
      v75 = 4 * k;
    }
    else
    {
      v83 = 0;
      v84 = (unsigned int)k;
      while ( 1 )
      {
        v75 = 4 * v84;
        v85 = *((_DWORD *)v94 + v84);
        if ( v74 >= 0 )
          break;
        if ( v85 == -1 )
        {
          v84 = v74 & 0x7FFFFFFF;
          v74 = *(_DWORD *)(v60 + 4 * v84);
          v75 = 4 * v84;
          if ( v74 == -1 )
            break;
          if ( ++v83 != *(_DWORD *)(a1 + 48) )
            continue;
        }
        goto LABEL_129;
      }
    }
    if ( *(_DWORD *)((char *)v94 + v75) != v74 )
      goto LABEL_129;
  }
  if ( v94 )
  {
    *(_QWORD *)&v95 = 0;
    qfree(v94);
  }
  return v14;
}
