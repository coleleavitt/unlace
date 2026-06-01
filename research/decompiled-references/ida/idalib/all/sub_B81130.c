unsigned __int64 *__fastcall sub_B81130(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 *v11; // r12
  unsigned int v12; // r13d
  __int64 v13; // rdi
  unsigned __int64 *v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 *v18; // rdi
  unsigned __int64 *i; // rbp
  unsigned __int64 *j; // rax
  __int64 v21; // r10
  int v22; // r11d
  unsigned int v23; // r8d
  __int64 *v24; // rcx
  __int64 v25; // rbp
  unsigned __int64 v26; // rdx
  int v27; // ecx
  unsigned __int64 *result; // rax
  __int64 *v29; // r13
  __int64 *v30; // r12
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  bool v40; // zf
  _QWORD *v41; // rax
  __int64 v42; // rdx
  _QWORD *k; // rdx
  __int64 *v44; // rdi
  int v45; // r8d
  unsigned int v46; // esi
  __int64 *v47; // rdx
  __int64 v48; // r9
  unsigned __int64 v49; // rcx
  int v50; // edx
  int v51; // r13d
  __int64 *v52; // r14
  int v53; // r10d
  __int64 *v54; // r11
  __int64 v55; // [rsp+0h] [rbp-B8h] BYREF
  char v56; // [rsp+8h] [rbp-B0h]
  __int64 v57; // [rsp+10h] [rbp-A8h] BYREF

  LODWORD(v6) = a2;
  v8 = *(_BYTE *)a1 & 1;
  if ( a2 <= 8 )
  {
    if ( !(_BYTE)v8 )
    {
      v14 = *(unsigned __int64 **)(a1 + 8);
      v12 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v6 = v12;
      v11 = v14;
      goto LABEL_6;
    }
    v29 = (__int64 *)(a1 + 8);
    v9 = a1 + 136;
  }
  else
  {
    v9 = (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
         | (a2 - 1)
         | ((unsigned __int64)(a2 - 1) >> 1)
         | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 8)
       | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
       | (a2 - 1)
       | ((unsigned __int64)(a2 - 1) >> 1)
       | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4);
    v10 = (v9 | (v9 >> 16)) + 1;
    v6 = (unsigned int)v10;
    if ( (unsigned int)v10 > 0x40 )
    {
      v29 = (__int64 *)(a1 + 8);
      v9 = a1 + 136;
      if ( !(_BYTE)v8 )
      {
        v11 = *(unsigned __int64 **)(a1 + 8);
        v12 = *(_DWORD *)(a1 + 16);
        v13 = 16LL * (unsigned int)v10;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !(_BYTE)v8 )
      {
        v11 = *(unsigned __int64 **)(a1 + 8);
        v12 = *(_DWORD *)(a1 + 16);
        v6 = 64;
        v13 = 1024;
LABEL_5:
        v14 = (unsigned __int64 *)sub_22300B0(v13, 8, v9, v8, a5, a6);
        *(_DWORD *)(a1 + 16) = v6;
        *(_QWORD *)(a1 + 8) = v14;
LABEL_6:
        v15 = 2 * v6;
        v16 = 2LL * v12;
        v17 = *(_QWORD *)a1 & 1LL;
        v18 = &v11[v16];
        *(_QWORD *)a1 = v17;
        if ( v17 )
        {
          v14 = (unsigned __int64 *)(a1 + 8);
          v15 = 16;
        }
        for ( i = &v14[v15]; i != v14; v14 += 2 )
          *v14 = -1;
        for ( j = v11; v18 != j; j += 2 )
        {
          v26 = *j;
          if ( *j != -1 && v26 != -16 )
          {
            if ( (*(_BYTE *)a1 & 1) != 0 )
            {
              v21 = a1 + 8;
              v22 = 7;
            }
            else
            {
              v27 = *(_DWORD *)(a1 + 16);
              v21 = *(_QWORD *)(a1 + 8);
              if ( !v27 )
              {
                *(_QWORD *)&dword_0 = *j;
                BUG();
              }
              v22 = v27 - 1;
            }
            v23 = v22 & (v26 ^ (v26 >> 9));
            v24 = (__int64 *)(v21 + 16LL * v23);
            v25 = *v24;
            if ( *v24 != v26 )
            {
              v51 = 1;
              v52 = nullptr;
              if ( v25 != -1 )
              {
                while ( 1 )
                {
                  if ( v25 == -16 && !v52 )
                    v52 = v24;
                  v23 = v22 & (v51 + v23);
                  v24 = (__int64 *)(v21 + 16LL * v23);
                  v25 = *v24;
                  if ( v26 == *v24 )
                    break;
                  if ( v25 == -1 )
                  {
                    if ( v52 )
                      v24 = v52;
                    break;
                  }
                  ++v51;
                }
              }
            }
            *v24 = *j;
            *((_BYTE *)v24 + 8) = *((_BYTE *)j + 8);
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
          }
        }
        return (unsigned __int64 *)operator delete(v11, v16 * 8, 8);
      }
      v29 = (__int64 *)(a1 + 8);
      v9 = a1 + 136;
      LODWORD(v6) = 64;
    }
  }
  if ( *v29 == -1 || *v29 == -16 )
  {
    v30 = &v55;
  }
  else
  {
    v55 = *v29;
    v30 = &v57;
    v56 = *((_BYTE *)v29 + 8);
  }
  if ( (__int64 *)v9 != v29 + 2 )
  {
    v31 = v29[2];
    if ( v31 != -1 && v31 != -16 )
    {
      *v30 = v31;
      v30 += 2;
      *((_BYTE *)v30 - 8) = *((_BYTE *)v29 + 24);
    }
    if ( (__int64 *)v9 != v29 + 4 )
    {
      v32 = v29[4];
      if ( v32 != -1 && v32 != -16 )
      {
        *v30 = v32;
        v30 += 2;
        *((_BYTE *)v30 - 8) = *((_BYTE *)v29 + 40);
      }
      if ( (__int64 *)v9 != v29 + 6 )
      {
        v33 = v29[6];
        if ( v33 != -1 && v33 != -16 )
        {
          *v30 = v33;
          v30 += 2;
          *((_BYTE *)v30 - 8) = *((_BYTE *)v29 + 56);
        }
        if ( (__int64 *)v9 != v29 + 8 )
        {
          v34 = v29[8];
          if ( v34 != -1 && v34 != -16 )
          {
            *v30 = v34;
            v30 += 2;
            *((_BYTE *)v30 - 8) = *((_BYTE *)v29 + 72);
          }
          if ( (__int64 *)v9 != v29 + 10 )
          {
            v35 = v29[10];
            if ( v35 != -1 && v35 != -16 )
            {
              *v30 = v35;
              v30 += 2;
              *((_BYTE *)v30 - 8) = *((_BYTE *)v29 + 88);
            }
            if ( (__int64 *)v9 != v29 + 12 )
            {
              v36 = v29[12];
              if ( v36 != -1 && v36 != -16 )
              {
                *v30 = v36;
                v30 += 2;
                *((_BYTE *)v30 - 8) = *((_BYTE *)v29 + 104);
              }
              if ( (__int64 *)v9 != v29 + 14 )
              {
                v37 = v29[14];
                if ( v37 != -1 && v37 != -16 )
                {
                  *v30 = v37;
                  v30 += 2;
                  *((_BYTE *)v30 - 8) = *((_BYTE *)v29 + 120);
                }
                if ( (__int64 *)v9 != v29 + 16 )
                {
                  v38 = v29[16];
                  if ( v38 != -1 && v38 != -16 )
                  {
                    *v30 = v38;
                    v30 += 2;
                    *((_BYTE *)v30 - 8) = *((_BYTE *)v29 + 136);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( (unsigned int)v6 > 8 )
  {
    *(_BYTE *)a1 &= ~1u;
    v39 = sub_22300B0(16LL * (unsigned int)v6, 8, v9, v8, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v39;
  }
  v40 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v40 )
  {
    v41 = *(_QWORD **)(a1 + 8);
    v42 = 2LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v41 = v29;
    v42 = 16;
  }
  for ( k = &v41[v42]; k != v41; v41 += 2 )
    *v41 = -1;
  result = (unsigned __int64 *)&v55;
  if ( v30 != &v55 )
  {
    do
    {
      v49 = *result;
      if ( *result != -1 && v49 != -16 )
      {
        if ( (*(_BYTE *)a1 & 1) != 0 )
        {
          v44 = v29;
          v45 = 7;
        }
        else
        {
          v50 = *(_DWORD *)(a1 + 16);
          v44 = *(__int64 **)(a1 + 8);
          if ( !v50 )
          {
            *(_QWORD *)&dword_0 = *result;
            BUG();
          }
          v45 = v50 - 1;
        }
        v46 = v45 & (v49 ^ (v49 >> 9));
        v47 = &v44[2 * v46];
        v48 = *v47;
        if ( v49 != *v47 )
        {
          v53 = 1;
          v54 = nullptr;
          if ( v48 != -1 )
          {
            while ( 1 )
            {
              if ( v48 == -16 && !v54 )
                v54 = v47;
              v46 = v45 & (v53 + v46);
              v47 = &v44[2 * v46];
              v48 = *v47;
              if ( v49 == *v47 )
                break;
              if ( v48 == -1 )
              {
                if ( v54 )
                  v47 = v54;
                break;
              }
              ++v53;
            }
          }
        }
        *v47 = *result;
        *((_BYTE *)v47 + 8) = *((_BYTE *)result + 8);
        *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
      }
      result += 2;
    }
    while ( result != (unsigned __int64 *)v30 );
  }
  return result;
}
