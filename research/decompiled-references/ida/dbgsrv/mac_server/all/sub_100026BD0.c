/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100026BD0
// Address: 0x0000000100026BD0

//----- (0000000100026BD0) ----------------------------------------------------
void *__fastcall sub_100026BD0(__int64 a1, char a2, unsigned int a3)
{
  __int16 v3; // r14
  __int64 v4; // r12
  void *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r15
  void *result; // rax
  __int64 v9; // rcx
  __int64 v10; // r12
  void *v11; // rax
  __int64 v12; // rcx

  v3 = a3;
  if ( a3 > 0xFF )
  {
    *(_BYTE *)(a1 + 212) = a2 + 1;
    v10 = *(_QWORD *)(a1 + 200);
    v11 = *(void **)v10;
    v12 = *(_QWORD *)(v10 + 8);
    if ( *(_QWORD *)(v10 + 16) < (unsigned __int64)(v12 + 1) )
    {
      v11 = qvector_reserve(*(_QWORD *)(a1 + 200), v11, v12 + 1, 1u);
      *(_QWORD *)v10 = v11;
      v12 = *(_QWORD *)(v10 + 8);
    }
    *((_BYTE *)v11 + v12) = a2 + 1;
    ++*(_QWORD *)(v10 + 8);
    ++*(_DWORD *)(a1 + 208);
    return sub_100026A20(a1, v3);
  }
  else
  {
    *(_BYTE *)(a1 + 212) = a2;
    v4 = *(_QWORD *)(a1 + 200);
    v5 = *(void **)v4;
    v6 = *(_QWORD *)(v4 + 8);
    if ( *(_QWORD *)(v4 + 16) < (unsigned __int64)(v6 + 1) )
    {
      v5 = qvector_reserve(*(_QWORD *)(a1 + 200), v5, v6 + 1, 1u);
      *(_QWORD *)v4 = v5;
      v6 = *(_QWORD *)(v4 + 8);
    }
    *((_BYTE *)v5 + v6) = a2;
    ++*(_QWORD *)(v4 + 8);
    ++*(_DWORD *)(a1 + 208);
    v7 = *(_QWORD *)(a1 + 200);
    result = *(void **)v7;
    v9 = *(_QWORD *)(v7 + 8);
    if ( *(_QWORD *)(v7 + 16) < (unsigned __int64)(v9 + 1) )
    {
      result = qvector_reserve(*(_QWORD *)(a1 + 200), result, v9 + 1, 1u);
      *(_QWORD *)v7 = result;
      v9 = *(_QWORD *)(v7 + 8);
    }
    *((_BYTE *)result + v9) = v3;
    ++*(_QWORD *)(v7 + 8);
    ++*(_DWORD *)(a1 + 208);
  }
  return result;
}
