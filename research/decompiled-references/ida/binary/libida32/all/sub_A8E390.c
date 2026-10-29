__int64 *__fastcall sub_A8E390(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebp
  __int64 *v8; // r12
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // r13d
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 *v15; // r14
  bool v16; // zf
  __int64 *v17; // r13
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  _QWORD *i; // rcx
  __int64 *j; // r8
  __int64 v22; // r9
  int v23; // r10d
  unsigned int v24; // edi
  _QWORD *v25; // rdx
  __int64 v26; // r11
  __int64 v27; // rcx
  __int64 *v28; // r13
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 *k; // rdx
  __int64 *result; // rax
  __int64 *v38; // r8
  int v39; // edi
  unsigned int v40; // esi
  __int64 *v41; // rcx
  __int64 v42; // r9
  __int64 v43; // rdx
  int v44; // edi
  int v45; // ebp
  __int64 *v46; // r10
  _QWORD *v47; // [rsp+8h] [rbp-90h]
  int v48; // [rsp+14h] [rbp-84h]
  _QWORD v49[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v50; // [rsp+30h] [rbp-68h] BYREF

  v6 = a2;
  v8 = *(__int64 **)(a1 + 8);
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
        v14 = sub_220C370(v13, 8, v10, v9, a5, a6);
        *(_DWORD *)(a1 + 16) = v6;
        *(_QWORD *)(a1 + 8) = v14;
LABEL_8:
        v16 = (*(_QWORD *)a1 & 1LL) == 0;
        *(_QWORD *)a1 &= 1uLL;
        v17 = &v8[2 * v12];
        if ( v16 )
        {
          v18 = (_QWORD *)v14;
          v19 = 2LL * v6;
        }
        else
        {
          v18 = (_QWORD *)(a1 + 8);
          v19 = 8;
        }
        for ( i = &v18[v19]; i != v18; v18 += 2 )
          *v18 = -4096;
        for ( j = v8; v17 != j; j += 2 )
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
              if ( !v6 )
              {
                *(_QWORD *)&dword_0 = *j;
                BUG();
              }
              v23 = v6 - 1;
              v22 = v14;
            }
            v24 = v23 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
            v25 = (_QWORD *)(v22 + 16LL * v24);
            v26 = *v25;
            if ( *v25 != v27 && v26 != -4096 )
            {
              v48 = 1;
              v47 = nullptr;
              while ( 1 )
              {
                if ( v26 == -8192 )
                {
                  if ( v47 )
                    v25 = v47;
                  v47 = v25;
                }
                v24 = v23 & (v48 + v24);
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
                ++v48;
              }
            }
            *v25 = v27;
            v25[1] = j[1];
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
          }
        }
        return (__int64 *)operator delete();
      }
      v15 = (__int64 *)(a1 + 8);
      v10 = a1 + 72;
      v6 = 64;
    }
  }
  if ( *v15 == -4096 || *v15 == -8192 )
  {
    v28 = v49;
  }
  else
  {
    v49[0] = *v15;
    v28 = &v50;
    v49[1] = v15[1];
  }
  if ( (__int64 *)v10 != v15 + 2 )
  {
    v29 = v15[2];
    if ( v29 != -4096 && v29 != -8192 )
    {
      *v28 = v29;
      v28 += 2;
      *(v28 - 1) = v15[3];
    }
    if ( (__int64 *)v10 != v15 + 4 )
    {
      v30 = v15[4];
      if ( v30 != -4096 && v30 != -8192 )
      {
        *v28 = v30;
        v28 += 2;
        *(v28 - 1) = v15[5];
      }
      if ( (__int64 *)v10 != v15 + 6 )
      {
        v31 = v15[6];
        if ( v31 != -4096 && v31 != -8192 )
        {
          *v28 = v31;
          v28 += 2;
          *(v28 - 1) = v15[7];
        }
        if ( (__int64 *)v10 != v15 + 8 )
        {
          v32 = v15[8];
          if ( v32 != -4096 && v32 != -8192 )
          {
            *v28 = v32;
            v28 += 2;
            *(v28 - 1) = v15[9];
          }
        }
      }
    }
  }
  if ( v6 > 4 )
  {
    *(_BYTE *)a1 &= ~1u;
    v33 = sub_220C370(16LL * v6, 8, v10, v9, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v33;
    v8 = (__int64 *)v33;
  }
  v16 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v16 )
  {
    v34 = v8;
    v35 = 2LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v34 = v15;
    v35 = 8;
  }
  for ( k = &v34[v35]; k != v34; v34 += 2 )
    *v34 = -4096;
  for ( result = v49; result != v28; result += 2 )
  {
    v43 = *result;
    if ( *result != -8192 && v43 != -4096 )
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v38 = v15;
        v39 = 3;
      }
      else
      {
        v44 = *(_DWORD *)(a1 + 16);
        if ( !v44 )
        {
          *(_QWORD *)&dword_0 = *result;
          BUG();
        }
        v39 = v44 - 1;
        v38 = v8;
      }
      v40 = v39 & (((unsigned int)v43 >> 9) ^ ((unsigned int)v43 >> 4));
      v41 = &v38[2 * v40];
      v42 = *v41;
      if ( v43 != *v41 )
      {
        v45 = 1;
        v46 = nullptr;
        if ( v42 != -4096 )
        {
          while ( 1 )
          {
            if ( v42 == -8192 && !v46 )
              v46 = v41;
            v40 = v39 & (v45 + v40);
            v41 = &v38[2 * v40];
            v42 = *v41;
            if ( v43 == *v41 )
              break;
            if ( v42 == -4096 )
            {
              if ( v46 )
                v41 = v46;
              break;
            }
            ++v45;
          }
        }
      }
      *v41 = v43;
      v41[1] = result[1];
      *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
    }
  }
  return result;
}

