/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61950
// Address: 0x0000000000061950

//----- (0000000000061950) ----------------------------------------------------
char *__fastcall sub_61950(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  char v3; // bl
  char v4; // bp
  __int64 v5; // rbx
  __int64 v6; // rcx
  char *result; // rax
  __int16 v8; // r15
  char v9; // bp
  char v10; // bp
  __int64 v11; // r15
  __int64 v12; // rcx
  char *v13; // rax
  char v14; // bp
  __int64 v15; // rbx
  __int64 v16; // rcx
  char *v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rcx

  v3 = a3;
  if ( a3 <= 0xF )
  {
    v4 = a3 + a2;
    *(_BYTE *)(a1 + 212) = a3 + a2;
    v5 = *(_QWORD *)(a1 + 200);
    v6 = *(_QWORD *)(v5 + 8);
    if ( *(_QWORD *)(v5 + 16) >= (unsigned __int64)(v6 + 1) )
    {
      result = *(char **)v5;
    }
    else
    {
      result = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v5, v6 + 1, 1u);
      *(_QWORD *)v5 = result;
      v6 = *(_QWORD *)(v5 + 8);
    }
    result[v6] = v4;
    ++*(_QWORD *)(v5 + 8);
LABEL_18:
    ++*(_DWORD *)(a1 + 208);
    return result;
  }
  v8 = a3;
  v9 = a2 >> 3;
  if ( (unsigned __int16)a3 <= 0xFFu )
  {
    v10 = v9 | 0x80;
    *(_BYTE *)(a1 + 212) = v10;
    v11 = *(_QWORD *)(a1 + 200);
    v12 = *(_QWORD *)(v11 + 8);
    if ( *(_QWORD *)(v11 + 16) >= (unsigned __int64)(v12 + 1) )
    {
      v13 = *(char **)v11;
    }
    else
    {
      v13 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v11, v12 + 1, 1u);
      *(_QWORD *)v11 = v13;
      v12 = *(_QWORD *)(v11 + 8);
    }
    v13[v12] = v10;
    ++*(_QWORD *)(v11 + 8);
    ++*(_DWORD *)(a1 + 208);
    v18 = *(_QWORD *)(a1 + 200);
    v19 = *(_QWORD *)(v18 + 8);
    if ( *(_QWORD *)(v18 + 16) >= (unsigned __int64)(v19 + 1) )
    {
      result = *(char **)v18;
    }
    else
    {
      result = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v18, v19 + 1, 1u);
      *(_QWORD *)v18 = result;
      v19 = *(_QWORD *)(v18 + 8);
    }
    result[v19] = v3;
    ++*(_QWORD *)(v18 + 8);
    goto LABEL_18;
  }
  v14 = v9 - 127;
  *(_BYTE *)(a1 + 212) = v14;
  v15 = *(_QWORD *)(a1 + 200);
  v16 = *(_QWORD *)(v15 + 8);
  if ( *(_QWORD *)(v15 + 16) >= (unsigned __int64)(v16 + 1) )
  {
    v17 = *(char **)v15;
  }
  else
  {
    v17 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v15, v16 + 1, 1u);
    *(_QWORD *)v15 = v17;
    v16 = *(_QWORD *)(v15 + 8);
  }
  v17[v16] = v14;
  ++*(_QWORD *)(v15 + 8);
  ++*(_DWORD *)(a1 + 208);
  return sub_616A0(a1, v8);
}
