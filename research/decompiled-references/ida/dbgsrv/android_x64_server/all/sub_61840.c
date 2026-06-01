/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61840
// Address: 0x0000000000061840

//----- (0000000000061840) ----------------------------------------------------
char *__fastcall sub_61840(__int64 a1, char a2, unsigned int a3)
{
  __int16 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rcx
  char *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  char *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  char *result; // rax

  v3 = a3;
  if ( a3 > 0xFF )
  {
    *(_BYTE *)(a1 + 212) = a2 + 1;
    v7 = *(_QWORD *)(a1 + 200);
    v8 = *(_QWORD *)(v7 + 8);
    if ( *(_QWORD *)(v7 + 16) >= (unsigned __int64)(v8 + 1) )
    {
      v9 = *(char **)v7;
    }
    else
    {
      v9 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v7, v8 + 1, 1u);
      *(_QWORD *)v7 = v9;
      v8 = *(_QWORD *)(v7 + 8);
    }
    v9[v8] = a2 + 1;
    ++*(_QWORD *)(v7 + 8);
    ++*(_DWORD *)(a1 + 208);
    return sub_616A0(a1, v3);
  }
  else
  {
    *(_BYTE *)(a1 + 212) = a2;
    v4 = *(_QWORD *)(a1 + 200);
    v5 = *(_QWORD *)(v4 + 8);
    if ( *(_QWORD *)(v4 + 16) >= (unsigned __int64)(v5 + 1) )
    {
      v6 = *(char **)v4;
    }
    else
    {
      v6 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v4, v5 + 1, 1u);
      *(_QWORD *)v4 = v6;
      v5 = *(_QWORD *)(v4 + 8);
    }
    v6[v5] = a2;
    ++*(_QWORD *)(v4 + 8);
    ++*(_DWORD *)(a1 + 208);
    v10 = *(_QWORD *)(a1 + 200);
    v11 = *(_QWORD *)(v10 + 8);
    if ( *(_QWORD *)(v10 + 16) >= (unsigned __int64)(v11 + 1) )
    {
      result = *(char **)v10;
    }
    else
    {
      result = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v10, v11 + 1, 1u);
      *(_QWORD *)v10 = result;
      v11 = *(_QWORD *)(v10 + 8);
    }
    result[v11] = v3;
    ++*(_QWORD *)(v10 + 8);
    ++*(_DWORD *)(a1 + 208);
  }
  return result;
}
