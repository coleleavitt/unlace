_QWORD *__fastcall sub_A73110(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 *v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 *v13; // r14
  _QWORD *i; // rdx
  __int64 *j; // r13
  __int64 v16; // rax
  int v17; // edx
  int v18; // esi
  unsigned int v19; // ecx
  _QWORD *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdi
  void **v23; // rdi
  void **v24; // r15
  void **v25; // rdi
  __int64 v26; // rdx
  _QWORD *k; // rdx
  int v28; // r11d
  _QWORD *v29; // r9

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
  result = (_QWORD *)sub_220C370(16LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v13 = &v9[2 * v8];
    for ( i = &result[2 * v12]; i != result; result += 2 )
      *result = -4096;
    for ( j = v9; v13 != j; j += 2 )
    {
      v16 = *j;
      if ( *j != -8192 && v16 != -4096 )
      {
        v17 = *(_DWORD *)(a1 + 16);
        if ( !v17 )
        {
          *(_QWORD *)&dword_0 = *j;
          BUG();
        }
        v18 = v17 - 1;
        v19 = (v17 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
        v20 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v19);
        v21 = *v20;
        if ( v16 != *v20 )
        {
          v28 = 1;
          v29 = nullptr;
          if ( v21 != -4096 )
          {
            while ( 1 )
            {
              if ( v21 == -8192 && !v29 )
                v29 = v20;
              v19 = v18 & (v28 + v19);
              v20 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v19);
              v21 = *v20;
              if ( v16 == *v20 )
                break;
              if ( v21 == -4096 )
              {
                if ( v29 )
                  v20 = v29;
                break;
              }
              ++v28;
            }
          }
        }
        *v20 = v16;
        v20[1] = j[1];
        j[1] = 0;
        ++*(_DWORD *)(a1 + 8);
        v22 = j[1];
        if ( v22 )
        {
          if ( (v22 & 4) != 0 )
          {
            v23 = (void **)(v22 & 0xFFFFFFFFFFFFFFF8LL);
            v24 = v23;
            if ( v23 )
            {
              v25 = (void **)*v23;
              if ( v25 != v24 + 2 )
                free(v25);
              operator delete(v24, 0x30u);
            }
          }
        }
      }
    }
    return (_QWORD *)operator delete();
  }
  else
  {
    v26 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( k = &result[2 * v26]; k != result; result += 2 )
      *result = -4096;
  }
  return result;
}

