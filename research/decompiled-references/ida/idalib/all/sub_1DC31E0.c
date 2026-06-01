_QWORD *__fastcall sub_1DC31E0(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned int v8; // r12d
  __int64 *v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  int v14; // r10d
  __int64 *v15; // r11
  _QWORD *v16; // rcx
  __int64 *v17; // rdi
  int v18; // r12d
  __int64 v19; // rsi
  int v20; // ecx
  int v21; // r9d
  _QWORD *v22; // r14
  unsigned int i; // edx
  _QWORD *v24; // r8
  __int64 v25; // r15
  __int64 v26; // rdx
  _QWORD *j; // rdx
  unsigned int v28; // edx
  __int64 v29; // [rsp+8h] [rbp-40h]

  v6 = (unsigned int)(a2 - 1);
  v8 = *((_DWORD *)a1 + 4);
  v9 = (__int64 *)*a1;
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
  result = (_QWORD *)sub_22300B0(16LL * v10, 8, a3, a4, a5, a6);
  *a1 = (__int64)result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
    v13 = result;
    v14 = v12;
    v29 = 16LL * v8;
    v15 = &v9[(unsigned __int64)v29 / 8];
    v16 = &result[2 * v12];
    if ( result != v16 )
    {
      do
      {
        *v13 = -4096;
        v13 += 2;
        *((_DWORD *)v13 - 2) = -1;
      }
      while ( v16 != v13 );
    }
    v17 = v9;
    v18 = v14 - 1;
    if ( v15 != v9 )
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 == -4096 )
        {
          if ( *((_DWORD *)v17 + 2) == -1 )
            goto LABEL_19;
LABEL_9:
          if ( !v14 )
            goto LABEL_23;
LABEL_10:
          v20 = *((_DWORD *)v17 + 2);
          v21 = 1;
          v22 = nullptr;
          for ( i = v18
                  & (((0xBF58476D1CE4E5B9LL
                     * ((unsigned int)(37 * v20)
                      | ((unsigned __int64)(((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4)) << 32))) >> 31)
                   ^ (756364221 * v20)); ; i = v18 & v28 )
          {
            v24 = &result[2 * i];
            v25 = *v24;
            if ( v19 == *v24 && v20 == *((_DWORD *)v24 + 2) )
              break;
            if ( v25 == -4096 )
            {
              if ( *((_DWORD *)v24 + 2) == -1 )
              {
                if ( v22 )
                  v24 = v22;
                break;
              }
            }
            else if ( v25 == -8192 && *((_DWORD *)v24 + 2) == -2 && !v22 )
            {
              v22 = &result[2 * i];
            }
            v28 = v21 + i;
            ++v21;
          }
          v17 += 2;
          *v24 = v19;
          *((_DWORD *)v24 + 2) = v20;
          ++*((_DWORD *)a1 + 2);
          if ( v15 == v17 )
            return (_QWORD *)operator delete(v9, v29, 8);
        }
        else
        {
          if ( v19 != -8192 )
            goto LABEL_9;
          if ( *((_DWORD *)v17 + 2) != -2 )
          {
            if ( !v14 )
            {
LABEL_23:
              *(_QWORD *)&dword_0 = *v17;
              BUG();
            }
            goto LABEL_10;
          }
LABEL_19:
          v17 += 2;
          if ( v15 == v17 )
            return (_QWORD *)operator delete(v9, v29, 8);
        }
      }
    }
    return (_QWORD *)operator delete(v9, v29, 8);
  }
  else
  {
    v26 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
    for ( j = &result[2 * v26]; j != result; *((_DWORD *)result - 2) = -1 )
    {
      *result = -4096;
      result += 2;
    }
  }
  return result;
}
