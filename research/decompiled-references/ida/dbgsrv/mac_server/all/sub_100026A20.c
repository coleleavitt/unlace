/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100026A20
// Address: 0x0000000100026A20

//----- (0000000100026A20) ----------------------------------------------------
void *__fastcall sub_100026A20(__int64 a1, __int16 a2)
{
  __int64 v2; // r14
  void *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r14
  void *result; // rax
  __int64 v7; // rcx

  v2 = *(_QWORD *)(a1 + 200);
  v3 = *(void **)v2;
  v4 = *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)(v2 + 16) < (unsigned __int64)(v4 + 1) )
  {
    v3 = qvector_reserve(*(_QWORD *)(a1 + 200), v3, v4 + 1, 1u);
    *(_QWORD *)v2 = v3;
    v4 = *(_QWORD *)(v2 + 8);
  }
  *((_BYTE *)v3 + v4) = a2;
  ++*(_QWORD *)(v2 + 8);
  ++*(_DWORD *)(a1 + 208);
  v5 = *(_QWORD *)(a1 + 200);
  result = *(void **)v5;
  v7 = *(_QWORD *)(v5 + 8);
  if ( *(_QWORD *)(v5 + 16) < (unsigned __int64)(v7 + 1) )
  {
    result = qvector_reserve(*(_QWORD *)(a1 + 200), result, v7 + 1, 1u);
    *(_QWORD *)v5 = result;
    v7 = *(_QWORD *)(v5 + 8);
  }
  *((_BYTE *)result + v7) = HIBYTE(a2);
  ++*(_QWORD *)(v5 + 8);
  ++*(_DWORD *)(a1 + 208);
  return result;
}
