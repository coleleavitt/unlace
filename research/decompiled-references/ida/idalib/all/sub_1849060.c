void __fastcall sub_1849060(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned int v3; // eax
  int v4; // edx
  int v5; // eax
  unsigned __int64 v8; // r8
  int v9; // eax
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rdx
  __int64 v12; // r14
  _QWORD *v13; // r15
  __int64 *v14; // rax
  __int64 v15; // rsi
  char ***v16; // r8
  char ***v17; // r15
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 v21; // r13
  __int64 v22; // rax
  unsigned int v23; // r10d
  void *v24; // rax
  size_t v25; // rdx
  __int64 v26; // rbp
  void *v27; // rdi
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // r14
  __int64 v32; // rax
  unsigned int v33; // r10d
  void *v34; // rax
  size_t v35; // rdx
  __int64 v36; // rbx
  void *v37; // rdi
  int v38; // edx
  __int64 v39; // [rsp+0h] [rbp-E8h]
  char ***v40; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v41; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v42; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v43; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v44; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v45; // [rsp+10h] [rbp-D8h]
  unsigned int v46; // [rsp+1Ch] [rbp-CCh]
  unsigned int v47; // [rsp+1Ch] [rbp-CCh]
  unsigned int v48; // [rsp+1Ch] [rbp-CCh]
  unsigned int v49; // [rsp+1Ch] [rbp-CCh]
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v51[184]; // [rsp+30h] [rbp-B8h] BYREF

  if ( a1 == a2 )
    return;
  v2 = *(_QWORD *)a1;
  v3 = *(_DWORD *)(a2 + 8);
  if ( *(_QWORD *)a1 != a1 + 16 && *(_QWORD *)a2 != a2 + 16 )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)a2 = v2;
    v4 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 8) = v3;
    *(_DWORD *)(a2 + 8) = v4;
    v5 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a2 + 12) = v5;
    return;
  }
  if ( *(_DWORD *)(a1 + 12) < v3 )
  {
    sub_1848F40(a1, v3);
    v8 = *(unsigned int *)(a1 + 8);
    v9 = v8;
    if ( *(_DWORD *)(a2 + 12) >= (unsigned int)v8 )
      goto LABEL_7;
LABEL_31:
    sub_1848F40(a2, v8);
    v8 = *(unsigned int *)(a1 + 8);
    v9 = *(_DWORD *)(a1 + 8);
    goto LABEL_7;
  }
  v8 = *(unsigned int *)(a1 + 8);
  v9 = v8;
  if ( *(_DWORD *)(a2 + 12) < (unsigned int)v8 )
    goto LABEL_31;
