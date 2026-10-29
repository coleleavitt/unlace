__int64 __fastcall sub_CC2160(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rsi
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __int64 result; // rax
  _QWORD *v9; // r12
  unsigned int **v10; // rbx
  unsigned int **v11; // r13
  unsigned int *v12; // rbp
  _QWORD *v13; // r14
  unsigned int v14; // eax
  _DWORD *v15; // rdx
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rbp
  unsigned int v20; // esi
  unsigned int *v21; // r15
  unsigned int v22; // eax
  unsigned int *v23; // r15
  unsigned int v24; // eax
  unsigned int v25; // r15d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // rdi
  _QWORD *v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  unsigned int **v36; // rcx
  __int64 v37; // rax
  _DWORD *v38; // rdx
  int v39; // eax
  unsigned int v40; // r8d
  unsigned int v41; // eax
  unsigned int *v42; // rax
  unsigned int v43; // ecx
  size_t v44; // rsi
  unsigned int *v45; // rax
  _QWORD *v46; // rdx
  char **exception; // rbp
  __int64 v48; // rdx
  void *v49; // [rsp+0h] [rbp-68h]
  unsigned int v50; // [rsp+4h] [rbp-64h]
  __int64 v51[11]; // [rsp+10h] [rbp-58h] BYREF

  v1 = sub_186B270(0xC8u);
  v2 = *(__int64 **)(a1 + 16);
  v3 = *v2;
  *(_QWORD *)v1 = *v2;
  sub_F735C0(v1 + 8, v3);
  sub_16669D0(v1 + 136, *(_QWORD *)v1);
  v4 = *(_QWORD *)v1;
  *(_QWORD *)(v1 + 160) = 0;
  *(_QWORD *)(v1 + 152) = v4;
  sub_14B7810(v1 + 168, v4, a1 + 24, v5, v6, v7, v49);
  sub_14B5FE0(v1 + 168, a1 + 24);
  *(_BYTE *)(v1 + 186) = sub_1859610(a1 + 24, "lia2pb_partial", 0);
  *(_DWORD *)(v1 + 188) = sub_1859960(a1 + 24, "lia2pb_max_bits", 32);
  result = sub_1859960(a1 + 24, "lia2pb_total_bits", 2048);
  v9 = *(_QWORD **)(a1 + 16);
  *(_DWORD *)(v1 + 192) = result;
  *(_QWORD *)(a1 + 16) = v1;
  if ( v9 )
  {
    sub_14B63F0(v9 + 21);
    v10 = (unsigned int **)v9[20];
    if ( v10 )
    {
      v11 = &v10[*((unsigned int *)v10 - 1)];
      if ( v10 >= v11 )
        goto LABEL_19;
      do
      {
        v12 = *v10;
        if ( *v10 )
        {
          v13 = (_QWORD *)v9[19];
          v14 = (*v12 + 0x3FFFFFFF) & 0x3FFFFFFF | *v12 & 0xC0000000;
          *v12 = v14;
          if ( (v14 & 0x3FFFFFFF) == 0 )
          {
            v15 = (_DWORD *)v13[83];
            if ( v15 )
            {
              v16 = (unsigned int)*(v15 - 1);
              if ( (_DWORD)v16 != *(v15 - 2) )
              {
                v17 = v16 + 1;
                *(_QWORD *)&v15[2 * v16] = v12;
                *(v15 - 1) = v16 + 1;
                goto LABEL_11;
              }
              v25 = (unsigned int)(3 * v16 + 1) >> 1;
              v26 = 8 * v25 + 8;
              if ( 8 * (int)v16 + 8 < (unsigned int)v26 && (unsigned int)v16 < v25 )
              {
                v27 = (unsigned int *)sub_186B300(v15 - 2, v26);
                v28 = v27[1];
                v15 = v27 + 2;
                v13[83] = v27 + 2;
                v17 = v28 + 1;
                *v27 = v25;
                *(_QWORD *)&v27[2 * v28 + 2] = v12;
                v27[1] = v28 + 1;
                goto LABEL_11;
              }
LABEL_44:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_16387A(v51, "Overflow encountered when expanding vector", v48);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v51);
              sub_233E40((__int64)v51);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v37 = sub_186B270(0x18u);
            v17 = 1;
            v15 = (_DWORD *)(v37 + 8);
            *(_QWORD *)v37 = 2;
            v13[83] = v37 + 8;
            *(_QWORD *)(v37 + 8) = v12;
            *(_DWORD *)(v37 + 4) = 1;
LABEL_11:
            while ( v17 )
            {
              v18 = (unsigned int)(v17 - 1);
              v19 = *(_QWORD *)&v15[2 * v18];
              v20 = v17 - 1;
              *(v15 - 1) = v18;
              if ( *(char *)(v19 + 3) < 0 )
              {
                v29 = *(_QWORD *)(v19 + 8);
                if ( v29 )
                {
                  v30 = v13[81];
                  if ( (*(_DWORD *)(v29 + 8))-- == 1 )
                    sub_15D7BC0(v30, v29);
                }
                sub_17E9C40(v13[82], 16, v19);
              }
              else
              {
                v21 = *(unsigned int **)(v19 + 8);
                v22 = (*v21 + 0x3FFFFFFF) & 0x3FFFFFFF | *v21 & 0xC0000000;
                *v21 = v22;
                if ( (v22 & 0x3FFFFFFF) == 0 )
                {
                  if ( v20 == *(v15 - 2) )
                  {
                    v40 = (3 * v20 + 1) >> 1;
                    v41 = 8 * v40 + 8;
                    if ( 8 * v17 >= v41 || v20 >= v40 )
                      goto LABEL_44;
                    v42 = (unsigned int *)sub_186B300(v15 - 2, v41);
                    v38 = v42 + 2;
                    v13[83] = v42 + 2;
                    *v42 = (3 * v20 + 1) >> 1;
                  }
                  else
                  {
                    v38 = (_DWORD *)v13[83];
                  }
                  v39 = *(v38 - 1);
                  *(_QWORD *)&v38[2 * v39] = v21;
                  *(v38 - 1) = v39 + 1;
                }
                v23 = *(unsigned int **)(v19 + 16);
                v24 = (*v23 + 0x3FFFFFFF) & 0x3FFFFFFF | *v23 & 0xC0000000;
                *v23 = v24;
                if ( (v24 & 0x3FFFFFFF) == 0 )
                {
                  v32 = (_QWORD *)v13[83];
                  if ( v32 )
                  {
                    v33 = *((_DWORD *)v32 - 1);
                    if ( v33 == *((_DWORD *)v32 - 2) )
                    {
                      v43 = (3 * v33 + 1) >> 1;
                      v44 = 8 * v43 + 8;
                      if ( 8 * v33 + 8 >= (unsigned int)v44 )
                        goto LABEL_44;
                      v50 = (3 * v33 + 1) >> 1;
                      if ( v33 >= v43 )
                        goto LABEL_44;
                      v45 = (unsigned int *)sub_186B300(v32 - 1, v44);
                      v32 = v45 + 2;
                      v13[83] = v45 + 2;
                      *v45 = v50;
                      LODWORD(v45) = v45[1];
                      v36 = (unsigned int **)&v32[(unsigned int)v45];
                      v35 = (_DWORD)v45 + 1;
                    }
                    else
                    {
                      v34 = v33;
                      v35 = v33 + 1;
                      v36 = (unsigned int **)&v32[v34];
                    }
                  }
                  else
                  {
                    v46 = (_QWORD *)sub_186B270(0x18u);
                    *v46 = 2;
                    v35 = 1;
                    v32 = v46 + 1;
                    v13[83] = v32;
                    v36 = (unsigned int **)v32;
                  }
                  *v36 = v23;
                  *((_DWORD *)v32 - 1) = v35;
                }
                sub_17E9C40(v13[82], 24, v19);
              }
              v15 = (_DWORD *)v13[83];
              if ( !v15 )
                break;
              v17 = *(v15 - 1);
            }
          }
        }
        ++v10;
      }
      while ( v10 < v11 );
      v10 = (unsigned int **)v9[20];
      if ( v10 )
LABEL_19:
        sub_186B220(v10 - 1);
    }
    sub_F74720(v9 + 1);
    return sub_186B220(v9);
  }
  return result;
}

