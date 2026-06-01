_QWORD *__fastcall sub_12F12D0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 *v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 *v14; // r14
  _QWORD *i; // rdx
  __int64 *j; // r13
  __int64 v17; // rax
  int v18; // edx
  int v19; // esi
  unsigned int v20; // ecx
  _QWORD *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r15
  __int64 v26; // rdi
  void **v27; // rax
  __int64 v28; // rdi
  void **v29; // rdi
  void **v30; // r15
  void **v31; // rdi
  __int64 v32; // rdx
  _QWORD *k; // rdx
  int v34; // r11d
  _QWORD *v35; // r9

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(__int64 **)a1;
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
  result = (_QWORD *)sub_22300B0(16LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    v13 = 2 * v8;
    *(_QWORD *)(a1 + 8) = 0;
    v14 = &v9[v13];
    for ( i = &result[2 * v12]; i != result; result += 2 )
      *result = -4096;
    for ( j = v9; v14 != j; j += 2 )
    {
      v17 = *j;
      if ( *j != -8192 && v17 != -4096 )
      {
        v18 = *(_DWORD *)(a1 + 16);
        if ( !v18 )
        {
          *(_QWORD *)&dword_0 = *j;
          BUG();
        }
        v19 = v18 - 1;
        v20 = (v18 - 1) & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
        v21 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v20);
        v22 = *v21;
        if ( *v21 != v17 )
        {
          v34 = 1;
          v35 = nullptr;
          if ( v22 != -4096 )
          {
            while ( 1 )
            {
              if ( v22 == -8192 && !v35 )
                v35 = v21;
              v20 = v19 & (v34 + v20);
              v21 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v20);
              v22 = *v21;
              if ( v17 == *v21 )
                break;
              if ( v22 == -4096 )
              {
                if ( v35 )
                  v21 = v35;
                break;
              }
              ++v34;
            }
          }
        }
        *v21 = v17;
        v21[1] = j[1];
        j[1] = 0;
        ++*(_DWORD *)(a1 + 8);
        v23 = j[1];
        if ( v23 )
        {
          if ( (v23 & 4) != 0 )
          {
            v24 = v23 & 0xFFFFFFFFFFFFFFF8LL;
            v25 = v24;
            if ( v24 )
            {
              v26 = *(_QWORD *)(v24 + 24);
              if ( v26 )
              {
                if ( (v26 & 4) != 0 )
                {
                  v27 = (void **)(v26 & 0xFFFFFFFFFFFFFFF8LL);
                  if ( (v26 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                  {
                    if ( *v27 != v27 + 2 )
                    {
                      free(*v27);
                      v27 = (void **)(v26 & 0xFFFFFFFFFFFFFFF8LL);
                    }
                    operator delete(v27, 0x30u);
                  }
                }
              }
              v28 = *(_QWORD *)(v25 + 8);
              if ( v28 )
              {
                if ( (v28 & 4) != 0 )
                {
                  v29 = (void **)(v28 & 0xFFFFFFFFFFFFFFF8LL);
                  v30 = v29;
                  if ( v29 )
                  {
                    v31 = (void **)*v29;
                    if ( v31 != v30 + 2 )
                      free(v31);
                    operator delete(v30, 0x30u);
                  }
                }
              }
            }
          }
        }
      }
    }
    return (_QWORD *)operator delete(v9, v13 * 8, 8);
  }
  else
  {
    v32 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( k = &result[2 * v32]; k != result; result += 2 )
      *result = -4096;
  }
  return result;
}
