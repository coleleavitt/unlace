/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_663C0
// Address: 0x00000000000663C0

//----- (00000000000663C0) ----------------------------------------------------
__int64 __fastcall sub_663C0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  char *v3; // rax

  *(_BYTE *)(a1 + 212) = -89;
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
  v3[v2] = -89;
  ++*(_QWORD *)(v1 + 8);
  ++*(_DWORD *)(a1 + 208);
  sub_616A0(a1, 0xFFFF);
  sub_616A0(a1, 0x7FFF);
  sub_66090(a1, 3);
  return 0;
}
