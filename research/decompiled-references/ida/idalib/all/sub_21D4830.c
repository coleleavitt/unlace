__int64 *__fastcall sub_21D4830(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebp
  __int64 *v8; // r12
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // r13d
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 *v15; // r15
  __int64 v16; // rsi
  bool v17; // zf
  __int64 *v18; // r9
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  _QWORD *i; // rcx
  __int64 *j; // rdx
  __int64 v23; // r10
  int v24; // r11d
  unsigned int v25; // r8d
  _QWORD *v26; // rdi
  __int64 v27; // r13
  __int64 v28; // rcx
  __int64 *v29; // rax
  __int64 *v30; // r13
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 *v33; // rax
  __int64 v34; // rdx
  __int64 *k; // rdx
  __int64 *result; // rax
  __int64 *v37; // r8
  int v38; // edi
  unsigned int v39; // esi
  __int64 *v40; // rcx
  __int64 v41; // r9
  __int64 v42; // rdx
  int v43; // edi
  __int64 v44; // rax
  int v45; // ebp
  __int64 *v46; // r10
  _QWORD *v47; // [rsp+8h] [rbp-250h]
  int v48; // [rsp+14h] [rbp-244h]
  _BYTE v49[568]; // [rsp+20h] [rbp-238h] BYREF

  v6 = a2;
  v8 = *(__int64 **)(a1 + 8);
  v9 = *(_BYTE *)a1 & 1;
  if ( a2 <= 0x20 )
  {
    v15 = (__int64 *)(a1 + 8);
    v10 = a1 + 520;
    if ( !(_BYTE)v9 )
    {
      v12 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v14 = (__int64)v8;
      v6 = v12;
      goto LABEL_8;
    }
  }
  else
  {
    v10 = (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
          | (a2 - 1)
          | ((unsigned __int64)(a2 - 1) >> 1)
          | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 8)
        | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
        | (a2 - 1)
        | ((unsigned __int64)(a2 - 1) >> 1)
        | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4);
    v11 = (v10 | (v10 >> 16)) + 1;
    v6 = v11;
    if ( (unsigned int)v11 > 0x40 )
    {
      v15 = (__int64 *)(a1 + 8);
      v10 = a1 + 520;
      if ( !(_BYTE)v9 )
      {
        v12 = *(_DWORD *)(a1 + 16);
        v13 = 16LL * (unsigned int)v11;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !(_BYTE)v9 )
      {
        v12 = *(_DWORD *)(a1 + 16);
        v6 = 64;
        v13 = 1024;
LABEL_5:
        v14 = sub_22300B0(v13, 8, v10, v9, a5, a6);
        *(_DWORD *)(a1 + 16) = v6;
        *(_QWORD *)(a1 + 8) = v14;
LABEL_8:
        v16 = 2LL * v12;
        v17 = (*(_QWORD *)a1 & 1LL) == 0;
        *(_QWORD *)a1 &= 1uLL;
        v18 = &v8[v16];
        if ( v17 )
        {
          v19 = (_QWORD *)v14;
          v20 = 2LL * v6;
        }
        else
        {
          v19 = (_QWORD *)(a1 + 8);
          v20 = 64;
        }
        for ( i = &v19[v20]; i != v19; v19 += 2 )
          *v19 = -4096;
        for ( j = v8; v18 != j; j += 2 )
        {
          v28 = *j;
          if ( *j != -4096 && v28 != -8192 )
          {
            if ( (*(_BYTE *)a1 & 1) != 0 )
            {
              v23 = a1 + 8;
              v24 = 31;
            }
            else
            {
              if ( !v6 )
              {
                *(_QWORD *)&dword_0 = *j;
                BUG();
              }
              v24 = v6 - 1;
              v23 = v14;
            }
            v25 = v24 & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
            v26 = (_QWORD *)(v23 + 16LL * v25);
            v27 = *v26;
            if ( *v26 != v28 && v27 != -4096 )
            {
              v48 = 1;
              v47 = nullptr;
              while ( 1 )
              {
                if ( v27 == -8192 )
                {
                  if ( v47 )
                    v26 = v47;
                  v47 = v26;
                }
                v25 = v24 & (v48 + v25);
                v26 = (_QWORD *)(v23 + 16LL * v25);
                v27 = *v26;
                if ( v28 == *v26 )
                  break;
                if ( v27 == -4096 )
                {
                  if ( v47 )
                    v26 = v47;
                  break;
                }
                ++v48;
              }
            }
            *v26 = v28;
            v26[1] = j[1];
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
          }
        }
        return (__int64 *)operator delete(v8, v16 * 8, 8);
      }
      v15 = (__int64 *)(a1 + 8);
      v10 = a1 + 520;
      v6 = 64;
    }
  }
  v29 = v15;
  v30 = (__int64 *)v49;
  v31 = (unsigned __int64)v15 + ((v10 - 16 - (_QWORD)v15) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  do
  {
    v32 = *v29;
    if ( *v29 != -4096 && v32 != -8192 )
    {
      *v30 = v32;
      v32 = v29[1];
      v30 += 2;
      *(v30 - 1) = v32;
    }
    v29 += 2;
  }
  while ( v29 != (__int64 *)v31 );
  if ( v6 > 0x20 )
  {
    *(_BYTE *)a1 &= ~1u;
    v44 = sub_22300B0(16LL * v6, 8, v32, v31, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    v8 = (__int64 *)v44;
    *(_QWORD *)(a1 + 8) = v44;
  }
  v17 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v17 )
  {
    v33 = v8;
    v34 = 2LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v33 = v15;
    v34 = 64;
  }
  for ( k = &v33[v34]; k != v33; v33 += 2 )
    *v33 = -4096;
  result = (__int64 *)v49;
  if ( v30 != (__int64 *)v49 )
  {
    do
    {
      v42 = *result;
      if ( *result != -8192 && v42 != -4096 )
      {
        if ( (*(_BYTE *)a1 & 1) != 0 )
        {
          v37 = v15;
          v38 = 31;
        }
        else
        {
          v43 = *(_DWORD *)(a1 + 16);
          if ( !v43 )
          {
            *(_QWORD *)&dword_0 = *result;
            BUG();
          }
          v38 = v43 - 1;
          v37 = v8;
        }
        v39 = v38 & (((unsigned int)v42 >> 9) ^ ((unsigned int)v42 >> 4));
        v40 = &v37[2 * v39];
        v41 = *v40;
        if ( v42 != *v40 )
        {
          v45 = 1;
          v46 = nullptr;
          if ( v41 != -4096 )
          {
            while ( 1 )
            {
              if ( v41 == -8192 && !v46 )
                v46 = v40;
              v39 = v38 & (v45 + v39);
              v40 = &v37[2 * v39];
              v41 = *v40;
              if ( v42 == *v40 )
                break;
              if ( v41 == -4096 )
              {
                if ( v46 )
                  v40 = v46;
                break;
              }
              ++v45;
            }
          }
        }
        *v40 = v42;
        v40[1] = result[1];
        *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
      }
      result += 2;
    }
    while ( v30 != result );
  }
  return result;
}
