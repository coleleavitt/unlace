/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A664
// Address: 0x0047A664

//----- (0047A664) --------------------------------------------------------
char __usercall sub_47A664@<al>(int a1@<ebx>, int a2@<edi>, int a3)
{
  LPVOID *v3; // edi
  LPVOID v4; // eax

  if ( !sub_47A629(a1, a2, (int *)a3) )
    return 0;
  if ( (int *)a3 == sub_46953A(1) )
  {
    v3 = &dword_4B7D48;
  }
  else
  {
    if ( (int *)a3 != sub_46953A(2) )
      return 0;
    v3 = &dword_4B7D4C;
  }
  ++dword_4B78D0;
  if ( (*(_DWORD *)(a3 + 12) & 0x4C0) != 0 )
    return 0;
  _InterlockedOr((volatile signed __int32 *)(a3 + 12), 0x282u);
  v4 = *v3;
  if ( *v3 || (*v3 = sub_479531(0x1000u), sub_479216(nullptr), (v4 = *v3) != nullptr) )
  {
    *(_DWORD *)(a3 + 4) = v4;
    *(_DWORD *)a3 = *v3;
    *(_DWORD *)(a3 + 8) = 4096;
    *(_DWORD *)(a3 + 24) = 4096;
  }
  else
  {
    *(_DWORD *)(a3 + 8) = 2;
    *(_DWORD *)(a3 + 4) = a3 + 20;
    *(_DWORD *)a3 = a3 + 20;
    *(_DWORD *)(a3 + 24) = 2;
  }
  return 1;
}
// 4B78D0: using guessed type int dword_4B78D0;
