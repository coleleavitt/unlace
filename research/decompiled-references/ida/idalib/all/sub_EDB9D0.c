_QWORD *__fastcall sub_EDB9D0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // r13
  __int64 *v9; // r14
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  _QWORD *i; // rdx
  __int64 *v15; // rbx
  __int64 *v16; // r13
  __int64 v17; // r15
  __int64 v18; // rax
  int v19; // edx
  int v20; // esi
  __int64 v21; // rdi
  __int64 *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdi
  void **v25; // rdi
  void **v26; // rbp
  void **v27; // rdi
  __int64 v28; // rdx
  _QWORD *j; // rdx
  int v30; // r10d
  __int64 *v31; // r11
  __int64 v32; // [rsp+8h] [rbp-40h]

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
    v13 = 16 * v8;
    *(_QWORD *)(a1 + 8) = 0;
    for ( i = &result[2 * v12]; i != result; result += 2 )
      *result = 0x7FFFFFFFFFFFFFFFLL;
    v15 = v9;
    if ( (__int64 *)((char *)v9 + v13) != v9 )
    {
      v32 = v13;
      v16 = (__int64 *)((char *)v9 + v13);
      v17 = a1;
      do
      {
        while ( 1 )
        {
          v18 = *v15;
          if ( (unsigned __int64)(*v15 - 0x7FFFFFFFFFFFFFFELL) > 1 )
          {
            v19 = *(_DWORD *)(v17 + 16);
            if ( !v19 )
            {
              *(_QWORD *)&dword_0 = *v15;
              BUG();
            }
            v20 = v19 - 1;
            LODWORD(v21) = (v19 - 1) & (37 * v18);
            v22 = (__int64 *)(*(_QWORD *)v17 + 16LL * (unsigned int)v21);
            v23 = *v22;
            if ( v18 != *v22 )
            {
              v30 = 1;
              v31 = nullptr;
              if ( v23 != 0x7FFFFFFFFFFFFFFFLL )
              {
                while ( 1 )
                {
                  if ( !v31 && v23 == 0x7FFFFFFFFFFFFFFELL )
                    v31 = v22;
                  v21 = v20 & (unsigned int)(v21 + v30);
                  v22 = (__int64 *)(*(_QWORD *)v17 + 16 * v21);
                  v23 = *v22;
                  if ( v18 == *v22 )
                    break;
                  if ( v23 == 0x7FFFFFFFFFFFFFFFLL )
                  {
                    if ( v31 )
                      v22 = v31;
                    break;
                  }
                  ++v30;
                }
              }
            }
            *v22 = *v15;
            v22[1] = v15[1];
            v15[1] = 0;
            ++*(_DWORD *)(v17 + 8);
            v24 = v15[1];
            if ( v24 )
            {
              if ( (v24 & 4) != 0 )
              {
                v25 = (void **)(v24 & 0xFFFFFFFFFFFFFFF8LL);
                v26 = v25;
                if ( v25 )
                  break;
              }
            }
          }
          v15 += 2;
          if ( v16 == v15 )
            goto LABEL_18;
        }
        v27 = (void **)*v25;
        if ( v27 != v26 + 2 )
          free(v27);
        v15 += 2;
        operator delete(v26, 0x30u);
      }
      while ( v16 != v15 );
LABEL_18:
      v13 = v32;
    }
    return (_QWORD *)operator delete(v9, v13, 8);
  }
  else
  {
    v28 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[2 * v28]; j != result; result += 2 )
      *result = 0x7FFFFFFFFFFFFFFFLL;
  }
  return result;
}
