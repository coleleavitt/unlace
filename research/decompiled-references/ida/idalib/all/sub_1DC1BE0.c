__int64 __fastcall sub_1DC1BE0(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  _QWORD *v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // r13d
  __int64 v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  _QWORD *v15; // rsi
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 *v19; // rdi
  _QWORD *i; // r12
  __int64 *j; // r8
  __int64 v22; // r10
  int v23; // r11d
  unsigned int v24; // ecx
  _QWORD *v25; // rax
  __int64 v26; // r12
  __int64 v27; // rdx
  int v28; // eax
  __int64 *v29; // r13
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  bool v35; // zf
  __int64 v36; // rax
  __int64 result; // rax
  __int64 *k; // rdx
  _QWORD *v39; // rdi
  int v40; // r8d
  unsigned int v41; // esi
  _QWORD *v42; // rax
  __int64 v43; // r9
  __int64 v44; // rcx
  int v45; // eax
  int v46; // r13d
  _QWORD *v47; // r14
  int v48; // r10d
  _QWORD *v49; // r11
  _QWORD v50[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v51; // [rsp+10h] [rbp-68h] BYREF

  LODWORD(v6) = a2;
  v8 = *(_QWORD **)(a1 + 8);
  v9 = *(_BYTE *)a1 & 1;
  if ( a2 <= 4 )
  {
    v14 = (_QWORD *)(a1 + 8);
    v15 = (_QWORD *)(a1 + 72);
    if ( !(_BYTE)v9 )
    {
      v11 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v13 = v8;
      v6 = v11;
      goto LABEL_8;
    }
  }
  else
  {
    a3 = (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
         | (a2 - 1)
         | ((unsigned __int64)(a2 - 1) >> 1)
         | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 8)
       | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
       | (a2 - 1)
       | ((unsigned __int64)(a2 - 1) >> 1)
       | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4);
    v10 = (a3 | (a3 >> 16)) + 1;
    v6 = (unsigned int)v10;
    if ( (unsigned int)v10 > 0x40 )
    {
      v14 = (_QWORD *)(a1 + 8);
      v15 = (_QWORD *)(a1 + 72);
      if ( !(_BYTE)v9 )
      {
        v11 = *(_DWORD *)(a1 + 16);
        v12 = 16LL * (unsigned int)v10;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !(_BYTE)v9 )
      {
        v11 = *(_DWORD *)(a1 + 16);
        v6 = 64;
        v12 = 1024;
LABEL_5:
        v13 = (_QWORD *)sub_22300B0(v12, 8, a3, v9, a5, a6);
        *(_DWORD *)(a1 + 16) = v6;
        *(_QWORD *)(a1 + 8) = v13;
LABEL_8:
        v16 = 2 * v6;
        v17 = 2LL * v11;
        v18 = *(_QWORD *)a1 & 1LL;
        v19 = &v8[v17];
        *(_QWORD *)a1 = v18;
        if ( v18 )
        {
          v13 = (_QWORD *)(a1 + 8);
          v16 = 8;
        }
        for ( i = &v13[v16]; i != v13; v13 += 2 )
          *v13 = -4096;
        for ( j = v8; v19 != j; j += 2 )
        {
          v27 = *j;
          if ( *j != -4096 && v27 != -8192 )
          {
            if ( (*(_BYTE *)a1 & 1) != 0 )
            {
              v22 = a1 + 8;
              v23 = 3;
            }
            else
            {
              v28 = *(_DWORD *)(a1 + 16);
              v22 = *(_QWORD *)(a1 + 8);
              if ( !v28 )
              {
                *(_QWORD *)&dword_0 = *j;
                BUG();
              }
              v23 = v28 - 1;
            }
            v24 = v23 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
            v25 = (_QWORD *)(v22 + 16LL * v24);
            v26 = *v25;
            if ( *v25 != v27 )
            {
              v46 = 1;
              v47 = nullptr;
              if ( v26 != -4096 )
              {
                while ( 1 )
                {
                  if ( v26 == -8192 && !v47 )
                    v47 = v25;
                  v24 = v23 & (v46 + v24);
                  v25 = (_QWORD *)(v22 + 16LL * v24);
                  v26 = *v25;
                  if ( v27 == *v25 )
                    break;
                  if ( v26 == -4096 )
                  {
                    if ( v47 )
                      v25 = v47;
                    break;
                  }
                  ++v46;
                }
              }
            }
            *v25 = v27;
            v25[1] = j[1];
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
          }
        }
        return operator delete(v8, v17 * 8, 8);
      }
      v14 = (_QWORD *)(a1 + 8);
      v15 = (_QWORD *)(a1 + 72);
      LODWORD(v6) = 64;
    }
  }
  if ( *v14 == -4096 || *v14 == -8192 )
  {
    v29 = v50;
  }
  else
  {
    v50[0] = *v14;
    v29 = &v51;
    v50[1] = v14[1];
  }
  if ( v15 != v14 + 2 )
  {
    v30 = v14[2];
    if ( v30 != -4096 && v30 != -8192 )
    {
      *v29 = v30;
      v29 += 2;
      *(v29 - 1) = v14[3];
    }
    if ( v15 != v14 + 4 )
    {
      v31 = v14[4];
      if ( v31 != -4096 && v31 != -8192 )
      {
        *v29 = v31;
        v29 += 2;
        *(v29 - 1) = v14[5];
      }
      if ( v15 != v14 + 6 )
      {
        v32 = v14[6];
        if ( v32 != -4096 && v32 != -8192 )
        {
          *v29 = v32;
          v29 += 2;
          *(v29 - 1) = v14[7];
        }
        if ( v15 != v14 + 8 )
        {
          v33 = v14[8];
          if ( v33 != -4096 && v33 != -8192 )
          {
            *v29 = v33;
            v29 += 2;
            *(v29 - 1) = v14[9];
          }
        }
      }
    }
  }
  if ( (unsigned int)v6 > 4 )
  {
    *(_BYTE *)a1 &= ~1u;
    v34 = sub_22300B0(16LL * (unsigned int)v6, 8, a3, v9, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v34;
    v8 = (_QWORD *)v34;
  }
  v35 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v35 )
  {
    v36 = 2LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v8 = v14;
    v36 = 8;
  }
  for ( result = (__int64)&v8[v36]; (_QWORD *)result != v8; v8 += 2 )
    *v8 = -4096;
  for ( k = v50; k != v29; k += 2 )
  {
    v44 = *k;
    if ( *k != -8192 && v44 != -4096 )
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v39 = v14;
        v40 = 3;
      }
      else
      {
        v45 = *(_DWORD *)(a1 + 16);
        v39 = *(_QWORD **)(a1 + 8);
        if ( !v45 )
        {
          *(_QWORD *)&dword_0 = *k;
          BUG();
        }
        v40 = v45 - 1;
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
      v42[1] = k[1];
      result = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1u;
      *(_DWORD *)a1 = result;
    }
  }
  return result;
}
