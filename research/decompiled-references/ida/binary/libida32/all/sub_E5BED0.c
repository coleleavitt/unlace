// write access to const memory has been detected, the output may be wrong!
__int64 *__fastcall sub_E5BED0(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // r12
  __int64 *v9; // rbp
  unsigned int v10; // eax
  __int64 *result; // rax
  __int64 v12; // rdx
  __int64 *v13; // r11
  __int64 *i; // rdx
  __int64 *v15; // rax
  __int64 v16; // rdi
  int v17; // r9d
  int v18; // r8d
  int v19; // r8d
  __int64 *v20; // r13
  unsigned int v21; // ecx
  __int64 v22; // rdx
  int v23; // r12d
  __int64 v24; // r10
  int v25; // r15d
  __int64 v26; // r14
  int v27; // r14d
  __int64 *v28; // r15
  __int64 v29; // rdx
  __int64 *j; // rdx

  v6 = (unsigned int)(a2 - 1);
  v8 = *((unsigned int *)a1 + 4);
  v9 = *a1;
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
  *((_DWORD *)a1 + 4) = v10;
  result = (__int64 *)sub_220C370(24LL * v10, 8, 64, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v13 = &v9[3 * v8];
    for ( i = &result[3 * v12]; i != result; *(result - 2) = 0 )
    {
      *result = 0;
      result += 3;
    }
    if ( v13 == v9 )
      return (__int64 *)operator delete();
    v15 = v9;
    while ( 1 )
    {
      v16 = *v15;
      v17 = *((_DWORD *)v15 + 2);
      if ( *v15 )
      {
        if ( !v17 && v16 == -1 )
          goto LABEL_23;
        v18 = *((_DWORD *)a1 + 4);
        if ( !v18 )
        {
LABEL_27:
          *(_QWORD *)&dword_0 = *v15;
          *(_DWORD *)byte_8 = *((_DWORD *)v15 + 2);
          BUG();
        }
      }
      else
      {
        if ( !v17 )
          goto LABEL_23;
        v18 = *((_DWORD *)a1 + 4);
        if ( !v18 )
          goto LABEL_27;
      }
      v19 = v18 - 1;
      v20 = *a1;
      v21 = v19 & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
      v22 = (__int64)&(*a1)[3 * v21];
      v23 = *(_DWORD *)(v22 + 8);
      v24 = *(_QWORD *)v22;
      if ( v17 == v23 && v16 == v24 )
        goto LABEL_22;
      v25 = 1;
      v26 = 0;
      while ( v24 )
      {
        if ( v24 != -1 || v23 != 0 || v26 )
          goto LABEL_29;
LABEL_18:
        v27 = v25 + 1;
        v21 = v19 & (v25 + v21);
        v28 = &v20[3 * v21];
        v23 = *((_DWORD *)v28 + 2);
        v24 = *v28;
        if ( v17 == v23 && v16 == v24 )
        {
          v22 = (__int64)&v20[3 * v21];
          goto LABEL_22;
        }
        v25 = v27;
        v26 = v22;
        v22 = (__int64)&v20[3 * v21];
      }
      if ( v23 )
        break;
      if ( v26 )
        v22 = v26;
LABEL_22:
      *(_QWORD *)v22 = *v15;
      *(_DWORD *)(v22 + 8) = *((_DWORD *)v15 + 2);
      *(_DWORD *)(v22 + 16) = *((_DWORD *)v15 + 4);
      ++*((_DWORD *)a1 + 2);
LABEL_23:
      v15 += 3;
      if ( v13 == v15 )
        return (__int64 *)operator delete();
    }
LABEL_29:
    v22 = v26;
    goto LABEL_18;
  }
  v29 = *((unsigned int *)a1 + 4);
  a1[1] = nullptr;
  for ( j = &result[3 * v29]; j != result; *(result - 2) = 0 )
  {
    *result = 0;
    result += 3;
  }
  return result;
}

