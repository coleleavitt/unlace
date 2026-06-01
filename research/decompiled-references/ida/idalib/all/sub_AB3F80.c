// write access to const memory has been detected, the output may be wrong!
__int64 *__fastcall sub_AB3F80(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 *v9; // r12
  unsigned int v10; // eax
  __int64 *result; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 *v14; // r14
  __int64 *i; // rdx
  __int64 *v16; // rbx
  __int64 v17; // rcx
  int v18; // edi
  int v19; // esi
  int v20; // esi
  __int64 *v21; // r10
  unsigned int v22; // edx
  __int64 v23; // rax
  int v24; // r9d
  __int64 v25; // r8
  int v26; // r15d
  __int64 v27; // r11
  char *v28; // rdi
  int v29; // eax
  __int64 v30; // r15
  _QWORD *v31; // rcx
  __int64 v32; // rdx
  __int64 *j; // rdx
  __int64 v34; // [rsp+8h] [rbp-40h]
  __int64 v35; // [rsp+8h] [rbp-40h]

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
  result = (__int64 *)sub_22300B0(40LL * v10, 8, 64, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v13 = 40 * v8;
    v14 = &v9[5 * v8];
    for ( i = &result[5 * v12]; i != result; *(result - 4) = 0 )
    {
      *result = 0;
      result += 5;
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
          goto LABEL_30;
        v19 = *((_DWORD *)a1 + 4);
        if ( !v19 )
        {
LABEL_34:
          *(_QWORD *)&dword_0 = *v16;
          *(_DWORD *)byte_8 = *((_DWORD *)v16 + 2);
          BUG();
        }
      }
      else
      {
        if ( !v18 )
          goto LABEL_30;
        v19 = *((_DWORD *)a1 + 4);
        if ( !v19 )
          goto LABEL_34;
      }
      v20 = v19 - 1;
      v22 = v20 & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
      v23 = (__int64)&(*a1)[5 * v22];
      v24 = *(_DWORD *)(v23 + 8);
      v25 = *(_QWORD *)v23;
      if ( v18 == v24 && v17 == v25 )
        goto LABEL_22;
      v26 = 1;
      v27 = 0;
      while ( v25 )
      {
        if ( v24 != 0 || v25 != -1 || v27 )
          goto LABEL_36;
LABEL_18:
        v22 = v20 & (v26 + v22);
        v21 = *a1;
        v34 = (__int64)&(*a1)[5 * v22];
        v25 = *(_QWORD *)v34;
        v24 = *(_DWORD *)(v34 + 8);
        if ( v18 == v24 && v17 == v25 )
        {
          v23 = (__int64)&v21[5 * v22];
          goto LABEL_22;
        }
        ++v26;
        v27 = v23;
        v23 = (__int64)&v21[5 * v22];
      }
      if ( v24 )
        break;
      if ( v27 )
        v23 = v27;
LABEL_22:
      v28 = nullptr;
      *(_QWORD *)v23 = *v16;
      *(_DWORD *)(v23 + 8) = *((_DWORD *)v16 + 2);
      *(_QWORD *)(v23 + 16) = v16[2];
      *(_DWORD *)(v23 + 24) = *((_DWORD *)v16 + 6);
      *(_DWORD *)(v23 + 28) = *((_DWORD *)v16 + 7);
      *(_DWORD *)(v23 + 32) = *((_DWORD *)v16 + 8);
      *(_DWORD *)(v23 + 36) = *((_DWORD *)v16 + 9);
      *((_DWORD *)v16 + 7) = 0;
      v16[2] = 0;
      *((_DWORD *)v16 + 6) = 0;
      *((_DWORD *)v16 + 8) = 0;
      ++*((_DWORD *)a1 + 2);
      if ( *((_DWORD *)v16 + 7) )
      {
        v29 = *((_DWORD *)v16 + 6);
        if ( v29 )
        {
          v30 = 0;
          v35 = 8LL * (unsigned int)(v29 - 1) + 8;
          do
          {
            v31 = *(_QWORD **)&v28[v30];
            if ( v31 )
            {
              if ( v31 != (_QWORD *)-8LL )
              {
                operator delete(*(_QWORD *)&v28[v30], *v31 + 9LL, 8);
                v28 = (char *)v16[2];
              }
            }
            v30 += 8;
          }
          while ( v35 != v30 );
        }
      }
      free(v28);
LABEL_30:
      v16 += 5;
      if ( v14 == v16 )
        return (__int64 *)operator delete(v9, v13, 8);
    }
LABEL_36:
    v23 = v27;
    goto LABEL_18;
  }
  v32 = *((unsigned int *)a1 + 4);
  a1[1] = nullptr;
  for ( j = &result[5 * v32]; j != result; *(result - 4) = 0 )
  {
    *result = 0;
    result += 5;
  }
  return result;
}
