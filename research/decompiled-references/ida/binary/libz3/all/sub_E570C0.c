__int64 __fastcall sub_E570C0(__int64 a1)
{
  __int64 *v1; // r12
  __int64 result; // rax
  __int64 v3; // r13
  __int64 v4; // rdx
  _QWORD *v5; // rbp
  _QWORD *v6; // rbx
  unsigned int *v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rsi
  bool v10; // zf
  __int64 v11; // rsi
  _QWORD *v12; // r14
  _DWORD *v13; // rdx
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // r15
  unsigned int v18; // esi
  unsigned int *v19; // r8
  unsigned int v20; // eax
  unsigned int *v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rdi
  _QWORD *v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rsi
  int v32; // eax
  unsigned int **v33; // rsi
  __int64 v34; // rax
  _DWORD *v35; // rdx
  int v36; // eax
  unsigned int v37; // r9d
  unsigned int v38; // eax
  unsigned int *v39; // rax
  unsigned int v40; // r8d
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rsi
  _QWORD *v44; // rax
  _QWORD *v45; // rdx
  char **exception; // rbp
  unsigned int v47; // [rsp+8h] [rbp-80h]
  unsigned int v48; // [rsp+8h] [rbp-80h]
  unsigned int *v49; // [rsp+8h] [rbp-80h]
  unsigned int *v50; // [rsp+10h] [rbp-78h]
  unsigned int *v51; // [rsp+10h] [rbp-78h]
  __int64 v52[11]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(__int64 **)(a1 + 8);
  result = *v1;
  if ( *v1 )
  {
    v3 = *(unsigned int *)(a1 + 16);
    v4 = 32LL * *(unsigned int *)(result - 4);
    v5 = (_QWORD *)(result + v4);
    v6 = (_QWORD *)(result + 32 * v3);
    if ( 32 * v3 != v4 )
    {
      do
      {
        while ( 1 )
        {
          v11 = v6[1];
          v12 = (_QWORD *)*v6;
          if ( v11 )
          {
            v10 = (*(_DWORD *)(v11 + 8))-- == 1;
            if ( v10 )
            {
              sub_15D7BC0(v12, v11);
              v12 = (_QWORD *)*v6;
            }
          }
          v7 = (unsigned int *)v6[3];
          if ( v7 )
          {
            v8 = (*v7 + 0x3FFFFFFF) & 0x3FFFFFFF | *v7 & 0xC0000000;
            *v7 = v8;
            if ( (v8 & 0x3FFFFFFF) == 0 )
            {
              v13 = (_DWORD *)v12[83];
              if ( v13 )
              {
                v14 = (unsigned int)*(v13 - 1);
                if ( (_DWORD)v14 == *(v13 - 2) )
                {
                  v23 = (unsigned int)(3 * v14 + 1) >> 1;
                  v24 = 8 * v23 + 8;
                  if ( 8 * (int)v14 + 8 >= (unsigned int)v24 || (unsigned int)v14 >= v23 )
                  {
LABEL_49:
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v52, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v52);
                    sub_233E40((__int64)v52);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v47 = (unsigned int)(3 * v14 + 1) >> 1;
                  v25 = (unsigned int *)sub_186B300(v13 - 2, v24);
                  v26 = v25[1];
                  v13 = v25 + 2;
                  v12[83] = v25 + 2;
                  *v25 = v47;
                  v15 = v26 + 1;
                  *(_QWORD *)&v25[2 * v26 + 2] = v7;
                  v25[1] = v26 + 1;
                }
                else
                {
                  v15 = v14 + 1;
                  *(_QWORD *)&v13[2 * v14] = v7;
                  *(v13 - 1) = v14 + 1;
                }
              }
              else
              {
                v34 = sub_186B270(0x18u);
                v15 = 1;
                v13 = (_DWORD *)(v34 + 8);
                *(_QWORD *)v34 = 2;
                v12[83] = v34 + 8;
                *(_QWORD *)(v34 + 8) = v7;
                *(_DWORD *)(v34 + 4) = 1;
              }
              if ( v15 )
              {
                while ( 1 )
                {
                  v16 = (unsigned int)(v15 - 1);
                  v17 = *(_QWORD *)&v13[2 * v16];
                  v18 = v15 - 1;
                  *(v13 - 1) = v16;
                  if ( *(char *)(v17 + 3) < 0 )
                  {
                    v27 = *(_QWORD *)(v17 + 8);
                    if ( v27 )
                    {
                      v28 = v12[81];
                      v10 = (*(_DWORD *)(v27 + 8))-- == 1;
                      if ( v10 )
                        sub_15D7BC0(v28, v27);
                    }
                    sub_17E9C40(v12[82], 16, v17);
                  }
                  else
                  {
                    v19 = *(unsigned int **)(v17 + 8);
                    v20 = (*v19 + 0x3FFFFFFF) & 0x3FFFFFFF | *v19 & 0xC0000000;
                    *v19 = v20;
                    if ( (v20 & 0x3FFFFFFF) == 0 )
                    {
                      if ( v18 == *(v13 - 2) )
                      {
                        v50 = v19;
                        v37 = (3 * v18 + 1) >> 1;
                        v38 = 8 * v37 + 8;
                        if ( 8 * v15 >= v38 || v18 >= v37 )
                          goto LABEL_49;
                        v39 = (unsigned int *)sub_186B300(v13 - 2, v38);
                        v19 = v50;
                        v35 = v39 + 2;
                        v12[83] = v39 + 2;
                        *v39 = (3 * v18 + 1) >> 1;
                      }
                      else
                      {
                        v35 = (_DWORD *)v12[83];
                      }
                      v36 = *(v35 - 1);
                      *(_QWORD *)&v35[2 * v36] = v19;
                      *(v35 - 1) = v36 + 1;
                    }
                    v21 = *(unsigned int **)(v17 + 16);
                    v22 = (*v21 + 0x3FFFFFFF) & 0x3FFFFFFF | *v21 & 0xC0000000;
                    *v21 = v22;
                    if ( (v22 & 0x3FFFFFFF) == 0 )
                    {
                      v29 = (_QWORD *)v12[83];
                      if ( v29 )
                      {
                        v30 = *((_DWORD *)v29 - 1);
                        if ( v30 == *((_DWORD *)v29 - 2) )
                        {
                          v51 = v21;
                          v40 = (3 * v30 + 1) >> 1;
                          v41 = 8 * v40 + 8;
                          if ( 8 * v30 + 8 >= (unsigned int)v41 )
                            goto LABEL_49;
                          v48 = (3 * v30 + 1) >> 1;
                          if ( v30 >= v40 )
                            goto LABEL_49;
                          v42 = (unsigned int *)sub_186B300(v29 - 1, v41);
                          v21 = v51;
                          v43 = v42[1];
                          v29 = v42 + 2;
                          v12[83] = v42 + 2;
                          *v42 = v48;
                          LODWORD(v42) = v43;
                          v33 = (unsigned int **)&v29[v43];
                          v32 = (_DWORD)v42 + 1;
                        }
                        else
                        {
                          v31 = v30;
                          v32 = v30 + 1;
                          v33 = (unsigned int **)&v29[v31];
                        }
                      }
                      else
                      {
                        v49 = v21;
                        v44 = (_QWORD *)sub_186B270(0x18u);
                        v21 = v49;
                        v45 = v44;
                        *v44 = 2;
                        v32 = 1;
                        v29 = v45 + 1;
                        v12[83] = v29;
                        v33 = (unsigned int **)v29;
                      }
                      *v33 = v21;
                      *((_DWORD *)v29 - 1) = v32;
                    }
                    sub_17E9C40(v12[82], 24, v17);
                  }
                  v13 = (_DWORD *)v12[83];
                  if ( v13 )
                  {
                    v15 = *(v13 - 1);
                    if ( v15 )
                      continue;
                  }
                  break;
                }
              }
              v12 = (_QWORD *)*v6;
            }
          }
          v9 = v6[2];
          if ( v9 )
          {
            v10 = (*(_DWORD *)(v9 + 8))-- == 1;
            if ( v10 )
              break;
          }
          v6 += 4;
          if ( v5 == v6 )
            goto LABEL_13;
        }
        v6 += 4;
        sub_15D7BC0(v12, v9);
      }
      while ( v5 != v6 );
LABEL_13:
      result = *v1;
    }
    *(_DWORD *)(result - 4) = v3;
  }
  return result;
}

