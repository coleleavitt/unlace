/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004C200
// Address: 0x000000010004C200

//----- (000000010004C200) ----------------------------------------------------
char __fastcall sub_10004C200(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  char v3; // r13
  char result; // al
  __int64 v6; // rdx
  char v7; // di
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  _BYTE *v12; // rax
  __int64 v13; // rax
  size_t v14; // r14
  bool v15; // cf
  size_t v16; // rax
  void *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rcx
  size_t v21; // rcx
  unsigned __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rax
  _BYTE *v26; // rax

  v2 = *(unsigned __int16 *)(a2 + 24);
  v3 = 0;
  result = 0;
  if ( v2 > 0x3E )
    return result;
  v6 = 0x5400C00000000000LL;
  if ( _bittest64(&v6, v2) )
  {
    v3 = *(_WORD *)(a2 + 24);
LABEL_20:
    v23 = *(_QWORD *)(a1 + 8);
    v24 = 0;
    v15 = v23 == 0;
    v25 = v23 - 1;
    if ( !v15 )
      v24 = v25;
    v26 = *(_BYTE **)a1;
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v24 + 2) )
    {
      v26 = qvector_reserve(a1, *(void **)a1, v24 + 2, 1u);
      *(_QWORD *)a1 = v26;
    }
    *(_QWORD *)(a1 + 8) = v24 + 2;
    v26[v24] = v3;
    *(_BYTE *)(*(_QWORD *)a1 + v24 + 1) = 0;
    return 1;
  }
  v7 = 1;
  v8 = 68;
  if ( !_bittest64(&v8, v2) )
  {
    if ( v2 != 4 )
      return result;
    v9 = *(_QWORD *)(a1 + 8);
    v10 = 0;
    v15 = v9 == 0;
    v11 = v9 - 1;
    if ( !v15 )
      v10 = v11;
    v12 = *(_BYTE **)a1;
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v10 + 2) )
    {
      v12 = qvector_reserve(a1, *(void **)a1, v10 + 2, 1u);
      *(_QWORD *)a1 = v12;
    }
    *(_QWORD *)(a1 + 8) = v10 + 2;
    v12[v10] = 34;
    *(_BYTE *)(*(_QWORD *)a1 + v10 + 1) = 0;
    v3 = 34;
    v7 = 0;
  }
  v13 = *(_QWORD *)(a2 + 8);
  v14 = 0;
  v15 = v13 == 0;
  v16 = v13 - 1;
  if ( !v15 )
    v14 = v16;
  if ( !v15 && v16 != 0 )
  {
    v17 = *(void **)a1;
    v18 = *(_QWORD *)(a1 + 8);
    v19 = 0;
    v15 = v18 == 0;
    v20 = v18 - 1;
    if ( !v15 )
      v19 = v20;
    v21 = v19 + v14;
    v22 = v19 + v14 + 1;
    if ( *(_QWORD *)(a1 + 16) < v22 )
    {
      v17 = qvector_reserve(a1, v17, v19 + v14 + 1, 1u);
      v21 = v19 + v14;
      *(_QWORD *)a1 = v17;
    }
    *(_QWORD *)(a1 + 8) = v22;
    *((_BYTE *)v17 + v21) = 0;
    memcpy((void *)(*(_QWORD *)a1 + v19), *(const void **)a2, v14);
  }
  result = 1;
  if ( !v7 )
    goto LABEL_20;
  return result;
}
