unsigned __int64 __fastcall sub_20C5480(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 *v10; // r13
  unsigned int v11; // r14d
  int *v12; // r13
  unsigned int v13; // ecx
  unsigned int *v14; // rdx
  int v15; // eax
  int v16; // edi
  __int64 v17; // rdx
  int v18; // edx
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  _DWORD *v23; // rdx
  __int64 v24; // rsi
  int *v25; // r9
  _DWORD *v26; // rcx
  int *i; // rdx
  int v28; // ecx
  int v29; // r8d
  int v30; // r8d
  unsigned int v31; // r10d
  __int64 v32; // rdi
  int v33; // r11d
  int v34; // eax
  int v35; // eax
  __int64 v36; // rdi
  unsigned int v37; // r15d
  int v38; // esi
  int v39; // edx
  int v40; // edi
  unsigned int v41; // esi
  int v42; // r10d
  __int64 v43; // rcx
  _DWORD *v44; // rcx
  _DWORD *v45; // rdx
  int v46; // r15d
  __int64 v47; // r14

  v8 = *a1;
  if ( !a2 )
  {
    result = *(_QWORD *)(v8 + 2608);
    v10 = (unsigned __int64 *)(v8 + 2608);
    goto LABEL_3;
  }
  v11 = *(_DWORD *)(v8 + 2632);
  v12 = *(int **)(v8 + 2616);
  if ( !v11 )
    goto LABEL_19;
  v13 = (v11 - 1) & (37 * a2);
  v14 = (unsigned int *)&v12[4 * v13];
  v15 = *v14;
  if ( *v14 == a2 )
  {
LABEL_7:
    v10 = (unsigned __int64 *)(v14 + 2);
    result = *((_QWORD *)v14 + 1);
LABEL_3:
    if ( result )
      return result;
    goto LABEL_14;
  }
  v16 = 1;
  a5 = 0;
  if ( v15 != -1 )
  {
    while ( 1 )
    {
      if ( !a5 && v15 == -2 )
        a5 = (__int64)v14;
      a6 = (unsigned int)(v16 + 1);
      v13 = (v11 - 1) & (v16 + v13);
      v14 = (unsigned int *)&v12[4 * v13];
      v15 = *v14;
      if ( *v14 == a2 )
        goto LABEL_7;
      if ( v15 == -1 )
        break;
      ++v16;
    }
    if ( a5 )
      v14 = (unsigned int *)a5;
  }
  a4 = (unsigned int)(*(_DWORD *)(v8 + 2624) + 1);
  if ( 4 * (int)a4 >= 3 * v11 )
  {
LABEL_19:
    v19 = (((((((2 * v11 - 1) | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 2)
            | (2 * v11 - 1)
            | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 4)
          | (((2 * v11 - 1) | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 2)
          | (2 * v11 - 1)
          | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 8)
        | (((((2 * v11 - 1) | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 2)
          | (2 * v11 - 1)
          | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 4)
        | (((2 * v11 - 1) | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 2)
        | (2 * v11 - 1)
        | ((unsigned __int64)(2 * v11 - 1) >> 1);
    v20 = ((v19 >> 16) | v19) + 1;
    if ( (unsigned int)v20 < 0x40 )
      LODWORD(v20) = 64;
    *(_DWORD *)(v8 + 2632) = v20;
    v21 = sub_22300B0(16LL * (unsigned int)v20, 8, 64, a4, a5, a6);
    *(_QWORD *)(v8 + 2616) = v21;
    if ( v12 )
    {
      v22 = *(unsigned int *)(v8 + 2632);
      v23 = (_DWORD *)v21;
      *(_QWORD *)(v8 + 2624) = 0;
      v24 = 4LL * v11;
      v25 = &v12[v24];
      v26 = (_DWORD *)(v21 + 16 * v22);
      if ( (_DWORD *)v21 != v26 )
      {
        do
        {
          *v23 = -1;
          v23 += 4;
        }
        while ( v26 != v23 );
      }
      for ( i = v12; v25 != i; i += 4 )
      {
        v28 = *i;
        if ( (unsigned int)(*i + 2) > 1 )
        {
          v29 = *(_DWORD *)(v8 + 2632);
          if ( !v29 )
          {
            dword_0 = 0;
            BUG();
          }
          v30 = v29 - 1;
          v31 = v30 & (37 * v28);
          v32 = v21 + 16LL * v31;
          v33 = *(_DWORD *)v32;
          if ( v28 != *(_DWORD *)v32 )
          {
            v46 = 1;
            v47 = 0;
            if ( v33 != -1 )
            {
              while ( 1 )
              {
                if ( !v47 && v33 == -2 )
                  v47 = v32;
                v31 = v30 & (v46 + v31);
                v32 = v21 + 16LL * v31;
                v33 = *(_DWORD *)v32;
                if ( v28 == *(_DWORD *)v32 )
                  break;
                if ( v33 == -1 )
                {
                  if ( v47 )
                    v32 = v47;
                  break;
                }
                ++v46;
              }
            }
          }
          *(_DWORD *)v32 = v28;
          *(_QWORD *)(v32 + 8) = *((_QWORD *)i + 1);
          ++*(_DWORD *)(v8 + 2624);
        }
      }
      operator delete(v12, v24 * 4, 8);
      v21 = *(_QWORD *)(v8 + 2616);
    }
    else
    {
      v43 = *(unsigned int *)(v8 + 2632);
      *(_QWORD *)(v8 + 2624) = 0;
      v44 = (_DWORD *)(v21 + 16 * v43);
      if ( (_DWORD *)v21 != v44 )
      {
        v45 = (_DWORD *)v21;
        do
        {
          *v45 = -1;
          v45 += 4;
        }
        while ( v44 != v45 );
      }
    }
    v39 = *(_DWORD *)(v8 + 2632);
    LODWORD(a4) = *(_DWORD *)(v8 + 2624) + 1;
    if ( v39 )
    {
      v40 = v39 - 1;
      v41 = (v39 - 1) & (37 * a2);
      v14 = (unsigned int *)(v21 + 16LL * v41);
      a5 = *v14;
      if ( (_DWORD)a5 != a2 )
      {
        v42 = 1;
        a6 = 0;
        if ( (_DWORD)a5 != -1 )
        {
          while ( 1 )
          {
            if ( !a6 && (_DWORD)a5 == -2 )
              a6 = (__int64)v14;
            v41 = v40 & (v42 + v41);
            v14 = (unsigned int *)(v21 + 16LL * v41);
            a5 = *v14;
            if ( (_DWORD)a5 == a2 )
              break;
            if ( (_DWORD)a5 == -1 )
            {
              if ( a6 )
                v14 = (unsigned int *)a6;
              goto LABEL_11;
            }
            ++v42;
          }
        }
      }
      goto LABEL_11;
    }
    goto LABEL_79;
  }
  if ( v11 - *(_DWORD *)(v8 + 2628) - (unsigned int)a4 <= v11 >> 3 )
  {
    sub_20C5290((__int64 *)(v8 + 2616), v11, (__int64)v14, a4, a5, a6);
    v34 = *(_DWORD *)(v8 + 2632);
    if ( v34 )
    {
      v35 = v34 - 1;
      v36 = *(_QWORD *)(v8 + 2616);
      v37 = v35 & (37 * a2);
      LODWORD(a4) = *(_DWORD *)(v8 + 2624) + 1;
      v14 = (unsigned int *)(v36 + 16LL * v37);
      v38 = *v14;
      if ( *v14 != a2 )
      {
        a6 = 1;
        a5 = 0;
        if ( v38 != -1 )
        {
          while ( 1 )
          {
            if ( !a5 && v38 == -2 )
              a5 = (__int64)v14;
            v37 = v35 & (a6 + v37);
            v14 = (unsigned int *)(v36 + 16LL * v37);
            v38 = *v14;
            if ( *v14 == a2 )
              break;
            if ( v38 == -1 )
            {
              if ( a5 )
                v14 = (unsigned int *)a5;
              goto LABEL_11;
            }
            a6 = (unsigned int)(a6 + 1);
          }
        }
      }
      goto LABEL_11;
    }
LABEL_79:
    ++*(_DWORD *)(v8 + 2624);
    BUG();
  }
LABEL_11:
  *(_DWORD *)(v8 + 2624) = a4;
  if ( *v14 != -1 )
    --*(_DWORD *)(v8 + 2628);
  *v14 = a2;
  v10 = (unsigned __int64 *)(v14 + 2);
  *((_QWORD *)v14 + 1) = 0;
LABEL_14:
  v17 = *(_QWORD *)(v8 + 2208);
  *(_QWORD *)(v8 + 2288) += 24LL;
  result = (v17 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(v8 + 2216) >= result + 24 && v17 )
    *(_QWORD *)(v8 + 2208) = result + 24;
  else
    result = sub_986170(v8 + 2208, 24, 24, 4, a5, a6);
  *(_BYTE *)(result + 8) = 14;
  v18 = *(unsigned __int8 *)(result + 8);
  *(_QWORD *)result = a1;
  *(_DWORD *)(result + 12) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 8) = v18 | (a2 << 8);
  *v10 = result;
  return result;
}
