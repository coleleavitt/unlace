int *__fastcall sub_166D860(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbp
  unsigned int v12; // r13d
  __int64 v13; // rdi
  __int64 v14; // rax
  int *v15; // rbp
  __int64 v16; // rsi
  bool v17; // zf
  __int64 v18; // r11
  _DWORD *v19; // rdx
  __int64 v20; // r12
  _DWORD *i; // r12
  __int64 j; // rdi
  int v23; // ecx
  __int64 v24; // r10
  int v25; // r8d
  unsigned int v26; // r9d
  __int64 v27; // rdx
  int v28; // r12d
  __int64 v29; // rcx
  int *result; // rax
  __int64 *v31; // r13
  __int64 v32; // rcx
  int v33; // eax
  int v34; // eax
  _DWORD *v35; // rax
  __int64 v36; // rdx
  _DWORD *k; // rdx
  int v38; // ecx
  int *v39; // r8
  int v40; // edi
  unsigned int v41; // esi
  int *v42; // rdx
  int v43; // r9d
  __int64 v44; // rcx
  int v45; // r8d
  int v46; // edx
  __int64 v47; // rax
  int v48; // r14d
  __int64 v49; // r15
  int v50; // r10d
  int *v51; // r11
  int v52; // [rsp+10h] [rbp-58h] BYREF
  __int64 v53; // [rsp+14h] [rbp-54h]
  int v54; // [rsp+1Ch] [rbp-4Ch]
  __int64 v55; // [rsp+20h] [rbp-48h] BYREF

  LODWORD(v6) = a2;
  v8 = *(_BYTE *)a1 & 1;
  if ( a2 <= 2 )
  {
    v15 = (int *)(a1 + 8);
    v9 = a1 + 40;
    if ( !(_BYTE)v8 )
    {
      v11 = *(_QWORD *)(a1 + 8);
      v12 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v6 = v12;
      v14 = v11;
      goto LABEL_8;
    }
  }
  else
  {
    v9 = (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
         | (a2 - 1)
         | ((unsigned __int64)(a2 - 1) >> 1)
         | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 8)
       | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
       | (a2 - 1)
       | ((unsigned __int64)(a2 - 1) >> 1)
       | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4);
    v10 = (v9 | (v9 >> 16)) + 1;
    v6 = (unsigned int)v10;
    if ( (unsigned int)v10 > 0x40 )
    {
      v15 = (int *)(a1 + 8);
      v9 = a1 + 40;
      if ( !(_BYTE)v8 )
      {
        v11 = *(_QWORD *)(a1 + 8);
        v12 = *(_DWORD *)(a1 + 16);
        v13 = 16LL * (unsigned int)v10;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !(_BYTE)v8 )
      {
        v11 = *(_QWORD *)(a1 + 8);
        v12 = *(_DWORD *)(a1 + 16);
        v6 = 64;
        v13 = 1024;
LABEL_5:
        v14 = sub_22300B0(v13, 4, v9, v8, a5, a6);
        *(_DWORD *)(a1 + 16) = v6;
        *(_QWORD *)(a1 + 8) = v14;
LABEL_8:
        v16 = 16LL * v12;
        v17 = (*(_QWORD *)a1 & 1LL) == 0;
        *(_QWORD *)a1 &= 1uLL;
        v18 = v11 + v16;
        if ( v17 )
        {
          v20 = 4 * v6;
          v19 = (_DWORD *)v14;
        }
        else
        {
          v19 = (_DWORD *)(a1 + 8);
          v20 = 8;
        }
        for ( i = &v19[v20]; i != v19; v19 += 4 )
          *v19 = 0x7FFFFFFF;
        for ( j = v11; v18 != j; *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1 )
        {
          while ( 1 )
          {
            v23 = *(_DWORD *)j;
            if ( (unsigned int)(*(_DWORD *)j + 0x7FFFFFFF) <= 0xFFFFFFFD )
              break;
            j += 16;
            if ( v18 == j )
              return (int *)operator delete(v11, v16, 4);
          }
          if ( (*(_BYTE *)a1 & 1) != 0 )
          {
            v24 = a1 + 8;
            v25 = 1;
          }
          else
          {
            v45 = *(_DWORD *)(a1 + 16);
            if ( !v45 )
              goto LABEL_74;
            v25 = v45 - 1;
            v24 = v14;
          }
          v26 = v25 & (37 * v23);
          v27 = v24 + 16LL * v26;
          v28 = *(_DWORD *)v27;
          if ( *(_DWORD *)v27 != v23 )
          {
            v48 = 1;
            v49 = 0;
            if ( v28 != 0x7FFFFFFF )
            {
              while ( 1 )
              {
                if ( v28 == 0x80000000 && !v49 )
                  v49 = v27;
                v26 = v25 & (v48 + v26);
                v27 = v24 + 16LL * v26;
                v28 = *(_DWORD *)v27;
                if ( v23 == *(_DWORD *)v27 )
                  break;
                if ( v28 == 0x7FFFFFFF )
                {
                  if ( v49 )
                    v27 = v49;
                  break;
                }
                ++v48;
              }
            }
          }
          *(_DWORD *)v27 = v23;
          v29 = *(_QWORD *)(j + 4);
          j += 16;
          *(_QWORD *)(v27 + 4) = v29;
          *(_DWORD *)(v27 + 12) = *(_DWORD *)(j - 4);
        }
        return (int *)operator delete(v11, v16, 4);
      }
      v15 = (int *)(a1 + 8);
      v9 = a1 + 40;
      LODWORD(v6) = 64;
    }
  }
  v31 = (__int64 *)&v52;
  v32 = (unsigned int)(*v15 + 0x7FFFFFFF);
  if ( (unsigned int)(*v15 + 0x7FFFFFFF) <= 0xFFFFFFFD )
  {
    v52 = *v15;
    v31 = &v55;
    v53 = *(_QWORD *)(v15 + 1);
    v54 = v15[3];
  }
  if ( (int *)v9 != v15 + 4 )
  {
    v33 = v15[4];
    v32 = (unsigned int)(v33 + 0x7FFFFFFF);
    if ( (unsigned int)(v33 + 0x7FFFFFFF) <= 0xFFFFFFFD )
    {
      *(_DWORD *)v31 = v33;
      v31 += 2;
      *(__int64 *)((char *)v31 - 12) = *(_QWORD *)(v15 + 5);
      *((_DWORD *)v31 - 1) = v15[7];
    }
    if ( (int *)v9 != v15 + 8 )
    {
      v34 = v15[8];
      v9 = (unsigned int)(v34 + 0x7FFFFFFF);
      if ( (unsigned int)(v34 + 0x7FFFFFFF) <= 0xFFFFFFFD )
      {
        *(_DWORD *)v31 = v34;
        v31 += 2;
        *(__int64 *)((char *)v31 - 12) = *(_QWORD *)(v15 + 9);
        *((_DWORD *)v31 - 1) = v15[11];
      }
    }
  }
  if ( (unsigned int)v6 > 2 )
  {
    *(_BYTE *)a1 &= ~1u;
    v47 = sub_22300B0(16LL * (unsigned int)v6, 4, v9, v32, a5, a6);
    v17 = (*(_QWORD *)a1 & 1LL) == 0;
    *(_QWORD *)a1 &= 1uLL;
    *(_QWORD *)(a1 + 8) = v47;
    *(_DWORD *)(a1 + 16) = v6;
    if ( v17 )
      goto LABEL_32;
  }
  else
  {
    v17 = (*(_QWORD *)a1 & 1LL) == 0;
    *(_QWORD *)a1 &= 1uLL;
    if ( v17 )
    {
LABEL_32:
      v35 = *(_DWORD **)(a1 + 8);
      v36 = 4LL * *(unsigned int *)(a1 + 16);
      goto LABEL_33;
    }
  }
  v35 = v15;
  v36 = 8;
