__int64 __fastcall sub_1EAEE00(__int64 a1, __int64 a2, _QWORD **a3, __int64 a4)
{
  const void **v7; // rdx
  _QWORD *v8; // rbx
  void *v9; // r8
  _BYTE *v10; // r14
  _BYTE *v11; // r13
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r12
  char ***v14; // rdx
  __int64 v15; // rax
  char ***v17; // r15
  __int64 v18; // rax
  const void **v19; // rdx
  __int64 v20; // r14
  _QWORD *v21; // rbx
  _BYTE *v22; // r9
  void *v23; // r8
  _BYTE *v24; // r13
  unsigned __int64 v25; // rax
  size_t v26; // r10
  unsigned __int64 v27; // r12
  char ***v28; // r13
  char ***v29; // rbx
  __int64 v30; // r12
  char **v31; // rax
  char ***v32; // r12
  char ***v33; // rdi
  int v34; // r12d
  int v35; // eax
  __int64 v36; // rax
  _BYTE *v37; // [rsp+0h] [rbp-58h]
  size_t v38; // [rsp+8h] [rbp-50h]
  __int64 v39[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( *(_DWORD *)(a1 + 12) <= *(_DWORD *)(a1 + 8) )
  {
    v17 = (char ***)(a1 + 16);
    v18 = sub_2237400(a1, a1 + 16, 0, 32, v39);
    v19 = *(const void ***)a4;
    v20 = v18;
    v25 = *(_QWORD *)(a4 + 8);
    v21 = (_QWORD *)(v20 + 32LL * *(unsigned int *)(a1 + 8));
    *v21 = **a3;
    v22 = *v19;
    v23 = v21 + 3;
    v24 = *(_BYTE **)v25;
    v21[1] = v21 + 3;
    v21[2] = 0x100000000LL;
    LODWORD(v25) = 0;
    v26 = v22 - v24;
    v27 = (v22 - v24) >> 3;
    if ( v27 > 1 )
    {
      v38 = v22 - v24;
      v37 = v22;
      sub_2237220(v21 + 1, v21 + 3, (v22 - v24) >> 3, 8);
      v25 = *((unsigned int *)v21 + 4);
      v26 = v38;
      v22 = v37;
      v23 = (void *)(v21[1] + 8 * v25);
    }
    if ( v22 != v24 )
    {
      memcpy(v23, v24, v26);
      LODWORD(v25) = *((_DWORD *)v21 + 4);
    }
    v28 = *(char ****)a1;
    *((_DWORD *)v21 + 4) = v25 + v27;
    v29 = &v28[4 * *(unsigned int *)(a1 + 8)];
    if ( v28 != v29 )
    {
      v30 = v20;
      do
      {
        v31 = *v28;
        *(_DWORD *)(v30 + 16) = 0;
        *(_DWORD *)(v30 + 20) = 1;
        *(_QWORD *)v30 = v31;
        *(_QWORD *)(v30 + 8) = v30 + 24;
        if ( *((_DWORD *)v28 + 4) )
          sub_9B8670((char ***)(v30 + 8), v28 + 1);
        v28 += 4;
        v30 += 32;
      }
      while ( v29 != v28 );
      v32 = *(char ****)a1;
      v29 = (char ***)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
      if ( *(char ****)a1 != v29 )
      {
        do
        {
          while ( 1 )
          {
            v29 -= 4;
            v33 = (char ***)v29[1];
            if ( v33 == v29 + 3 )
              break;
            free(v33);
            if ( v29 == v32 )
              goto LABEL_19;
          }
        }
        while ( v29 != v32 );
LABEL_19:
        v29 = *(char ****)a1;
      }
    }
    v34 = v39[0];
    if ( v17 != v29 )
      free(v29);
    v35 = *(_DWORD *)(a1 + 8);
    *(_QWORD *)a1 = v20;
    *(_DWORD *)(a1 + 12) = v34;
    v36 = (unsigned int)(v35 + 1);
    *(_DWORD *)(a1 + 8) = v36;
    return v20 + 32 * v36 - 32;
  }
  else
  {
    v12 = *(_QWORD *)(a4 + 8);
    v7 = *(const void ***)a4;
    v8 = (_QWORD *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
    v9 = v8 + 3;
    *v8 = **a3;
    v10 = *v7;
    v11 = *(_BYTE **)v12;
    v8[1] = v8 + 3;
    v8[2] = 0x100000000LL;
    LODWORD(v12) = 0;
    v13 = (v10 - v11) >> 3;
    if ( v13 > 1 )
    {
      sub_2237220(v8 + 1, v8 + 3, (v10 - v11) >> 3, 8);
      v12 = *((unsigned int *)v8 + 4);
      v9 = (void *)(v8[1] + 8 * v12);
    }
    if ( v10 != v11 )
    {
      memcpy(v9, v11, v10 - v11);
      LODWORD(v12) = *((_DWORD *)v8 + 4);
    }
    v14 = *(char ****)a1;
    *((_DWORD *)v8 + 4) = v12 + v13;
    v15 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    *(_DWORD *)(a1 + 8) = v15;
    return (__int64)&v14[4 * v15 - 4];
  }
}
