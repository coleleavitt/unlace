unsigned __int64 __fastcall sub_940BF0(__int64 a1, char *a2, char *a3, _QWORD *a4)
{
  __int64 v5; // rbp
  __int64 v6; // r10
  __int64 v7; // r13
  unsigned int v8; // r15d
  unsigned int v9; // eax
  unsigned int v10; // r11d
  unsigned int v11; // ebx
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  int v14; // r8d
  unsigned int v15; // ecx
  bool v16; // cf
  unsigned int v17; // eax
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // eax
  unsigned int *v21; // r9
  unsigned int v22; // eax
  __int64 *v23; // r9
  __int64 v24; // r8
  _DWORD *v25; // r8
  unsigned __int64 v26; // rdi
  unsigned int v27; // ecx
  bool v28; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v30; // r15
  _QWORD *v31; // rdi
  unsigned __int64 v34; // r8
  char *v35; // r8
  __int64 v36; // r12
  __int64 v37; // rdi
  __int64 v40; // r9
  unsigned int v41; // r10d
  __int64 v42; // r11
  unsigned int v43; // ecx
  unsigned int v44; // r12d
  unsigned int v45; // r15d
  unsigned int v46; // ecx
  char *v47; // rbx
  unsigned int v48; // r14d
  char *v49; // r12
  __int64 v50; // rdi
  __int64 v51; // rbx
  char *v52; // r8
  __int64 v53; // rbp
  __int64 v54; // r13
  char *v57; // rbp
  unsigned __int64 v58; // rbp
  char *v59; // rbp
  _QWORD *v60; // r13
  char *v61; // r13
  __int64 *v62; // rbx
  char *v63; // rdi
  __int64 v64; // r8
  signed __int64 v67; // rdi
  __int64 v68; // rdi
  _QWORD *v71; // r10
  bool v75; // [rsp+8h] [rbp-78h]
  unsigned __int64 v76; // [rsp+8h] [rbp-78h]
  int v77; // [rsp+14h] [rbp-6Ch]
  int v78; // [rsp+14h] [rbp-6Ch]
  char *v79; // [rsp+18h] [rbp-68h]
  unsigned int v80; // [rsp+20h] [rbp-60h]
  unsigned __int64 v81; // [rsp+20h] [rbp-60h]
  __int64 v82; // [rsp+20h] [rbp-60h]
  __int64 v83; // [rsp+28h] [rbp-58h]
  unsigned __int64 v84; // [rsp+28h] [rbp-58h]
  unsigned int v85; // [rsp+30h] [rbp-50h]
  __int64 v86; // [rsp+30h] [rbp-50h]
  __int64 *v87; // [rsp+38h] [rbp-48h]
  _QWORD *v88; // [rsp+40h] [rbp-40h]
  unsigned __int64 v89; // [rsp+40h] [rbp-40h]
  unsigned __int64 v90; // [rsp+48h] [rbp-38h]
  __int64 v91; // [rsp+48h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 128);
  v7 = *(_QWORD *)(a1 + 112);
  v8 = (_DWORD)a2 - v5;
  v9 = 1 << *(_DWORD *)(a1 + 260);
  v77 = (_DWORD)a2 - v5;
  v10 = v9 - 1;
  v85 = *(_DWORD *)(a1 + 24);
  v87 = (__int64 *)(v5 + v85);
  v11 = *(_DWORD *)(a1 + 28);
  v12 = 1 << *(_DWORD *)(a1 + 256);
  v13 = (_DWORD)a2 - v5 - v12;
  if ( v12 >= (_DWORD)a2 - (_DWORD)v5 - v11 )
    v13 = *(_DWORD *)(a1 + 28);
  v14 = *(_DWORD *)(a1 + 300);
  if ( !*(_DWORD *)(a1 + 40) )
    v11 = v13;
  v15 = v8 - v9;
  v16 = v9 < v8;
  v17 = 0;
  if ( v16 )
    v17 = v15;
  v80 = v17;
  v18 = 1 << *(_DWORD *)(a1 + 268);
  v19 = 64 - *(_DWORD *)(a1 + 264);
  v83 = *(_QWORD *)(a1 + 248);
  v20 = *(_DWORD *)(a1 + 44);
  if ( v8 > v20 )
  {
    v21 = (unsigned int *)(v7 + 4 * ((0xCF1BBCDCBF9B0000LL * *(_QWORD *)(v5 + v20)) >> v19));
    *(_DWORD *)(v6 + 4LL * (v20 & v10)) = *v21;
    *v21 = v20;
    v22 = v20 + 1;
    if ( !v14 )
    {
      v23 = (__int64 *)(v5 + v22);
      while ( v77 != v22 )
      {
        v24 = *v23;
        v23 = (__int64 *)((char *)v23 + 1);
        v25 = (_DWORD *)(v7 + 4 * ((0xCF1BBCDCBF9B0000LL * v24) >> v19));
        *(_DWORD *)(v6 + 4LL * (v22 & v10)) = *v25;
        *v25 = v22++;
      }
    }
  }
  *(_DWORD *)(a1 + 44) = (_DWORD)a2 - v5;
  v26 = 0xCF1BBCDCBF9B0000LL * *(_QWORD *)a2;
  v27 = *(_DWORD *)(v7 + 4 * (v26 >> v19));
  v28 = v18 != 0;
  result = 3;
  v75 = v18 != 0 && v27 >= v11;
  if ( !v75 )
  {
LABEL_39:
    v75 = v28;
    goto LABEL_40;
  }
  v30 = (unsigned __int64)(a3 - 7);
  while ( 1 )
  {
    v31 = (_QWORD *)(v5 + v27);
    if ( *(_DWORD *)&a2[result - 3] != *(_DWORD *)((char *)v31 + result - 3) )
      goto LABEL_14;
    if ( (unsigned __int64)a2 >= v30 )
    {
      v35 = a2;
    }
    else
    {
      if ( *v31 != *(_QWORD *)a2 )
      {
        _R8 = *(_QWORD *)a2 ^ *v31;
        __asm { tzcnt   r8, r8 }
        v34 = (unsigned int)_R8 >> 3;
        goto LABEL_21;
      }
      v35 = a2 + 8;
      v88 = v31 + 1;
      if ( v30 <= (unsigned __int64)(a2 + 8) )
      {
        ++v31;
      }
      else
      {
        v36 = v31[1];
        v37 = *((_QWORD *)a2 + 1);
        if ( v37 != v36 )
        {
LABEL_37:
          _RDI = v36 ^ v37;
          __asm { tzcnt   rdi, rdi }
          v34 = &v35[(unsigned int)_RDI >> 3] - a2;
          goto LABEL_21;
        }
        v91 = v6;
        v71 = v88;
        while ( 1 )
        {
          v35 += 8;
          ++v71;
          if ( v30 <= (unsigned __int64)v35 )
            break;
          v37 = *v71;
          v36 = *(_QWORD *)v35;
          if ( *v71 != *(_QWORD *)v35 )
          {
            v6 = v91;
            goto LABEL_37;
          }
        }
        v31 = v71;
        v6 = v91;
      }
    }
    if ( v35 < a3 - 3 && *(_DWORD *)v31 == *(_DWORD *)v35 )
    {
      v35 += 4;
      v31 = (_QWORD *)((char *)v31 + 4);
    }
    if ( v35 < a3 - 1 && *(_WORD *)v31 == *(_WORD *)v35 )
    {
      v35 += 2;
      v31 = (_QWORD *)((char *)v31 + 2);
    }
    if ( a3 > v35 )
      v35 += *(_BYTE *)v31 == (unsigned __int8)*v35;
    v34 = v35 - a2;
LABEL_21:
    if ( v34 > result )
      break;
LABEL_14:
    if ( v80 >= v27 )
      goto LABEL_24;
LABEL_15:
    --v18;
    v27 = *(_DWORD *)(v6 + 4LL * (v10 & v27));
    v28 = v18 != 0;
    if ( v27 < v11 || !v18 )
    {
      v26 = 0xCF1BBCDCBF9B0000LL * *(_QWORD *)a2;
      goto LABEL_39;
    }
  }
  *a4 = v77 + 3 - v27;
  if ( a3 != &a2[v34] )
  {
    result = v34;
    if ( v80 >= v27 )
    {
LABEL_24:
      v26 = 0xCF1BBCDCBF9B0000LL * *(_QWORD *)a2;
      goto LABEL_40;
    }
    goto LABEL_15;
  }
  result = v34;
  v26 = 0xCF1BBCDCBF9B0000LL * *(_QWORD *)a2;
LABEL_40:
  v40 = *(_QWORD *)(v83 + 8);
  v41 = *(_DWORD *)(v83 + 24);
  v79 = *(char **)v83;
  v42 = *(_QWORD *)(v83 + 128);
  v43 = 1 << *(_DWORD *)(v83 + 260);
  v44 = v43 - 1;
  v45 = *(_QWORD *)v83 - v40 - v43;
  if ( v43 >= (unsigned int)*(_QWORD *)v83 - (unsigned int)v40 )
    v45 = 0;
  v46 = *(_DWORD *)(*(_QWORD *)(v83 + 112) + 4 * (v26 >> (64 - *(_BYTE *)(v83 + 264))));
  if ( v41 <= v46 && v75 )
  {
    v76 = (unsigned __int64)(a2 + 4);
    v78 = *(_QWORD *)v83 - v40 + v77 - v85 + 3;
    v84 = (unsigned __int64)(a3 - 7);
    v89 = (unsigned __int64)(a3 - 3);
    v90 = (unsigned __int64)(a3 - 1);
    v47 = a3;
    v48 = v44;
    v49 = v47;
    while ( 2 )
    {
      v50 = v40 + v46;
      if ( *(_DWORD *)a2 != *(_DWORD *)v50 )
        goto LABEL_45;
      v51 = v50 + 4;
      v52 = &v79[(_QWORD)a2 - v50];
      if ( v49 < v52 )
        v52 = v49;
      v81 = (unsigned __int64)(v52 - 7);
      if ( v76 >= (unsigned __int64)(v52 - 7) )
      {
        v59 = a2 + 4;
        v60 = (_QWORD *)(v50 + 4);
      }
      else
      {
        v53 = *(_QWORD *)(v50 + 4);
        v54 = *(_QWORD *)(a2 + 4);
        if ( v53 != v54 )
        {
          _RBP = v54 ^ v53;
          __asm { tzcnt   rbp, rbp }
          v57 = (char *)((unsigned int)_RBP >> 3);
          goto LABEL_54;
        }
        v59 = a2 + 12;
        v60 = (_QWORD *)(v50 + 12);
        if ( v81 > (unsigned __int64)(a2 + 12) )
        {
          v86 = *(_QWORD *)(v50 + 12);
          v68 = *(_QWORD *)(a2 + 12);
          if ( v68 != v86 )
          {
            _RDI = v86 ^ v68;
LABEL_76:
            __asm { tzcnt   rdi, rdi }
            v57 = &v59[((unsigned int)_RDI >> 3) - v76];
LABEL_54:
            if ( v79 != &v57[v51] )
            {
LABEL_55:
              v58 = (unsigned __int64)(v57 + 4);
              if ( v58 > result )
              {
                *a4 = v78 - v46;
                result = v58;
                if ( v49 == &a2[v58] )
                  return result;
              }
LABEL_45:
              if ( v45 >= v46 )
                return result;
              --v18;
              v46 = *(_DWORD *)(v42 + 4LL * (v48 & v46));
              if ( v41 > v46 || !v18 )
                return result;
              continue;
            }
LABEL_68:
            v61 = &v57[v76];
            v62 = v87;
            if ( (unsigned __int64)&v57[v76] >= v84 )
            {
              v63 = &v57[v76];
            }
            else
            {
              if ( *v87 != *(_QWORD *)v61 )
              {
                _RDI = *(_QWORD *)v61 ^ *v87;
                __asm { tzcnt   rdi, rdi }
                v67 = (unsigned int)_RDI >> 3;
                goto LABEL_87;
              }
              v63 = v61 + 8;
              v62 = v87 + 1;
              if ( v84 > (unsigned __int64)(v61 + 8) )
              {
                v82 = v87[1];
                v64 = *((_QWORD *)v61 + 1);
                if ( v64 != v82 )
                {
LABEL_72:
                  _R8 = v82 ^ v64;
                  __asm { tzcnt   r8, r8 }
                  v67 = &v63[(unsigned int)_R8 >> 3] - v61;
LABEL_87:
                  v57 += v67;
                  goto LABEL_55;
                }
                while ( 1 )
                {
                  v63 += 8;
                  ++v62;
                  if ( v84 <= (unsigned __int64)v63 )
                    break;
                  v82 = *v62;
                  v64 = *(_QWORD *)v63;
                  if ( *v62 != *(_QWORD *)v63 )
                    goto LABEL_72;
                }
              }
            }
            if ( (unsigned __int64)v63 < v89 && *(_DWORD *)v62 == *(_DWORD *)v63 )
            {
              v63 += 4;
              v62 = (__int64 *)((char *)v62 + 4);
            }
            if ( (unsigned __int64)v63 < v90 && *(_WORD *)v62 == *(_WORD *)v63 )
            {
              v63 += 2;
              v62 = (__int64 *)((char *)v62 + 2);
            }
            if ( v49 > v63 )
              v63 += *(_BYTE *)v62 == (unsigned __int8)*v63;
            v67 = v63 - v61;
            goto LABEL_87;
          }
          while ( 1 )
          {
            v59 += 8;
            ++v60;
            if ( v81 <= (unsigned __int64)v59 )
              break;
            if ( *v60 != *(_QWORD *)v59 )
            {
              _RDI = *(_QWORD *)v59 ^ *v60;
              goto LABEL_76;
            }
          }
        }
      }
      break;
    }
    if ( v59 < v52 - 3 && *(_DWORD *)v60 == *(_DWORD *)v59 )
    {
      v59 += 4;
      v60 = (_QWORD *)((char *)v60 + 4);
    }
    if ( v59 < v52 - 1 && *(_WORD *)v60 == *(_WORD *)v59 )
    {
      v59 += 2;
      v60 = (_QWORD *)((char *)v60 + 2);
    }
    if ( v52 > v59 )
      v59 += *(_BYTE *)v60 == (unsigned __int8)*v59;
    v57 = &v59[-v76];
    if ( v79 != &v57[v51] )
      goto LABEL_55;
    goto LABEL_68;
  }
  return result;
}
