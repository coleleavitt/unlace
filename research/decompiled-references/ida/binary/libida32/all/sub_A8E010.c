_QWORD *__fastcall sub_A8E010(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned int v8; // ebx
  __int64 *v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 *v13; // r8
  _QWORD *i; // rdx
  __int64 *v15; // rdx
  __int64 v16; // rax
  int v17; // ecx
  int v18; // r9d
  unsigned int v19; // edi
  _QWORD *v20; // rcx
  __int64 v21; // r11
  __int64 v22; // rdx
  _QWORD *j; // rdx
  int v24; // r14d
  _QWORD *v25; // rbx

  v6 = (unsigned int)(a2 - 1);
  v8 = *(_DWORD *)(a1 + 16);
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
    if ( v13 != v9 )
    {
      v15 = v9;
      do
      {
        v16 = *v15;
        if ( *v15 != -8192 && v16 != -4096 )
        {
          v17 = *(_DWORD *)(a1 + 16);
          if ( !v17 )
          {
            *(_QWORD *)&dword_0 = *v15;
            BUG();
          }
          v18 = v17 - 1;
          v19 = (v17 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
          v20 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v19);
          v21 = *v20;
          if ( v16 != *v20 )
          {
            v24 = 1;
            v25 = nullptr;
            if ( v21 != -4096 )
            {
              while ( 1 )
              {
                if ( v21 == -8192 && !v25 )
                  v25 = v20;
                v19 = v18 & (v24 + v19);
                v20 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v19);
                v21 = *v20;
                if ( v16 == *v20 )
                  break;
                if ( v21 == -4096 )
                {
                  if ( v25 )
                    v20 = v25;
                  break;
                }
                ++v24;
              }
            }
          }
          *v20 = v16;
          v20[1] = v15[1];
          ++*(_DWORD *)(a1 + 8);
        }
        v15 += 2;
      }
      while ( v13 != v15 );
    }
    return (_QWORD *)operator delete();
  }
  else
  {
    v22 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[2 * v22]; j != result; result += 2 )
      *result = -4096;
  }
  return result;
}

