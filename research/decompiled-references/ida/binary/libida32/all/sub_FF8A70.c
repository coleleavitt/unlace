__int64 __fastcall sub_FF8A70(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r13
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  int *v11; // r12
  __int64 v12; // rbp
  __int64 v13; // rdi
  int *v14; // rax
  __int64 v15; // r13
  int *v16; // r15
  __int64 v17; // rdx
  int *i; // rdx
  int *j; // rbx
  int *v20; // rsi
  __int64 v21; // rax
  __int64 result; // rax
  __int64 v23; // rbx
  __int64 *v24; // rbp
  __int64 v25; // rcx
  int v26; // eax
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
  __int64 v42; // rax
  bool v43; // zf
  __int64 v44; // rax
  __int64 *v45; // rbx
  _DWORD *v46; // rax
  _DWORD *v47; // [rsp+8h] [rbp-140h] BYREF
  _BYTE v48[12]; // [rsp+10h] [rbp-138h] BYREF
  int v49; // [rsp+1Ch] [rbp-12Ch]
  __int64 v50; // [rsp+20h] [rbp-128h] BYREF

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
    v23 = a1 + 8;
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
    v23 = a1 + 8;
    v9 = a1 + 264;
    if ( !(_BYTE)v8 )
    {
      v11 = *(int **)(a1 + 8);
      v12 = *(unsigned int *)(a1 + 16);
      v13 = 16LL * (unsigned int)v10;
      goto LABEL_5;
    }
LABEL_20:
    v24 = (__int64 *)v48;
    v25 = (unsigned int)(*(_DWORD *)v23 + 1);
    if ( (unsigned int)v25 > 1 )
    {
      *(_DWORD *)v48 = *(_DWORD *)v23;
      v24 = &v50;
      *(_QWORD *)&v48[4] = *(_QWORD *)(v23 + 4);
      v49 = *(_DWORD *)(v23 + 12);
    }
    if ( v9 != v23 + 16 )
    {
      v26 = *(_DWORD *)(v23 + 16);
      v25 = (unsigned int)(v26 + 1);
      if ( (unsigned int)v25 > 1 )
      {
        *(_DWORD *)v24 = v26;
        v24 += 2;
        *(__int64 *)((char *)v24 - 12) = *(_QWORD *)(v23 + 20);
        *((_DWORD *)v24 - 1) = *(_DWORD *)(v23 + 28);
      }
      if ( v9 != v23 + 32 )
      {
        v27 = *(_DWORD *)(v23 + 32);
        v25 = (unsigned int)(v27 + 1);
        if ( (unsigned int)v25 > 1 )
        {
          *(_DWORD *)v24 = v27;
          v24 += 2;
          *(__int64 *)((char *)v24 - 12) = *(_QWORD *)(v23 + 36);
          *((_DWORD *)v24 - 1) = *(_DWORD *)(v23 + 44);
        }
        if ( v9 != v23 + 48 )
        {
          v28 = *(_DWORD *)(v23 + 48);
          v25 = (unsigned int)(v28 + 1);
          if ( (unsigned int)v25 > 1 )
          {
            *(_DWORD *)v24 = v28;
            v24 += 2;
            *(__int64 *)((char *)v24 - 12) = *(_QWORD *)(v23 + 52);
            *((_DWORD *)v24 - 1) = *(_DWORD *)(v23 + 60);
          }
          if ( v9 != v23 + 64 )
          {
            v29 = *(_DWORD *)(v23 + 64);
            v25 = (unsigned int)(v29 + 1);
            if ( (unsigned int)v25 > 1 )
            {
              *(_DWORD *)v24 = v29;
              v24 += 2;
              *(__int64 *)((char *)v24 - 12) = *(_QWORD *)(v23 + 68);
              *((_DWORD *)v24 - 1) = *(_DWORD *)(v23 + 76);
            }
            if ( v9 != v23 + 80 )
            {
              v30 = *(_DWORD *)(v23 + 80);
              v25 = (unsigned int)(v30 + 1);
              if ( (unsigned int)v25 > 1 )
              {
                *(_DWORD *)v24 = v30;
                v24 += 2;
                *(__int64 *)((char *)v24 - 12) = *(_QWORD *)(v23 + 84);
                *((_DWORD *)v24 - 1) = *(_DWORD *)(v23 + 92);
              }
              if ( v9 != v23 + 96 )
              {
                v31 = *(_DWORD *)(v23 + 96);
                v25 = (unsigned int)(v31 + 1);
                if ( (unsigned int)v25 > 1 )
                {
                  *(_DWORD *)v24 = v31;
                  v24 += 2;
                  *(__int64 *)((char *)v24 - 12) = *(_QWORD *)(v23 + 100);
                  *((_DWORD *)v24 - 1) = *(_DWORD *)(v23 + 108);
                }
                if ( v9 != v23 + 112 )
                {
                  v32 = *(_DWORD *)(v23 + 112);
                  v25 = (unsigned int)(v32 + 1);
                  if ( (unsigned int)v25 > 1 )
                  {
                    *(_DWORD *)v24 = v32;
                    v24 += 2;
                    *(__int64 *)((char *)v24 - 12) = *(_QWORD *)(v23 + 116);
                    *((_DWORD *)v24 - 1) = *(_DWORD *)(v23 + 124);
                  }
                  if ( v9 != v23 + 128 )
                  {
                    v33 = *(_DWORD *)(v23 + 128);
                    v25 = (unsigned int)(v33 + 1);
                    if ( (unsigned int)v25 > 1 )
                    {
                      *(_DWORD *)v24 = v33;
                      v24 += 2;
                      *(__int64 *)((char *)v24 - 12) = *(_QWORD *)(v23 + 132);
                      *((_DWORD *)v24 - 1) = *(_DWORD *)(v23 + 140);
                    }
                    if ( v9 != v23 + 144 )
                    {
                      v34 = *(_DWORD *)(v23 + 144);
                      v25 = (unsigned int)(v34 + 1);
                      if ( (unsigned int)v25 > 1 )
                      {
                        *(_DWORD *)v24 = v34;
                        v24 += 2;
                        *(__int64 *)((char *)v24 - 12) = *(_QWORD *)(v23 + 148);
                        *((_DWORD *)v24 - 1) = *(_DWORD *)(v23 + 156);
                      }
                      if ( v9 != v23 + 160 )
                      {
                        v35 = *(_DWORD *)(v23 + 160);
                        v25 = (unsigned int)(v35 + 1);
                        if ( (unsigned int)v25 > 1 )
                        {
                          *(_DWORD *)v24 = v35;
                          v24 += 2;
                          *(__int64 *)((char *)v24 - 12) = *(_QWORD *)(v23 + 164);
                          *((_DWORD *)v24 - 1) = *(_DWORD *)(v23 + 172);
                        }
                        if ( v9 != v23 + 176 )
                        {
                          v36 = *(_DWORD *)(v23 + 176);
                          v25 = (unsigned int)(v36 + 1);
                          if ( (unsigned int)v25 > 1 )
                          {
                            *(_DWORD *)v24 = v36;
                            v24 += 2;
                            *(__int64 *)((char *)v24 - 12) = *(_QWORD *)(v23 + 180);
                            *((_DWORD *)v24 - 1) = *(_DWORD *)(v23 + 188);
                          }
                          if ( v9 != v23 + 192 )
                          {
                            v37 = *(_DWORD *)(v23 + 192);
                            v25 = (unsigned int)(v37 + 1);
                            if ( (unsigned int)v25 > 1 )
                            {
                              *(_DWORD *)v24 = v37;
                              v24 += 2;
                              *(__int64 *)((char *)v24 - 12) = *(_QWORD *)(v23 + 196);
                              *((_DWORD *)v24 - 1) = *(_DWORD *)(v23 + 204);
                            }
                            if ( v9 != v23 + 208 )
                            {
                              v38 = *(_DWORD *)(v23 + 208);
                              v25 = (unsigned int)(v38 + 1);
                              if ( (unsigned int)v25 > 1 )
                              {
                                *(_DWORD *)v24 = v38;
                                v24 += 2;
                                *(__int64 *)((char *)v24 - 12) = *(_QWORD *)(v23 + 212);
                                *((_DWORD *)v24 - 1) = *(_DWORD *)(v23 + 220);
                              }
                              if ( v9 != v23 + 224 )
                              {
                                v39 = *(_DWORD *)(v23 + 224);
                                v25 = (unsigned int)(v39 + 1);
                                if ( (unsigned int)v25 > 1 )
                                {
                                  *(_DWORD *)v24 = v39;
                                  v24 += 2;
                                  *(__int64 *)((char *)v24 - 12) = *(_QWORD *)(v23 + 228);
                                  *((_DWORD *)v24 - 1) = *(_DWORD *)(v23 + 236);
                                }
                                if ( v9 != v23 + 240 )
                                {
                                  v40 = *(_DWORD *)(v23 + 240);
                                  v25 = (unsigned int)(v40 + 1);
                                  if ( (unsigned int)v25 > 1 )
                                  {
                                    *(_DWORD *)v24 = v40;
                                    v24 += 2;
                                    *(__int64 *)((char *)v24 - 12) = *(_QWORD *)(v23 + 244);
                                    *((_DWORD *)v24 - 1) = *(_DWORD *)(v23 + 252);
                                  }
                                  if ( v9 != v23 + 256 )
                                  {
                                    v41 = *(_DWORD *)(v23 + 256);
                                    v9 = (unsigned int)(v41 + 1);
                                    if ( (unsigned int)v9 > 1 )
                                    {
                                      *(_DWORD *)v24 = v41;
                                      v24 += 2;
                                      *(__int64 *)((char *)v24 - 12) = *(_QWORD *)(v23 + 260);
                                      *((_DWORD *)v24 - 1) = *(_DWORD *)(v23 + 268);
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
      v42 = sub_220C370(16LL * (unsigned int)v7, 4, v9, v25, a5, a6);
      *(_DWORD *)(a1 + 16) = v7;
      *(_QWORD *)(a1 + 8) = v42;
    }
    v43 = (*(_QWORD *)a1 & 1LL) == 0;
    *(_QWORD *)a1 &= 1uLL;
    v44 = 256;
    if ( v43 )
    {
      v23 = *(_QWORD *)(a1 + 8);
      v44 = 16LL * *(unsigned int *)(a1 + 16);
    }
    for ( result = v23 + v44; result != v23; v23 += 16 )
      *(_DWORD *)v23 = 0;
    v45 = (__int64 *)v48;
    if ( v24 != (__int64 *)v48 )
    {
      do
      {
        result = (unsigned int)(*(_DWORD *)v45 + 1);
        if ( (unsigned int)result > 1 )
        {
          sub_FF80B0(a1, (int *)v45, &v47);
          v46 = v47;
          *v47 = *(_DWORD *)v45;
          *(_QWORD *)(v46 + 1) = *(__int64 *)((char *)v45 + 4);
          v46[3] = *((_DWORD *)v45 + 3);
          result = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1u;
          *(_DWORD *)a1 = result;
        }
        v45 += 2;
      }
      while ( v45 != v24 );
    }
    return result;
  }
  if ( (_BYTE)v8 )
  {
    v23 = a1 + 8;
    v9 = a1 + 264;
    LODWORD(v7) = 64;
    goto LABEL_20;
  }
  v11 = *(int **)(a1 + 8);
  v12 = *(unsigned int *)(a1 + 16);
  v7 = 64;
  v13 = 1024;
LABEL_5:
  v14 = (int *)sub_220C370(v13, 4, v9, v8, a5, a6);
  *(_DWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 8) = v14;
LABEL_6:
  v15 = 4 * v7;
  v16 = &v11[4 * v12];
  v17 = *(_QWORD *)a1 & 1LL;
  *(_QWORD *)a1 = v17;
  if ( v17 )
  {
    v14 = (int *)(a1 + 8);
    v15 = 64;
  }
  for ( i = &v14[v15]; i != v14; v14 += 4 )
    *v14 = 0;
  for ( j = v11; v16 != j; *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1 )
  {
    while ( (unsigned int)(*j + 1) <= 1 )
    {
      j += 4;
      if ( v16 == j )
        return operator delete();
    }
    v20 = j;
    j += 4;
    sub_FF80B0(a1, v20, v48);
    v21 = *(_QWORD *)v48;
    **(_DWORD **)v48 = *(j - 4);
    *(_QWORD *)(v21 + 4) = *(_QWORD *)(j - 3);
    *(_DWORD *)(v21 + 12) = *(j - 1);
  }
  return operator delete();
}

