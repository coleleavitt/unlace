__int64 *__fastcall sub_14B8F70(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebp
  _QWORD *v8; // r12
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // r13d
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 *v15; // r14
  __int64 v16; // rsi
  bool v17; // zf
  _QWORD *v18; // r13
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  _QWORD *i; // rcx
  _QWORD *j; // r8
  __int64 v23; // r9
  int v24; // r10d
  unsigned int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // r11
  __int64 v28; // rcx
  __int64 *v29; // r13
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  _QWORD *k; // rdx
  __int64 *result; // rax
  _QWORD *v39; // r8
  int v40; // edi
  unsigned int v41; // esi
  __int64 *v42; // rcx
  __int64 v43; // r9
  __int64 v44; // rdx
  int v45; // edi
  int v46; // ebp
  __int64 *v47; // r10
  __int64 v48; // [rsp+8h] [rbp-90h]
  int v49; // [rsp+14h] [rbp-84h]
  __int64 v50; // [rsp+20h] [rbp-78h] BYREF
  __int16 v51; // [rsp+28h] [rbp-70h]
  __int64 v52; // [rsp+30h] [rbp-68h] BYREF

  v6 = a2;
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
    v6 = v11;
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
          v19 = (_QWORD *)v14;
          v20 = 2LL * v6;
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
              if ( !v6 )
              {
                *(_QWORD *)&dword_0 = *j;
                BUG();
              }
              v24 = v6 - 1;
              v23 = v14;
            }
            v25 = v24 & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
            v26 = v23 + 16LL * v25;
            v27 = *(_QWORD *)v26;
            if ( *(_QWORD *)v26 != v28 && v27 != -4096 )
            {
              v49 = 1;
              v48 = 0;
              while ( 1 )
              {
                if ( v27 == -8192 )
                {
                  if ( v48 )
                    v26 = v48;
                  v48 = v26;
                }
                v25 = v24 & (v49 + v25);
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
                ++v49;
              }
            }
            *(_QWORD *)v26 = v28;
            *(_WORD *)(v26 + 8) = *((_WORD *)j + 4);
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
          }
        }
        return (__int64 *)operator delete(v8, v16 * 8, 8);
      }
      v15 = (__int64 *)(a1 + 8);
      v10 = a1 + 72;
      v6 = 64;
    }
  }
  if ( *v15 == -4096 || *v15 == -8192 )
  {
    v29 = &v50;
  }
  else
  {
    v50 = *v15;
    v29 = &v52;
    v51 = *((_WORD *)v15 + 4);
  }
  if ( (__int64 *)v10 != v15 + 2 )
  {
    v30 = v15[2];
    if ( v30 != -4096 && v30 != -8192 )
    {
      *v29 = v30;
      v29 += 2;
      *((_WORD *)v29 - 4) = *((_WORD *)v15 + 12);
    }
    if ( (__int64 *)v10 != v15 + 4 )
    {
      v31 = v15[4];
      if ( v31 != -4096 && v31 != -8192 )
      {
        *v29 = v31;
        v29 += 2;
        *((_WORD *)v29 - 4) = *((_WORD *)v15 + 20);
      }
      if ( (__int64 *)v10 != v15 + 6 )
      {
        v32 = v15[6];
        if ( v32 != -4096 && v32 != -8192 )
        {
          *v29 = v32;
          v29 += 2;
          *((_WORD *)v29 - 4) = *((_WORD *)v15 + 28);
        }
        if ( (__int64 *)v10 != v15 + 8 )
        {
          v33 = v15[8];
          if ( v33 != -4096 && v33 != -8192 )
          {
            *v29 = v33;
            v29 += 2;
            *((_WORD *)v29 - 4) = *((_WORD *)v15 + 36);
          }
        }
      }
    }
  }
  if ( v6 > 4 )
  {
    *(_BYTE *)a1 &= ~1u;
    v34 = sub_22300B0(16LL * v6, 8, v10, v9, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v34;
    v8 = (_QWORD *)v34;
  }
  v17 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v17 )
  {
    v35 = v8;
    v36 = 2LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v35 = v15;
    v36 = 8;
  }
  for ( k = &v35[v36]; k != v35; v35 += 2 )
    *v35 = -4096;
  for ( result = &v50; result != v29; result += 2 )
  {
    v44 = *result;
    if ( *result != -8192 && v44 != -4096 )
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v39 = v15;
        v40 = 3;
      }
      else
      {
        v45 = *(_DWORD *)(a1 + 16);
        if ( !v45 )
        {
          *(_QWORD *)&dword_0 = *result;
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
        v46 = 1;
        v47 = nullptr;
        if ( v43 != -4096 )
        {
          while ( 1 )
          {
            if ( v43 == -8192 && !v47 )
              v47 = v42;
            v41 = v40 & (v46 + v41);
            v42 = &v39[2 * v41];
            v43 = *v42;
            if ( v44 == *v42 )
              break;
            if ( v43 == -4096 )
            {
              if ( v47 )
                v42 = v47;
              break;
            }
            ++v46;
          }
        }
      }
      *v42 = v44;
      *((_WORD *)v42 + 4) = *((_WORD *)result + 4);
      *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
    }
  }
  return result;
}
