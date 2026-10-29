__int64 *__fastcall sub_1B019E0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 v16; // rsi
  bool v17; // zf
  __int64 *v18; // r9
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  _QWORD *i; // rcx
  __int64 *j; // rcx
  __int64 v23; // r10
  int v24; // r11d
  unsigned int v25; // r8d
  _QWORD *v26; // rdi
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 *v29; // r13
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 *v39; // rax
  __int64 v40; // rdx
  __int64 *k; // rdx
  __int64 *result; // rax
  __int64 *v43; // r8
  int v44; // edi
  unsigned int v45; // esi
  __int64 *v46; // rcx
  __int64 v47; // r9
  int v48; // edi
  int v49; // ebp
  __int64 *v50; // r10
  _QWORD *v51; // [rsp+8h] [rbp-D0h]
  int v52; // [rsp+14h] [rbp-C4h]
  _QWORD v53[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+30h] [rbp-A8h] BYREF

  v6 = a2;
  v8 = *(__int64 **)(a1 + 8);
  v9 = *(_BYTE *)a1 & 1;
  if ( a2 <= 8 )
  {
    v15 = (__int64 *)(a1 + 8);
    v10 = a1 + 136;
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
      v10 = a1 + 136;
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
          v20 = 16;
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
              v24 = 7;
            }
            else
            {
              if ( !v6 )
                goto LABEL_106;
              v24 = v6 - 1;
              v23 = v14;
            }
            v25 = v24 & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
            v26 = (_QWORD *)(v23 + 16LL * v25);
            v27 = *v26;
            if ( *v26 != v28 && v27 != -4096 )
            {
              v52 = 1;
              v51 = nullptr;
              while ( 1 )
              {
                if ( v27 == -8192 )
                {
                  if ( v51 )
                    v26 = v51;
                  v51 = v26;
                }
                v25 = v24 & (v52 + v25);
                v26 = (_QWORD *)(v23 + 16LL * v25);
                v27 = *v26;
                if ( v28 == *v26 )
                  break;
                if ( v27 == -4096 )
                {
                  if ( v51 )
                    v26 = v51;
                  break;
                }
                ++v52;
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
      v10 = a1 + 136;
      v6 = 64;
    }
  }
  if ( *v15 == -4096 || *v15 == -8192 )
  {
    v29 = v53;
  }
  else
  {
    v53[0] = *v15;
    v29 = &v54;
    v53[1] = v15[1];
  }
  if ( (__int64 *)v10 != v15 + 2 )
  {
    v30 = v15[2];
    if ( v30 != -4096 && v30 != -8192 )
    {
      *v29 = v30;
      v29 += 2;
      *(v29 - 1) = v15[3];
    }
    if ( (__int64 *)v10 != v15 + 4 )
    {
      v31 = v15[4];
      if ( v31 != -4096 && v31 != -8192 )
      {
        *v29 = v31;
        v29 += 2;
        *(v29 - 1) = v15[5];
      }
      if ( (__int64 *)v10 != v15 + 6 )
      {
        v32 = v15[6];
        if ( v32 != -4096 && v32 != -8192 )
        {
          *v29 = v32;
          v29 += 2;
          *(v29 - 1) = v15[7];
        }
        if ( (__int64 *)v10 != v15 + 8 )
        {
          v33 = v15[8];
          if ( v33 != -4096 && v33 != -8192 )
          {
            *v29 = v33;
            v29 += 2;
            *(v29 - 1) = v15[9];
          }
          if ( (__int64 *)v10 != v15 + 10 )
          {
            v34 = v15[10];
            if ( v34 != -4096 && v34 != -8192 )
            {
              *v29 = v34;
              v29 += 2;
              *(v29 - 1) = v15[11];
            }
            if ( (__int64 *)v10 != v15 + 12 )
            {
              v35 = v15[12];
              if ( v35 != -4096 && v35 != -8192 )
              {
                *v29 = v35;
                v29 += 2;
                *(v29 - 1) = v15[13];
              }
              if ( (__int64 *)v10 != v15 + 14 )
              {
                v36 = v15[14];
                if ( v36 != -4096 && v36 != -8192 )
                {
                  *v29 = v36;
                  v29 += 2;
                  *(v29 - 1) = v15[15];
                }
                if ( (__int64 *)v10 != v15 + 16 )
                {
                  v37 = v15[16];
                  if ( v37 != -4096 && v37 != -8192 )
                  {
                    *v29 = v37;
                    v29 += 2;
                    *(v29 - 1) = v15[17];
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v6 > 8 )
  {
    *(_BYTE *)a1 &= ~1u;
    v38 = sub_22300B0(16LL * v6, 8, v10, v9, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v38;
    v8 = (__int64 *)v38;
  }
  v17 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v17 )
  {
    v39 = v8;
    v40 = 2LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v39 = v15;
    v40 = 16;
  }
  for ( k = &v39[v40]; k != v39; v39 += 2 )
    *v39 = -4096;
  for ( result = v53; result != v29; result += 2 )
  {
    v28 = *result;
    if ( *result != -8192 && v28 != -4096 )
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v43 = v15;
        v44 = 7;
      }
      else
      {
        v48 = *(_DWORD *)(a1 + 16);
        if ( !v48 )
        {
LABEL_106:
          *(_QWORD *)&dword_0 = v28;
          BUG();
        }
        v44 = v48 - 1;
        v43 = v8;
      }
      v45 = v44 & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
      v46 = &v43[2 * v45];
      v47 = *v46;
      if ( v28 != *v46 )
      {
        v49 = 1;
        v50 = nullptr;
        if ( v47 != -4096 )
        {
          while ( 1 )
          {
            if ( v47 == -8192 && !v50 )
              v50 = v46;
            v45 = v44 & (v49 + v45);
            v46 = &v43[2 * v45];
            v47 = *v46;
            if ( v28 == *v46 )
              break;
            if ( v47 == -4096 )
            {
              if ( v50 )
                v46 = v50;
              break;
            }
            ++v49;
          }
        }
      }
      *v46 = v28;
      v46[1] = result[1];
      *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
    }
  }
  return result;
}
