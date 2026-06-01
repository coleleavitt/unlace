unsigned __int64 __fastcall sub_941A10(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4)
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
  unsigned int v14; // r12d
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // eax
  unsigned int *v18; // r9
  unsigned int v19; // eax
  _DWORD *v20; // r9
  unsigned int v21; // r8d
  _DWORD *v22; // r8
  int v23; // r8d
  unsigned int v24; // edi
  unsigned int v25; // ecx
  bool v26; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v28; // r15
  _QWORD *v29; // rdi
  unsigned __int64 v32; // r8
  _QWORD *v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdi
  unsigned int v38; // r10d
  __int64 v39; // r11
  unsigned int v40; // ecx
  unsigned int v41; // r12d
  __int64 v42; // r9
  unsigned int v43; // r15d
  unsigned int v44; // ecx
  unsigned __int64 v45; // rbx
  unsigned int v46; // r14d
  unsigned __int64 v47; // r12
  __int64 v48; // rdi
  __int64 v49; // rbx
  unsigned __int64 v50; // r8
  __int64 v51; // rbp
  __int64 v52; // r13
  char *v55; // rbp
  unsigned __int64 v56; // rbp
  _QWORD *v57; // rbp
  _QWORD *v58; // r13
  char *v59; // r13
  __int64 *v60; // rbx
  char *v61; // rdi
  __int64 v62; // r8
  signed __int64 v65; // rdi
  __int64 v66; // rdi
  _QWORD *v69; // r10
  unsigned __int64 v72; // r9
  bool v74; // [rsp+8h] [rbp-78h]
  unsigned __int64 v75; // [rsp+8h] [rbp-78h]
  int v76; // [rsp+14h] [rbp-6Ch]
  int v77; // [rsp+14h] [rbp-6Ch]
  int v78; // [rsp+18h] [rbp-68h]
  char *v79; // [rsp+18h] [rbp-68h]
  unsigned __int64 v80; // [rsp+20h] [rbp-60h]
  __int64 v81; // [rsp+20h] [rbp-60h]
  __int64 v82; // [rsp+28h] [rbp-58h]
  unsigned __int64 v83; // [rsp+28h] [rbp-58h]
  unsigned int v84; // [rsp+30h] [rbp-50h]
  __int64 v85; // [rsp+30h] [rbp-50h]
  __int64 *v86; // [rsp+38h] [rbp-48h]
  _QWORD *v87; // [rsp+40h] [rbp-40h]
  unsigned __int64 v88; // [rsp+40h] [rbp-40h]
  unsigned __int64 v89; // [rsp+48h] [rbp-38h]
  __int64 v90; // [rsp+48h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 128);
  v7 = *(_QWORD *)(a1 + 112);
  v8 = (_DWORD)a2 - v5;
  v9 = 1 << *(_DWORD *)(a1 + 260);
  v76 = (_DWORD)a2 - v5;
  v10 = v9 - 1;
  v84 = *(_DWORD *)(a1 + 24);
  v86 = (__int64 *)(v5 + v84);
  v11 = *(_DWORD *)(a1 + 28);
  v12 = 1 << *(_DWORD *)(a1 + 256);
  v13 = (_DWORD)a2 - v5 - v12;
  if ( v12 >= (_DWORD)a2 - (_DWORD)v5 - v11 )
    v13 = *(_DWORD *)(a1 + 28);
  if ( !*(_DWORD *)(a1 + 40) )
    v11 = v13;
  v14 = (_DWORD)a2 - v5 - v9;
  if ( v9 >= v8 )
    v14 = 0;
  v82 = *(_QWORD *)(a1 + 248);
  v15 = 1 << *(_DWORD *)(a1 + 268);
  v16 = 32 - *(_DWORD *)(a1 + 264);
  v78 = *(_DWORD *)(a1 + 300);
  v17 = *(_DWORD *)(a1 + 44);
  if ( v8 > v17 )
  {
    v18 = (unsigned int *)(v7 + 4LL * ((unsigned int)(-1640531535 * *(_DWORD *)(v5 + v17)) >> v16));
    *(_DWORD *)(v6 + 4LL * (v17 & v10)) = *v18;
    *v18 = v17;
    v19 = v17 + 1;
    if ( !v78 )
    {
      v20 = (_DWORD *)(v5 + v19);
      while ( v76 != v19 )
      {
        v21 = -1640531535 * *v20;
        v20 = (_DWORD *)((char *)v20 + 1);
        v22 = (_DWORD *)(v7 + 4LL * (v21 >> v16));
        *(_DWORD *)(v6 + 4LL * (v19 & v10)) = *v22;
        *v22 = v19++;
      }
    }
  }
  *(_DWORD *)(a1 + 44) = (_DWORD)a2 - v5;
  v23 = *(_DWORD *)a2;
  v24 = -1640531535 * *(_DWORD *)a2;
  v25 = *(_DWORD *)(v7 + 4LL * (v24 >> v16));
  v26 = v15 != 0;
  result = 3;
  v74 = v15 != 0 && v25 >= v11;
  if ( !v74 )
  {
LABEL_40:
    v74 = v26;
    goto LABEL_41;
  }
  v28 = a3 - 7;
  while ( 1 )
  {
    v29 = (_QWORD *)(v5 + v25);
    if ( *(_DWORD *)((char *)v29 + result - 3) != v23 )
    {
LABEL_14:
      if ( v14 >= v25 )
        goto LABEL_25;
      goto LABEL_15;
    }
    if ( (unsigned __int64)a2 >= v28 )
    {
      v33 = a2;
    }
    else
    {
      if ( *v29 != *a2 )
      {
        _R8 = *a2 ^ *v29;
        __asm { tzcnt   r8, r8 }
        v32 = (unsigned int)_R8 >> 3;
        goto LABEL_22;
      }
      v33 = a2 + 1;
      v87 = v29 + 1;
      if ( v28 <= (unsigned __int64)(a2 + 1) )
      {
        ++v29;
      }
      else
      {
        v34 = v29[1];
        v35 = a2[1];
        if ( v35 != v34 )
        {
LABEL_38:
          _RDI = v34 ^ v35;
          __asm { tzcnt   rdi, rdi }
          v32 = (char *)v33 + ((unsigned int)_RDI >> 3) - (char *)a2;
          goto LABEL_22;
        }
        v90 = v6;
        v69 = v87;
        while ( 1 )
        {
          ++v33;
          ++v69;
          if ( v28 <= (unsigned __int64)v33 )
            break;
          v35 = *v69;
          v34 = *v33;
          if ( *v69 != *v33 )
          {
            v6 = v90;
            goto LABEL_38;
          }
        }
        v29 = v69;
        v6 = v90;
      }
    }
    if ( (unsigned __int64)v33 < a3 - 3 && *(_DWORD *)v29 == *(_DWORD *)v33 )
    {
      v33 = (_QWORD *)((char *)v33 + 4);
      v29 = (_QWORD *)((char *)v29 + 4);
    }
    if ( (unsigned __int64)v33 < a3 - 1 && *(_WORD *)v29 == *(_WORD *)v33 )
    {
      v33 = (_QWORD *)((char *)v33 + 2);
      v29 = (_QWORD *)((char *)v29 + 2);
    }
    if ( a3 > (unsigned __int64)v33 )
      v33 = (_QWORD *)((char *)v33 + (*(_BYTE *)v29 == *(_BYTE *)v33));
    v32 = (char *)v33 - (char *)a2;
LABEL_22:
    if ( v32 <= result )
      goto LABEL_14;
    *a4 = v76 + 3 - v25;
    if ( (_QWORD *)a3 == (_QWORD *)((char *)a2 + v32) )
      break;
    result = v32;
    if ( v14 >= v25 )
    {
LABEL_25:
      v23 = *(_DWORD *)a2;
      v24 = -1640531535 * *(_DWORD *)a2;
      goto LABEL_41;
    }
LABEL_15:
    --v15;
    v25 = *(_DWORD *)(v6 + 4LL * (v10 & v25));
    v26 = v15 != 0;
    if ( v25 < v11 || !v15 )
    {
      v23 = *(_DWORD *)a2;
      v24 = -1640531535 * *(_DWORD *)a2;
      goto LABEL_40;
    }
    v23 = *(_DWORD *)((char *)a2 + result - 3);
  }
  v72 = v32;
  v23 = *(_DWORD *)a2;
  result = v72;
  v24 = -1640531535 * *(_DWORD *)a2;
