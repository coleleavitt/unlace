/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6F370
// Address: 0x000000000006F370

//----- (000000000006F370) ----------------------------------------------------
size_t __fastcall sub_6F370(_QWORD *a1, const void *a2, const char *a3)
{
  char **v4; // r13
  size_t result; // rax
  unsigned __int64 v6; // rbp
  char *v7; // rbx
  char *v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r15
  void *v11; // rdi
  void *v12; // rdi
  __int64 v13; // r14
  size_t v14; // r13
  unsigned __int64 v15; // r12
  bool v16; // cf
  void *v17; // rax
  const char *v18; // rbp
  size_t v19; // r12
  const char *v20; // r13
  char **v21; // r15
  char *v22; // rbp
  char *v23; // rdi
  __int64 v25; // [rsp+8h] [rbp-40h]

  v4 = (char **)(a1 + 11);
  result = a1[12];
  v6 = a1[13];
  if ( v6 >= result + 1 )
  {
    v7 = *v4;
  }
  else
  {
    v7 = (char *)qvector_reserve((__int64)(a1 + 11), nullptr, result + 1, 0x30u);
    v25 = a1[13];
    a1[13] = v6;
    v8 = (char *)a1[11];
    v9 = a1[12] - 1LL;
    if ( v9 >= 0 )
    {
      v10 = 0;
      do
      {
        *(_QWORD *)&v7[v10] = *(_QWORD *)&v8[v10];
        *(_QWORD *)&v8[v10] = 0;
        *(_QWORD *)&v7[v10 + 8] = *(_QWORD *)&v8[v10 + 8];
        *(_QWORD *)&v8[v10 + 8] = 0;
        *(_QWORD *)&v7[v10 + 16] = *(_QWORD *)&v8[v10 + 16];
        *(_QWORD *)&v8[v10 + 16] = 0;
        *(_QWORD *)&v7[v10 + 24] = *(_QWORD *)&v8[v10 + 24];
        *(_QWORD *)&v8[v10 + 24] = 0;
        *(_QWORD *)&v7[v10 + 32] = *(_QWORD *)&v8[v10 + 32];
        *(_QWORD *)&v8[v10 + 32] = 0;
        *(_QWORD *)&v7[v10 + 40] = *(_QWORD *)&v8[v10 + 40];
        *(_QWORD *)&v8[v10 + 40] = 0;
        v11 = *(void **)&v8[v10 + 24];
        if ( v11 )
        {
          *(_QWORD *)&v8[v10 + 32] = 0;
          qfree(v11);
          *(_QWORD *)&v8[v10 + 24] = 0;
          *(_QWORD *)&v8[v10 + 40] = 0;
        }
        v12 = *(void **)&v8[v10];
        if ( v12 )
        {
          *(_QWORD *)&v8[v10 + 8] = 0;
          qfree(v12);
          *(_QWORD *)&v8[v10] = 0;
          *(_QWORD *)&v8[v10 + 16] = 0;
        }
        v10 += 48;
        --v9;
      }
      while ( v9 >= 0 );
      v8 = *v4;
    }
    qfree(v8);
    a1[11] = v7;
    a1[13] = v25;
    result = a1[12];
  }
  v13 = 48 * result;
  *(_OWORD *)&v7[v13 + 32] = 0;
  *(_OWORD *)&v7[v13 + 16] = 0;
  *(_OWORD *)&v7[v13] = 0;
  ++a1[12];
  if ( a2 && (result = strlen((const char *)a2)) != 0 )
  {
    v14 = result;
    v15 = result + 1;
    v16 = *(_QWORD *)&v7[v13 + 16] < result + 1;
    v17 = *(void **)&v7[v13];
    if ( v16 )
    {
      v17 = qvector_reserve((__int64)&v7[v13], *(char **)&v7[v13], v15, 1u);
      *(_QWORD *)&v7[v13] = v17;
    }
    v18 = a3;
    *(_QWORD *)&v7[v13 + 8] = v15;
    memmove(v17, a2, v14);
    result = *(_QWORD *)&v7[v13];
    *(_BYTE *)(result + v14) = 0;
    if ( !a3 )
      goto LABEL_22;
  }
  else
  {
    *(_QWORD *)&v7[v13 + 8] = 0;
    v18 = a3;
    if ( !a3 )
      goto LABEL_22;
  }
  result = strlen(v18);
  if ( !result )
  {
LABEL_22:
    *(_QWORD *)&v7[v13 + 32] = 0;
    return result;
  }
  v19 = result;
  v20 = v18;
  v21 = (char **)&v7[v13 + 24];
  v22 = (char *)(result + 1);
  if ( *(_QWORD *)&v7[v13 + 40] >= result + 1 )
  {
    v23 = *v21;
  }
  else
  {
    v23 = (char *)qvector_reserve((__int64)&v7[v13 + 24], *v21, result + 1, 1u);
    *v21 = v23;
  }
  *(_QWORD *)&v7[v13 + 32] = v22;
  memmove(v23, v20, v19);
  result = (size_t)*v21;
  (*v21)[v19] = 0;
  return result;
}