LABEL_7:
  v10 = *(unsigned int *)(a2 + 8);
  v11 = v8;
  if ( v10 <= v8 )
    v11 = *(unsigned int *)(a2 + 8);
  v45 = v11;
  if ( v11 )
  {
    v12 = 0;
    v39 = 152 * v11;
    do
    {
      while ( 1 )
      {
        v13 = (_QWORD *)(v12 + *(_QWORD *)a2);
        v14 = (__int64 *)(v12 + *(_QWORD *)a1);
        v15 = *v14;
        v16 = (char ***)(v14 + 1);
        *v14 = *v13;
        LODWORD(v14) = *((_DWORD *)v14 + 4);
        *v13 = v15;
        ptr[0] = v51;
        ptr[1] = (void *)0x2000000000LL;
        if ( (_DWORD)v14 )
        {
          v40 = v16;
          sub_1744C20((char ***)ptr, v16);
          v16 = v40;
        }
        v17 = (char ***)(v13 + 1);
        sub_1744C20(v16, v17);
        sub_1744C20(v17, (char ***)ptr);
        if ( ptr[0] == v51 )
          break;
        free(ptr[0]);
        v12 += 152;
        if ( v12 == v39 )
          goto LABEL_15;
      }
      v12 += 152;
    }
    while ( v39 != v12 );
LABEL_15:
    v8 = *(unsigned int *)(a1 + 8);
    v10 = *(unsigned int *)(a2 + 8);
    v9 = *(_DWORD *)(a1 + 8);
  }
  if ( v10 < v8 )
  {
    v18 = *(_QWORD *)a2 + 152 * v10;
    v19 = *(_QWORD *)a1;
    v20 = *(_QWORD *)a1 + 152 * v8;
    v21 = *(_QWORD *)a1 + 152 * v45;
    if ( v21 != v20 )
    {
      do
      {
        v22 = *(_QWORD *)v21;
        *(_DWORD *)(v18 + 16) = 0;
        *(_DWORD *)(v18 + 20) = 32;
        *(_QWORD *)v18 = v22;
        v23 = *(_DWORD *)(v21 + 16);
        v24 = (void *)(v18 + 24);
        *(_QWORD *)(v18 + 8) = v18 + 24;
        if ( v23 && v18 + 8 != v21 + 8 )
        {
          v25 = 4LL * v23;
          if ( v23 <= 0x20uLL
            || (v47 = v23,
                v42 = v8,
                sub_2237220(v18 + 8, v18 + 24, v23, 4),
                v24 = *(void **)(v18 + 8),
                v8 = v42,
                v23 = v47,
                (v25 = 4LL * *(unsigned int *)(v21 + 16)) != 0) )
          {
            v46 = v23;
            v41 = v8;
            memcpy(v24, *(const void **)(v21 + 8), v25);
            v23 = v46;
            v8 = v41;
          }
          *(_DWORD *)(v18 + 16) = v23;
        }
        v21 += 152;
        v18 += 152;
      }
      while ( v20 != v21 );
      v19 = *(_QWORD *)a1;
      v9 = v8 + *(_DWORD *)(a2 + 8) - v10;
      v20 = *(_QWORD *)a1 + 152 * v45;
    }
    *(_DWORD *)(a2 + 8) = v9;
    v26 = v19 + 152LL * *(unsigned int *)(a1 + 8);
    while ( v26 != v20 )
    {
      while ( 1 )
      {
        v26 -= 152;
        v27 = *(void **)(v26 + 8);
        if ( v27 == (void *)(v26 + 24) )
          break;
        free(v27);
        if ( v26 == v20 )
          goto LABEL_37;
      }
    }
LABEL_37:
    *(_DWORD *)(a1 + 8) = v45;
  }
  else if ( v10 > v8 )
  {
    v28 = *(_QWORD *)a1 + 152 * v8;
    v29 = *(_QWORD *)a2;
    v30 = *(_QWORD *)a2 + 152 * v10;
    v31 = *(_QWORD *)a2 + 152 * v45;
    if ( v31 == v30 )
    {
      v38 = v8;
    }
    else
    {
      do
      {
        v32 = *(_QWORD *)v31;
        *(_DWORD *)(v28 + 16) = 0;
        *(_DWORD *)(v28 + 20) = 32;
        *(_QWORD *)v28 = v32;
        v33 = *(_DWORD *)(v31 + 16);
        v34 = (void *)(v28 + 24);
        *(_QWORD *)(v28 + 8) = v28 + 24;
        if ( v33 && v28 + 8 != v31 + 8 )
        {
          v35 = 4LL * v33;
          if ( v33 <= 0x20uLL
            || (v49 = v33,
                v44 = v8,
                sub_2237220(v28 + 8, v28 + 24, v33, 4),
                v34 = *(void **)(v28 + 8),
                v8 = v44,
                v33 = v49,
                (v35 = 4LL * *(unsigned int *)(v31 + 16)) != 0) )
          {
            v48 = v33;
            v43 = v8;
            memcpy(v34, *(const void **)(v31 + 8), v35);
            v33 = v48;
            v8 = v43;
          }
          *(_DWORD *)(v28 + 16) = v33;
        }
        v31 += 152;
        v28 += 152;
      }
      while ( v30 != v31 );
      v29 = *(_QWORD *)a2;
      v38 = *(_DWORD *)(a1 + 8);
      v30 = *(_QWORD *)a2 + 152 * v45;
    }
    *(_DWORD *)(a1 + 8) = v38 + v10 - v8;
    v36 = v29 + 152LL * *(unsigned int *)(a2 + 8);
    while ( v36 != v30 )
    {
      while ( 1 )
      {
        v36 -= 152;
        v37 = *(void **)(v36 + 8);
        if ( v37 == (void *)(v36 + 24) )
          break;
        free(v37);
        if ( v36 == v30 )
          goto LABEL_53;
      }
    }
LABEL_53:
    *(_DWORD *)(a2 + 8) = v45;
  }
}
