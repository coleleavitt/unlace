void __fastcall metadata_dumper_t__::vfunc_9(__int64 a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v3; // rsi
  __int64 v5; // r12
  __int64 *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rsi
  int v9; // r13d
  __int64 *v10; // rbx
  __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  __int64 v13; // r14
  const char *v14; // rsi
  __int64 v15; // r9
  unsigned int v16; // r14d
  _BYTE *v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r9
  unsigned __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // rsi
  __int64 v24; // r9
  unsigned __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdi
  _BYTE *v32; // rdx
  _BYTE *v33; // rbp
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // [rsp+0h] [rbp-58h]
  unsigned __int64 v37; // [rsp+0h] [rbp-58h]
  unsigned __int64 v38; // [rsp+0h] [rbp-58h]
  _BYTE *v39; // [rsp+0h] [rbp-58h]
  _BYTE *v40; // [rsp+0h] [rbp-58h]
  __int64 v41; // [rsp+8h] [rbp-50h]
  __int64 v42; // [rsp+8h] [rbp-50h]
  __int64 v43; // [rsp+8h] [rbp-50h]
  __int64 v44; // [rsp+10h] [rbp-48h]
  __int64 v45; // [rsp+18h] [rbp-40h]

  v2 = *a2;
  v3 = *a2 + 2192 * a2[1];
  if ( v3 == v2 )
    return;
  v5 = v2;
  v45 = v3;
  do
  {
    v6 = *(__int64 **)(a1 + 56);
    v7 = v6[1];
    v8 = *v6;
    if ( v6[2] < (unsigned __int64)(v7 + 1) )
    {
      v34 = qvector_reserve(*(_QWORD *)(a1 + 56), v8, v7 + 1, 24);
      v7 = v6[1];
      *v6 = v34;
      v8 = v34;
    }
    v9 = 0;
    v10 = (__int64 *)(v8 + 24 * v7);
    *v10 = 0;
    *(_OWORD *)(v10 + 1) = 0;
    ++v6[1];
    sub_169A50(v10, (__int64)"insn @ %u+0x%x", *(_DWORD *)v5, *(_DWORD *)(v5 + 4));
    v44 = a1;
    v11 = v5 + 16;
    do
    {
      v16 = 4 * (v9 + (v9 > 1) + 5);
      sub_16FAA0(
        v10,
        (__int64)" op%d=%s",
        v9,
        (&off_862820)[(*(_QWORD *)(v5 + 8) >> (4 * ((unsigned __int8)v9 + (v9 > 1) + 5))) & 0xFLL]);
      v18 = v16;
      if ( (*(_QWORD *)(v5 + 8) & (15LL << v16)) != 5LL << v16 )
        goto LABEL_9;
      v20 = v10[1];
      if ( v20 )
      {
        v21 = v20 + 1;
        v22 = v10[1];
        v23 = *v10;
        --v20;
        if ( v10[2] >= v21 )
          goto LABEL_14;
      }
      else
      {
        v23 = *v10;
        v22 = 1;
        v21 = 2;
        if ( (unsigned __int64)v10[2] >= 2 )
          goto LABEL_14;
      }
      v43 = v20;
      v38 = v21;
      v29 = qvector_reserve(v10, v23, v21, 1);
      v20 = v43;
      v21 = v38;
      *v10 = v29;
      v23 = v29;
LABEL_14:
      v10[1] = v21;
      *(_BYTE *)(v23 + v20) = 123;
      *(_BYTE *)(*v10 + v22) = 0;
      print_refinfo(v10, 0, v11);
      v24 = v10[1];
      if ( v24 )
      {
        v25 = v24 + 1;
        v26 = v10[1];
        v27 = *v10;
        --v24;
        if ( v10[2] < v25 )
          goto LABEL_18;
      }
      else
      {
        v27 = *v10;
        v26 = 1;
        v25 = 2;
        if ( (unsigned __int64)v10[2] < 2 )
        {
LABEL_18:
          v42 = v24;
          v37 = v25;
          v28 = qvector_reserve(v10, v27, v25, 1);
          v24 = v42;
          v25 = v37;
          *v10 = v28;
          v27 = v28;
        }
      }
      v10[1] = v25;
      *(_BYTE *)(v27 + v24) = 125;
      *(_BYTE *)(*v10 + v26) = 0;
LABEL_9:
      v15 = v10[1];
      if ( v15 )
      {
        v12 = v15 + 1;
        v13 = v10[1];
        v14 = (const char *)*v10;
        --v15;
        if ( v10[2] >= v12 )
          goto LABEL_7;
      }
      else
      {
        v14 = (const char *)*v10;
        v13 = 1;
        v12 = 2;
        if ( (unsigned __int64)v10[2] >= 2 )
          goto LABEL_7;
      }
      v41 = v15;
      v36 = v12;
      v19 = qvector_reserve(v10, v14, v12, 1);
      v15 = v41;
      v12 = v36;
      *v10 = v19;
      v14 = (const char *)v19;
LABEL_7:
      v10[1] = v12;
      ++v9;
      v11 += 272;
      v14[v15] = 44;
      *(_BYTE *)(*v10 + v13) = 0;
    }
    while ( v9 != 8 );
    v30 = v10[1];
    a1 = v44;
    if ( v30 > 1 )
    {
      v31 = *v10;
      v32 = (_BYTE *)(*v10 + v30 - 1);
      if ( *v10 < (unsigned __int64)v32 )
      {
        while ( *(v32 - 1) == 44 )
        {
          if ( (_BYTE *)v31 == --v32 )
            goto LABEL_33;
        }
      }
      v17 = &v32[-v31];
      if ( v32 == (_BYTE *)v31 )
      {
LABEL_33:
        if ( v31 )
        {
          v10[1] = 0;
          qfree(v31, v14, v32, v18, v17);
          *v10 = 0;
          v10[2] = 0;
        }
      }
      else
      {
        v33 = v17 + 1;
        if ( v30 < (unsigned __int64)(v17 + 1) )
        {
          if ( v10[2] < (unsigned __int64)v33 )
          {
            v40 = &v32[-v31];
            v35 = qvector_reserve(v10, *v10, v17 + 1, 1);
            v17 = v40;
            *v10 = v35;
            v31 = v35;
            v30 = v10[1];
          }
          v39 = v17;
          memset((void *)(v30 + v31), 0, (size_t)&v33[-v30]);
          v32 = &v39[*v10];
          v10[1] = (__int64)v33;
        }
        else if ( (_BYTE *)v30 != v17 + 1 )
        {
          v10[1] = (__int64)v33;
        }
        *v32 = 0;
      }
    }
    v5 += 2192;
  }
  while ( v45 != v5 );
}
