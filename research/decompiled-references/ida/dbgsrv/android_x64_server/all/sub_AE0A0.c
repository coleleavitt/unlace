/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AE0A0
// Address: 0x00000000000AE0A0

//----- (00000000000AE0A0) ----------------------------------------------------
int __fastcall sub_AE0A0(__int64 a1, __int64 a2, const char *a3, char a4)
{
  const char *v4; // r13
  __int64 v5; // r12
  _QWORD *v6; // rax
  const char *v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // r14
  char *v10; // r14
  char *v11; // rax
  char *v12; // r15
  size_t v13; // r14
  __int64 v14; // rax
  char *v15; // rcx
  __int64 v16; // rdx
  char **v17; // r12
  char *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r13
  size_t v21; // rsi
  unsigned __int64 v22; // rbx
  bool v23; // bp
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // rdi
  __int64 v27; // rcx
  const char *v31; // [rsp+18h] [rbp-50h]
  const char *v33; // [rsp+28h] [rbp-40h]
  _QWORD *v34; // [rsp+30h] [rbp-38h]

  v4 = a3;
  v5 = a2;
  v6 = (_QWORD *)strlen(a3);
  v7 = *(const char **)a1;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = v8 - 1;
  if ( !v8 )
    v9 = 0;
  v10 = (char *)&v7[v9];
  if ( v7 < v10 )
  {
    v31 = v4;
    v34 = v6;
    v33 = v10;
    do
    {
      v11 = strstr(v7, v4);
      v12 = v11;
      if ( v11 )
        v10 = v11;
      v13 = v10 - v7;
      if ( (a4 & 1) == 0 || v13 )
      {
        v14 = *(_QWORD *)(v5 + 8);
        if ( *(_QWORD *)(v5 + 16) >= (unsigned __int64)(v14 + 1) )
        {
          v15 = *(char **)v5;
        }
        else
        {
          v15 = (char *)qvector_reserve(v5, *(char **)v5, v14 + 1, 0x18u);
          *(_QWORD *)v5 = v15;
          v14 = *(_QWORD *)(v5 + 8);
        }
        v16 = 3 * v14;
        *(_OWORD *)&v15[8 * v16] = 0;
        *(_QWORD *)&v15[8 * v16 + 16] = 0;
        ++*(_QWORD *)(v5 + 8);
        v17 = (char **)&v15[24 * v14];
        v18 = *v17;
        v19 = *(_QWORD *)&v15[8 * v16 + 8];
        v20 = v19 - 1;
        if ( !v19 )
          v20 = 0;
        v21 = v13 + v20;
        v22 = v13 + v20 + 1;
        if ( *(_QWORD *)&v15[8 * v16 + 16] < v22 )
        {
          v18 = (char *)qvector_reserve((__int64)v17, v18, v13 + v20 + 1, 1u);
          v21 = v13 + v20;
          *v17 = v18;
        }
        v17[1] = (char *)v22;
        v18[v21] = 0;
        memmove(&(*v17)[v20], v7, v13);
        v5 = a2;
        v4 = v31;
      }
      v6 = v34;
      v7 = (char *)v34 + (_QWORD)v12;
      v10 = (char *)v33;
      if ( !v12 )
        v7 = v33;
    }
    while ( v7 < v33 );
  }
  v23 = 1;
  if ( !v4 )
    goto LABEL_23;
  if ( v6 == (_QWORD *)-1LL )
  {
    v6 = (_QWORD *)strlen(v4);
    if ( v6 )
      goto LABEL_28;
LABEL_23:
    if ( (a4 & 1) != 0 )
      return (int)v6;
    goto LABEL_24;
  }
  if ( !v6 )
    goto LABEL_23;
LABEL_28:
  v25 = *(_QWORD *)(a1 + 8);
  v26 = v25 - 1;
  if ( !v25 )
    v26 = 0;
  if ( v26 >= (unsigned __int64)v6 )
  {
    LODWORD(v6) = strncmp((const char *)(*(_QWORD *)a1 + v26 - (_QWORD)v6), v4, (size_t)v6);
    v23 = (_DWORD)v6 == 0;
    if ( (a4 & 1) == 0 )
    {
LABEL_24:
      if ( v23 )
      {
        v24 = *(_QWORD *)(v5 + 8);
        if ( *(_QWORD *)(v5 + 16) >= (unsigned __int64)(v24 + 1) )
        {
          v6 = *(_QWORD **)v5;
        }
        else
        {
          v6 = qvector_reserve(v5, *(char **)v5, v24 + 1, 0x18u);
          *(_QWORD *)v5 = v6;
          v24 = *(_QWORD *)(v5 + 8);
        }
        v27 = 3 * v24;
        *(_OWORD *)&v6[v27] = 0;
        v6[v27 + 2] = 0;
        ++*(_QWORD *)(v5 + 8);
      }
    }
  }
  return (int)v6;
}
