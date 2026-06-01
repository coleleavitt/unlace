__int64 __fastcall sub_62E8E0(__int64 a1, __int64 a2, char a3, int a4)
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
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 (__fastcall *v19)(__int64, __int64, __int64); // rax
  _DWORD *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r11d
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rsi
  unsigned int v27; // r15d
  unsigned int v28; // ebx
  _BYTE *v29; // r10
  _DWORD *v30; // r14
  unsigned __int64 v31; // r15
  __int64 v32; // rbp
  _BYTE *v33; // rax
  __int64 v34; // r10
  __int64 v35; // r10
  signed int v36; // edx
  unsigned __int64 v37; // rax
  unsigned int v38; // ecx
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // rsi
  unsigned int v41; // edi
  __int64 v42; // r15
  unsigned __int64 v43; // rt1
  bool v44; // dl
  __int64 v45; // r14
  unsigned __int64 j; // r9
  int v47; // ecx
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  _BYTE *v50; // rdx
  unsigned __int64 v51; // r8
  int v52; // r8d
  unsigned __int64 v53; // rdx
  unsigned int v54; // eax
  unsigned __int64 v55; // rsi
  int v56; // ebx
  unsigned int v57; // r10d
  __int64 v58; // rbp
  unsigned __int64 v59; // r14
  _DWORD *v60; // rbx
  __int64 v61; // rax
  unsigned int v62; // r11d
  unsigned __int64 v63; // rsi
  unsigned __int64 v64; // rcx
  _DWORD *v65; // rax
  unsigned __int64 v66; // rdx
  void *v67; // rdi
  __int64 v68; // rax
  _DWORD *v69; // r8
  unsigned __int64 v70; // r10
  unsigned __int64 k; // rax
  int v72; // edx
  __int64 v73; // rsi
  unsigned int v74; // r8d
  int v75; // r14d
  _DWORD *v76; // r9
  unsigned int v77; // r10d
  unsigned int v78; // ebp
  unsigned int v79; // r15d
  unsigned __int64 v80; // r9
  int v81; // r8d
  __int64 v82; // rcx
  int v83; // ecx
  int v84; // [rsp+4h] [rbp-84h]
  char v85; // [rsp+4h] [rbp-84h]
  __int64 v87; // [rsp+8h] [rbp-80h]
  int v88; // [rsp+8h] [rbp-80h]
  unsigned __int64 v89; // [rsp+10h] [rbp-78h]
  unsigned __int64 v90; // [rsp+18h] [rbp-70h]
  unsigned int v91; // [rsp+2Ch] [rbp-5Ch]
  void *v92; // [rsp+30h] [rbp-58h] BYREF
  __int128 v93; // [rsp+38h] [rbp-50h]
  unsigned __int64 v94; // [rsp+48h] [rbp-40h]

  v94 = __readfsqword(0x28u);
  v84 = a3 & 0x10;
  if ( (a3 & 0x10) != 0 )
  {
    *(_DWORD *)(a1 + 8) |= 2u;
    if ( (unsigned int)freadbytes() )
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
          while ( !(unsigned int)freadbytes() )
          {
            if ( v91 == -1 )
              goto LABEL_18;
            if ( v91 >= v7 )
              return 2;
            if ( (unsigned int)freadbytes() )
              return 1;
            if ( (unsigned int)v92 >= v7 )
              return 2;
            v13 = (unsigned int *)(v10 + 4LL * v91);
            if ( *v13 != -1 )
              return 2;
            *v13 = (unsigned int)v92 | 0x80000000;
          }
          return 1;
        }
      }
      return 3;
    }
  }
