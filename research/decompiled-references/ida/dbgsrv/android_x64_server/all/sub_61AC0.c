/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61AC0
// Address: 0x0000000000061AC0

//----- (0000000000061AC0) ----------------------------------------------------
char *__fastcall sub_61AC0(__int64 a1, unsigned __int64 a2)
{
  char v2; // r15
  __int64 v3; // rbx
  __int64 v4; // rcx
  char *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  char *result; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  char *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  char *v14; // rax
  unsigned __int64 v15; // r15

  v2 = a2;
  if ( a2 <= 0xF )
  {
    v2 = a2 - 32;
    *(_BYTE *)(a1 + 212) = a2 - 32;
LABEL_9:
    v6 = *(_QWORD *)(a1 + 200);
    v7 = *(_QWORD *)(v6 + 8);
    if ( *(_QWORD *)(v6 + 16) >= (unsigned __int64)(v7 + 1) )
    {
      result = *(char **)v6;
    }
    else
    {
      result = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v6, v7 + 1, 1u);
      *(_QWORD *)v6 = result;
      v7 = *(_QWORD *)(v6 + 8);
    }
    result[v7] = v2;
    ++*(_QWORD *)(v6 + 8);
    ++*(_DWORD *)(a1 + 208);
    return result;
  }
  if ( (char)a2 == a2 )
  {
    *(_BYTE *)(a1 + 212) = -96;
    v3 = *(_QWORD *)(a1 + 200);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_QWORD *)(v3 + 16) >= (unsigned __int64)(v4 + 1) )
    {
      v5 = *(char **)v3;
    }
    else
    {
      v5 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v3, v4 + 1, 1u);
      *(_QWORD *)v3 = v5;
      v4 = *(_QWORD *)(v3 + 8);
    }
    v5[v4] = -96;
    ++*(_QWORD *)(v3 + 8);
    ++*(_DWORD *)(a1 + 208);
    goto LABEL_9;
  }
  if ( (int)a2 == a2 )
  {
    *(_BYTE *)(a1 + 212) = -89;
    v9 = *(_QWORD *)(a1 + 200);
    v10 = *(_QWORD *)(v9 + 8);
    if ( *(_QWORD *)(v9 + 16) >= (unsigned __int64)(v10 + 1) )
    {
      v11 = *(char **)v9;
    }
    else
    {
      v11 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v9, v10 + 1, 1u);
      *(_QWORD *)v9 = v11;
      v10 = *(_QWORD *)(v9 + 8);
    }
    v11[v10] = -89;
    ++*(_QWORD *)(v9 + 8);
    ++*(_DWORD *)(a1 + 208);
    sub_616A0(a1, a2);
    LODWORD(v15) = WORD1(a2);
  }
  else
  {
    *(_BYTE *)(a1 + 212) = -45;
    v12 = *(_QWORD *)(a1 + 200);
    v13 = *(_QWORD *)(v12 + 8);
    if ( *(_QWORD *)(v12 + 16) >= (unsigned __int64)(v13 + 1) )
    {
      v14 = *(char **)v12;
    }
    else
    {
      v14 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v12, v13 + 1, 1u);
      *(_QWORD *)v12 = v14;
      v13 = *(_QWORD *)(v12 + 8);
    }
    v14[v13] = -45;
    ++*(_QWORD *)(v12 + 8);
    ++*(_DWORD *)(a1 + 208);
    sub_616A0(a1, a2);
    sub_616A0(a1, SWORD1(a2));
    sub_616A0(a1, SWORD2(a2));
    v15 = HIWORD(a2);
  }
  return sub_616A0(a1, v15);
}
