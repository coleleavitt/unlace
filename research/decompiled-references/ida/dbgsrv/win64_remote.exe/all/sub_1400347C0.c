/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400347C0
// Address: 0x00000001400347C0

//----- (00000001400347C0) ----------------------------------------------------
void *__fastcall sub_1400347C0(__int64 a1, char a2)
{
  __int64 v2; // rbx
  unsigned __int64 v5; // r8
  void *result; // rax

  v2 = *(_QWORD *)(a1 + 192);
  *(_BYTE *)(a1 + 204) = a2;
  v5 = *(_QWORD *)(v2 + 8) + 1LL;
  if ( v5 > *(_QWORD *)(v2 + 16) )
    *(_QWORD *)v2 = sub_14005ABE0(v2, *(void **)v2, v5, 1u);
  result = *(void **)v2;
  *(_BYTE *)(*(_QWORD *)(v2 + 8) + *(_QWORD *)v2) = a2;
  ++*(_QWORD *)(v2 + 8);
  ++*(_DWORD *)(a1 + 200);
  return result;
}
