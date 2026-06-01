/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4751C4
// Address: 0x004751C4

//----- (004751C4) --------------------------------------------------------
int __usercall sub_4751C4@<eax>(int a1@<ebx>, int a2@<edi>, int a3)
{
  int v4; // edi
  int v5; // eax

  if ( a3 )
  {
    v4 = -1;
    if ( (*(_DWORD *)(a3 + 12) & 0x2000) != 0 )
    {
      v4 = sub_46C0E1(a1, (_DWORD *)a3);
      sub_4792FB(a3);
      v5 = sub_47631B(a1, v4, a3);
      if ( sub_4731D1(a1, v4, v5) >= 0 )
      {
        if ( *(_DWORD *)(a3 + 28) )
        {
          sub_479216(*(LPVOID *)(a3 + 28));
          *(_DWORD *)(a3 + 28) = 0;
        }
      }
      else
      {
        v4 = -1;
      }
    }
    sub_47C4AE(a3);
    return v4;
  }
  else
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return -1;
  }
}
