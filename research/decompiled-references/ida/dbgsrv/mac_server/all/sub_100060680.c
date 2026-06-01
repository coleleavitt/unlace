/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060680
// Address: 0x0000000100060680

//----- (0000000100060680) ----------------------------------------------------
char *__fastcall sub_100060680(__int64 a1, __int64 *a2)
{
  char *result; // rax
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // rax
  size_t v7; // r14
  bool v8; // cf
  size_t v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r15
  _BYTE *v13; // rax
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r15
  _BYTE *v18; // rax
  unsigned __int64 v19; // r15
  char *v20; // rax
  __int64 v21; // [rsp+8h] [rbp-38h]
  __int64 v22; // [rsp+10h] [rbp-30h]

  result = (char *)(8 * a2[1]);
  v3 = 24 * a2[1];
  if ( v3 )
  {
    v4 = *a2;
    v5 = 0;
    v21 = 24 * a2[1];
    v22 = *a2;
    do
    {
      result = strchr(*(char **)(v4 + v5), 61);
      if ( result )
      {
        v6 = *(_QWORD *)(v4 + v5 + 8);
        v7 = 0;
        v8 = v6 == 0;
        v9 = v6 - 1;
        if ( !v8 )
          v7 = v9;
        if ( !v8 && v9 != 0 )
        {
          v10 = *(_QWORD *)(a1 + 8);
          v8 = v10 == 0;
          v11 = v10 - 1;
          v12 = 0;
          if ( !v8 )
            v12 = v11;
          v13 = *(_BYTE **)a1;
          v14 = v12 + v7 + 1;
          if ( *(_QWORD *)(a1 + 16) < v14 )
          {
            v13 = qvector_reserve(a1, *(void **)a1, v12 + v7 + 1, 1u);
            *(_QWORD *)a1 = v13;
          }
          *(_QWORD *)(a1 + 8) = v14;
          v13[v12 + v7] = 0;
          memcpy((void *)(*(_QWORD *)a1 + v12), *(const void **)(v22 + v5), v7);
          v3 = v21;
        }
        v15 = *(_QWORD *)(a1 + 8);
        v8 = v15 == 0;
        v16 = v15 - 1;
        v17 = 0;
        if ( !v8 )
          v17 = v16;
        v18 = *(_BYTE **)a1;
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v17 + 2) )
        {
          v18 = qvector_reserve(a1, *(void **)a1, v17 + 2, 1u);
          *(_QWORD *)a1 = v18;
        }
        *(_QWORD *)(a1 + 8) = v17 + 2;
        v18[v17] = 0;
        result = *(char **)a1;
        *(_BYTE *)(*(_QWORD *)a1 + v17 + 1) = 0;
        v4 = v22;
      }
      v5 += 24;
    }
    while ( v3 != v5 );
  }
  v19 = *(_QWORD *)(a1 + 8);
  if ( v19 >= 2 )
  {
    v20 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v19 + 1 )
    {
      v20 = (char *)qvector_reserve(a1, *(void **)a1, v19 + 1, 1u);
      *(_QWORD *)a1 = v20;
    }
    *(_QWORD *)(a1 + 8) = v19 + 1;
    v20[v19 - 1] = 0;
    result = *(char **)a1;
    *(_BYTE *)(*(_QWORD *)a1 + v19) = 0;
  }
  return result;
}
