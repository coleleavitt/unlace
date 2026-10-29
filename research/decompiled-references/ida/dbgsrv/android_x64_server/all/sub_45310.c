/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45310
// Address: 0x0000000000045310

//----- (0000000000045310) ----------------------------------------------------
char *__fastcall sub_45310(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // r13
  _QWORD *v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // r12
  __int64 v7; // rbp
  char **v8; // r14
  const void *v9; // r15
  size_t v10; // rax
  size_t v11; // rbx
  unsigned __int64 v12; // r13
  bool v13; // cf
  char *v14; // rax
  char *v15; // rbp
  char *v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rbx
  bool v21; // zf
  char *v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  int v26; // esi
  char *result; // rax
  char *v28; // rdx
  char **v30; // [rsp+10h] [rbp-58h]
  char *v31; // [rsp+18h] [rbp-50h] BYREF
  _QWORD *v32; // [rsp+20h] [rbp-48h]
  _QWORD *v33; // [rsp+28h] [rbp-40h]
  __int64 v34; // [rsp+30h] [rbp-38h]

  v3 = a1;
  if ( *a2 )
  {
    v33 = (_QWORD *)(a1 + 24);
    v30 = (char **)(a1 + 48);
    v4 = a2 + 1;
    v34 = a1;
    do
    {
      v5 = *(_QWORD *)(v3 + 32);
      if ( *(_QWORD *)(v3 + 40) >= (unsigned __int64)(v5 + 1) )
      {
        v6 = (_QWORD *)*v33;
      }
      else
      {
        v6 = qvector_reserve((__int64)v33, *(char **)(v3 + 24), v5 + 1, 0x18u);
        *(_QWORD *)(v3 + 24) = v6;
        v5 = *(_QWORD *)(v3 + 32);
      }
      v7 = 3 * v5;
      *(_OWORD *)&v6[v7] = 0;
      v6[v7 + 2] = 0;
      ++*(_QWORD *)(v3 + 32);
      v8 = (char **)&v6[3 * v5];
      v32 = v4;
      v9 = (const void *)*(v4 - 1);
      if ( v9 && (v10 = strlen((const char *)*(v4 - 1))) != 0 )
      {
        v11 = v10;
        v12 = v10 + 1;
        v13 = v6[v7 + 2] < v10 + 1;
        v14 = *v8;
        if ( v13 )
        {
          v14 = (char *)qvector_reserve((__int64)v8, *v8, v12, 1u);
          *v8 = v14;
        }
        v6[v7 + 1] = v12;
        memmove(v14, v9, v11);
        (*v8)[v11] = 0;
        v3 = v34;
      }
      else
      {
        v6[v7 + 1] = 0;
      }
      v15 = *v8;
      v31 = *v8;
      v16 = *(char **)(v3 + 48);
      v17 = *(_QWORD *)(v3 + 56);
      v18 = *(_QWORD *)(v3 + 64);
      v19 = v17 + 1;
      if ( v16 > (char *)&v31 || &v16[8 * v18] <= (char *)&v31 )
      {
        if ( v18 < v19 )
        {
          v16 = (char *)qvector_reserve((__int64)v30, v16, v19, 8u);
          *(_QWORD *)(v3 + 48) = v16;
          v17 = *(_QWORD *)(v3 + 56);
          v15 = v31;
        }
      }
      else if ( v18 < v19 )
      {
        v16 = (char *)qvector_reserve((__int64)v30, v16, v19, 8u);
        *(_QWORD *)(v3 + 48) = v16;
        v17 = *(_QWORD *)(v3 + 56);
      }
      v20 = v32;
      *(_QWORD *)&v16[8 * v17] = v15;
      ++*(_QWORD *)(v3 + 56);
      v21 = *v20 == 0;
      v4 = v20 + 1;
    }
    while ( !v21 );
  }
  else
  {
    v30 = (char **)(a1 + 48);
  }
  v31 = nullptr;
  v22 = *(char **)(v3 + 48);
  v23 = *(_QWORD *)(v3 + 56);
  v24 = *(_QWORD *)(v3 + 64);
  v25 = v23 + 1;
  if ( v22 > (char *)&v31 || &v22[8 * v24] <= (char *)&v31 )
  {
    if ( v24 >= v25 )
    {
      v28 = nullptr;
    }
    else
    {
      v22 = (char *)qvector_reserve((__int64)v30, v22, v25, 8u);
      *v30 = v22;
      v23 = *(_QWORD *)(v3 + 56);
      v28 = v31;
    }
    v26 = a3;
    result = &v22[8 * v23];
  }
  else
  {
    if ( v24 < v25 )
    {
      v22 = (char *)qvector_reserve((__int64)v30, v22, v25, 8u);
      *v30 = v22;
      v23 = *(_QWORD *)(v3 + 56);
    }
    v26 = a3;
    result = &v22[8 * v23];
    v28 = nullptr;
  }
  *(_QWORD *)result = v28;
  ++*(_QWORD *)(v3 + 56);
  *(_DWORD *)(v3 + 96) = v26;
  return result;
}
