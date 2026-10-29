_BYTE *__fastcall sub_1A47800(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r12d
  _QWORD *v8; // rbp
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // r13d
  __int64 v13; // rdi
  _QWORD *v14; // rax
  __int64 *v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // r8
  _QWORD *i; // rdx
  _QWORD *j; // rax
  __int64 v22; // r9
  int v23; // r10d
  unsigned int v24; // edi
  __int64 *v25; // rcx
  __int64 v26; // r11
  __int64 v27; // rdx
  __int64 *v28; // rax
  _QWORD *v29; // r13
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  bool v32; // zf
  __int64 v33; // rax
  _QWORD *k; // rax
  _BYTE *result; // rax
  __int64 *v36; // rdi
  int v37; // r8d
  unsigned int v38; // esi
  __int64 *v39; // rcx
  __int64 v40; // r9
  int v41; // ecx
  __int64 *v42; // r15
  __int64 v43; // rax
  int v44; // r11d
  __int64 *v45; // r10
  int v46; // [rsp+4h] [rbp-244h]
  _BYTE v47[568]; // [rsp+10h] [rbp-238h] BYREF

  v6 = a2;
  v8 = *(_QWORD **)(a1 + 8);
  v9 = *(_BYTE *)a1 & 1;
  if ( a2 <= 0x20 )
  {
    v15 = (__int64 *)(a1 + 8);
    v10 = a1 + 520;
    if ( !(_BYTE)v9 )
    {
      v12 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v14 = v8;
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
        v14 = (_QWORD *)sub_22300B0(v13, 8, v10, v9, a5, a6);
        *(_DWORD *)(a1 + 16) = v6;
        *(_QWORD *)(a1 + 8) = v14;
LABEL_8:
        v16 = 2LL * v12;
        v17 = 2LL * v6;
        v18 = *(_QWORD *)a1 & 1LL;
        v19 = &v8[v16];
        *(_QWORD *)a1 = v18;
        if ( v18 )
        {
          v14 = (_QWORD *)(a1 + 8);
          v17 = 64;
        }
        for ( i = &v14[v17]; i != v14; v14 += 2 )
          *v14 = -4096;
        for ( j = v8; v19 != j; j += 2 )
        {
          v27 = *j;
          if ( *j != -4096 && v27 != -8192 )
          {
            if ( (*(_BYTE *)a1 & 1) != 0 )
            {
              v22 = a1 + 8;
              v23 = 31;
            }
            else
            {
              v22 = *(_QWORD *)(a1 + 8);
              if ( !v6 )
                goto LABEL_72;
              v23 = v6 - 1;
            }
            v24 = v23 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
            v25 = (__int64 *)(v22 + 16LL * v24);
            v26 = *v25;
            if ( *v25 != v27 && v26 != -4096 )
            {
              v46 = 1;
              v42 = nullptr;
              while ( 1 )
              {
                if ( v26 == -8192 && !v42 )
                  v42 = v25;
                v24 = v23 & (v46 + v24);
                v25 = (__int64 *)(v22 + 16LL * v24);
                v26 = *v25;
                if ( v27 == *v25 )
                  break;
                if ( v26 == -4096 )
                {
                  if ( v42 )
                    v25 = v42;
                  break;
                }
                ++v46;
              }
            }
            *v25 = v27;
            *((_BYTE *)v25 + 8) = *((_BYTE *)j + 8);
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
          }
        }
        return (_BYTE *)operator delete(v8, v16 * 8, 8);
      }
      v15 = (__int64 *)(a1 + 8);
      v10 = a1 + 520;
      v6 = 64;
    }
  }
  v28 = v15;
  v29 = v47;
  v30 = (unsigned __int64)v15 + ((v10 - 16 - (_QWORD)v15) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  do
  {
    v31 = *v28;
    if ( *v28 != -4096 && v31 != -8192 )
    {
      *v29 = v31;
      v31 = *((unsigned __int8 *)v28 + 8);
      v29 += 2;
      *((_BYTE *)v29 - 8) = v31;
    }
    v28 += 2;
  }
  while ( v28 != (__int64 *)v30 );
  if ( v6 > 0x20 )
  {
    *(_BYTE *)a1 &= ~1u;
    v43 = sub_22300B0(16LL * v6, 8, v31, v30, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    v8 = (_QWORD *)v43;
    *(_QWORD *)(a1 + 8) = v43;
  }
  v32 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v32 )
  {
    v33 = 2LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v8 = v15;
    v33 = 64;
  }
  for ( k = &v8[v33]; k != v8; v8 += 2 )
    *v8 = -4096;
  for ( result = v47; v29 != (_QWORD *)result; result += 16 )
  {
    v27 = *(_QWORD *)result;
    if ( *(_QWORD *)result != -8192 && v27 != -4096 )
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v36 = v15;
        v37 = 31;
      }
      else
      {
        v41 = *(_DWORD *)(a1 + 16);
        v36 = *(__int64 **)(a1 + 8);
        if ( !v41 )
        {
LABEL_72:
          *(_QWORD *)&dword_0 = v27;
          BUG();
        }
        v37 = v41 - 1;
      }
      v38 = v37 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
      v39 = &v36[2 * v38];
      v40 = *v39;
      if ( v27 != *v39 )
      {
        v44 = 1;
        v45 = nullptr;
        if ( v40 != -4096 )
        {
          while ( 1 )
          {
            if ( v40 == -8192 && !v45 )
              v45 = v39;
            v38 = v37 & (v44 + v38);
            v39 = &v36[2 * v38];
            v40 = *v39;
            if ( v27 == *v39 )
              break;
            if ( v40 == -4096 )
            {
              if ( v45 )
                v39 = v45;
              break;
            }
            ++v44;
          }
        }
      }
      *v39 = v27;
      *((_BYTE *)v39 + 8) = result[8];
      *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
    }
  }
  return result;
}
