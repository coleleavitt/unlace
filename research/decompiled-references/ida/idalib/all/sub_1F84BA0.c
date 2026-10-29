_BYTE *__fastcall sub_1F84BA0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  _QWORD *v8; // rbp
  char v9; // al
  unsigned __int64 v10; // rdx
  __int64 v11; // r12
  unsigned int v12; // r13d
  __int64 v13; // rax
  __int64 v14; // rsi
  bool v15; // zf
  _QWORD *v16; // r10
  _QWORD *v17; // rdx
  __int64 v18; // r14
  _QWORD *i; // rcx
  _QWORD *j; // rdx
  __int64 v21; // r11
  int v22; // r9d
  unsigned int v23; // r8d
  __int64 v24; // rdi
  __int64 v25; // r12
  __int64 v26; // rcx
  int v27; // r9d
  _BYTE *result; // rax
  __int64 *v29; // r15
  __int64 v30; // rdx
  __int64 *v31; // rax
  _QWORD *v32; // r12
  unsigned __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 *v36; // rax
  __int64 v37; // rdx
  __int64 *k; // rdx
  __int64 *v39; // r8
  int v40; // edi
  unsigned int v41; // esi
  __int64 *v42; // rcx
  __int64 v43; // r9
  __int64 v44; // rdx
  int v45; // edi
  int v46; // r15d
  __int64 v47; // r14
  int v48; // r13d
  __int64 *v49; // r10
  _BYTE v50[1080]; // [rsp+10h] [rbp-438h] BYREF

  LODWORD(v6) = a2;
  v8 = *(_QWORD **)(a1 + 8);
  v9 = *(_BYTE *)a1 & 1;
  if ( a2 <= 0x40 )
  {
    v29 = (__int64 *)(a1 + 8);
    v30 = a1 + 1032;
    if ( !v9 )
      goto LABEL_4;
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
      if ( !v9 )
      {
        v12 = *(_DWORD *)(a1 + 16);
        v13 = sub_22300B0(16LL * (unsigned int)v11, 8, v10, a4, a5, a6);
        *(_DWORD *)(a1 + 16) = v11;
        *(_QWORD *)(a1 + 8) = v13;
        goto LABEL_5;
      }
      v29 = (__int64 *)(a1 + 8);
      v30 = a1 + 1032;
    }
    else
    {
      if ( !v9 )
      {
LABEL_4:
        *(_BYTE *)a1 |= 1u;
        v12 = *(_DWORD *)(a1 + 16);
        v13 = (__int64)v8;
        v6 = v12;
LABEL_5:
        v14 = 2LL * v12;
        v15 = (*(_QWORD *)a1 & 1LL) == 0;
        *(_QWORD *)a1 &= 1uLL;
        v16 = &v8[v14];
        if ( v15 )
        {
          v18 = 2 * v6;
          v17 = (_QWORD *)v13;
        }
        else
        {
          v17 = (_QWORD *)(a1 + 8);
          v18 = 128;
        }
        for ( i = &v17[v18]; i != v17; v17 += 2 )
          *v17 = -4096;
        for ( j = v8; v16 != j; j += 2 )
        {
          v26 = *j;
          if ( *j != -4096 && v26 != -8192 )
          {
            if ( (*(_BYTE *)a1 & 1) != 0 )
            {
              v21 = a1 + 8;
              v22 = 63;
            }
            else
            {
              v27 = *(_DWORD *)(a1 + 16);
              if ( !v27 )
              {
                *(_QWORD *)&dword_0 = *j;
                BUG();
              }
              v22 = v27 - 1;
              v21 = v13;
            }
            v23 = v22 & (((unsigned int)v26 >> 9) ^ ((unsigned int)v26 >> 4));
            v24 = v21 + 16LL * v23;
            v25 = *(_QWORD *)v24;
            if ( *(_QWORD *)v24 != v26 )
            {
              v46 = 1;
              v47 = 0;
              if ( v25 != -4096 )
              {
                while ( 1 )
                {
                  if ( v25 == -8192 && !v47 )
                    v47 = v24;
                  v23 = v22 & (v46 + v23);
                  v24 = v21 + 16LL * v23;
                  v25 = *(_QWORD *)v24;
                  if ( v26 == *(_QWORD *)v24 )
                    break;
                  if ( v25 == -4096 )
                  {
                    if ( v47 )
                      v24 = v47;
                    break;
                  }
                  ++v46;
                }
              }
            }
            *(_QWORD *)v24 = v26;
            *(_DWORD *)(v24 + 8) = *((_DWORD *)j + 2);
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
          }
        }
        return (_BYTE *)operator delete(v8, v14 * 8, 8);
      }
      v29 = (__int64 *)(a1 + 8);
      v30 = a1 + 1032;
      LODWORD(v6) = 64;
    }
  }
  v31 = v29;
  v32 = v50;
  v33 = (unsigned __int64)v29 + ((v30 - 16 - (_QWORD)v29) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  do
  {
    v34 = *v31;
    if ( *v31 != -4096 && v34 != -8192 )
    {
      *v32 = v34;
      v34 = *((unsigned int *)v31 + 2);
      v32 += 2;
      *((_DWORD *)v32 - 2) = v34;
    }
    v31 += 2;
  }
  while ( v31 != (__int64 *)v33 );
  if ( (unsigned int)v6 > 0x40 )
  {
    *(_BYTE *)a1 &= ~1u;
    v35 = sub_22300B0(16LL * (unsigned int)v6, 8, v34, v33, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v35;
    v8 = (_QWORD *)v35;
  }
  v15 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v15 )
  {
    v36 = v8;
    v37 = 2LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v36 = v29;
    v37 = 128;
  }
  for ( k = &v36[v37]; k != v36; v36 += 2 )
    *v36 = -4096;
  for ( result = v50; v32 != (_QWORD *)result; result += 16 )
  {
    v44 = *(_QWORD *)result;
    if ( *(_QWORD *)result != -8192 && v44 != -4096 )
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v39 = v29;
        v40 = 63;
      }
      else
      {
        v45 = *(_DWORD *)(a1 + 16);
        if ( !v45 )
        {
          *(_QWORD *)&dword_0 = *(_QWORD *)result;
          BUG();
        }
        v40 = v45 - 1;
        v39 = v8;
      }
      v41 = v40 & (((unsigned int)v44 >> 9) ^ ((unsigned int)v44 >> 4));
      v42 = &v39[2 * v41];
      v43 = *v42;
      if ( v44 != *v42 )
      {
        v48 = 1;
        v49 = nullptr;
        if ( v43 != -4096 )
        {
          while ( 1 )
          {
            if ( v43 == -8192 && !v49 )
              v49 = v42;
            v41 = v40 & (v48 + v41);
            v42 = &v39[2 * v41];
            v43 = *v42;
            if ( v44 == *v42 )
              break;
            if ( v43 == -4096 )
            {
              if ( v49 )
                v42 = v49;
              break;
            }
            ++v48;
          }
        }
      }
      *v42 = v44;
      *((_DWORD *)v42 + 2) = *((_DWORD *)result + 2);
      *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
    }
  }
  return result;
}
