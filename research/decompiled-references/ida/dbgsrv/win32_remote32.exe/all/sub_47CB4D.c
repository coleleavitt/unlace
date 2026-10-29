/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47CB4D
// Address: 0x0047CB4D

//----- (0047CB4D) --------------------------------------------------------
int __usercall sub_47CB4D@<eax>(int a1@<ebx>, int a2@<edi>, int a3, int a4)
{
  int v4; // eax
  bool v6; // al
  bool v7; // zf

  sub_47631B(a1, a2, a4);
  if ( (*(_DWORD *)(a4 + 12) & 6) == 0 )
  {
    *sub_46B984() = 9;
LABEL_3:
    v4 = a4;
LABEL_4:
    _InterlockedOr((volatile signed __int32 *)(v4 + 12), 0x10u);
    return -1;
  }
  if ( (*(_DWORD *)(a4 + 12) & 0x1000) != 0 )
  {
    *sub_46B984() = 34;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(a4 + 12) & 1) != 0 )
  {
    v6 = sub_47CD09(a1, a2, (_DWORD *)a4);
    *(_DWORD *)(a4 + 8) = 0;
    v7 = !v6;
    v4 = a4;
    if ( v7 )
      goto LABEL_4;
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 4);
    _InterlockedAnd((volatile signed __int32 *)(a4 + 12), 0xFFFFFFFE);
  }
  _InterlockedOr((volatile signed __int32 *)(a4 + 12), 2u);
  _InterlockedAnd((volatile signed __int32 *)(a4 + 12), 0xFFFFFFF7);
  *(_DWORD *)(a4 + 8) = 0;
  if ( (*(_DWORD *)(a4 + 12) & 0x4C0) == 0 && !sub_47A629(a1, a2, (int *)a4) )
    sub_480792((_DWORD *)a4);
  if ( sub_47CC3D(a3, a2, a3, a4) )
    return (unsigned __int8)a3;
  _InterlockedOr((volatile signed __int32 *)(a4 + 12), 0x10u);
  return -1;
}
