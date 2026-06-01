/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67708
// Address: 0x00067708

//----- (00067708) --------------------------------------------------------
int __fastcall sub_67708(int a1, _BYTE *a2, char *a3, int a4)
{
  if ( a2 && !a2[36] )
    return (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)a2 + 16))(a2, a1);
  else
    return sub_69630(a1, a3, a4);
}
