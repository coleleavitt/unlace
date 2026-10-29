void __fastcall sub_CC1D00(_QWORD *a1, int a2, int a3, _Unwind_Exception *a4)
{
  _QWORD *v5; // r13
  unsigned int **v6; // rbx
  unsigned int **v7; // r14
  unsigned int *v8; // r12
  _QWORD *v9; // r15
  unsigned int v10; // eax
  _DWORD *v11; // rdx
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // r12
  unsigned int v16; // esi
  unsigned int *v17; // r8
  unsigned int v18; // eax
  unsigned int *v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rsi
  __int64 v26; // rdi
  _QWORD *v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // rsi
  int v31; // eax
  unsigned int **v32; // rsi
  __int64 v33; // rax
  _DWORD *v34; // rdx
  int v35; // eax
  unsigned int v36; // r9d
  unsigned int v37; // eax
  unsigned int *v38; // rax
  unsigned int v39; // r8d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rsi
  _QWORD *v43; // rax
  _QWORD *v44; // rdx
  char **exception; // rbp
  __int64 v46; // rdx
  unsigned int v47; // [rsp+8h] [rbp-70h]
  unsigned int v48; // [rsp+8h] [rbp-70h]
  unsigned int *v49; // [rsp+8h] [rbp-70h]
  unsigned int *v50; // [rsp+10h] [rbp-68h]
  unsigned int *v51; // [rsp+10h] [rbp-68h]
  __int64 v52[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = (_QWORD *)a1[2];
  *a1 = &off_1C592C0;
  if ( v5 )
  {
    sub_14B63F0(v5 + 21);
    v6 = (unsigned int **)v5[20];
    if ( v6 )
    {
      v7 = &v6[*((unsigned int *)v6 - 1)];
      if ( v6 >= v7 )
        goto LABEL_19;
      do
      {
        v8 = *v6;
        if ( *v6 )
        {
          v9 = (_QWORD *)v5[19];
          v10 = (*v8 + 0x3FFFFFFF) & 0x3FFFFFFF | *v8 & 0xC0000000;
          *v8 = v10;
          if ( (v10 & 0x3FFFFFFF) == 0 )
          {
            v11 = (_DWORD *)v9[83];
            if ( v11 )
            {
              v12 = (unsigned int)*(v11 - 1);
              if ( (_DWORD)v12 != *(v11 - 2) )
              {
                v13 = v12 + 1;
                *(_QWORD *)&v11[2 * v12] = v8;
                *(v11 - 1) = v12 + 1;
                goto LABEL_11;
              }
              v21 = (unsigned int)(3 * v12 + 1) >> 1;
              v22 = 8 * v21 + 8;
              if ( 8 * (int)v12 + 8 < (unsigned int)v22 && (unsigned int)v12 < v21 )
              {
                v47 = (unsigned int)(3 * v12 + 1) >> 1;
                v23 = (unsigned int *)sub_186B300(v11 - 2, v22);
                v24 = v23[1];
                v11 = v23 + 2;
                v9[83] = v23 + 2;
                *v23 = v47;
                v13 = v24 + 1;
                *(_QWORD *)&v23[2 * v24 + 2] = v8;
                v23[1] = v24 + 1;
                goto LABEL_11;
              }
LABEL_44:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_16387A(v52, "Overflow encountered when expanding vector", v46);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v52);
              sub_233E40((__int64)v52);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v33 = sub_186B270(0x18u);
            v13 = 1;
            v11 = (_DWORD *)(v33 + 8);
            *(_QWORD *)v33 = 2;
            v9[83] = v33 + 8;
            *(_QWORD *)(v33 + 8) = v8;
            *(_DWORD *)(v33 + 4) = 1;
LABEL_11:
            while ( v13 )
            {
              v14 = (unsigned int)(v13 - 1);
              v15 = *(_QWORD *)&v11[2 * v14];
              v16 = v13 - 1;
              *(v11 - 1) = v14;
              if ( *(char *)(v15 + 3) < 0 )
              {
                v25 = *(_QWORD *)(v15 + 8);
                if ( v25 )
                {
                  v26 = v9[81];
                  if ( (*(_DWORD *)(v25 + 8))-- == 1 )
                    sub_15D7BC0(v26, v25);
                }
                sub_17E9C40(v9[82], 16, v15);
              }
              else
              {
                v17 = *(unsigned int **)(v15 + 8);
                v18 = (*v17 + 0x3FFFFFFF) & 0x3FFFFFFF | *v17 & 0xC0000000;
                *v17 = v18;
                if ( (v18 & 0x3FFFFFFF) == 0 )
                {
                  if ( v16 == *(v11 - 2) )
                  {
                    v50 = v17;
                    v36 = (3 * v16 + 1) >> 1;
                    v37 = 8 * v36 + 8;
                    if ( 8 * v13 >= v37 || v16 >= v36 )
                      goto LABEL_44;
                    v38 = (unsigned int *)sub_186B300(v11 - 2, v37);
                    v17 = v50;
                    v34 = v38 + 2;
                    v9[83] = v38 + 2;
                    *v38 = (3 * v16 + 1) >> 1;
                  }
                  else
                  {
                    v34 = (_DWORD *)v9[83];
                  }
                  v35 = *(v34 - 1);
                  *(_QWORD *)&v34[2 * v35] = v17;
                  *(v34 - 1) = v35 + 1;
                }
                v19 = *(unsigned int **)(v15 + 16);
                v20 = (*v19 + 0x3FFFFFFF) & 0x3FFFFFFF | *v19 & 0xC0000000;
                *v19 = v20;
                if ( (v20 & 0x3FFFFFFF) == 0 )
                {
                  v28 = (_QWORD *)v9[83];
                  if ( v28 )
                  {
                    v29 = *((_DWORD *)v28 - 1);
                    if ( v29 == *((_DWORD *)v28 - 2) )
                    {
                      v51 = v19;
                      v39 = (3 * v29 + 1) >> 1;
                      v40 = 8 * v39 + 8;
                      if ( 8 * v29 + 8 >= (unsigned int)v40 )
                        goto LABEL_44;
                      v48 = (3 * v29 + 1) >> 1;
                      if ( v29 >= v39 )
                        goto LABEL_44;
                      v41 = (unsigned int *)sub_186B300(v28 - 1, v40);
                      v19 = v51;
                      v42 = v41[1];
                      v28 = v41 + 2;
                      v9[83] = v41 + 2;
                      *v41 = v48;
                      LODWORD(v41) = v42;
                      v32 = (unsigned int **)&v28[v42];
                      v31 = (_DWORD)v41 + 1;
                    }
                    else
                    {
                      v30 = v29;
                      v31 = v29 + 1;
                      v32 = (unsigned int **)&v28[v30];
                    }
                  }
                  else
                  {
                    v49 = v19;
                    v43 = (_QWORD *)sub_186B270(0x18u);
                    v19 = v49;
                    v44 = v43;
                    *v43 = 2;
                    v31 = 1;
                    v28 = v44 + 1;
                    v9[83] = v28;
                    v32 = (unsigned int **)v28;
                  }
                  *v32 = v19;
                  *((_DWORD *)v28 - 1) = v31;
                }
                sub_17E9C40(v9[82], 24, v15);
              }
              v11 = (_DWORD *)v9[83];
              if ( !v11 )
                break;
              v13 = *(v11 - 1);
            }
          }
        }
        ++v6;
      }
      while ( v6 < v7 );
      v6 = (unsigned int **)v5[20];
      if ( v6 )
LABEL_19:
        sub_186B220(v6 - 1);
    }
    sub_F74720(v5 + 1);
    sub_186B220(v5);
  }
  sub_18572D0(a1 + 3);
  operator delete(a1, 0x20u);
}

