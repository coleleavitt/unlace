/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6758C
// Address: 0x0006758C

//----- (0006758C) --------------------------------------------------------
int __fastcall sub_6758C(int a1, _BYTE *a2, char *a3, int a4)
{
  if ( a2 && !a2[36] )
    return (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)a2 + 16))(a2, a1);
  else
    return sub_694B8(a1, a3, a4);
}
