void __fastcall sub_37DDC0(_QWORD *a1)
{
  unsigned int **v1; // rbx
  unsigned int **v3; // r12
  unsigned int *v4; // rbp
  _QWORD *v5; // r14
  unsigned int v6; // eax
  _DWORD *v7; // rdx
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rbp
  unsigned int v12; // esi
  unsigned int *v13; // r15
  unsigned int v14; // eax
  unsigned int *v15; // r15
  unsigned int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rdi
  unsigned int v20; // r15d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rsi
  _QWORD *v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  unsigned int **v28; // rcx
  _DWORD *v29; // rdx
  int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // ecx
  size_t v33; // rsi
  unsigned int *v34; // rax
  unsigned int v35; // r8d
  unsigned int v36; // eax
  unsigned int *v37; // rax
  _QWORD *v38; // rdx
  char **exception; // rbp
  __int64 v40; // rdx
  unsigned int v41; // [rsp+4h] [rbp-64h]
  __int64 v42[11]; // [rsp+10h] [rbp-58h] BYREF

  v1 = (unsigned int **)a1[1];
  if ( v1 )
  {
    v3 = &v1[*((unsigned int *)v1 - 1)];
    if ( v1 >= v3 )
      goto LABEL_18;
    do
    {
      v4 = *v1;
      if ( *v1 )
      {
        v5 = (_QWORD *)*a1;
        v6 = (*v4 + 0x3FFFFFFF) & 0x3FFFFFFF | *v4 & 0xC0000000;
        *v4 = v6;
        if ( (v6 & 0x3FFFFFFF) == 0 )
        {
          v7 = (_DWORD *)v5[83];
          if ( v7 )
          {
            v8 = (unsigned int)*(v7 - 1);
            if ( (_DWORD)v8 != *(v7 - 2) )
            {
              v9 = v8 + 1;
              *(_QWORD *)&v7[2 * v8] = v4;
              *(v7 - 1) = v8 + 1;
              goto LABEL_10;
            }
            v20 = (unsigned int)(3 * v8 + 1) >> 1;
            v21 = 8 * v20 + 8;
            if ( 8 * (int)v8 + 8 < (unsigned int)v21 && (unsigned int)v8 < v20 )
            {
              v22 = (unsigned int *)sub_186B300(v7 - 2, v21);
              v23 = v22[1];
              v7 = v22 + 2;
              v5[83] = v22 + 2;
              v9 = v23 + 1;
              *v22 = v20;
              *(_QWORD *)&v22[2 * v23 + 2] = v4;
              v22[1] = v23 + 1;
              goto LABEL_10;
            }
LABEL_42:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_C2B8E(v42, "Overflow encountered when expanding vector", v40);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v42);
            sub_233E40((__int64)v42);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v31 = sub_186B270(0x18u);
          v9 = 1;
          v7 = (_DWORD *)(v31 + 8);
          *(_QWORD *)v31 = 2;
          v5[83] = v31 + 8;
          *(_QWORD *)(v31 + 8) = v4;
          *(_DWORD *)(v31 + 4) = 1;
LABEL_10:
          while ( v9 )
          {
            v10 = (unsigned int)(v9 - 1);
            v11 = *(_QWORD *)&v7[2 * v10];
            v12 = v9 - 1;
            *(v7 - 1) = v10;
            if ( *(char *)(v11 + 3) < 0 )
            {
              v17 = *(_QWORD *)(v11 + 8);
              if ( v17 )
              {
                v18 = v5[81];
                if ( (*(_DWORD *)(v17 + 8))-- == 1 )
                  sub_15D7BC0(v18, v17);
              }
              sub_17E9C40(v5[82], 16, v11);
            }
            else
            {
              v13 = *(unsigned int **)(v11 + 8);
              v14 = (*v13 + 0x3FFFFFFF) & 0x3FFFFFFF | *v13 & 0xC0000000;
              *v13 = v14;
              if ( (v14 & 0x3FFFFFFF) == 0 )
              {
                if ( v12 == *(v7 - 2) )
                {
                  v35 = (3 * v12 + 1) >> 1;
                  v36 = 8 * v35 + 8;
                  if ( 8 * v9 >= v36 || v12 >= v35 )
                    goto LABEL_42;
                  v37 = (unsigned int *)sub_186B300(v7 - 2, v36);
                  v29 = v37 + 2;
                  v5[83] = v37 + 2;
                  *v37 = (3 * v12 + 1) >> 1;
                }
                else
                {
                  v29 = (_DWORD *)v5[83];
                }
                v30 = *(v29 - 1);
                *(_QWORD *)&v29[2 * v30] = v13;
                *(v29 - 1) = v30 + 1;
              }
              v15 = *(unsigned int **)(v11 + 16);
              v16 = (*v15 + 0x3FFFFFFF) & 0x3FFFFFFF | *v15 & 0xC0000000;
              *v15 = v16;
              if ( (v16 & 0x3FFFFFFF) == 0 )
              {
                v24 = (_QWORD *)v5[83];
                if ( v24 )
                {
                  v25 = *((_DWORD *)v24 - 1);
                  if ( v25 == *((_DWORD *)v24 - 2) )
                  {
                    v32 = (3 * v25 + 1) >> 1;
                    v33 = 8 * v32 + 8;
                    if ( 8 * v25 + 8 >= (unsigned int)v33 )
                      goto LABEL_42;
                    v41 = (3 * v25 + 1) >> 1;
                    if ( v25 >= v32 )
                      goto LABEL_42;
                    v34 = (unsigned int *)sub_186B300(v24 - 1, v33);
                    v24 = v34 + 2;
                    v5[83] = v34 + 2;
                    *v34 = v41;
                    LODWORD(v34) = v34[1];
                    v28 = (unsigned int **)&v24[(unsigned int)v34];
                    v27 = (_DWORD)v34 + 1;
                  }
                  else
                  {
                    v26 = v25;
                    v27 = v25 + 1;
                    v28 = (unsigned int **)&v24[v26];
                  }
                }
                else
                {
                  v38 = (_QWORD *)sub_186B270(0x18u);
                  *v38 = 2;
                  v27 = 1;
                  v24 = v38 + 1;
                  v5[83] = v24;
                  v28 = (unsigned int **)v24;
                }
                *v28 = v15;
                *((_DWORD *)v24 - 1) = v27;
              }
              sub_17E9C40(v5[82], 24, v11);
            }
            v7 = (_DWORD *)v5[83];
            if ( !v7 )
              break;
            v9 = *(v7 - 1);
          }
        }
      }
      ++v1;
    }
    while ( v1 < v3 );
    v1 = (unsigned int **)a1[1];
    if ( v1 )
LABEL_18:
      sub_186B220(v1 - 1);
  }
}

