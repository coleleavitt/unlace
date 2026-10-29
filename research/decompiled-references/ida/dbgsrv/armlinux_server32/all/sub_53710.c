/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53710
// Address: 0x00053710

//----- (00053710) --------------------------------------------------------
int __fastcall sub_53710(int a1, _BYTE *a2, char *a3, int a4)
{
  int savedregs; // [sp+0h] [bp+0h]
  int savedregs_4; // [sp+4h] [bp+4h]
  int savedregs_8; // [sp+8h] [bp+8h]
  int savedregs_12; // [sp+Ch] [bp+Ch]

  if ( !a2 || a2[36] )
    return sub_69630(a1, a3, a4);
  savedregs_8 = savedregs;
  savedregs_12 = savedregs_4;
  return (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)a2 + 16))(a2, a1);
}
// 66EFC: variable 'savedregs' is possibly undefined
// 66EFC: variable 'savedregs_4' is possibly undefined
