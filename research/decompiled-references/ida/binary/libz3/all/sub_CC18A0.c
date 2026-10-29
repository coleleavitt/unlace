void __fastcall sub_CC18A0(_QWORD *a1)
{
  _QWORD *v2; // r13
  unsigned int **v3; // rbx
  unsigned int **v4; // r14
  unsigned int *v5; // r12
  _QWORD *v6; // r15
  unsigned int v7; // eax
  _DWORD *v8; // rdx
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // r12
  unsigned int v13; // esi
  unsigned int *v14; // r8
  unsigned int v15; // eax
  unsigned int *v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rdi
  _QWORD *v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rsi
  int v28; // eax
  unsigned int **v29; // rsi
  __int64 v30; // rax
  _DWORD *v31; // rdx
  int v32; // eax
  unsigned int v33; // r9d
  unsigned int v34; // eax
  unsigned int *v35; // rax
  unsigned int v36; // r8d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rsi
  _QWORD *v40; // rax
  _QWORD *v41; // rdx
  char **exception; // rbp
  __int64 v43; // rdx
  unsigned int v44; // [rsp+8h] [rbp-70h]
  unsigned int v45; // [rsp+8h] [rbp-70h]
  unsigned int *v46; // [rsp+8h] [rbp-70h]
  unsigned int *v47; // [rsp+10h] [rbp-68h]
  unsigned int *v48; // [rsp+10h] [rbp-68h]
  __int64 v49[11]; // [rsp+20h] [rbp-58h] BYREF

  v2 = (_QWORD *)a1[2];
  *a1 = &off_1C592C0;
  if ( v2 )
  {
    sub_14B63F0(v2 + 21);
    v3 = (unsigned int **)v2[20];
    if ( v3 )
    {
      v4 = &v3[*((unsigned int *)v3 - 1)];
      if ( v3 >= v4 )
        goto LABEL_19;
      do
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = (_QWORD *)v2[19];
          v7 = (*v5 + 0x3FFFFFFF) & 0x3FFFFFFF | *v5 & 0xC0000000;
          *v5 = v7;
          if ( (v7 & 0x3FFFFFFF) == 0 )
          {
            v8 = (_DWORD *)v6[83];
            if ( v8 )
            {
              v9 = (unsigned int)*(v8 - 1);
              if ( (_DWORD)v9 != *(v8 - 2) )
              {
                v10 = v9 + 1;
                *(_QWORD *)&v8[2 * v9] = v5;
                *(v8 - 1) = v9 + 1;
                goto LABEL_11;
              }
              v18 = (unsigned int)(3 * v9 + 1) >> 1;
              v19 = 8 * v18 + 8;
              if ( 8 * (int)v9 + 8 < (unsigned int)v19 && (unsigned int)v9 < v18 )
              {
                v44 = (unsigned int)(3 * v9 + 1) >> 1;
                v20 = (unsigned int *)sub_186B300(v8 - 2, v19);
                v21 = v20[1];
                v8 = v20 + 2;
                v6[83] = v20 + 2;
                *v20 = v44;
                v10 = v21 + 1;
                *(_QWORD *)&v20[2 * v21 + 2] = v5;
                v20[1] = v21 + 1;
                goto LABEL_11;
              }
LABEL_44:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_16387A(v49, "Overflow encountered when expanding vector", v43);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v49);
              sub_233E40((__int64)v49);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v30 = sub_186B270(0x18u);
            v10 = 1;
            v8 = (_DWORD *)(v30 + 8);
            *(_QWORD *)v30 = 2;
            v6[83] = v30 + 8;
            *(_QWORD *)(v30 + 8) = v5;
            *(_DWORD *)(v30 + 4) = 1;
LABEL_11:
            while ( v10 )
            {
              v11 = (unsigned int)(v10 - 1);
              v12 = *(_QWORD *)&v8[2 * v11];
              v13 = v10 - 1;
              *(v8 - 1) = v11;
              if ( *(char *)(v12 + 3) < 0 )
              {
                v22 = *(_QWORD *)(v12 + 8);
                if ( v22 )
                {
                  v23 = v6[81];
                  if ( (*(_DWORD *)(v22 + 8))-- == 1 )
                    sub_15D7BC0(v23, v22);
                }
                sub_17E9C40(v6[82], 16, v12);
              }
              else
              {
                v14 = *(unsigned int **)(v12 + 8);
                v15 = (*v14 + 0x3FFFFFFF) & 0x3FFFFFFF | *v14 & 0xC0000000;
                *v14 = v15;
                if ( (v15 & 0x3FFFFFFF) == 0 )
                {
                  if ( v13 == *(v8 - 2) )
                  {
                    v47 = v14;
                    v33 = (3 * v13 + 1) >> 1;
                    v34 = 8 * v33 + 8;
                    if ( 8 * v10 >= v34 || v13 >= v33 )
                      goto LABEL_44;
                    v35 = (unsigned int *)sub_186B300(v8 - 2, v34);
                    v14 = v47;
                    v31 = v35 + 2;
                    v6[83] = v35 + 2;
                    *v35 = (3 * v13 + 1) >> 1;
                  }
                  else
                  {
                    v31 = (_DWORD *)v6[83];
                  }
                  v32 = *(v31 - 1);
                  *(_QWORD *)&v31[2 * v32] = v14;
                  *(v31 - 1) = v32 + 1;
                }
                v16 = *(unsigned int **)(v12 + 16);
                v17 = (*v16 + 0x3FFFFFFF) & 0x3FFFFFFF | *v16 & 0xC0000000;
                *v16 = v17;
                if ( (v17 & 0x3FFFFFFF) == 0 )
                {
                  v25 = (_QWORD *)v6[83];
                  if ( v25 )
                  {
                    v26 = *((_DWORD *)v25 - 1);
                    if ( v26 == *((_DWORD *)v25 - 2) )
                    {
                      v48 = v16;
                      v36 = (3 * v26 + 1) >> 1;
                      v37 = 8 * v36 + 8;
                      if ( 8 * v26 + 8 >= (unsigned int)v37 )
                        goto LABEL_44;
                      v45 = (3 * v26 + 1) >> 1;
                      if ( v26 >= v36 )
                        goto LABEL_44;
                      v38 = (unsigned int *)sub_186B300(v25 - 1, v37);
                      v16 = v48;
                      v39 = v38[1];
                      v25 = v38 + 2;
                      v6[83] = v38 + 2;
                      *v38 = v45;
                      LODWORD(v38) = v39;
                      v29 = (unsigned int **)&v25[v39];
                      v28 = (_DWORD)v38 + 1;
                    }
                    else
                    {
                      v27 = v26;
                      v28 = v26 + 1;
                      v29 = (unsigned int **)&v25[v27];
                    }
                  }
                  else
                  {
                    v46 = v16;
                    v40 = (_QWORD *)sub_186B270(0x18u);
                    v16 = v46;
                    v41 = v40;
                    *v40 = 2;
                    v28 = 1;
                    v25 = v41 + 1;
                    v6[83] = v25;
                    v29 = (unsigned int **)v25;
                  }
                  *v29 = v16;
                  *((_DWORD *)v25 - 1) = v28;
                }
                sub_17E9C40(v6[82], 24, v12);
              }
              v8 = (_DWORD *)v6[83];
              if ( !v8 )
                break;
              v10 = *(v8 - 1);
            }
          }
        }
        ++v3;
      }
      while ( v3 < v4 );
      v3 = (unsigned int **)v2[20];
      if ( v3 )
LABEL_19:
        sub_186B220(v3 - 1);
    }
    sub_F74720(v2 + 1);
    sub_186B220(v2);
  }
  sub_18572D0(a1 + 3);
}

