unsigned __int64 __fastcall sub_20C4A10(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 *v10; // r14
  __int64 *v11; // r13
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int m; // eax
  __int64 *v15; // rcx
  _QWORD **v16; // rsi
  int v17; // eax
  unsigned __int64 result; // rax
  unsigned __int64 *v19; // r13
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // r11
  __int64 *v24; // r15
  _QWORD *j; // rdx
  __int64 *v26; // rdx
  __int64 v27; // rcx
  int v28; // edi
  int v29; // r8d
  char v30; // r9
  __int64 v31; // rsi
  int v32; // edi
  int v33; // r14d
  _QWORD *v34; // r13
  unsigned int k; // eax
  _QWORD *v36; // rsi
  __int64 v37; // r10
  unsigned int v38; // eax
  __int64 v39; // rsi
  bool v40; // zf
  int v41; // eax
  __int64 v42; // rdx
  __int64 *v43; // rdx
  __int64 v44; // rax
  _QWORD *i; // rax
  int v46; // eax
  __int64 v47; // [rsp+8h] [rbp-70h]
  __int64 *v48; // [rsp+18h] [rbp-60h]
  __int64 v49; // [rsp+28h] [rbp-50h] BYREF
  __int64 **v50; // [rsp+30h] [rbp-48h] BYREF
  int v51; // [rsp+38h] [rbp-40h]
  char v52; // [rsp+3Ch] [rbp-3Ch]

  v8 = **a1;
  v50 = a1;
  v51 = a2;
  v9 = *(unsigned int *)(v8 + 2600);
  v10 = (__int64 *)(v8 + 2584);
  v52 = 1;
  v11 = *(__int64 **)(v8 + 2584);
  if ( !(_DWORD)v9 )
  {
    v49 = 0;
LABEL_13:
    v20 = (((((((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v9 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v9 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v9 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v9 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1);
    v21 = ((v20 >> 16) | v20) + 1;
    if ( (unsigned int)v21 < 0x40 )
      LODWORD(v21) = 64;
    *(_DWORD *)(v8 + 2600) = v21;
    v22 = (_QWORD *)sub_22300B0(24LL * (unsigned int)v21, 8, 64, a4, a5, a6);
    v23 = v22;
    *(_QWORD *)(v8 + 2584) = v22;
    if ( !v11 )
    {
      v44 = *(unsigned int *)(v8 + 2600);
      *(_QWORD *)(v8 + 2592) = 0;
      for ( i = &v23[3 * v44]; i != v23; *((_BYTE *)v23 - 12) = 1 )
      {
        *v23 = -4096;
        v23 += 3;
        *((_DWORD *)v23 - 4) = -1;
      }
      goto LABEL_45;
    }
    *(_QWORD *)(v8 + 2592) = 0;
    v47 = 24 * v9;
    v24 = &v11[3 * v9];
    for ( j = &v22[3 * *(unsigned int *)(v8 + 2600)]; j != v22; *((_BYTE *)v22 - 12) = 1 )
    {
      *v22 = -4096;
      v22 += 3;
      *((_DWORD *)v22 - 4) = -1;
    }
    v26 = v11;
    if ( v11 == v24 )
    {
LABEL_58:
      operator delete(v11, v47, 8);
LABEL_45:
      sub_20C3420(v10, (__int64 *)&v50, &v49);
      v39 = (__int64)v50;
      v13 = v49;
      LODWORD(a4) = *(_DWORD *)(v8 + 2592) + 1;
      goto LABEL_36;
    }
    v48 = v11;
    while ( 1 )
    {
      v27 = *v26;
      if ( *v26 == -4096 )
      {
        v29 = *((_DWORD *)v26 + 2);
        if ( v29 != -1 )
          goto LABEL_22;
        v30 = *((_BYTE *)v26 + 12);
        if ( !v30 )
        {
          v28 = *(_DWORD *)(v8 + 2600);
          if ( !v28 )
            goto LABEL_79;
          v31 = 4294967259LL;
          goto LABEL_24;
        }
      }
      else
      {
        if ( v27 != -8192 || (v29 = *((_DWORD *)v26 + 2), v29 != -2) )
        {
LABEL_22:
          v28 = *(_DWORD *)(v8 + 2600);
          if ( !v28 )
            goto LABEL_79;
          v29 = *((_DWORD *)v26 + 2);
          v30 = *((_BYTE *)v26 + 12);
          v31 = (unsigned int)(37 * v29);
          if ( !v30 )
            goto LABEL_24;
          goto LABEL_63;
        }
        if ( *((_BYTE *)v26 + 12) )
        {
          v28 = *(_DWORD *)(v8 + 2600);
          if ( !v28 )
          {
LABEL_79:
            *(_QWORD *)&dword_0 = *v26;
            BUG();
          }
          LODWORD(v31) = -74;
LABEL_63:
          v31 = (unsigned int)(v31 - 1);
          v30 = 1;
LABEL_24:
          v32 = v28 - 1;
          v33 = 1;
          v34 = nullptr;
          for ( k = v32
                  & (((0xBF58476D1CE4E5B9LL
                     * (v31 | ((unsigned __int64)(((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4)) << 32))) >> 31)
                   ^ (484763065 * v31)); ; k = v32 & v38 )
          {
            v36 = &v23[3 * k];
            v37 = *v36;
            if ( v27 == *v36 && v29 == *((_DWORD *)v36 + 2) && *((_BYTE *)v36 + 12) == v30 )
              break;
            if ( v37 == -4096 )
            {
              if ( *((_DWORD *)v36 + 2) == -1 && *((_BYTE *)v36 + 12) )
              {
                if ( v34 )
                  v36 = v34;
                break;
              }
            }
            else if ( v37 == -8192 && *((_DWORD *)v36 + 2) == -2 && *((_BYTE *)v36 + 12) != 1 && !v34 )
            {
              v34 = &v23[3 * k];
            }
            v38 = v33 + k;
            ++v33;
          }
          v46 = *((_DWORD *)v26 + 2);
          *v36 = v27;
          *((_DWORD *)v36 + 2) = v46;
          *((_BYTE *)v36 + 12) = *((_BYTE *)v26 + 12);
          v36[2] = v26[2];
          ++*(_DWORD *)(v8 + 2592);
        }
      }
      v26 += 3;
      if ( v24 == v26 )
      {
        v10 = (__int64 *)(v8 + 2584);
        v11 = v48;
        goto LABEL_58;
      }
    }
  }
  a5 = 1;
  v12 = 0xBF58476D1CE4E5B9LL
      * ((unsigned int)(37 * a2 - 1) | ((unsigned __int64)(((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4)) << 32));
  v13 = 0;
  for ( m = (v9 - 1) & ((v12 >> 31) ^ v12); ; m = (v9 - 1) & v17 )
  {
    v15 = &v11[3 * m];
    v16 = (_QWORD **)*v15;
    if ( a1 == (__int64 **)*v15 && a2 == *((_DWORD *)v15 + 2) && *((_BYTE *)v15 + 12) )
    {
      result = v15[2];
      v19 = (unsigned __int64 *)(v15 + 2);
      if ( !result )
        goto LABEL_39;
      return result;
    }
    if ( v16 == (_QWORD **)-4096LL )
      break;
    if ( v16 == (_QWORD **)-8192LL && *((_DWORD *)v15 + 2) == -2 && *((_BYTE *)v15 + 12) != 1 && !v13 )
      v13 = (__int64)&v11[3 * m];
LABEL_7:
    v17 = a5 + m;
    a5 = (unsigned int)(a5 + 1);
  }
  if ( *((_DWORD *)v15 + 2) != -1 || !*((_BYTE *)v15 + 12) )
    goto LABEL_7;
  if ( !v13 )
    v13 = (__int64)&v11[3 * m];
  a4 = (unsigned int)(*(_DWORD *)(v8 + 2592) + 1);
  v49 = v13;
  if ( 4 * (int)a4 >= (unsigned int)(3 * v9) )
    goto LABEL_13;
  v39 = (__int64)a1;
  if ( (int)v9 - *(_DWORD *)(v8 + 2596) - (int)a4 <= (unsigned int)v9 >> 3 )
  {
    sub_20C4700((__int64 **)(v8 + 2584), v9, v13, a4, a5, a6);
    goto LABEL_45;
  }
LABEL_36:
  v40 = *(_QWORD *)v13 == -4096;
  *(_DWORD *)(v8 + 2592) = a4;
  if ( !v40 || *(_DWORD *)(v13 + 8) != -1 || !*(_BYTE *)(v13 + 12) )
    --*(_DWORD *)(v8 + 2596);
  v41 = v51;
  *(_QWORD *)v13 = v39;
  v19 = (unsigned __int64 *)(v13 + 16);
  *(_DWORD *)(v13 + 8) = v41;
  LOBYTE(v41) = v52;
  *(_QWORD *)(v13 + 16) = 0;
  *(_BYTE *)(v13 + 12) = v41;
LABEL_39:
  v42 = *(_QWORD *)(v8 + 2208);
  *(_QWORD *)(v8 + 2288) += 40LL;
  result = (v42 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(v8 + 2216) >= result + 40 && v42 )
    *(_QWORD *)(v8 + 2208) = result + 40;
  else
    result = sub_986170(v8 + 2208, 40, 40, 4, a5, a6);
  v43 = *a1;
  *(_QWORD *)(result + 24) = a1;
  *(_DWORD *)(result + 32) = a2;
  *(_QWORD *)result = v43;
  *(_QWORD *)(result + 16) = result + 24;
  *(_QWORD *)(result + 8) = 0x100000012LL;
  *v19 = result;
  return result;
}
