/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100026CF0
// Address: 0x0000000100026CF0

//----- (0000000100026CF0) ----------------------------------------------------
void *__fastcall sub_100026CF0(__int64 a1, unsigned __int8 a2, unsigned __int16 a3)
{
  char v3; // r14
  char v5; // si
  char v6; // si
  __int64 v7; // r15
  void *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r15
  void *result; // rax
  __int64 v12; // rcx
  char v13; // si
  __int64 v14; // r14
  void *v15; // rax
  __int64 v16; // rcx

  v3 = a3;
  if ( a3 <= 0xFu )
  {
    v3 = a2 + a3;
    *(_BYTE *)(a1 + 212) = a2 + a3;
LABEL_7:
    v10 = *(_QWORD *)(a1 + 200);
    result = *(void **)v10;
    v12 = *(_QWORD *)(v10 + 8);
    if ( *(_QWORD *)(v10 + 16) < (unsigned __int64)(v12 + 1) )
    {
      result = qvector_reserve(*(_QWORD *)(a1 + 200), result, v12 + 1, 1u);
      *(_QWORD *)v10 = result;
      v12 = *(_QWORD *)(v10 + 8);
    }
    *((_BYTE *)result + v12) = v3;
    ++*(_QWORD *)(v10 + 8);
    ++*(_DWORD *)(a1 + 208);
    return result;
  }
  v5 = a2 >> 3;
  if ( a3 <= 0xFFu )
  {
    v6 = v5 | 0x80;
    *(_BYTE *)(a1 + 212) = v6;
    v7 = *(_QWORD *)(a1 + 200);
    v8 = *(void **)v7;
    v9 = *(_QWORD *)(v7 + 8);
    if ( *(_QWORD *)(v7 + 16) < (unsigned __int64)(v9 + 1) )
    {
      v8 = qvector_reserve(*(_QWORD *)(a1 + 200), v8, v9 + 1, 1u);
      *(_QWORD *)v7 = v8;
      v9 = *(_QWORD *)(v7 + 8);
    }
    *((_BYTE *)v8 + v9) = v6;
    ++*(_QWORD *)(v7 + 8);
    ++*(_DWORD *)(a1 + 208);
    goto LABEL_7;
  }
  v13 = v5 - 127;
  *(_BYTE *)(a1 + 212) = v13;
  v14 = *(_QWORD *)(a1 + 200);
  v15 = *(void **)v14;
  v16 = *(_QWORD *)(v14 + 8);
  if ( *(_QWORD *)(v14 + 16) < (unsigned __int64)(v16 + 1) )
  {
    v15 = qvector_reserve(*(_QWORD *)(a1 + 200), v15, v16 + 1, 1u);
    *(_QWORD *)v14 = v15;
    v16 = *(_QWORD *)(v14 + 8);
  }
  *((_BYTE *)v15 + v16) = v13;
  ++*(_QWORD *)(v14 + 8);
  ++*(_DWORD *)(a1 + 208);
  return sub_100026A20(a1, a3);
}
