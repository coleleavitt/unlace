/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9484A
// Address: 0x0009484A

//----- (0009484A) --------------------------------------------------------
int __fastcall sub_9484A(unsigned __int8 *a1)
{
  int v1; // r2

  v1 = a1[7];
  if ( v1 == 2 )
    return (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 8))(a1);
  else
    return v1 == 0;
}
