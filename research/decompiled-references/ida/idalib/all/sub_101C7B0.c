__int64 __fastcall sub_101C7B0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r13
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  int *v11; // r12
  __int64 v12; // rbp
  __int64 v13; // rdi
  int *v14; // rax
  __int64 v15; // rbp
  __int64 v16; // r13
  int *v17; // r15
  __int64 v18; // rdx
  int *i; // rdx
  int *j; // rbx
  int *v21; // rsi
  __int64 v22; // rax
  __int64 result; // rax
  __int64 v24; // rbx
  __int64 *v25; // rbp
  __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  __int64 v43; // rax
  bool v44; // zf
  __int64 v45; // rax
  __int64 *v46; // rbx
  _DWORD *v47; // rax
  _DWORD *v48; // [rsp+8h] [rbp-140h] BYREF
  _BYTE v49[12]; // [rsp+10h] [rbp-138h] BYREF
  int v50; // [rsp+1Ch] [rbp-12Ch]
  __int64 v51; // [rsp+20h] [rbp-128h] BYREF

  LODWORD(v7) = a2;
  v8 = *(_BYTE *)a1 & 1;
  if ( a2 <= 0x10 )
  {
    if ( !(_BYTE)v8 )
    {
      v14 = *(int **)(a1 + 8);
      v12 = *(unsigned int *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v7 = (unsigned int)v12;
      v11 = v14;
      goto LABEL_6;
    }
    v24 = a1 + 8;
    v9 = a1 + 264;
    goto LABEL_20;
  }
  v9 = (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
       | (a2 - 1)
       | ((unsigned __int64)(a2 - 1) >> 1)
       | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 8)
     | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
     | (a2 - 1)
     | ((unsigned __int64)(a2 - 1) >> 1)
     | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4);
  v10 = (v9 | (v9 >> 16)) + 1;
  v7 = (unsigned int)v10;
  if ( (unsigned int)v10 > 0x40 )
  {
    v24 = a1 + 8;
    v9 = a1 + 264;
    if ( !(_BYTE)v8 )
    {
      v11 = *(int **)(a1 + 8);
      v12 = *(unsigned int *)(a1 + 16);
      v13 = 16LL * (unsigned int)v10;
      goto LABEL_5;
    }
LABEL_20:
    v25 = (__int64 *)v49;
    v26 = (unsigned int)(*(_DWORD *)v24 + 1);
    if ( (unsigned int)v26 > 1 )
    {
      *(_DWORD *)v49 = *(_DWORD *)v24;
      v25 = &v51;
      *(_QWORD *)&v49[4] = *(_QWORD *)(v24 + 4);
      v50 = *(_DWORD *)(v24 + 12);
    }
    if ( v9 != v24 + 16 )
    {
      v27 = *(_DWORD *)(v24 + 16);
      v26 = (unsigned int)(v27 + 1);
      if ( (unsigned int)v26 > 1 )
      {
        *(_DWORD *)v25 = v27;
        v25 += 2;
        *(__int64 *)((char *)v25 - 12) = *(_QWORD *)(v24 + 20);
        *((_DWORD *)v25 - 1) = *(_DWORD *)(v24 + 28);
      }
      if ( v9 != v24 + 32 )
      {
        v28 = *(_DWORD *)(v24 + 32);
        v26 = (unsigned int)(v28 + 1);
        if ( (unsigned int)v26 > 1 )
        {
          *(_DWORD *)v25 = v28;
          v25 += 2;
          *(__int64 *)((char *)v25 - 12) = *(_QWORD *)(v24 + 36);
          *((_DWORD *)v25 - 1) = *(_DWORD *)(v24 + 44);
        }
        if ( v9 != v24 + 48 )
        {
          v29 = *(_DWORD *)(v24 + 48);
          v26 = (unsigned int)(v29 + 1);
          if ( (unsigned int)v26 > 1 )
          {
            *(_DWORD *)v25 = v29;
            v25 += 2;
            *(__int64 *)((char *)v25 - 12) = *(_QWORD *)(v24 + 52);
            *((_DWORD *)v25 - 1) = *(_DWORD *)(v24 + 60);
          }
          if ( v9 != v24 + 64 )
          {
            v30 = *(_DWORD *)(v24 + 64);
            v26 = (unsigned int)(v30 + 1);
            if ( (unsigned int)v26 > 1 )
            {
              *(_DWORD *)v25 = v30;
              v25 += 2;
              *(__int64 *)((char *)v25 - 12) = *(_QWORD *)(v24 + 68);
              *((_DWORD *)v25 - 1) = *(_DWORD *)(v24 + 76);
            }
            if ( v9 != v24 + 80 )
            {
              v31 = *(_DWORD *)(v24 + 80);
              v26 = (unsigned int)(v31 + 1);
              if ( (unsigned int)v26 > 1 )
              {
                *(_DWORD *)v25 = v31;
                v25 += 2;
                *(__int64 *)((char *)v25 - 12) = *(_QWORD *)(v24 + 84);
                *((_DWORD *)v25 - 1) = *(_DWORD *)(v24 + 92);
              }
              if ( v9 != v24 + 96 )
              {
                v32 = *(_DWORD *)(v24 + 96);
                v26 = (unsigned int)(v32 + 1);
                if ( (unsigned int)v26 > 1 )
                {
                  *(_DWORD *)v25 = v32;
                  v25 += 2;
                  *(__int64 *)((char *)v25 - 12) = *(_QWORD *)(v24 + 100);
                  *((_DWORD *)v25 - 1) = *(_DWORD *)(v24 + 108);
                }
                if ( v9 != v24 + 112 )
                {
                  v33 = *(_DWORD *)(v24 + 112);
                  v26 = (unsigned int)(v33 + 1);
                  if ( (unsigned int)v26 > 1 )
                  {
                    *(_DWORD *)v25 = v33;
                    v25 += 2;
                    *(__int64 *)((char *)v25 - 12) = *(_QWORD *)(v24 + 116);
                    *((_DWORD *)v25 - 1) = *(_DWORD *)(v24 + 124);
                  }
                  if ( v9 != v24 + 128 )
                  {
                    v34 = *(_DWORD *)(v24 + 128);
                    v26 = (unsigned int)(v34 + 1);
                    if ( (unsigned int)v26 > 1 )
                    {
                      *(_DWORD *)v25 = v34;
                      v25 += 2;
                      *(__int64 *)((char *)v25 - 12) = *(_QWORD *)(v24 + 132);
                      *((_DWORD *)v25 - 1) = *(_DWORD *)(v24 + 140);
                    }
                    if ( v9 != v24 + 144 )
                    {
                      v35 = *(_DWORD *)(v24 + 144);
                      v26 = (unsigned int)(v35 + 1);
                      if ( (unsigned int)v26 > 1 )
                      {
                        *(_DWORD *)v25 = v35;
                        v25 += 2;
                        *(__int64 *)((char *)v25 - 12) = *(_QWORD *)(v24 + 148);
                        *((_DWORD *)v25 - 1) = *(_DWORD *)(v24 + 156);
                      }
                      if ( v9 != v24 + 160 )
                      {
                        v36 = *(_DWORD *)(v24 + 160);
                        v26 = (unsigned int)(v36 + 1);
                        if ( (unsigned int)v26 > 1 )
                        {
                          *(_DWORD *)v25 = v36;
                          v25 += 2;
                          *(__int64 *)((char *)v25 - 12) = *(_QWORD *)(v24 + 164);
                          *((_DWORD *)v25 - 1) = *(_DWORD *)(v24 + 172);
                        }
                        if ( v9 != v24 + 176 )
                        {
                          v37 = *(_DWORD *)(v24 + 176);
                          v26 = (unsigned int)(v37 + 1);
                          if ( (unsigned int)v26 > 1 )
                          {
                            *(_DWORD *)v25 = v37;
                            v25 += 2;
                            *(__int64 *)((char *)v25 - 12) = *(_QWORD *)(v24 + 180);
                            *((_DWORD *)v25 - 1) = *(_DWORD *)(v24 + 188);
                          }
                          if ( v9 != v24 + 192 )
                          {
                            v38 = *(_DWORD *)(v24 + 192);
                            v26 = (unsigned int)(v38 + 1);
                            if ( (unsigned int)v26 > 1 )
                            {
                              *(_DWORD *)v25 = v38;
                              v25 += 2;
                              *(__int64 *)((char *)v25 - 12) = *(_QWORD *)(v24 + 196);
                              *((_DWORD *)v25 - 1) = *(_DWORD *)(v24 + 204);
                            }
                            if ( v9 != v24 + 208 )
                            {
                              v39 = *(_DWORD *)(v24 + 208);
                              v26 = (unsigned int)(v39 + 1);
                              if ( (unsigned int)v26 > 1 )
                              {
                                *(_DWORD *)v25 = v39;
                                v25 += 2;
                                *(__int64 *)((char *)v25 - 12) = *(_QWORD *)(v24 + 212);
                                *((_DWORD *)v25 - 1) = *(_DWORD *)(v24 + 220);
                              }
                              if ( v9 != v24 + 224 )
                              {
                                v40 = *(_DWORD *)(v24 + 224);
                                v26 = (unsigned int)(v40 + 1);
                                if ( (unsigned int)v26 > 1 )
                                {
                                  *(_DWORD *)v25 = v40;
                                  v25 += 2;
                                  *(__int64 *)((char *)v25 - 12) = *(_QWORD *)(v24 + 228);
                                  *((_DWORD *)v25 - 1) = *(_DWORD *)(v24 + 236);
                                }
                                if ( v9 != v24 + 240 )
                                {
                                  v41 = *(_DWORD *)(v24 + 240);
                                  v26 = (unsigned int)(v41 + 1);
                                  if ( (unsigned int)v26 > 1 )
                                  {
                                    *(_DWORD *)v25 = v41;
                                    v25 += 2;
                                    *(__int64 *)((char *)v25 - 12) = *(_QWORD *)(v24 + 244);
                                    *((_DWORD *)v25 - 1) = *(_DWORD *)(v24 + 252);
                                  }
                                  if ( v9 != v24 + 256 )
                                  {
                                    v42 = *(_DWORD *)(v24 + 256);
                                    v9 = (unsigned int)(v42 + 1);
                                    if ( (unsigned int)v9 > 1 )
                                    {
                                      *(_DWORD *)v25 = v42;
                                      v25 += 2;
                                      *(__int64 *)((char *)v25 - 12) = *(_QWORD *)(v24 + 260);
                                      *((_DWORD *)v25 - 1) = *(_DWORD *)(v24 + 268);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( (unsigned int)v7 > 0x10 )
    {
      *(_BYTE *)a1 &= ~1u;
      v43 = sub_22300B0(16LL * (unsigned int)v7, 4, v9, v26, a5, a6);
      *(_DWORD *)(a1 + 16) = v7;
      *(_QWORD *)(a1 + 8) = v43;
    }
    v44 = (*(_QWORD *)a1 & 1LL) == 0;
    *(_QWORD *)a1 &= 1uLL;
    v45 = 256;
    if ( v44 )
    {
      v24 = *(_QWORD *)(a1 + 8);
      v45 = 16LL * *(unsigned int *)(a1 + 16);
    }
    for ( result = v24 + v45; result != v24; v24 += 16 )
      *(_DWORD *)v24 = 0;
    v46 = (__int64 *)v49;
    if ( v25 != (__int64 *)v49 )
    {
      do
      {
        result = (unsigned int)(*(_DWORD *)v46 + 1);
        if ( (unsigned int)result > 1 )
        {
          sub_101BDF0(a1, (int *)v46, &v48);
          v47 = v48;
          *v48 = *(_DWORD *)v46;
          *(_QWORD *)(v47 + 1) = *(__int64 *)((char *)v46 + 4);
          v47[3] = *((_DWORD *)v46 + 3);
          result = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1u;
          *(_DWORD *)a1 = result;
        }
        v46 += 2;
      }
      while ( v46 != v25 );
    }
    return result;
  }
  if ( (_BYTE)v8 )
  {
    v24 = a1 + 8;
    v9 = a1 + 264;
    LODWORD(v7) = 64;
    goto LABEL_20;
  }
  v11 = *(int **)(a1 + 8);
  v12 = *(unsigned int *)(a1 + 16);
  v7 = 64;
  v13 = 1024;
LABEL_5:
  v14 = (int *)sub_22300B0(v13, 4, v9, v8, a5, a6);
  *(_DWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 8) = v14;
LABEL_6:
  v15 = 16 * v12;
  v16 = 4 * v7;
  v17 = &v11[(unsigned __int64)v15 / 4];
  v18 = *(_QWORD *)a1 & 1LL;
  *(_QWORD *)a1 = v18;
  if ( v18 )
  {
    v14 = (int *)(a1 + 8);
    v16 = 64;
  }
  for ( i = &v14[v16]; i != v14; v14 += 4 )
    *v14 = 0;
  for ( j = v11; v17 != j; *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1 )
  {
    while ( (unsigned int)(*j + 1) <= 1 )
    {
      j += 4;
      if ( v17 == j )
        return operator delete(v11, v15, 4);
    }
    v21 = j;
    j += 4;
    sub_101BDF0(a1, v21, v49);
    v22 = *(_QWORD *)v49;
    **(_DWORD **)v49 = *(j - 4);
    *(_QWORD *)(v22 + 4) = *(_QWORD *)(j - 3);
    *(_DWORD *)(v22 + 12) = *(j - 1);
  }
  return operator delete(v11, v15, 4);
}
