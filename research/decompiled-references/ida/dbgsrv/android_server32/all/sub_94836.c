/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_94836
// Address: 0x00094836

//----- (00094836) --------------------------------------------------------
int __fastcall sub_94836(unsigned __int8 *a1)
{
  int v1; // r2

  v1 = a1[6];
  if ( v1 == 2 )
    return (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 4))(a1);
  else
    return v1 == 0;
}
