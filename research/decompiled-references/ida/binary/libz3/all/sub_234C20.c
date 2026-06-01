void __fastcall sub_234C20(__int64 *a1, unsigned int *a2)
{
  unsigned int v3; // eax
  _DWORD *v4; // rdx
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // esi
  unsigned int *v11; // r12
  unsigned int v12; // eax
  unsigned int *v13; // r12
  unsigned int v14; // eax
  unsigned int v15; // r12d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rdi
  _QWORD *v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  unsigned int **v26; // rcx
  int v27; // eax
  unsigned int v28; // r13d
  unsigned int v29; // ecx
  unsigned int *v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // r13d
  unsigned int v33; // eax
  unsigned int *v34; // rax
  char **exception; // rbp
  __int64 v36; // rdx
  char **v37; // rbp
  __int64 v38; // rdx
  __int64 v39[9]; // [rsp-48h] [rbp-48h] BYREF

  if ( a2 )
  {
    v3 = (*a2 + 0x3FFFFFFF) & 0x3FFFFFFF | *a2 & 0xC0000000;
    *a2 = v3;
    if ( (v3 & 0x3FFFFFFF) == 0 )
    {
      v4 = (_DWORD *)a1[2];
      if ( v4 )
      {
        v6 = (unsigned int)*(v4 - 1);
        if ( (_DWORD)v6 == *(v4 - 2) )
        {
          v15 = (unsigned int)(3 * v6 + 1) >> 1;
          v16 = 8 * v15 + 8;
          if ( 8 * (int)v6 + 8 >= (unsigned int)v16 || (unsigned int)v6 >= v15 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_A3E10(v39, "Overflow encountered when expanding vector", v36);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v39);
            sub_233E40((__int64)v39);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v17 = (unsigned int *)sub_186B300(v4 - 2, v16);
          v18 = v17[1];
          v4 = v17 + 2;
          *v17 = v15;
          a1[2] = (__int64)(v17 + 2);
          v7 = v18 + 1;
          *(_QWORD *)&v17[2 * v18 + 2] = a2;
          v17[1] = v18 + 1;
        }
        else
        {
          v7 = v6 + 1;
          *(_QWORD *)&v4[2 * v6] = a2;
          *(v4 - 1) = v6 + 1;
        }
      }
      else
      {
        v22 = (_QWORD *)sub_186B270(0x18u);
        v4 = v22 + 1;
        *v22 = 0x100000002LL;
        v7 = 1;
        a1[2] = (__int64)(v22 + 1);
        v22[1] = a2;
      }
      while ( v7 )
      {
        v8 = (unsigned int)(v7 - 1);
        v9 = *(_QWORD *)&v4[2 * v8];
        v10 = v7 - 1;
        *(v4 - 1) = v8;
        if ( *(char *)(v9 + 3) < 0 )
        {
          v19 = *(_QWORD *)(v9 + 8);
          if ( v19 )
          {
            v20 = *a1;
            if ( (*(_DWORD *)(v19 + 8))-- == 1 )
              sub_15D7BC0(v20, v19);
          }
          sub_17E9C40(a1[1], 16, v9);
        }
        else
        {
          v11 = *(unsigned int **)(v9 + 8);
          v12 = (*v11 + 0x3FFFFFFF) & 0x3FFFFFFF | *v11 & 0xC0000000;
          *v11 = v12;
          if ( (v12 & 0x3FFFFFFF) == 0 )
          {
            if ( v10 == *(v4 - 2) )
            {
              v32 = (3 * v10 + 1) >> 1;
              v33 = 8 * v32 + 8;
              if ( 8 * v7 >= v33 || v10 >= v32 )
              {
LABEL_35:
                v37 = (char **)__cxa_allocate_exception(0x28u);
                sub_A3E10(v39, "Overflow encountered when expanding vector", v38);
                *v37 = (char *)off_1C63128;
                sub_2333C0(v37 + 1, v39);
                sub_233E40((__int64)v39);
                __cxa_throw(v37, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v34 = (unsigned int *)sub_186B300(v4 - 2, v33);
              v4 = v34 + 2;
              *v34 = v32;
              a1[2] = (__int64)(v34 + 2);
            }
            v27 = *(v4 - 1);
            *(_QWORD *)&v4[2 * v27] = v11;
            *(v4 - 1) = v27 + 1;
          }
          v13 = *(unsigned int **)(v9 + 16);
          v14 = (*v13 + 0x3FFFFFFF) & 0x3FFFFFFF | *v13 & 0xC0000000;
          *v13 = v14;
          if ( (v14 & 0x3FFFFFFF) == 0 )
          {
            v23 = *(v4 - 1);
            if ( v23 == *(v4 - 2) )
            {
              v28 = (3 * v23 + 1) >> 1;
              v29 = 8 * v28 + 8;
              if ( 8 * v23 + 8 >= v29 || v23 >= v28 )
                goto LABEL_35;
              v30 = (unsigned int *)sub_186B300(v4 - 2, v29);
              v31 = v30[1];
              v4 = v30 + 2;
              *v30 = v28;
              a1[2] = (__int64)(v30 + 2);
              LODWORD(v30) = v31;
              v26 = (unsigned int **)&v4[2 * v31];
              v25 = (_DWORD)v30 + 1;
            }
            else
            {
              v24 = v23;
              v25 = v23 + 1;
              v26 = (unsigned int **)&v4[2 * v24];
            }
            *v26 = v13;
            *(v4 - 1) = v25;
          }
          sub_17E9C40(a1[1], 24, v9);
        }
        v4 = (_DWORD *)a1[2];
        if ( !v4 )
          return;
        v7 = *(v4 - 1);
      }
    }
  }
}