LABEL_18:
  if ( (unsigned int)freadbytes() )
    return 1;
  v16 = *(_DWORD *)(a1 + 12);
  if ( v16 > 0x55555554 )
    return 1;
  if ( v84 && *(_DWORD *)(a1 + 48) < v16 )
    return 2;
  v14 = freadbytes();
  if ( v14 )
    return 1;
  if ( *(_DWORD *)(a1 + 12) )
  {
    if ( !v91 )
      return 2;
    *(_DWORD *)(a1 + 20) = v91;
    v17 = qalloc(v91);
    *(_QWORD *)(a1 + 32) = v17;
    v18 = v17;
    if ( !v17 )
      return 3;
    v19 = sub_629E00;
    if ( (a3 & 1) == 0 )
      v19 = (__int64 (__fastcall *)(__int64, __int64, __int64))qfread;
    if ( v91 != (unsigned int)v19(a2, v18, v91) )
      return 2;
    if ( a4 <= 17 && (*(_BYTE *)(a1 + 8) & 1) != 0 )
    {
      v55 = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)(a1 + 12) )
      {
        if ( v55 )
        {
          v20 = *(_DWORD **)(a1 + 32);
          v56 = 0;
          if ( v55 + 4 <= v55 + *(unsigned int *)(a1 + 20) )
          {
            do
            {
              if ( (unsigned __int64)v20 < v55 )
                break;
              *v20 &= ~0x80000000;
              v55 = *(_QWORD *)(a1 + 32);
              v20 = sub_62BB50(*(_DWORD *)(a1 + 20), v55, v20);
              if ( !v20 )
                break;
              if ( (unsigned int)++v56 >= *(_DWORD *)(a1 + 12) )
                goto LABEL_31;
            }
            while ( (unsigned __int64)(v20 + 1) <= v55 + v57 );
          }
        }
        return 2;
      }
    }
