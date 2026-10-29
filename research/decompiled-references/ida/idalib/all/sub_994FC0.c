__int64 *__fastcall sub_994FC0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  _QWORD *v8; // rbp
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // r12d
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 *v15; // r14
  __int64 v16; // rsi
  bool v17; // zf
  _QWORD *v18; // r12
  _QWORD *v19; // rdx
  __int64 v20; // r13
  _QWORD *i; // r13
  _QWORD *j; // r8
  __int64 v23; // r10
  int v24; // r9d
  unsigned int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // r11
  __int64 v28; // rcx
  int v29; // r9d
  __int64 *v30; // r12
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rdx
  _QWORD *k; // rdx
  __int64 *result; // rax
  _QWORD *v40; // r8
  int v41; // edi
  unsigned int v42; // esi
  __int64 *v43; // rcx
  __int64 v44; // r9
  __int64 v45; // rdx
  int v46; // edi
  int v47; // r14d
  __int64 v48; // r15
  int v49; // r13d
  __int64 *v50; // r10
  __int64 v51; // [rsp+10h] [rbp-78h] BYREF
  int v52; // [rsp+18h] [rbp-70h]
  __int64 v53; // [rsp+20h] [rbp-68h] BYREF

  LODWORD(v6) = a2;
  v8 = *(_QWORD **)(a1 + 8);
  v9 = *(_BYTE *)a1 & 1;
  if ( a2 <= 4 )
  {
    v15 = (__int64 *)(a1 + 8);
    v10 = a1 + 72;
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
    v6 = (unsigned int)v11;
    if ( (unsigned int)v11 > 0x40 )
    {
      v15 = (__int64 *)(a1 + 8);
      v10 = a1 + 72;
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
          v20 = 2 * v6;
          v19 = (_QWORD *)v14;
        }
        else
        {
          v19 = (_QWORD *)(a1 + 8);
          v20 = 8;
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
              v24 = 3;
            }
            else
            {
              v29 = *(_DWORD *)(a1 + 16);
              if ( !v29 )
              {
                *(_QWORD *)&dword_0 = *j;
                BUG();
              }
              v24 = v29 - 1;
              v23 = v14;
            }
            v25 = v24 & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
            v26 = v23 + 16LL * v25;
            v27 = *(_QWORD *)v26;
            if ( *(_QWORD *)v26 != v28 )
            {
              v47 = 1;
              v48 = 0;
              if ( v27 != -4096 )
              {
                while ( 1 )
                {
                  if ( v27 == -8192 && !v48 )
                    v48 = v26;
                  v25 = v24 & (v47 + v25);
                  v26 = v23 + 16LL * v25;
                  v27 = *(_QWORD *)v26;
                  if ( v28 == *(_QWORD *)v26 )
                    break;
                  if ( v27 == -4096 )
                  {
                    if ( v48 )
                      v26 = v48;
                    break;
                  }
                  ++v47;
                }
              }
            }
            *(_QWORD *)v26 = v28;
            *(_DWORD *)(v26 + 8) = *((_DWORD *)j + 2);
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
          }
        }
        return (__int64 *)operator delete(v8, v16 * 8, 8);
      }
      v15 = (__int64 *)(a1 + 8);
      v10 = a1 + 72;
      LODWORD(v6) = 64;
    }
  }
  if ( *v15 == -4096 || *v15 == -8192 )
  {
    v30 = &v51;
  }
  else
  {
    v51 = *v15;
    v30 = &v53;
    v52 = *((_DWORD *)v15 + 2);
  }
  if ( (__int64 *)v10 != v15 + 2 )
  {
    v31 = v15[2];
    if ( v31 != -4096 && v31 != -8192 )
    {
      *v30 = v31;
      v30 += 2;
      *((_DWORD *)v30 - 2) = *((_DWORD *)v15 + 6);
    }
    if ( (__int64 *)v10 != v15 + 4 )
    {
      v32 = v15[4];
      if ( v32 != -4096 && v32 != -8192 )
      {
        *v30 = v32;
        v30 += 2;
        *((_DWORD *)v30 - 2) = *((_DWORD *)v15 + 10);
      }
      if ( (__int64 *)v10 != v15 + 6 )
      {
        v33 = v15[6];
        if ( v33 != -4096 && v33 != -8192 )
        {
          *v30 = v33;
          v30 += 2;
          *((_DWORD *)v30 - 2) = *((_DWORD *)v15 + 14);
        }
        if ( (__int64 *)v10 != v15 + 8 )
        {
          v34 = v15[8];
          if ( v34 != -4096 && v34 != -8192 )
          {
            *v30 = v34;
            v30 += 2;
            *((_DWORD *)v30 - 2) = *((_DWORD *)v15 + 18);
          }
        }
      }
    }
  }
  if ( (unsigned int)v6 > 4 )
  {
    *(_BYTE *)a1 &= ~1u;
    v35 = sub_22300B0(16LL * (unsigned int)v6, 8, v10, v9, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v35;
    v8 = (_QWORD *)v35;
  }
  v17 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v17 )
  {
    v36 = v8;
    v37 = 2LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v36 = v15;
    v37 = 8;
  }
  for ( k = &v36[v37]; k != v36; v36 += 2 )
    *v36 = -4096;
  for ( result = &v51; result != v30; result += 2 )
  {
    v45 = *result;
    if ( *result != -8192 && v45 != -4096 )
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v40 = v15;
        v41 = 3;
      }
      else
      {
        v46 = *(_DWORD *)(a1 + 16);
        if ( !v46 )
        {
          *(_QWORD *)&dword_0 = *result;
          BUG();
        }
        v41 = v46 - 1;
        v40 = v8;
      }
      v42 = v41 & (((unsigned int)v45 >> 9) ^ ((unsigned int)v45 >> 4));
      v43 = &v40[2 * v42];
      v44 = *v43;
      if ( v45 != *v43 )
      {
        v49 = 1;
        v50 = nullptr;
        if ( v44 != -4096 )
        {
          while ( 1 )
          {
            if ( v44 == -8192 && !v50 )
              v50 = v43;
            v42 = v41 & (v49 + v42);
            v43 = &v40[2 * v42];
            v44 = *v43;
            if ( v45 == *v43 )
              break;
            if ( v44 == -4096 )
            {
              if ( v50 )
                v43 = v50;
              break;
            }
            ++v49;
          }
        }
      }
      *v43 = v45;
      *((_DWORD *)v43 + 2) = *((_DWORD *)result + 2);
      *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
    }
  }
  return result;
}
