/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8FB20
// Address: 0x000000000008FB20

//----- (000000000008FB20) ----------------------------------------------------
_BYTE *__fastcall sub_8FB20(_QWORD *a1, __int64 a2, const void *a3, int a4)
{
  int v4; // r14d
  __int64 v5; // r13
  _BYTE *v7; // rbp
  _QWORD *v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  _QWORD *v11; // rbx
  char *v12; // r15
  __int64 v13; // r13
  unsigned __int64 v14; // r14
  void *v15; // rdi
  void *v16; // rdi
  __int64 v17; // r15
  size_t v18; // rax
  size_t v19; // r13
  int v20; // r12d
  char **v21; // rbp
  size_t v22; // r14
  char *v23; // rdi
  _BYTE *v25; // [rsp+0h] [rbp-58h]
  int v27; // [rsp+10h] [rbp-48h]
  __int64 v28; // [rsp+18h] [rbp-40h]

  v4 = a4;
  v5 = a2;
  v7 = qalloc((unsigned int)(a4 + 1));
  if ( v7 )
  {
    v8 = a1 + 29;
    v9 = a1[30];
    v10 = a1[31];
    if ( v10 >= v9 + 1 )
    {
      v11 = (_QWORD *)*v8;
    }
    else
    {
      v11 = qvector_reserve((__int64)v8, nullptr, v9 + 1, 0x48u);
      v28 = a1[31];
      a1[31] = v10;
      v12 = (char *)a1[29];
      v13 = a1[30] - 1LL;
      if ( v13 >= 0 )
      {
        v27 = v4;
        v14 = 0;
        do
        {
          v11[v14 / 8] = *(_QWORD *)&v12[v14];
          *(_QWORD *)&v12[v14] = 0;
          v11[v14 / 8 + 1] = *(_QWORD *)&v12[v14 + 8];
          *(_QWORD *)&v12[v14 + 8] = 0;
          v11[v14 / 8 + 2] = *(_QWORD *)&v12[v14 + 16];
          *(_QWORD *)&v12[v14 + 16] = 0;
          v11[v14 / 8 + 3] = *(_QWORD *)&v12[v14 + 24];
          *(_QWORD *)&v12[v14 + 24] = 0;
          v11[v14 / 8 + 4] = *(_QWORD *)&v12[v14 + 32];
          *(_QWORD *)&v12[v14 + 32] = 0;
          v11[v14 / 8 + 5] = *(_QWORD *)&v12[v14 + 40];
          *(_QWORD *)&v12[v14 + 40] = 0;
          v11[v14 / 8 + 8] = *(_QWORD *)&v12[v14 + 64];
          *(_OWORD *)&v11[v14 / 8 + 6] = *(_OWORD *)&v12[v14 + 48];
          v15 = *(void **)&v12[v14 + 24];
          if ( v15 )
          {
            *(_QWORD *)&v12[v14 + 32] = 0;
            qfree(v15);
            *(_QWORD *)&v12[v14 + 24] = 0;
            *(_QWORD *)&v12[v14 + 40] = 0;
          }
          v16 = *(void **)&v12[v14];
          if ( v16 )
          {
            *(_QWORD *)&v12[v14 + 8] = 0;
            qfree(v16);
            *(_QWORD *)&v12[v14] = 0;
            *(_QWORD *)&v12[v14 + 16] = 0;
          }
          v14 += 72LL;
          --v13;
        }
        while ( v13 >= 0 );
        v12 = (char *)a1[29];
        v4 = v27;
      }
      qfree(v12);
      a1[29] = v11;
      a1[31] = v28;
      v9 = a1[30];
      v5 = a2;
    }
    v17 = 9 * v9;
    *(_OWORD *)&v11[v17 + 4] = 0;
    *(_OWORD *)&v11[v17 + 2] = 0;
    *(_OWORD *)&v11[v17] = 0;
    ++a1[30];
    v11[v17 + 8] = v5;
    if ( a3 && (v18 = strlen((const char *)a3)) != 0 )
    {
      v19 = v18;
      v25 = v7;
      v20 = v4;
      v21 = (char **)&v11[v17 + 3];
      v22 = v18 + 1;
      if ( v11[v17 + 5] >= v18 + 1 )
      {
        v23 = *v21;
      }
      else
      {
        v23 = (char *)qvector_reserve((__int64)&v11[v17 + 3], *v21, v18 + 1, 1u);
        *v21 = v23;
      }
      v11[v17 + 4] = v22;
      memmove(v23, a3, v19);
      (*v21)[v19] = 0;
      v4 = v20;
      v7 = v25;
    }
    else
    {
      v11[v17 + 4] = 0;
    }
    LODWORD(v11[v17 + 6]) = v4;
    v11[v17 + 7] = v7;
    v7[v4] = 0;
  }
  return v7;
}
