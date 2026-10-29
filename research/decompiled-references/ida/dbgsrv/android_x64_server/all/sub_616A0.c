/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_616A0
// Address: 0x00000000000616A0

//----- (00000000000616A0) ----------------------------------------------------
char *__fastcall sub_616A0(__int64 a1, __int16 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  char *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  char *result; // rax

  v2 = *(_QWORD *)(a1 + 200);
  v3 = *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)(v2 + 16) >= (unsigned __int64)(v3 + 1) )
  {
    v4 = *(char **)v2;
  }
  else
  {
    v4 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v2, v3 + 1, 1u);
    *(_QWORD *)v2 = v4;
    v3 = *(_QWORD *)(v2 + 8);
  }
  v4[v3] = a2;
  ++*(_QWORD *)(v2 + 8);
  ++*(_DWORD *)(a1 + 208);
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
  result[v6] = HIBYTE(a2);
  ++*(_QWORD *)(v5 + 8);
  ++*(_DWORD *)(a1 + 208);
  return result;
}
