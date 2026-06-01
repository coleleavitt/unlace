__int64 __fastcall sub_1BE38E0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned int v8; // r12d
  unsigned __int64 *v9; // rbp
  unsigned int v10; // edi
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned __int64 *v15; // r9
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  unsigned __int64 *v19; // rdx
  unsigned __int64 v20; // rcx
  int v21; // r11d
  unsigned __int64 v22; // rdi
  unsigned __int64 *v23; // r8
  __int64 *v24; // r14
  int v25; // r12d
  int v26; // r13d
  unsigned int i; // eax
  __int64 *v28; // r11
  __int64 v29; // r15
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rsi
  unsigned int v36; // eax

  v6 = (unsigned int)(a2 - 1);
  v8 = *(_DWORD *)(a1 + 16);
  v9 = *(unsigned __int64 **)a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
         | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
         | ((v6 | (v6 >> 1)) >> 2)
         | v6
         | (v6 >> 1)) >> 16)
       | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
       | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
       | ((v6 | (v6 >> 1)) >> 2)
       | v6
       | (v6 >> 1))
      + 1;
  if ( v10 < 0x40 )
    v10 = 64;
  *(_DWORD *)(a1 + 16) = v10;
  result = sub_22300B0(16LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v13 = 16LL * v8;
    v14 = 16 * v12;
    v15 = &v9[(unsigned __int64)v13 / 8];
    if ( result != result + v14 )
    {
      v16 = 0;
      v17 = ((unsigned __int64)(v14 - 16) >> 4) + 1;
      do
      {
        v18 = v16++;
        *(_OWORD *)(result + 16 * v18) = 0;
      }
      while ( v16 < v17 );
    }
    if ( v15 != v9 )
    {
      v19 = v9;
      while ( 1 )
      {
        v20 = *v19;
        if ( *v19 )
        {
          if ( v20 != -1 )
            goto LABEL_11;
          if ( v19[1] != -1 )
          {
            v21 = *(_DWORD *)(a1 + 16);
            if ( !v21 )
            {
LABEL_25:
              *(_QWORD *)&dword_0 = *v19;
              BUG();
            }
            goto LABEL_12;
          }
LABEL_21:
          v19 += 2;
          if ( v15 == v19 )
            return operator delete(v9, v13, 8);
        }
        else
        {
          if ( !v19[1] )
            goto LABEL_21;
LABEL_11:
          v21 = *(_DWORD *)(a1 + 16);
          if ( !v21 )
            goto LABEL_25;
LABEL_12:
          v22 = v19[1];
          v23 = *(unsigned __int64 **)a1;
          v24 = nullptr;
          v25 = v21 - 1;
          v26 = 1;
          for ( i = (v21 - 1)
                  & (((0xBF58476D1CE4E5B9LL
                     * ((unsigned int)v22 ^ (unsigned int)(v22 >> 9)
                      | ((unsigned __int64)((unsigned int)v20 ^ (unsigned int)(v20 >> 9)) << 32))) >> 31)
                   ^ (484763065 * (v22 ^ (v22 >> 9)))); ; i = v25 & v36 )
          {
            v28 = (__int64 *)&v23[2 * i];
            v29 = *v28;
            if ( v20 == *v28 && v22 == v28[1] )
              break;
            if ( v29 )
            {
              if ( v29 == -1 && v28[1] == -1 && !v24 )
                v24 = (__int64 *)&v23[2 * i];
            }
            else if ( !v28[1] )
            {
              if ( v24 )
                v28 = v24;
              break;
            }
            v36 = v26 + i;
            ++v26;
          }
          v30 = *v19;
          v19 += 2;
          *v28 = v30;
          v28[1] = *(v19 - 1);
          ++*(_DWORD *)(a1 + 8);
          if ( v15 == v19 )
            return operator delete(v9, v13, 8);
        }
      }
    }
    return operator delete(v9, v13, 8);
  }
  else
  {
    v31 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v32 = 16 * v31;
    if ( result != result + v32 )
    {
      v33 = 0;
      v34 = ((unsigned __int64)(v32 - 16) >> 4) + 1;
      do
      {
        v35 = v33++;
        *(_OWORD *)(result + 16 * v35) = 0;
      }
      while ( v33 < v34 );
    }
  }
  return result;
}
