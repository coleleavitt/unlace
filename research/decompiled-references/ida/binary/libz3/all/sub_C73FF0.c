void __fastcall sub_C73FF0(__int64 a1)
{
  __int64 *v1; // r13
  __int64 v2; // rax
  unsigned int *v3; // rbp
  unsigned int *v4; // rbx
  _QWORD *v5; // r12
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int *v9; // rax
  unsigned int v10; // esi
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rax
  unsigned int *v16; // rax
  __int64 v17; // r15
  __int64 v18; // rbx
  void *v19; // r14
  __int64 v20; // rsi
  void *v21; // rbx
  unsigned int v22; // r12d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rax
  _DWORD *v26; // rdx
  __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // rsi
  __int64 v30; // rbx
  unsigned int v31; // eax
  unsigned int *v32; // r14
  unsigned int v33; // esi
  unsigned int *v34; // r14
  unsigned int v35; // eax
  __int64 v36; // rsi
  __int64 v37; // rdi
  unsigned int v39; // ecx
  size_t v40; // rsi
  unsigned int v41; // r15d
  unsigned int *v42; // rax
  __int64 v43; // rsi
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  unsigned int v46; // ecx
  __int64 v47; // rsi
  int v48; // ecx
  unsigned int **v49; // rsi
  _DWORD *v50; // rax
  int v51; // edx
  __int64 v52; // rax
  unsigned int v53; // r8d
  size_t v54; // rsi
  unsigned int v55; // r15d
  unsigned int *v56; // rcx
  __int64 v57; // rsi
  unsigned int v58; // r9d
  size_t v59; // rsi
  unsigned int v60; // r15d
  unsigned int *v61; // rdx
  _QWORD *v62; // rax
  char **exception; // rbp
  __int64 v64; // rdx
  _QWORD *v65; // [rsp+8h] [rbp-70h]
  __int64 *v66; // [rsp+10h] [rbp-68h]
  __int64 v67; // [rsp+18h] [rbp-60h]
  __int64 v68[11]; // [rsp+20h] [rbp-58h] BYREF

  v1 = *(__int64 **)(a1 + 544);
  v65 = (_QWORD *)a1;
  if ( !v1 )
    return;
  v2 = *((unsigned int *)v1 - 1);
  if ( !(_DWORD)v2 )
    goto LABEL_23;
  v66 = &v1[v2];
  v67 = a1 + 8;
  do
  {
    v3 = (unsigned int *)*v1;
    v4 = *(unsigned int **)(*v1 + 72);
    if ( v4 )
    {
      v5 = (_QWORD *)*v65;
      v6 = (*v4 + 0x3FFFFFFF) & 0x3FFFFFFF | *v4 & 0xC0000000;
      *v4 = v6;
      if ( (v6 & 0x3FFFFFFF) == 0 )
      {
        v26 = (_DWORD *)v5[83];
        if ( v26 )
        {
          v27 = (unsigned int)*(v26 - 1);
          if ( (_DWORD)v27 != *(v26 - 2) )
          {
            v28 = v27 + 1;
            *(_QWORD *)&v26[2 * v27] = v4;
            *(v26 - 1) = v27 + 1;
            goto LABEL_31;
          }
          v39 = (unsigned int)(3 * v27 + 1) >> 1;
          v40 = 8 * v39 + 8;
          v41 = v39;
          if ( 8 * (int)v27 + 8 < (unsigned int)v40 && (unsigned int)v27 < v39 )
          {
            a1 = (__int64)(v26 - 2);
            v42 = (unsigned int *)sub_186B300(v26 - 2, v40);
            v43 = v42[1];
            v26 = v42 + 2;
            v5[83] = v42 + 2;
            v28 = v43 + 1;
            *v42 = v41;
            *(_QWORD *)&v42[2 * v43 + 2] = v4;
            v42[1] = v43 + 1;
            goto LABEL_31;
          }
LABEL_62:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_161886(v68, "Overflow encountered when expanding vector", v64);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v68);
          sub_233E40((__int64)v68);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        a1 = 24;
        v52 = sub_186B270(0x18u);
        v28 = 1;
        v26 = (_DWORD *)(v52 + 8);
        *(_QWORD *)v52 = 2;
        v5[83] = v52 + 8;
        *(_QWORD *)(v52 + 8) = v4;
        *(_DWORD *)(v52 + 4) = 1;
LABEL_31:
        while ( v28 )
        {
          v29 = (unsigned int)(v28 - 1);
          v30 = *(_QWORD *)&v26[2 * v29];
          v31 = v28 - 1;
          *(v26 - 1) = v29;
          if ( *(char *)(v30 + 3) < 0 )
          {
            v36 = *(_QWORD *)(v30 + 8);
            if ( v36 )
            {
              v37 = v5[81];
              if ( (*(_DWORD *)(v36 + 8))-- == 1 )
                sub_15D7BC0(v37, v36);
            }
            a1 = v5[82];
            sub_17E9C40(a1, 16, v30);
          }
          else
          {
            v32 = *(unsigned int **)(v30 + 8);
            v33 = (*v32 + 0x3FFFFFFF) & 0x3FFFFFFF | *v32 & 0xC0000000;
            *v32 = v33;
            if ( (v33 & 0x3FFFFFFF) == 0 )
            {
              if ( v31 == *(v26 - 2) )
              {
                v58 = (3 * v31 + 1) >> 1;
                v59 = 8 * v58 + 8;
                v60 = v58;
                if ( 8 * v28 >= (unsigned int)v59 || v31 >= v58 )
                  goto LABEL_62;
                v61 = (unsigned int *)sub_186B300(v26 - 2, v59);
                v50 = v61 + 2;
                v5[83] = v61 + 2;
                *v61 = v60;
              }
              else
              {
                v50 = (_DWORD *)v5[83];
              }
              v51 = *(v50 - 1);
              *(_QWORD *)&v50[2 * v51] = v32;
              *(v50 - 1) = v51 + 1;
            }
            v34 = *(unsigned int **)(v30 + 16);
            v35 = (*v34 + 0x3FFFFFFF) & 0x3FFFFFFF | *v34 & 0xC0000000;
            *v34 = v35;
            if ( (v35 & 0x3FFFFFFF) == 0 )
            {
              v45 = (_QWORD *)v5[83];
              if ( v45 )
              {
                v46 = *((_DWORD *)v45 - 1);
                if ( v46 == *((_DWORD *)v45 - 2) )
                {
                  v53 = (3 * v46 + 1) >> 1;
                  v54 = 8 * v53 + 8;
                  v55 = v53;
                  if ( 8 * v46 + 8 >= (unsigned int)v54 || v46 >= v53 )
                    goto LABEL_62;
                  v56 = (unsigned int *)sub_186B300(v45 - 1, v54);
                  v45 = v56 + 2;
                  v57 = v56[1];
                  v5[83] = v56 + 2;
                  *v56 = v55;
                  LODWORD(v56) = v57;
                  v49 = (unsigned int **)&v45[v57];
                  v48 = (_DWORD)v56 + 1;
                }
                else
                {
                  v47 = v46;
                  v48 = v46 + 1;
                  v49 = (unsigned int **)&v45[v47];
                }
              }
              else
              {
                v62 = (_QWORD *)sub_186B270(0x18u);
                v48 = 1;
                *v62 = 2;
                v45 = v62 + 1;
                v5[83] = v45;
                v49 = (unsigned int **)v45;
              }
              *v49 = v34;
              *((_DWORD *)v45 - 1) = v48;
            }
            a1 = v5[82];
            sub_17E9C40(a1, 24, v30);
          }
          v26 = (_DWORD *)v5[83];
          if ( !v26 )
            break;
          v28 = *(v26 - 1);
        }
      }
    }
    v7 = *v3;
    v8 = v65[99];
    if ( v8 )
    {
      if ( v7 < *(_DWORD *)(v8 - 4) )
      {
        v9 = (unsigned int *)(v8 + 4LL * v7);
        v10 = *v9;
        if ( *v9 != -1 )
        {
          *v9 = -1;
          v11 = v65[100];
          if ( v11 )
          {
            v12 = (unsigned int)(*(_DWORD *)(v11 - 4) - 1);
            if ( v10 == (_DWORD)v12 )
            {
LABEL_13:
              *(_DWORD *)(v11 - 4) = v12;
              v7 = *v3;
              goto LABEL_14;
            }
            v13 = 8 * v12;
          }
          else
          {
            v13 = 0x7FFFFFFF8LL;
          }
          v12 = *(_QWORD *)(v11 + v13);
          a1 = v10;
          *(_QWORD *)(v11 + 8LL * v10) = v12;
          *(_DWORD *)(v8 + 4LL * *(unsigned int *)v12) = v10;
          LODWORD(v12) = *(_DWORD *)(v11 - 4) - 1;
          goto LABEL_13;
        }
      }
    }
LABEL_14:
    if ( !(unsigned __int8)sub_186AF10(a1) )
    {
      v14 = (_QWORD *)v65[91];
      if ( v14 )
      {
        v15 = *((unsigned int *)v14 - 1);
        if ( (_DWORD)v15 == *((_DWORD *)v14 - 2) )
        {
          v22 = (unsigned int)(3 * v15 + 1) >> 1;
          v23 = 4 * v22 + 8;
          if ( 4 * (int)v15 + 8 >= (unsigned int)v23 || (unsigned int)v15 >= v22 )
            goto LABEL_62;
          v24 = (unsigned int *)sub_186B300(v14 - 1, v23);
          v14 = v24 + 2;
          *v24 = v22;
          v25 = v24[1];
          v65[91] = v14;
          v16 = (unsigned int *)v14 + v25;
        }
        else
        {
          v16 = (unsigned int *)v14 + v15;
        }
      }
      else
      {
        v44 = (_QWORD *)sub_186B270(0x10u);
        v14 = v44 + 1;
        *v44 = 2;
        v65[91] = v44 + 1;
        v16 = (unsigned int *)(v44 + 1);
      }
      *v16 = v7;
      ++*((_DWORD *)v14 - 1);
    }
    v17 = *((_QWORD *)v3 + 4);
    v18 = v17 + 32LL * v3[2];
    while ( v18 != v17 )
    {
      v19 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v17);
      v20 = v17 + 16;
      v17 += 32;
      sub_182CBA0(v19, v20);
    }
    v21 = qword_1C7F2C0;
    ++v1;
    sub_182CBA0(qword_1C7F2C0, v3 + 10);
    sub_182CBA0(v21, v3 + 14);
    a1 = v67;
    sub_17E9C40(v67, 4 * (9 * v3[2] + (v3[1] & 0x1FFFFFFF) + 20), v3);
  }
  while ( v1 != v66 );
  v1 = (__int64 *)v65[68];
  if ( v1 )
LABEL_23:
    *((_DWORD *)v1 - 1) = 0;
}

