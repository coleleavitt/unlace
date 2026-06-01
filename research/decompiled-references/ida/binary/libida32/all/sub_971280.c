__int64 *__fastcall sub_971280(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  bool v16; // zf
  _QWORD *v17; // r12
  _QWORD *v18; // rdx
  __int64 v19; // r13
  _QWORD *i; // r13
  _QWORD *j; // r8
  __int64 v22; // r10
  int v23; // r9d
  unsigned int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // r11
  __int64 v27; // rcx
  int v28; // r9d
  __int64 *v29; // r12
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
  int v46; // r14d
  __int64 v47; // r15
  int v48; // r13d
  __int64 *v49; // r10
  __int64 v50; // [rsp+10h] [rbp-78h] BYREF
  int v51; // [rsp+18h] [rbp-70h]
  __int64 v52; // [rsp+20h] [rbp-68h] BYREF

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
        v14 = sub_220C370(v13, 8, v10, v9, a5, a6);
        *(_DWORD *)(a1 + 16) = v6;
        *(_QWORD *)(a1 + 8) = v14;
LABEL_8:
        v16 = (*(_QWORD *)a1 & 1LL) == 0;
        *(_QWORD *)a1 &= 1uLL;
        v17 = &v8[2 * v12];
        if ( v16 )
        {
          v19 = 2 * v6;
          v18 = (_QWORD *)v14;
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
              v28 = *(_DWORD *)(a1 + 16);
              if ( !v28 )
              {
                *(_QWORD *)&dword_0 = *j;
                BUG();
              }
              v23 = v28 - 1;
              v22 = v14;
            }
            v24 = v23 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
            v25 = v22 + 16LL * v24;
            v26 = *(_QWORD *)v25;
            if ( *(_QWORD *)v25 != v27 )
            {
              v46 = 1;
              v47 = 0;
              if ( v26 != -4096 )
              {
                while ( 1 )
                {
                  if ( v26 == -8192 && !v47 )
                    v47 = v25;
                  v24 = v23 & (v46 + v24);
                  v25 = v22 + 16LL * v24;
                  v26 = *(_QWORD *)v25;
                  if ( v27 == *(_QWORD *)v25 )
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
            *(_QWORD *)v25 = v27;
            *(_DWORD *)(v25 + 8) = *((_DWORD *)j + 2);
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
          }
        }
        return (__int64 *)operator delete();
      }
      v15 = (__int64 *)(a1 + 8);
      v10 = a1 + 72;
      LODWORD(v6) = 64;
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
    v51 = *((_DWORD *)v15 + 2);
  }
  if ( (__int64 *)v10 != v15 + 2 )
  {
    v30 = v15[2];
    if ( v30 != -4096 && v30 != -8192 )
    {
      *v29 = v30;
      v29 += 2;
      *((_DWORD *)v29 - 2) = *((_DWORD *)v15 + 6);
    }
    if ( (__int64 *)v10 != v15 + 4 )
    {
      v31 = v15[4];
      if ( v31 != -4096 && v31 != -8192 )
      {
        *v29 = v31;
        v29 += 2;
        *((_DWORD *)v29 - 2) = *((_DWORD *)v15 + 10);
      }
      if ( (__int64 *)v10 != v15 + 6 )
      {
        v32 = v15[6];
        if ( v32 != -4096 && v32 != -8192 )
        {
          *v29 = v32;
          v29 += 2;
          *((_DWORD *)v29 - 2) = *((_DWORD *)v15 + 14);
        }
        if ( (__int64 *)v10 != v15 + 8 )
        {
          v33 = v15[8];
          if ( v33 != -4096 && v33 != -8192 )
          {
            *v29 = v33;
            v29 += 2;
            *((_DWORD *)v29 - 2) = *((_DWORD *)v15 + 18);
          }
        }
      }
    }
  }
  if ( (unsigned int)v6 > 4 )
  {
    *(_BYTE *)a1 &= ~1u;
    v34 = sub_220C370(16LL * (unsigned int)v6, 8, v10, v9, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v34;
    v8 = (_QWORD *)v34;
  }
  v16 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v16 )
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

