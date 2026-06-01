_QWORD *__fastcall sub_209C510(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 *v10; // r13
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // rbx
  __int64 *v18; // r12
  __int64 v19; // rdx
  __int64 *i; // rbx
  __int64 *j; // rbx
  __int64 *v23; // rbp
  _QWORD *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD v34[2]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+10h] [rbp-A8h] BYREF

  LODWORD(v7) = a2;
  v8 = *(_BYTE *)a1 & 1;
  if ( a2 <= 8 )
  {
    v14 = (_QWORD *)(a1 + 8);
    v15 = (_QWORD *)(a1 + 136);
    if ( !(_BYTE)v8 )
    {
      v13 = *(__int64 **)(a1 + 8);
      v11 = *(unsigned int *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v7 = (unsigned int)v11;
      v10 = v13;
      goto LABEL_8;
    }
  }
  else
  {
    v9 = ((((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
          | (a2 - 1)
          | ((unsigned __int64)(a2 - 1) >> 1)
          | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 8)
        | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
        | (a2 - 1)
        | ((unsigned __int64)(a2 - 1) >> 1)
        | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)
        | (((((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
            | (a2 - 1)
            | ((unsigned __int64)(a2 - 1) >> 1)
            | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 8)
          | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
          | (a2 - 1)
          | ((unsigned __int64)(a2 - 1) >> 1)
          | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 16))
       + 1;
    v7 = (unsigned int)v9;
    if ( (unsigned int)v9 > 0x40 )
    {
      v14 = (_QWORD *)(a1 + 8);
      v15 = (_QWORD *)(a1 + 136);
      if ( !(_BYTE)v8 )
      {
        v10 = *(__int64 **)(a1 + 8);
        v11 = *(unsigned int *)(a1 + 16);
        v12 = 16LL * (unsigned int)v9;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !(_BYTE)v8 )
      {
        v10 = *(__int64 **)(a1 + 8);
        v11 = *(unsigned int *)(a1 + 16);
        v7 = 64;
        v12 = 1024;
LABEL_5:
        v13 = (__int64 *)sub_22300B0(v12, 8, v9, v8, a5, a6);
        *(_DWORD *)(a1 + 16) = v7;
        *(_QWORD *)(a1 + 8) = v13;
LABEL_8:
        v16 = 2 * v11;
        v17 = 2 * v7;
        v18 = &v10[v16];
        v19 = *(_QWORD *)a1 & 1LL;
        *(_QWORD *)a1 = v19;
        if ( v19 )
        {
          v13 = (__int64 *)(a1 + 8);
          v17 = 16;
        }
        for ( i = &v13[v17]; i != v13; v13 += 2 )
          *v13 = -4096;
        for ( j = v10; v18 != j; j += 2 )
        {
          if ( *j != -4096 && *j != -8192 )
          {
            sub_2096930(a1, j, v34);
            *(_QWORD *)v34[0] = *j;
            *(_QWORD *)(v34[0] + 8LL) = j[1];
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
          }
        }
        return (_QWORD *)operator delete(v10, v16 * 8, 8);
      }
      v14 = (_QWORD *)(a1 + 8);
      v15 = (_QWORD *)(a1 + 136);
      LODWORD(v7) = 64;
    }
  }
  if ( *v14 == -4096 || *v14 == -8192 )
  {
    v23 = v34;
  }
  else
  {
    v34[0] = *v14;
    v23 = &v35;
    v34[1] = v14[1];
  }
  v24 = v14 + 2;
  if ( v15 != v14 + 2 )
  {
    v25 = v14[2];
    if ( v25 != -4096 && v25 != -8192 )
    {
      *v23 = v25;
      v23 += 2;
      *(v23 - 1) = v14[3];
    }
    v24 = v14 + 4;
    if ( v15 != v14 + 4 )
    {
      v26 = v14[4];
      if ( v26 != -8192 && v26 != -4096 )
      {
        *v23 = v26;
        v23 += 2;
        *(v23 - 1) = v14[5];
      }
      v24 = v14 + 6;
      if ( v15 != v14 + 6 )
      {
        v27 = v14[6];
        if ( v27 != -8192 && v27 != -4096 )
        {
          *v23 = v27;
          v23 += 2;
          *(v23 - 1) = v14[7];
        }
        v24 = v14 + 8;
        if ( v15 != v14 + 8 )
        {
          v28 = v14[8];
          if ( v28 != -8192 && v28 != -4096 )
          {
            *v23 = v28;
            v23 += 2;
            *(v23 - 1) = v14[9];
          }
          v24 = v14 + 10;
          if ( v15 != v14 + 10 )
          {
            v29 = v14[10];
            if ( v29 != -8192 && v29 != -4096 )
            {
              *v23 = v29;
              v23 += 2;
              *(v23 - 1) = v14[11];
            }
            v24 = v14 + 12;
            if ( v15 != v14 + 12 )
            {
              v30 = v14[12];
              if ( v30 != -8192 && v30 != -4096 )
              {
                *v23 = v30;
                v23 += 2;
                *(v23 - 1) = v14[13];
              }
              v24 = v14 + 14;
              if ( v15 != v14 + 14 )
              {
                v31 = v14[14];
                if ( v31 != -8192 && v31 != -4096 )
                {
                  *v23 = v31;
                  v23 += 2;
                  *(v23 - 1) = v14[15];
                }
                v24 = v14 + 16;
                if ( v15 != v14 + 16 )
                {
                  v24 = (_QWORD *)v14[16];
                  if ( v24 != (_QWORD *)-4096LL && v24 != (_QWORD *)-8192LL )
                  {
                    v32 = v14[17];
                    *v23 = (__int64)v24;
                    v23 += 2;
                    *(v23 - 1) = v32;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( (unsigned int)v7 > 8 )
  {
    *(_BYTE *)a1 &= ~1u;
    v33 = sub_22300B0(16LL * (unsigned int)v7, 8, v24, v8, a5, a6);
    *(_DWORD *)(a1 + 16) = v7;
    *(_QWORD *)(a1 + 8) = v33;
  }
  return sub_209C340(a1, (__int64)v34, (__int64)v23);
}
