unsigned __int64 *__fastcall sub_B5D3F0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 v16; // rdx
  unsigned __int64 *v17; // rdi
  unsigned __int64 *i; // rbp
  unsigned __int64 *j; // rax
  __int64 v20; // r10
  int v21; // r11d
  unsigned int v22; // r8d
  __int64 *v23; // rcx
  __int64 v24; // rbp
  unsigned __int64 v25; // rdx
  int v26; // ecx
  unsigned __int64 *result; // rax
  __int64 *v28; // r13
  __int64 *v29; // r12
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  bool v39; // zf
  _QWORD *v40; // rax
  __int64 v41; // rdx
  _QWORD *k; // rdx
  __int64 *v43; // rdi
  int v44; // r8d
  unsigned int v45; // esi
  __int64 *v46; // rdx
  __int64 v47; // r9
  unsigned __int64 v48; // rcx
  int v49; // edx
  int v50; // r13d
  __int64 *v51; // r14
  int v52; // r10d
  __int64 *v53; // r11
  __int64 v54; // [rsp+0h] [rbp-B8h] BYREF
  char v55; // [rsp+8h] [rbp-B0h]
  __int64 v56; // [rsp+10h] [rbp-A8h] BYREF

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
    v28 = (__int64 *)(a1 + 8);
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
      v28 = (__int64 *)(a1 + 8);
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
        v14 = (unsigned __int64 *)sub_220C370(v13, 8, v9, v8, a5, a6);
        *(_DWORD *)(a1 + 16) = v6;
        *(_QWORD *)(a1 + 8) = v14;
