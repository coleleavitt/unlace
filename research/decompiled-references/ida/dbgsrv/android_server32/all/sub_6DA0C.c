/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6DA0C
// Address: 0x0006DA0C

//----- (0006DA0C) --------------------------------------------------------
int __fastcall sub_6DA0C(int a1, _BYTE *a2, char *a3, void *a4)
{
  if ( a2 && !a2[36] )
    return (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)a2 + 16))(a2, a1);
  else
    return sub_6F27C(a1, a3, a4);
}
