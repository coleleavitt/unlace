_QWORD *__fastcall sub_9D86F0(void **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  _QWORD *v9; // r12
  unsigned int v10; // eax
  _QWORD *result; // rax
  __int64 v12; // rdx
  _QWORD *v13; // r13
  _QWORD *i; // rdx
  _QWORD *v15; // rbx
  int v16; // edx
  int v17; // ecx
  unsigned int v18; // edx
  __int64 v19; // rbp
  __int64 v20; // rdi
  _QWORD *v21; // r14
  __int64 v22; // rax
  int v23; // edx
  int v24; // edx
  unsigned int v25; // r9d
  _QWORD *v26; // rdi
  __int64 v27; // rax
  int v28; // eax
  unsigned int v29; // r9d
  size_t v30; // rdx
  __int64 v31; // rdx
  _QWORD *j; // rdx
  int v33; // r8d
  __int64 v34; // r9
  unsigned int v35; // [rsp+Ch] [rbp-3Ch]

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
  result = (_QWORD *)sub_220C370(48LL * v10, 8, 64, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v13 = &v9[6 * v8];
    for ( i = &result[6 * v12]; i != result; result += 6 )
      *result = -4096;
    v15 = v9;
    if ( v13 == v9 )
      return (_QWORD *)operator delete();
    while ( 1 )
    {
      while ( 1 )
      {
        v27 = *v15;
        if ( *v15 != -8192 && v27 != -4096 )
          break;
        v15 += 6;
        if ( v13 == v15 )
          return (_QWORD *)operator delete();
      }
      v16 = *((_DWORD *)a1 + 4);
      if ( !v16 )
      {
        *(_QWORD *)&dword_0 = *v15;
        BUG();
      }
      v17 = v16 - 1;
      v18 = (v16 - 1) & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
      v19 = (__int64)*a1 + 48 * v18;
      v20 = *(_QWORD *)v19;
      if ( v27 != *(_QWORD *)v19 )
      {
        v33 = 1;
        v34 = 0;
        if ( v20 != -4096 )
        {
          while ( 1 )
          {
            if ( v20 == -8192 && !v34 )
              v34 = v19;
            v18 = v17 & (v33 + v18);
            v19 = (__int64)*a1 + 48 * v18;
            v20 = *(_QWORD *)v19;
            if ( v27 == *(_QWORD *)v19 )
              break;
            if ( v20 == -4096 )
            {
              if ( v34 )
                v19 = v34;
              break;
            }
            ++v33;
          }
        }
      }
      *(_QWORD *)(v19 + 8) = 0;
      v21 = v15 + 6;
      *(_QWORD *)v19 = v27;
      v22 = v15[1];
      *(_QWORD *)(v19 + 16) = 0;
      *(_DWORD *)(v19 + 24) = 0;
      *(_QWORD *)(v19 + 8) = v22;
      LODWORD(v22) = *((_DWORD *)v15 + 4);
      v15[1] = 0;
      *(_DWORD *)(v19 + 16) = v22;
      v23 = *((_DWORD *)v15 + 5);
      *((_DWORD *)v15 + 4) = 0;
      LODWORD(v22) = *(_DWORD *)(v19 + 20);
      *(_DWORD *)(v19 + 20) = v23;
      v24 = *((_DWORD *)v15 + 6);
      *((_DWORD *)v15 + 5) = v22;
      LODWORD(v22) = *(_DWORD *)(v19 + 24);
      *(_DWORD *)(v19 + 24) = v24;
      *((_DWORD *)v15 + 6) = v22;
      *(_QWORD *)(v19 + 40) = 0;
      v25 = *((_DWORD *)v15 + 10);
      *(_QWORD *)(v19 + 32) = v19 + 48;
      if ( !v25 )
        break;
      v26 = (_QWORD *)v15[4];
      if ( (_QWORD *)(v19 + 32) == v15 + 4 )
        goto LABEL_13;
      if ( v26 == v21 )
      {
        v35 = v25;
        sub_22134E0(v19 + 32, v19 + 48, v25, 8);
        v26 = (_QWORD *)v15[4];
        v29 = v35;
        v30 = 8LL * *((unsigned int *)v15 + 10);
        if ( v30 )
        {
          memcpy(*(void **)(v19 + 32), (const void *)v15[4], v30);
          v26 = (_QWORD *)v15[4];
          v29 = v35;
        }
        *(_DWORD *)(v19 + 40) = v29;
        *((_DWORD *)v15 + 10) = 0;
        goto LABEL_13;
      }
      *(_DWORD *)(v19 + 40) = v25;
      v28 = *((_DWORD *)v15 + 11);
      *(_QWORD *)(v19 + 32) = v26;
      *(_DWORD *)(v19 + 44) = v28;
      v15[4] = v21;
      *((_DWORD *)v15 + 11) = 0;
      *((_DWORD *)v15 + 10) = 0;
      ++*((_DWORD *)a1 + 2);
LABEL_15:
      v15 += 6;
      operator delete();
      if ( v13 == v21 )
        return (_QWORD *)operator delete();
    }
    v26 = (_QWORD *)v15[4];
LABEL_13:
    ++*((_DWORD *)a1 + 2);
    if ( v26 != v21 )
      free(v26);
    goto LABEL_15;
  }
  v31 = *((unsigned int *)a1 + 4);
  a1[1] = nullptr;
  for ( j = &result[6 * v31]; j != result; result += 6 )
    *result = -4096;
  return result;
}

