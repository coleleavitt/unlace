/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64900
// Address: 0x0000000000064900

//----- (0000000000064900) ----------------------------------------------------
__int64 __fastcall sub_64900(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  char *v3; // rax

  *(_BYTE *)(a1 + 212) = -76;
  v1 = *(_QWORD *)(a1 + 200);
  v2 = *(_QWORD *)(v1 + 8);
  if ( *(_QWORD *)(v1 + 16) >= (unsigned __int64)(v2 + 1) )
  {
    v3 = *(char **)v1;
  }
  else
  {
    v3 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v1, v2 + 1, 1u);
    *(_QWORD *)v1 = v3;
    v2 = *(_QWORD *)(v1 + 8);
  }
  v3[v2] = -76;
  ++*(_QWORD *)(v1 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
