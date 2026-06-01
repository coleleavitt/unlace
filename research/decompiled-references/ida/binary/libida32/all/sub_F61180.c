_QWORD *__fastcall sub_F61180(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 *v8; // r15
  __int64 v9; // rbx
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rdx
  __int64 *j; // rbx
  __int64 v15; // rax
  int v16; // edx
  int v17; // esi
  unsigned int v18; // ecx
  _QWORD *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r12
  _QWORD *v23; // r13
  _QWORD *v24; // r15
  _QWORD *v25; // r14
  _QWORD *v26; // rdi
  _QWORD *v27; // rdi
  _QWORD *v28; // rdi
  __int64 v29; // rdx
  _QWORD *k; // rdx
  int v31; // r11d
  _QWORD *v32; // r9
  __int64 *i; // [rsp+8h] [rbp-50h]
  __int64 *v34; // [rsp+10h] [rbp-48h]

  v6 = (unsigned int)(a2 - 1);
  v8 = *(__int64 **)a1;
  v9 = *(unsigned int *)(a1 + 16);
  v34 = *(__int64 **)a1;
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
  if ( v8 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v13 = &result[2 * v12];
    for ( i = &v34[2 * v9]; v13 != result; result += 2 )
      *result = -4096;
    for ( j = v34; i != j; j += 2 )
    {
      v15 = *j;
      if ( *j != -8192 && v15 != -4096 )
      {
        v16 = *(_DWORD *)(a1 + 16);
        if ( !v16 )
        {
          *(_QWORD *)&dword_0 = *j;
          BUG();
        }
        v17 = v16 - 1;
        v18 = (v16 - 1) & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
        v19 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v18);
        v20 = *v19;
        if ( v15 != *v19 )
        {
          v31 = 1;
          v32 = nullptr;
          if ( v20 != -4096 )
          {
            while ( 1 )
            {
              if ( v20 == -8192 && !v32 )
                v32 = v19;
              v18 = v17 & (v31 + v18);
              v19 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v18);
              v20 = *v19;
              if ( v15 == *v19 )
                break;
              if ( v20 == -4096 )
              {
                if ( v32 )
                  v19 = v32;
                break;
              }
              ++v31;
            }
          }
        }
        *v19 = v15;
        v21 = j[1];
        j[1] = 0;
        v19[1] = v21;
        v22 = j[1];
        ++*(_DWORD *)(a1 + 8);
        if ( v22 )
        {
          v23 = *(_QWORD **)(v22 + 24);
          v24 = &v23[*(unsigned int *)(v22 + 32)];
          if ( v23 != v24 )
          {
            do
            {
              v25 = (_QWORD *)*--v24;
              if ( *v24 )
              {
                v26 = (_QWORD *)v25[10];
                if ( v26 != v25 + 12 )
                  free(v26);
                v27 = (_QWORD *)v25[7];
                if ( v27 != v25 + 9 )
                  free(v27);
                v28 = (_QWORD *)v25[3];
                if ( v28 != v25 + 5 )
                  free(v28);
                operator delete(v25, 0x70u);
              }
            }
            while ( v23 != v24 );
            v24 = *(_QWORD **)(v22 + 24);
          }
          if ( v24 != (_QWORD *)(v22 + 40) )
            free(v24);
          operator delete();
          operator delete((void *)v22, 0x38u);
        }
      }
    }
    return (_QWORD *)operator delete();
  }
  else
  {
    v29 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( k = &result[2 * v29]; k != result; result += 2 )
      *result = -4096;
  }
  return result;
}