LABEL_41:
  v38 = *(_DWORD *)(v82 + 24);
  v39 = *(_QWORD *)(v82 + 128);
  v79 = *(char **)v82;
  v40 = 1 << *(_DWORD *)(v82 + 260);
  v41 = v40 - 1;
  v42 = *(_QWORD *)(v82 + 8);
  v43 = *(_QWORD *)v82 - v42 - v40;
  if ( v40 >= (unsigned int)*(_QWORD *)v82 - (unsigned int)v42 )
    v43 = 0;
  v44 = *(_DWORD *)(*(_QWORD *)(v82 + 112) + 4LL * (v24 >> (32 - *(_BYTE *)(v82 + 264))));
  if ( v38 <= v44 && v74 )
  {
    v75 = (unsigned __int64)a2 + 4;
    v77 = *(_DWORD *)v82 - v42 + v76 - v84 + 3;
    v83 = a3 - 7;
    v88 = a3 - 3;
    v89 = a3 - 1;
    v45 = a3;
    v46 = v41;
    v47 = v45;
    while ( 2 )
    {
      v48 = v42 + v44;
      if ( *(_DWORD *)v48 != v23 )
        goto LABEL_46;
      v49 = v48 + 4;
      v50 = (unsigned __int64)&v79[(_QWORD)a2 - v48];
      if ( v47 < v50 )
        v50 = v47;
      v80 = v50 - 7;
      if ( v75 >= v50 - 7 )
      {
        v57 = (_QWORD *)((char *)a2 + 4);
        v58 = (_QWORD *)(v48 + 4);
      }
      else
      {
        v51 = *(_QWORD *)(v48 + 4);
        v52 = *(_QWORD *)((char *)a2 + 4);
        if ( v51 != v52 )
        {
          _RBP = v52 ^ v51;
          __asm { tzcnt   rbp, rbp }
          v55 = (char *)((unsigned int)_RBP >> 3);
          goto LABEL_56;
        }
        v57 = (_QWORD *)((char *)a2 + 12);
        v58 = (_QWORD *)(v48 + 12);
        if ( v80 > (unsigned __int64)a2 + 12 )
        {
          v85 = *(_QWORD *)(v48 + 12);
          v66 = *(_QWORD *)((char *)a2 + 12);
          if ( v66 != v85 )
          {
            _RDI = v85 ^ v66;
LABEL_78:
            __asm { tzcnt   rdi, rdi }
            v55 = (char *)v57 + ((unsigned int)_RDI >> 3) - v75;
LABEL_56:
            if ( v79 != &v55[v49] )
            {
LABEL_57:
              v56 = (unsigned __int64)(v55 + 4);
              if ( v56 > result )
              {
                *a4 = v77 - v44;
                result = v56;
                if ( (_QWORD *)v47 == (_QWORD *)((char *)a2 + v56) )
                  return result;
              }
LABEL_46:
              if ( v43 >= v44 )
                return result;
              --v15;
              v44 = *(_DWORD *)(v39 + 4LL * (v46 & v44));
              if ( v38 > v44 || !v15 )
                return result;
              v23 = *(_DWORD *)a2;
              continue;
            }
LABEL_70:
            v59 = &v55[v75];
            v60 = v86;
            if ( (unsigned __int64)&v55[v75] >= v83 )
            {
              v61 = &v55[v75];
            }
            else
            {
              if ( *v86 != *(_QWORD *)v59 )
              {
                _RDI = *(_QWORD *)v59 ^ *v86;
                __asm { tzcnt   rdi, rdi }
                v65 = (unsigned int)_RDI >> 3;
                goto LABEL_89;
              }
              v61 = v59 + 8;
              v60 = v86 + 1;
              if ( v83 > (unsigned __int64)(v59 + 8) )
              {
                v81 = v86[1];
                v62 = *((_QWORD *)v59 + 1);
                if ( v62 != v81 )
                {
LABEL_74:
                  _R8 = v81 ^ v62;
                  __asm { tzcnt   r8, r8 }
                  v65 = &v61[(unsigned int)_R8 >> 3] - v59;
LABEL_89:
                  v55 += v65;
                  goto LABEL_57;
                }
                while ( 1 )
                {
                  v61 += 8;
                  ++v60;
                  if ( v83 <= (unsigned __int64)v61 )
                    break;
                  v81 = *v60;
                  v62 = *(_QWORD *)v61;
                  if ( *v60 != *(_QWORD *)v61 )
                    goto LABEL_74;
                }
              }
            }
            if ( (unsigned __int64)v61 < v88 && *(_DWORD *)v60 == *(_DWORD *)v61 )
            {
              v61 += 4;
              v60 = (__int64 *)((char *)v60 + 4);
            }
            if ( (unsigned __int64)v61 < v89 && *(_WORD *)v60 == *(_WORD *)v61 )
            {
              v61 += 2;
              v60 = (__int64 *)((char *)v60 + 2);
            }
            if ( v47 > (unsigned __int64)v61 )
              v61 += *(_BYTE *)v60 == (unsigned __int8)*v61;
            v65 = v61 - v59;
            goto LABEL_89;
          }
          while ( 1 )
          {
            ++v57;
            ++v58;
            if ( v80 <= (unsigned __int64)v57 )
              break;
            if ( *v58 != *v57 )
            {
              _RDI = *v57 ^ *v58;
              goto LABEL_78;
            }
          }
        }
      }
      break;
    }
    if ( (unsigned __int64)v57 < v50 - 3 && *(_DWORD *)v58 == *(_DWORD *)v57 )
    {
      v57 = (_QWORD *)((char *)v57 + 4);
      v58 = (_QWORD *)((char *)v58 + 4);
    }
    if ( (unsigned __int64)v57 < v50 - 1 && *(_WORD *)v58 == *(_WORD *)v57 )
    {
      v57 = (_QWORD *)((char *)v57 + 2);
      v58 = (_QWORD *)((char *)v58 + 2);
    }
    if ( v50 > (unsigned __int64)v57 )
      v57 = (_QWORD *)((char *)v57 + (*(_BYTE *)v58 == *(_BYTE *)v57));
    v55 = (char *)v57 - v75;
    if ( v79 != &v55[v49] )
      goto LABEL_57;
    goto LABEL_70;
  }
  return result;
}