LABEL_31:
    if ( !sub_62DB00(a1, 1, (__int64)v20, v21, v22, v23) )
      return 2;
  }
  v24 = *(_DWORD *)(a1 + 8);
  if ( (v24 & 2) != 0 && !*(_QWORD *)(a1 + 40) )
  {
    if ( !sub_62D8C0(a1, 1) )
      return 2;
    v24 = *(_DWORD *)(a1 + 8);
  }
  v85 = v24 & 1;
  if ( (v24 & 1) != 0 )
  {
    v25 = *(unsigned int *)(a1 + 20);
    v26 = *(_QWORD *)(a1 + 32);
    v27 = *(_DWORD *)(a1 + 12);
    v28 = *(_DWORD *)(a1 + 20);
    v29 = (_BYTE *)(v26 + v25);
    if ( v27 )
    {
      if ( v26 )
      {
        v30 = *(_DWORD **)(a1 + 32);
        v90 = *(unsigned int *)(a1 + 20);
        v87 = v27;
        v31 = v26 + v25;
        v32 = 0;
        v89 = 0;
        if ( v26 + v25 >= v26 + 4 )
        {
          while ( (unsigned __int64)v30 >= v26 )
          {
            if ( *v30 == 2147483646 )
            {
              if ( v31 < (unsigned __int64)(v30 + 4) )
                return 2;
              v89 += (unsigned int)v30[1];
              v33 = sub_62BB50(v28, v26, v30);
              if ( !v33 )
                return 2;
              if ( ++v32 == v87 )
              {
LABEL_64:
                v25 = v90;
                v43 = v31;
                v42 = v35;
                v29 = (_BYTE *)v43;
                v44 = v90 < v89;
                goto LABEL_65;
              }
            }
            else
            {
              v33 = sub_62BB50(v28, v26, v30);
              if ( !v33 || v33 < (_BYTE *)v30 )
                return 2;
              ++v32;
              v35 = v33 - (_BYTE *)v30 + v34;
              if ( v87 == v32 )
                goto LABEL_64;
            }
            v30 = v33;
            if ( v31 < (unsigned __int64)(v33 + 4) )
              return 2;
          }
        }
      }
      return 2;
    }
    v89 = 0;
    v33 = *(_BYTE **)(a1 + 32);
    v44 = 0;
    v42 = 0;
LABEL_65:
    if ( v29 == v33 && !v44 && v25 == v42 + v89 )
    {
      v45 = *(_QWORD *)(a1 + 24);
      if ( v45 )
      {
        for ( j = 0; j < *(unsigned int *)(a1 + 16); ++j )
        {
          v47 = *(_DWORD *)(v45 + 4 * j);
          while ( 1 )
          {
            v48 = v47 & 0x7FFFFFFF;
            if ( (_DWORD)v48 == 0x7FFFFFFF )
              break;
            v49 = v26 + v48;
            if ( v49 )
            {
              v50 = (_BYTE *)(v49 + 4);
              if ( v49 >= v26 && v29 >= v50 )
              {
                v47 = *(_DWORD *)v49;
                if ( *(_DWORD *)v49 != 2147483646 && (unsigned __int64)v50 >= v26 )
                {
                  v51 = v26 + v25 - 1;
                  if ( (unsigned __int64)v50 < v51 )
                  {
                    while ( *v50 )
                    {
                      if ( ++v50 == (_BYTE *)v51 )
                        return 2;
                    }
                    if ( (unsigned __int64)v50 < v51 )
                    {
                      v52 = *(char *)(v49 + 4);
                      v53 = v49 + 5;
                      v54 = 0;
                      if ( (_BYTE)v52 )
                      {
                        do
                        {
                          ++v53;
                          v54 = v52 ^ __ROL4__(v54, 5);
                          v52 = *(char *)(v53 - 1);
                        }
                        while ( *(_BYTE *)(v53 - 1) );
                      }
                      if ( j == v54 % *(_DWORD *)(a1 + 16) )
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
      v36 = *(_DWORD *)(a1 + 52);
      if ( v36 != 0x7FFFFFFF )
        goto LABEL_53;
      goto LABEL_98;
    }
    return 2;
  }
  if ( *(_QWORD *)(a1 + 24) || *(_DWORD *)(a1 + 16) )
    return 2;
  v36 = *(_DWORD *)(a1 + 52);
  if ( v36 != 0x7FFFFFFF )
  {
    v89 = 0;
    v28 = *(_DWORD *)(a1 + 20);
LABEL_53:
    if ( v28 > 0xF )
    {
      v37 = *(_QWORD *)(a1 + 32);
      v38 = v36;
      v39 = v37 + v36;
      if ( v39 )
      {
        v40 = v37 + v28;
        while ( v40 >= v39 + 16 && v39 >= v37 )
        {
          v41 = *(_DWORD *)(v39 + 8);
          if ( v38 >= v41 )
          {
            v74 = v36;
            v75 = 0;
            v88 = 0;
            while ( 1 )
            {
              v76 = (_DWORD *)(v37 + v74);
              if ( !v76 )
                return 2;
              if ( v40 < (unsigned __int64)(v76 + 4) )
                return 2;
              if ( (unsigned __int64)v76 < v37 )
                return 2;
              if ( *v76 != 2147483646 )
                return 2;
              v77 = v76[1];
              if ( v77 <= 0xF )
                return 2;
              if ( v28 < v74 )
                return 2;
              if ( v28 - v74 >= v77 )
                return 2;
              v78 = v76[3];
              if ( v78 >= v28 )
                return 2;
              v79 = v76[2];
              if ( v79 >= v28 )
                return 2;
              if ( v74 != *(_DWORD *)(v37 + (int)v78 + 8) )
                return 2;
              v80 = v37 + (int)v79;
              if ( v74 != *(_DWORD *)(v80 + 12) )
                return 2;
              if ( v28 == ++v75 || v74 >= v79 && v38 != v74 )
                return 2;
              if ( v78 >= v74 && v41 != v74 )
                return 2;
              v88 += v77;
              if ( v79 == v36 )
              {
                if ( !v85 && (*(_DWORD *)(v80 + 8) != v79 || v88 != v89) )
                  return 2;
                goto LABEL_98;
              }
              v74 = v79;
            }
          }
          v38 = v41;
          v39 = v37 + (int)v41;
          if ( !v39 )
            return 2;
        }
      }
    }
    return 2;
  }
LABEL_98:
  if ( (v24 & 2) == 0 )
    return v14;
  v58 = *(_QWORD *)(a1 + 40);
  if ( !v58 )
    return 2;
  v59 = *(unsigned int *)(a1 + 48);
  v60 = *(_DWORD **)(a1 + 32);
  v92 = nullptr;
  v93 = 0;
  if ( v59 )
  {
    v92 = (void *)qvector_reserve(&v92, 0, v59, 4);
    v61 = v93;
    if ( (unsigned __int64)v93 < v59 )
    {
      do
        *((_DWORD *)v92 + v61++) = -1;
      while ( v59 != v61 );
    }
    *(_QWORD *)&v93 = v59;
  }
  if ( *(_DWORD *)(a1 + 12) )
  {
    v62 = *(_DWORD *)(a1 + 20);
    v63 = *(_QWORD *)(a1 + 32);
    while ( v60 )
    {
      v64 = v63 + v62;
      v65 = v60 + 1;
      if ( (unsigned __int64)v60 < v63 || v64 < (unsigned __int64)v65 )
        break;
      if ( *v60 != 2147483646 )
      {
        if ( (unsigned __int64)v65 < v63 )
          break;
        v66 = v63 + v62 - 1;
        if ( (unsigned __int64)v65 >= v66 )
          break;
        while ( *(_BYTE *)v65 )
        {
          v65 = (_DWORD *)((char *)v65 + 1);
          if ( v65 == (_DWORD *)v66 )
            goto LABEL_128;
        }
        v67 = v92;
        if ( (unsigned __int64)v65 >= v66 )
          goto LABEL_129;
        if ( (unsigned __int64)v65 + 1 < v63 )
          goto LABEL_129;
        if ( v64 < (unsigned __int64)v65 + 5 )
          goto LABEL_129;
        v68 = *(unsigned int *)((char *)v65 + 1);
        if ( (unsigned int)v68 >= *(_DWORD *)(a1 + 48) )
          goto LABEL_129;
        v69 = (_DWORD *)*(unsigned int *)(v58 + 4 * v68);
        if ( v69 != (_DWORD *)((char *)v60 - v63) )
          goto LABEL_129;
        *((_DWORD *)v92 + v68) = (_DWORD)v69;
      }
      v63 = *(_QWORD *)(a1 + 32);
      v60 = sub_62BB50(*(_DWORD *)(a1 + 20), v63, v60);
      if ( v70 >= *(unsigned int *)(a1 + 12) )
        goto LABEL_122;
    }
LABEL_128:
    v67 = v92;
LABEL_129:
    if ( v67 )
    {
      *(_QWORD *)&v93 = 0;
      qfree(v67);
    }
    return 2;
  }
LABEL_122:
  v67 = v92;
  for ( k = 0; k < *(unsigned int *)(a1 + 48); ++k )
  {
    v72 = *(_DWORD *)(v58 + 4 * k);
    if ( v72 == -1 )
    {
      v73 = 4 * k;
    }
    else
    {
      v81 = 0;
      v82 = (unsigned int)k;
      while ( 1 )
      {
        v73 = 4 * v82;
        v83 = *((_DWORD *)v92 + v82);
        if ( v72 >= 0 )
          break;
        if ( v83 == -1 )
        {
          v82 = v72 & 0x7FFFFFFF;
          v72 = *(_DWORD *)(v58 + 4 * v82);
          v73 = 4 * v82;
          if ( v72 == -1 )
            break;
          if ( ++v81 != *(_DWORD *)(a1 + 48) )
            continue;
        }
        goto LABEL_129;
      }
    }
    if ( *(_DWORD *)((char *)v92 + v73) != v72 )
      goto LABEL_129;
  }
  if ( v92 )
  {
    *(_QWORD *)&v93 = 0;
    qfree(v92);
  }
  return v14;
}

