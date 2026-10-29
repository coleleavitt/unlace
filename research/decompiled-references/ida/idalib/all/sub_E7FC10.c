// write access to const memory has been detected, the output may be wrong!
__int64 *__fastcall sub_E7FC10(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // r12
  __int64 *v9; // rbp
  unsigned int v10; // eax
  __int64 *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 *v14; // r11
  __int64 *i; // rdx
  __int64 *v16; // rax
  __int64 v17; // rdi
  int v18; // r9d
  int v19; // r8d
  int v20; // r8d
  __int64 *v21; // r13
  unsigned int v22; // ecx
  __int64 v23; // rdx
  int v24; // r12d
  __int64 v25; // r10
  int v26; // r15d
  __int64 v27; // r14
  int v28; // r14d
  __int64 *v29; // r15
  __int64 v30; // rdx
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
  result = (__int64 *)sub_22300B0(24LL * v10, 8, 64, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    v13 = 24 * v8;
    a1[1] = nullptr;
    v14 = &v9[3 * v8];
    for ( i = &result[3 * v12]; i != result; *(result - 2) = 0 )
    {
      *result = 0;
      result += 3;
    }
    if ( v14 == v9 )
      return (__int64 *)operator delete(v9, v13, 8);
    v16 = v9;
    while ( 1 )
    {
      v17 = *v16;
      v18 = *((_DWORD *)v16 + 2);
      if ( *v16 )
      {
        if ( !v18 && v17 == -1 )
          goto LABEL_23;
        v19 = *((_DWORD *)a1 + 4);
        if ( !v19 )
        {
LABEL_27:
          *(_QWORD *)&dword_0 = *v16;
          *(_DWORD *)byte_8 = *((_DWORD *)v16 + 2);
          BUG();
        }
      }
      else
      {
        if ( !v18 )
          goto LABEL_23;
        v19 = *((_DWORD *)a1 + 4);
        if ( !v19 )
          goto LABEL_27;
      }
      v20 = v19 - 1;
      v21 = *a1;
      v22 = v20 & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
      v23 = (__int64)&(*a1)[3 * v22];
      v24 = *(_DWORD *)(v23 + 8);
      v25 = *(_QWORD *)v23;
      if ( v18 == v24 && v17 == v25 )
        goto LABEL_22;
      v26 = 1;
      v27 = 0;
      while ( v25 )
      {
        if ( v25 != -1 || v24 != 0 || v27 )
          goto LABEL_29;
LABEL_18:
        v28 = v26 + 1;
        v22 = v20 & (v26 + v22);
        v29 = &v21[3 * v22];
        v24 = *((_DWORD *)v29 + 2);
        v25 = *v29;
        if ( v18 == v24 && v17 == v25 )
        {
          v23 = (__int64)&v21[3 * v22];
          goto LABEL_22;
        }
        v26 = v28;
        v27 = v23;
        v23 = (__int64)&v21[3 * v22];
      }
      if ( v24 )
        break;
      if ( v27 )
        v23 = v27;
LABEL_22:
      *(_QWORD *)v23 = *v16;
      *(_DWORD *)(v23 + 8) = *((_DWORD *)v16 + 2);
      *(_DWORD *)(v23 + 16) = *((_DWORD *)v16 + 4);
      ++*((_DWORD *)a1 + 2);
LABEL_23:
      v16 += 3;
      if ( v14 == v16 )
        return (__int64 *)operator delete(v9, v13, 8);
    }
LABEL_29:
    v23 = v27;
    goto LABEL_18;
  }
  v30 = *((unsigned int *)a1 + 4);
  a1[1] = nullptr;
  for ( j = &result[3 * v30]; j != result; *(result - 2) = 0 )
  {
    *result = 0;
    result += 3;
  }
  return result;
}
