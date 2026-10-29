/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3EEAC
// Address: 0x0003EEAC

//----- (0003EEAC) --------------------------------------------------------
int __fastcall sub_3EEAC(int result, int a2)
{
  int v2; // r2
  unsigned int v3; // r1

  v2 = *(_DWORD *)(result + 68);
  v3 = a2 + *(_DWORD *)(result + 60);
  *(_DWORD *)(result + 60) = v3;
  if ( v3 >= *(_DWORD *)(v2 + 4) )
    sub_17188("interr: bad idc move_ip");
  return result;
}
