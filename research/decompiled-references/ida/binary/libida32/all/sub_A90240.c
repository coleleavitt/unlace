// write access to const memory has been detected, the output may be wrong!
__int64 *__fastcall sub_A90240(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 *v9; // r12
  unsigned int v10; // eax
  __int64 *result; // rax
  __int64 v12; // rdx
  __int64 *v13; // r14
  __int64 *i; // rdx
  __int64 *v15; // rbx
  __int64 v16; // rcx
  int v17; // edi
  int v18; // esi
  int v19; // esi
  __int64 *v20; // r10
  unsigned int v21; // edx
  __int64 v22; // rax
  int v23; // r9d
  __int64 v24; // r8
  int v25; // r15d
  __int64 v26; // r11
  char *v27; // rdi
  int v28; // eax
  __int64 v29; // r15
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 *j; // rdx
  __int64 v33; // [rsp+8h] [rbp-40h]
  __int64 v34; // [rsp+8h] [rbp-40h]

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
  result = (__int64 *)sub_220C370(40LL * v10, 8, 64, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v13 = &v9[5 * v8];
    for ( i = &result[5 * v12]; i != result; *(result - 4) = 0 )
    {
      *result = 0;
      result += 5;
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
          goto LABEL_30;
        v18 = *((_DWORD *)a1 + 4);
        if ( !v18 )
        {
LABEL_34:
          *(_QWORD *)&dword_0 = *v15;
          *(_DWORD *)byte_8 = *((_DWORD *)v15 + 2);
          BUG();
        }
      }
      else
      {
        if ( !v17 )
          goto LABEL_30;
        v18 = *((_DWORD *)a1 + 4);
        if ( !v18 )
          goto LABEL_34;
      }
      v19 = v18 - 1;
      v21 = v19 & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
      v22 = (__int64)&(*a1)[5 * v21];
      v23 = *(_DWORD *)(v22 + 8);
      v24 = *(_QWORD *)v22;
      if ( v17 == v23 && v16 == v24 )
        goto LABEL_22;
      v25 = 1;
      v26 = 0;
      while ( v24 )
      {
        if ( v23 != 0 || v24 != -1 || v26 )
          goto LABEL_36;
LABEL_18:
        v21 = v19 & (v25 + v21);
        v20 = *a1;
        v33 = (__int64)&(*a1)[5 * v21];
        v24 = *(_QWORD *)v33;
        v23 = *(_DWORD *)(v33 + 8);
        if ( v17 == v23 && v16 == v24 )
        {
          v22 = (__int64)&v20[5 * v21];
          goto LABEL_22;
        }
        ++v25;
        v26 = v22;
        v22 = (__int64)&v20[5 * v21];
      }
      if ( v23 )
        break;
      if ( v26 )
        v22 = v26;
LABEL_22:
      v27 = nullptr;
      *(_QWORD *)v22 = *v15;
      *(_DWORD *)(v22 + 8) = *((_DWORD *)v15 + 2);
      *(_QWORD *)(v22 + 16) = v15[2];
      *(_DWORD *)(v22 + 24) = *((_DWORD *)v15 + 6);
      *(_DWORD *)(v22 + 28) = *((_DWORD *)v15 + 7);
      *(_DWORD *)(v22 + 32) = *((_DWORD *)v15 + 8);
      *(_DWORD *)(v22 + 36) = *((_DWORD *)v15 + 9);
      *((_DWORD *)v15 + 7) = 0;
      v15[2] = 0;
      *((_DWORD *)v15 + 6) = 0;
      *((_DWORD *)v15 + 8) = 0;
      ++*((_DWORD *)a1 + 2);
      if ( *((_DWORD *)v15 + 7) )
      {
        v28 = *((_DWORD *)v15 + 6);
        if ( v28 )
        {
          v29 = 0;
          v34 = 8LL * (unsigned int)(v28 - 1) + 8;
          do
          {
            v30 = *(_QWORD *)&v27[v29];
            if ( v30 )
            {
              if ( v30 != -8 )
              {
                operator delete();
                v27 = (char *)v15[2];
              }
            }
            v29 += 8;
          }
          while ( v34 != v29 );
        }
      }
      free(v27);
LABEL_30:
      v15 += 5;
      if ( v13 == v15 )
        return (__int64 *)operator delete();
    }
LABEL_36:
    v22 = v26;
    goto LABEL_18;
  }
  v31 = *((unsigned int *)a1 + 4);
  a1[1] = nullptr;
  for ( j = &result[5 * v31]; j != result; *(result - 4) = 0 )
  {
    *result = 0;
    result += 5;
  }
  return result;
}

