/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100026B70
// Address: 0x0000000100026B70

//----- (0000000100026B70) ----------------------------------------------------
void *__fastcall sub_100026B70(__int64 a1, char a2)
{
  __int64 v2; // r15
  void *result; // rax
  __int64 v4; // rcx

  *(_BYTE *)(a1 + 212) = a2;
  v2 = *(_QWORD *)(a1 + 200);
  result = *(void **)v2;
  v4 = *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)(v2 + 16) < (unsigned __int64)(v4 + 1) )
  {
    result = qvector_reserve(*(_QWORD *)(a1 + 200), result, v4 + 1, 1u);
    *(_QWORD *)v2 = result;
    v4 = *(_QWORD *)(v2 + 8);
  }
  *((_BYTE *)result + v4) = a2;
  ++*(_QWORD *)(v2 + 8);
  ++*(_DWORD *)(a1 + 208);
  return result;
}
