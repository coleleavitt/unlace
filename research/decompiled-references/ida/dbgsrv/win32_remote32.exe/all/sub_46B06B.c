/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B06B
// Address: 0x0046B06B

//----- (0046B06B) --------------------------------------------------------
char __usercall sub_46B06B@<al>(int a1@<ecx>, int a2@<ebx>)
{
  _QWORD *v3; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax

  *(_DWORD *)(a1 + 20) += 4;
  v3 = *(_QWORD **)(*(_DWORD *)(a1 + 20) - 4);
  if ( !sub_47A614() )
    goto LABEL_2;
  v5 = sub_46AC80(*(_DWORD *)(a1 + 44)) - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 2;
      if ( v7 )
      {
        if ( v7 != 4 )
        {
LABEL_2:
          *sub_46B984() = 22;
          sub_467EF4(a2, (int)v3);
          return 0;
        }
        *v3 = *(int *)(a1 + 24);
      }
      else
      {
        *(_DWORD *)v3 = *(_DWORD *)(a1 + 24);
      }
    }
    else
    {
      *(_WORD *)v3 = *(_WORD *)(a1 + 24);
    }
  }
  else
  {
    *(_BYTE *)v3 = *(_BYTE *)(a1 + 24);
  }
  *(_BYTE *)(a1 + 48) = 1;
  return 1;
}
