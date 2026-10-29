/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437CB0
// Address: 0x00437CB0

//----- (00437CB0) --------------------------------------------------------
int __thiscall sub_437CB0(_QWORD *this, int a2)
{
  unsigned __int64 v3; // rax
  int v4; // ecx
  unsigned __int64 v5; // rax

  v3 = *(this + 1);
  v4 = *(_DWORD *)(a2 + 8);
  if ( *(_BYTE *)this )
    v5 = sub_463600(v3, v4);
  else
    LODWORD(v5) = sub_4634E0(v3, v4);
  *(this + 1) = v5;
  return v5;
}
// 437CCD: variable 'v5' is possibly undefined
