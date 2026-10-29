/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_31E8C
// Address: 0x00031E8C

//----- (00031E8C) --------------------------------------------------------
int __fastcall sub_31E8C(__int64 a1, int a2, int a3, int a4)
{
  int v5; // r4
  unsigned int *v6; // r8
  bool v7; // zf
  int v8; // r3

  v5 = *(_DWORD *)(a3 + 56);
  v6 = (unsigned int *)a2;
  v8 = v5 | *(_DWORD *)(a3 + 60);
  v7 = v8 == 0;
  if ( v8 )
    v8 = v5;
  else
    a2 = 1;
  if ( v7 )
    v8 = a2;
  else
    a2 = v5;
  *v6 = v8;
  *(_QWORD *)HIDWORD(a1) = *(_QWORD *)(a3 + 32) / (unsigned __int64)(unsigned int)a2;
  LODWORD(a1) = *(_DWORD *)(a1 + 364);
  return sub_31DB4(a1, *v6, a4, *(_QWORD *)(a3 + 24), -1);
}
