/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_470050
// Address: 0x0000000000470050

//----- (0000000000470050) ----------------------------------------------------
__int64 __fastcall sub_470050(__int64 a1, char a2)
{
  char *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v2 = (char *)sub_481540(a1, nullptr, 5u, 1u);
  v3 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = v2;
  memset(&v2[v3], 0, 5 - v3);
  v4 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 5;
  *(_DWORD *)v4 = 0;
  *(_BYTE *)(v4 + 4) = a2;
  return a1;
}
