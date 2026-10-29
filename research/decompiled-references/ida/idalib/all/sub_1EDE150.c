_DWORD *__fastcall sub_1EDE150(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbp
  __int64 v9; // rbx
  unsigned int v10; // eax
  _DWORD *result; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  _DWORD *i; // rdx
  __int64 v15; // r13
  int v16; // ecx
  int v17; // edx
  int v18; // esi
  unsigned int v19; // r8d
  __int64 v20; // rdx
  int v21; // edi
  __int64 v22; // rsi
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // r15
  __int64 v27; // rbp
  _DWORD *j; // rdx
  int v29; // r10d
  __int64 v30; // r11
  __int64 v31; // [rsp+8h] [rbp-40h]

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
  result = (_DWORD *)sub_22300B0(56LL * v10, 8, 64, a4, a5, a6);
  *a1 = (__int64)result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
    v31 = 56 * v8;
    v13 = v9 + 56 * v8;
    for ( i = &result[14 * v12]; i != result; result += 14 )
      *result = 0;
    v15 = v9;
    if ( v13 == v9 )
      return (_DWORD *)operator delete(v9, v31, 8);
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = *(_DWORD *)v15;
        if ( (unsigned int)(*(_DWORD *)v15 + 1) > 1 )
          break;
LABEL_8:
        v15 += 56;
        if ( v13 == v15 )
          return (_DWORD *)operator delete(v9, v31, 8);
      }
      v17 = *((_DWORD *)a1 + 4);
      if ( !v17 )
      {
        dword_0 = *(_DWORD *)v15;
        BUG();
      }
      v18 = v17 - 1;
      v19 = (v17 - 1) & v16;
      v20 = *a1 + 56LL * v19;
      v21 = *(_DWORD *)v20;
      if ( v16 != *(_DWORD *)v20 )
      {
        v29 = 1;
        v30 = 0;
        if ( v21 )
        {
          while ( 1 )
          {
            if ( v21 == -1 && !v30 )
              v30 = v20;
            v19 = v18 & (v29 + v19);
            v20 = *a1 + 56LL * v19;
            v21 = *(_DWORD *)v20;
            if ( v16 == *(_DWORD *)v20 )
              break;
            if ( !v21 )
            {
              if ( v30 )
                v20 = v30;
              break;
            }
            ++v29;
          }
        }
      }
      v22 = v20 + 16;
      *(_DWORD *)v20 = *(_DWORD *)v15;
      v23 = *(_QWORD *)(v15 + 24);
      if ( !v23 )
      {
        *(_QWORD *)(v20 + 24) = 0;
        *(_QWORD *)(v20 + 32) = v22;
        *(_QWORD *)(v20 + 40) = v22;
        v26 = *(_QWORD *)(v15 + 24);
        *(_DWORD *)(v20 + 16) = 0;
        *(_QWORD *)(v20 + 48) = 0;
        ++*((_DWORD *)a1 + 2);
        if ( v26 )
        {
          do
          {
            sub_A8A970(v15 + 8, *(_QWORD **)(v26 + 24));
            v27 = *(_QWORD *)(v26 + 16);
            operator delete((void *)v26);
            v26 = v27;
          }
          while ( v27 );
        }
        goto LABEL_8;
      }
      v24 = *(_DWORD *)(v15 + 16);
      *(_QWORD *)(v20 + 24) = v23;
      *(_DWORD *)(v20 + 16) = v24;
      *(_QWORD *)(v20 + 32) = *(_QWORD *)(v15 + 32);
      *(_QWORD *)(v20 + 40) = *(_QWORD *)(v15 + 40);
      *(_QWORD *)(v23 + 8) = v22;
      *(_QWORD *)(v20 + 48) = *(_QWORD *)(v15 + 48);
      v25 = v15 + 16;
      v15 += 56;
      *(_QWORD *)(v15 - 32) = 0;
      *(_QWORD *)(v15 - 24) = v25;
      *(_QWORD *)(v15 - 16) = v25;
      *(_QWORD *)(v15 - 8) = 0;
      ++*((_DWORD *)a1 + 2);
      if ( v13 == v15 )
        return (_DWORD *)operator delete(v9, v31, 8);
    }
  }
  a1[1] = 0;
  for ( j = &result[14 * *((unsigned int *)a1 + 4)]; j != result; result += 14 )
    *result = 0;
  return result;
}
