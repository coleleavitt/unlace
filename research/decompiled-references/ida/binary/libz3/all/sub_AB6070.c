__int64 __fastcall sub_AB6070(__int64 a1, unsigned int a2, __int64 a3)
{
  char **exception; // rbp
  __int64 v4; // rdx
  __int64 v6; // r12
  void *v7; // rbp
  __int64 v8; // rax
  unsigned int *v9; // rax
  unsigned int i; // r15d
  char v11; // al
  __int64 v12; // rdx
  unsigned int v13; // ebx
  _QWORD *v14; // rax
  void *v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // rsi
  __int64 v19; // rax
  size_t v20; // rdi
  __int64 v21; // rax
  int *v22; // r14
  _DWORD *v23; // r9
  __int64 v24; // rdi
  __int64 v25; // rdx
  int *v26; // rax
  int *v27; // rdi
  int v28; // ecx
  char v29; // r8
  __int64 v30; // rcx
  char v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rax
  int *v34; // rbp
  int *v35; // rbx
  _QWORD *v36; // r14
  void *v37; // r12
  int *v38; // rsi
  void *v39; // rbx
  int *v40; // rdx
  int v41; // eax
  _QWORD *v43; // rax
  char v44; // al
  char v45; // al
  int v46; // eax
  int *v47; // [rsp+0h] [rbp-C8h]
  unsigned int *v48; // [rsp+8h] [rbp-C0h]
  unsigned int v49; // [rsp+1Ch] [rbp-ACh]
  unsigned int v50; // [rsp+20h] [rbp-A8h]
  _DWORD *v51; // [rsp+28h] [rbp-A0h]
  _DWORD *v52; // [rsp+28h] [rbp-A0h]
  __int64 v53; // [rsp+30h] [rbp-98h]
  unsigned int *v55; // [rsp+40h] [rbp-88h]
  __int64 v56; // [rsp+48h] [rbp-80h]
  int v57; // [rsp+50h] [rbp-78h] BYREF
  char v58; // [rsp+54h] [rbp-74h]
  __int64 v59; // [rsp+58h] [rbp-70h]
  int v60; // [rsp+60h] [rbp-68h] BYREF
  char v61; // [rsp+64h] [rbp-64h]
  __int64 v62; // [rsp+68h] [rbp-60h]
  __int64 v63[11]; // [rsp+70h] [rbp-58h] BYREF

  v6 = a1;
  v7 = qword_1C7F2C0;
  sub_182CEF0(qword_1C7F2C0, a3);
  v56 = a3 + 16;
  sub_182CBA0(v7, a3 + 16);
  v8 = *(_QWORD *)(a1 + 504);
  *(_BYTE *)(a3 + 20) &= ~1u;
  *(_DWORD *)(a3 + 16) = 1;
  v9 = *(unsigned int **)(v8 + 8LL * a2);
  if ( !v9 )
    return 1;
  v55 = &v9[*(v9 - 1)];
  if ( v55 == v9 )
    return 1;
  v48 = v9;
  for ( i = 0; ; ++i )
  {
    v11 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 8848LL) + *v48);
    if ( !v11 )
      break;
    if ( v11 == 1 )
    {
      v12 = *(_QWORD *)(v6 + 584);
      if ( v12 )
      {
        v13 = *(_DWORD *)(v12 - 4);
        if ( i >= v13 )
        {
          do
          {
LABEL_11:
            sub_17F6290(&v57, v13);
            v18 = *(_QWORD **)(v6 + 584);
            if ( v18 )
            {
              v19 = *((unsigned int *)v18 - 1);
              if ( (_DWORD)v19 == *((_DWORD *)v18 - 2) )
              {
                v49 = (unsigned int)(3 * v19 + 1) >> 1;
                v20 = 32 * v49 + 8;
                if ( 32 * (int)v19 + 8 >= (unsigned int)v20 || (unsigned int)v19 >= (unsigned int)(3 * v19 + 1) >> 1 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_139F3A(v63, "Overflow encountered when expanding vector", v4);
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v63);
                  sub_233E40((__int64)v63);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v21 = sub_186B270(v20);
                v22 = *(int **)(v6 + 584);
                v23 = (_DWORD *)v21;
                v18 = (_QWORD *)(v21 + 8);
                if ( v22 )
                {
                  v24 = (unsigned int)*(v22 - 1);
                  v25 = v21 + 8;
                  *(_DWORD *)(v21 + 4) = v24;
                  v26 = v22;
                  v27 = &v22[8 * v24];
                  if ( v22 != v27 )
                  {
                    do
                    {
                      v28 = *v26;
                      v29 = *((_BYTE *)v26 + 4);
                      v26 += 8;
                      v25 += 32;
                      *(_DWORD *)(v25 - 32) = v28;
                      *(_BYTE *)(v25 - 28) = v29 & 3 | *(_BYTE *)(v25 - 28) & 0xFC;
                      v30 = *((_QWORD *)v26 - 3);
                      *((_QWORD *)v26 - 3) = 0;
                      *(_QWORD *)(v25 - 24) = v30;
                      v31 = *((_BYTE *)v26 - 12);
                      *(_DWORD *)(v25 - 16) = *(v26 - 4);
                      *(_BYTE *)(v25 - 12) = v31 & 3 | *(_BYTE *)(v25 - 12) & 0xFC;
                      v32 = *((_QWORD *)v26 - 1);
                      *((_QWORD *)v26 - 1) = 0;
                      *(_QWORD *)(v25 - 8) = v32;
                    }
                    while ( v26 != v27 );
                  }
                  v33 = (unsigned int)*(v22 - 1);
                  v34 = &v22[8 * v33];
                  if ( (_DWORD)v33 )
                  {
                    v51 = v23;
                    v53 = v6;
                    v50 = v13;
                    v35 = v22;
                    v36 = v18;
                    do
                    {
                      v37 = qword_1C7F2C0;
                      sub_182CBA0(qword_1C7F2C0, v35);
                      v38 = v35 + 4;
                      v35 += 8;
                      sub_182CBA0(v37, v38);
                    }
                    while ( v35 != v34 );
                    v6 = v53;
                    v18 = v36;
                    v13 = v50;
                    v23 = v51;
                    v22 = *(int **)(v53 + 584);
                  }
                  v52 = v23;
                  sub_186B220(v22 - 2);
                  v23 = v52;
                  v14 = &v18[4 * (unsigned int)v52[1]];
                }
                else
                {
                  *(_DWORD *)(v21 + 4) = 0;
                  v14 = (_QWORD *)(v21 + 8);
                }
                *(_QWORD *)(v6 + 584) = v18;
                *v23 = v49;
              }
              else
              {
                v14 = &v18[4 * v19];
              }
            }
            else
            {
              v43 = (_QWORD *)sub_186B270(0x48u);
              v18 = v43 + 1;
              *v43 = 2;
              *(_QWORD *)(v6 + 584) = v43 + 1;
              v14 = v43 + 1;
            }
            v15 = qword_1C7F2C0;
            ++v13;
            *(_DWORD *)v14 = v57;
            *((_BYTE *)v14 + 4) = v58 & 3 | *((_BYTE *)v14 + 4) & 0xFC;
            v16 = v59;
            v59 = 0;
            v14[1] = v16;
            *((_DWORD *)v14 + 4) = v60;
            *((_BYTE *)v14 + 20) = v61 & 3 | *((_BYTE *)v14 + 20) & 0xFC;
            v17 = v62;
            v62 = 0;
            v14[3] = v17;
            ++*((_DWORD *)v18 - 1);
            sub_182CBA0(v15, &v57);
            sub_182CBA0(v15, &v60);
          }
          while ( i >= v13 );
          v12 = *(_QWORD *)(v6 + 584);
        }
        v39 = qword_1C7F2C0;
        v40 = (int *)(32LL * i + v12);
        v41 = *v40;
        if ( *v40 )
        {
          if ( *(_DWORD *)a3 )
          {
            if ( (*(_BYTE *)(a3 + 20) & 1) != 0 || *(_DWORD *)(a3 + 16) != 1 || (v40[5] & 1) != 0 || v40[4] != 1 )
            {
              sub_1851D20(qword_1C7F2C0, a3, v40, a3);
            }
            else
            {
              sub_1831A80(qword_1C7F2C0, a3, v40, a3);
              sub_182CBA0(v39, v56);
              *(_BYTE *)(a3 + 20) &= ~1u;
              *(_DWORD *)(a3 + 16) = 1;
            }
          }
          else
          {
            if ( (v40[1] & 1) != 0 )
            {
              v47 = v40;
              sub_182C690(qword_1C7F2C0, a3, v40);
              v40 = v47;
            }
            else
            {
              *(_BYTE *)(a3 + 4) &= ~1u;
              *(_DWORD *)a3 = v41;
            }
            if ( (v40[5] & 1) != 0 )
            {
              sub_182C690(v39, v56, v40 + 4);
            }
            else
            {
              v46 = v40[4];
              *(_BYTE *)(a3 + 20) &= ~1u;
              *(_DWORD *)(a3 + 16) = v46;
            }
          }
        }
        else
        {
          v44 = *(_BYTE *)(a3 + 4);
          if ( (v44 & 1) != 0 )
            sub_182C690(qword_1C7F2C0, a3, a3);
          else
            *(_BYTE *)(a3 + 4) = v44 & 0xFE;
          v45 = *(_BYTE *)(a3 + 20);
          if ( (v45 & 1) != 0 )
            sub_182C690(v39, v56, v56);
          else
            *(_BYTE *)(a3 + 20) = v45 & 0xFE;
        }
        goto LABEL_29;
      }
      v13 = 0;
      goto LABEL_11;
    }
LABEL_29:
    if ( v55 == ++v48 )
      return 1;
  }
  return 0;
}