LABEL_6:
        v15 = 2 * v6;
        v16 = *(_QWORD *)a1 & 1LL;
        v17 = &v11[2 * v12];
        *(_QWORD *)a1 = v16;
        if ( v16 )
        {
          v14 = (unsigned __int64 *)(a1 + 8);
          v15 = 16;
        }
        for ( i = &v14[v15]; i != v14; v14 += 2 )
          *v14 = -1;
        for ( j = v11; v17 != j; j += 2 )
        {
          v25 = *j;
          if ( *j != -1 && v25 != -16 )
          {
            if ( (*(_BYTE *)a1 & 1) != 0 )
            {
              v20 = a1 + 8;
              v21 = 7;
            }
            else
            {
              v26 = *(_DWORD *)(a1 + 16);
              v20 = *(_QWORD *)(a1 + 8);
              if ( !v26 )
              {
                *(_QWORD *)&dword_0 = *j;
                BUG();
              }
              v21 = v26 - 1;
            }
            v22 = v21 & (v25 ^ (v25 >> 9));
            v23 = (__int64 *)(v20 + 16LL * v22);
            v24 = *v23;
            if ( *v23 != v25 )
            {
              v50 = 1;
              v51 = nullptr;
              if ( v24 != -1 )
              {
                while ( 1 )
                {
                  if ( v24 == -16 && !v51 )
                    v51 = v23;
                  v22 = v21 & (v50 + v22);
                  v23 = (__int64 *)(v20 + 16LL * v22);
                  v24 = *v23;
                  if ( v25 == *v23 )
                    break;
                  if ( v24 == -1 )
                  {
                    if ( v51 )
                      v23 = v51;
                    break;
                  }
                  ++v50;
                }
              }
            }
            *v23 = *j;
            *((_BYTE *)v23 + 8) = *((_BYTE *)j + 8);
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
          }
        }
        return (unsigned __int64 *)operator delete();
      }
      v28 = (__int64 *)(a1 + 8);
      v9 = a1 + 136;
      LODWORD(v6) = 64;
    }
  }
  if ( *v28 == -1 || *v28 == -16 )
  {
    v29 = &v54;
  }
  else
  {
    v54 = *v28;
    v29 = &v56;
    v55 = *((_BYTE *)v28 + 8);
  }
  if ( (__int64 *)v9 != v28 + 2 )
  {
    v30 = v28[2];
    if ( v30 != -1 && v30 != -16 )
    {
      *v29 = v30;
      v29 += 2;
      *((_BYTE *)v29 - 8) = *((_BYTE *)v28 + 24);
    }
    if ( (__int64 *)v9 != v28 + 4 )
    {
      v31 = v28[4];
      if ( v31 != -1 && v31 != -16 )
      {
        *v29 = v31;
        v29 += 2;
        *((_BYTE *)v29 - 8) = *((_BYTE *)v28 + 40);
      }
      if ( (__int64 *)v9 != v28 + 6 )
      {
        v32 = v28[6];
        if ( v32 != -1 && v32 != -16 )
        {
          *v29 = v32;
          v29 += 2;
          *((_BYTE *)v29 - 8) = *((_BYTE *)v28 + 56);
        }
        if ( (__int64 *)v9 != v28 + 8 )
        {
          v33 = v28[8];
          if ( v33 != -1 && v33 != -16 )
          {
            *v29 = v33;
            v29 += 2;
            *((_BYTE *)v29 - 8) = *((_BYTE *)v28 + 72);
          }
          if ( (__int64 *)v9 != v28 + 10 )
          {
            v34 = v28[10];
            if ( v34 != -1 && v34 != -16 )
            {
              *v29 = v34;
              v29 += 2;
              *((_BYTE *)v29 - 8) = *((_BYTE *)v28 + 88);
            }
            if ( (__int64 *)v9 != v28 + 12 )
            {
              v35 = v28[12];
              if ( v35 != -1 && v35 != -16 )
              {
                *v29 = v35;
                v29 += 2;
                *((_BYTE *)v29 - 8) = *((_BYTE *)v28 + 104);
              }
              if ( (__int64 *)v9 != v28 + 14 )
              {
                v36 = v28[14];
                if ( v36 != -1 && v36 != -16 )
                {
                  *v29 = v36;
                  v29 += 2;
                  *((_BYTE *)v29 - 8) = *((_BYTE *)v28 + 120);
                }
                if ( (__int64 *)v9 != v28 + 16 )
                {
                  v37 = v28[16];
                  if ( v37 != -1 && v37 != -16 )
                  {
                    *v29 = v37;
                    v29 += 2;
                    *((_BYTE *)v29 - 8) = *((_BYTE *)v28 + 136);
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
    v38 = sub_220C370(16LL * (unsigned int)v6, 8, v9, v8, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v38;
  }
  v39 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v39 )
  {
    v40 = *(_QWORD **)(a1 + 8);
    v41 = 2LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v40 = v28;
    v41 = 16;
  }
  for ( k = &v40[v41]; k != v40; v40 += 2 )
    *v40 = -1;
  result = (unsigned __int64 *)&v54;
  if ( v29 != &v54 )
  {
    do
    {
      v48 = *result;
      if ( *result != -1 && v48 != -16 )
      {
        if ( (*(_BYTE *)a1 & 1) != 0 )
        {
          v43 = v28;
          v44 = 7;
        }
        else
        {
          v49 = *(_DWORD *)(a1 + 16);
          v43 = *(__int64 **)(a1 + 8);
          if ( !v49 )
          {
            *(_QWORD *)&dword_0 = *result;
            BUG();
          }
          v44 = v49 - 1;
        }
        v45 = v44 & (v48 ^ (v48 >> 9));
        v46 = &v43[2 * v45];
        v47 = *v46;
        if ( v48 != *v46 )
        {
          v52 = 1;
          v53 = nullptr;
          if ( v47 != -1 )
          {
            while ( 1 )
            {
              if ( v47 == -16 && !v53 )
                v53 = v46;
              v45 = v44 & (v52 + v45);
              v46 = &v43[2 * v45];
              v47 = *v46;
              if ( v48 == *v46 )
                break;
              if ( v47 == -1 )
              {
                if ( v53 )
                  v46 = v53;
                break;
              }
              ++v52;
            }
          }
        }
        *v46 = *result;
        *((_BYTE *)v46 + 8) = *((_BYTE *)result + 8);
        *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
      }
      result += 2;
    }
    while ( result != (unsigned __int64 *)v29 );
  }
  return result;
}