LABEL_33:
  for ( k = &v35[v36]; k != v35; v35 += 4 )
    *v35 = 0x7FFFFFFF;
  for ( result = &v52; result != (int *)v31; *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1 )
  {
    while ( 1 )
    {
      v38 = *result;
      if ( (unsigned int)(*result + 0x7FFFFFFF) <= 0xFFFFFFFD )
        break;
      result += 4;
      if ( result == (int *)v31 )
        return result;
    }
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      v39 = v15;
      v40 = 1;
    }
    else
    {
      v46 = *(_DWORD *)(a1 + 16);
      v39 = *(int **)(a1 + 8);
      if ( !v46 )
      {
LABEL_74:
        dword_0 = 0;
        BUG();
      }
      v40 = v46 - 1;
    }
    v41 = v40 & (37 * v38);
    v42 = &v39[4 * v41];
    v43 = *v42;
    if ( v38 != *v42 )
    {
      v50 = 1;
      v51 = nullptr;
      if ( v43 != 0x7FFFFFFF )
      {
        while ( 1 )
        {
          if ( !v51 && v43 == 0x80000000 )
            v51 = v42;
          v41 = v40 & (v50 + v41);
          v42 = &v39[4 * v41];
          v43 = *v42;
          if ( v38 == *v42 )
            break;
          if ( v43 == 0x7FFFFFFF )
          {
            if ( v51 )
              v42 = v51;
            break;
          }
          ++v50;
        }
      }
    }
    *v42 = v38;
    v44 = *(_QWORD *)(result + 1);
    result += 4;
    *(_QWORD *)(v42 + 1) = v44;
    v42[3] = *(result - 1);
  }
  return result;
}
