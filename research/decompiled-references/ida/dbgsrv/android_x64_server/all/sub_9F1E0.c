/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9F1E0
// Address: 0x000000000009F1E0

//----- (000000000009F1E0) ----------------------------------------------------
char *__fastcall sub_9F1E0(__int64 a1, __int64 *a2)
{
  char *result; // rax
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // rbx
  size_t v7; // r14
  char *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r12
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbp
  _BYTE *v14; // rax
  unsigned __int64 v15; // rbp
  char *v16; // rax
  __int64 v17; // [rsp+8h] [rbp-40h]
  __int64 v18; // [rsp+10h] [rbp-38h]

  result = (char *)(8 * a2[1]);
  v3 = 24 * a2[1];
  if ( v3 )
  {
    v4 = *a2;
    v5 = 0;
    v18 = 24 * a2[1];
    v17 = *a2;
    do
    {
      result = strchr(*(const char **)(v4 + v5), 61);
      if ( result )
      {
        v6 = *(_QWORD *)(v4 + v5 + 8);
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v6 != 1 )
          {
            v8 = *(char **)a1;
            v9 = *(_QWORD *)(a1 + 8);
            v10 = v9 - 1;
            if ( !v9 )
              v10 = 0;
            v11 = v10 + v6;
            if ( *(_QWORD *)(a1 + 16) < v11 )
            {
              v8 = (char *)qvector_reserve(a1, *(char **)a1, v11, 1u);
              *(_QWORD *)a1 = v8;
            }
            *(_QWORD *)(a1 + 8) = v11;
            v8[v10 + v7] = 0;
            memcpy((void *)(*(_QWORD *)a1 + v10), *(const void **)(v17 + v5), v7);
            v3 = v18;
          }
        }
        v12 = *(_QWORD *)(a1 + 8);
        v13 = v12 - 1;
        if ( !v12 )
          v13 = 0;
        v14 = *(_BYTE **)a1;
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v13 + 2) )
        {
          v14 = qvector_reserve(a1, *(char **)a1, v13 + 2, 1u);
          *(_QWORD *)a1 = v14;
        }
        v4 = v17;
        *(_QWORD *)(a1 + 8) = v13 + 2;
        v14[v13] = 0;
        result = *(char **)a1;
        *(_BYTE *)(*(_QWORD *)a1 + v13 + 1) = 0;
      }
      v5 += 24;
    }
    while ( v3 != v5 );
  }
  v15 = *(_QWORD *)(a1 + 8);
  if ( v15 >= 2 )
  {
    if ( *(_QWORD *)(a1 + 16) >= v15 + 1 )
    {
      v16 = *(char **)a1;
    }
    else
    {
      v16 = (char *)qvector_reserve(a1, *(char **)a1, v15 + 1, 1u);
      *(_QWORD *)a1 = v16;
    }
    *(_QWORD *)(a1 + 8) = v15 + 1;
    v16[v15 - 1] = 0;
    result = *(char **)a1;
    *(_BYTE *)(*(_QWORD *)a1 + v15) = 0;
  }
  return result;
}
