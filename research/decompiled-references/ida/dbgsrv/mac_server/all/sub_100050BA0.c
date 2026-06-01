/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100050BA0
// Address: 0x0000000100050BA0

//----- (0000000100050BA0) ----------------------------------------------------
char __fastcall sub_100050BA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int *v3; // rcx
  size_t v4; // rbx
  const void **v5; // r15
  void *v6; // r12
  _BYTE *i; // rax
  _BYTE *v8; // r14
  size_t v9; // r13
  size_t v10; // rbx
  _BYTE *v11; // r12
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  __int64 v15; // [rsp-80h] [rbp-80h]
  const void **v16; // [rsp-78h] [rbp-78h]
  __int64 v17; // [rsp-70h] [rbp-70h]
  __int64 v18; // [rsp-68h] [rbp-68h]
  void *v19; // [rsp-60h] [rbp-60h]
  __int64 v20; // [rsp-58h] [rbp-58h]
  unsigned __int8 *v21; // [rsp-50h] [rbp-50h]
  __int64 v22; // [rsp-48h] [rbp-48h]
  int v23; // [rsp-3Ch] [rbp-3Ch]
  int *v24; // [rsp-38h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 4192);
  if ( !(4 * v2) )
    return 0;
  v3 = *(int **)(a1 + 4184);
  v17 = a1 + 48;
  v19 = (void *)(a1 + a2 + 48);
  v18 = a1 + 4152;
  v24 = v3;
  v22 = a1;
  v20 = a2;
  do
  {
    v4 = *(_QWORD *)(a1 + 4240) - a2;
    if ( v4 )
    {
      v5 = (const void **)(**(_QWORD **)(a1 + 24) + 80LL * *v24);
      v21 = (unsigned __int8 *)v5[1];
      v23 = *(unsigned __int8 *)*v5;
      v6 = v19;
      v16 = v5;
      for ( i = memchr(v19, v23, v4); ; i = memchr(v6, v23, v4) )
      {
        if ( !i )
        {
LABEL_3:
          a1 = v22;
          v3 = *(int **)(v22 + 4184);
          v2 = *(_QWORD *)(v22 + 4192);
          a2 = v20;
          break;
        }
        v8 = i;
        v9 = v4 + (_BYTE *)v6 - i;
        v10 = (size_t)v21;
        if ( v9 < (unsigned __int64)v21 )
          v10 = v9;
        if ( !memcmp(i, *v5, v10) )
        {
          v11 = &v8[*(_QWORD *)(v22 + 4144) - v17];
          if ( (unsigned __int64)v21 <= v9 )
          {
            **(_QWORD **)(v22 + 8) = v11;
            return 1;
          }
          v15 = *v24;
          v12 = qalloc_or_throw(40);
          v12[2] = v11;
          v12[3] = v15;
          v12[4] = v10;
          *v12 = v18;
          v13 = *(_QWORD **)(v22 + 4160);
          v12[1] = v13;
          *v13 = v12;
          *(_QWORD *)(v22 + 4160) = v12;
          ++*(_QWORD *)(v22 + 4168);
          v5 = v16;
        }
        v6 = v8 + 1;
        v4 = v9 - 1;
        if ( v9 == 1 )
          goto LABEL_3;
      }
    }
    ++v24;
  }
  while ( v24 != &v3[v2] );
  return 0;
}
