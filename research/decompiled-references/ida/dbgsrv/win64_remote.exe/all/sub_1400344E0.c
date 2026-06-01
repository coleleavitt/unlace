/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400344E0
// Address: 0x00000001400344E0

//----- (00000001400344E0) ----------------------------------------------------
__int64 __fastcall sub_1400344E0(__int64 a1, char a2)
{
  __int64 v2; // rbx
  unsigned __int64 v5; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 192);
  v5 = *(_QWORD *)(v2 + 8) + 1LL;
  if ( v5 > *(_QWORD *)(v2 + 16) )
    *(_QWORD *)v2 = sub_14005ABE0(*(_QWORD *)(a1 + 192), *(void **)v2, v5, 1u);
  result = *(_QWORD *)(v2 + 8);
  *(_BYTE *)(*(_QWORD *)v2 + result) = a2;
  ++*(_QWORD *)(v2 + 8);
  ++*(_DWORD *)(a1 + 200);
  return result;
}
