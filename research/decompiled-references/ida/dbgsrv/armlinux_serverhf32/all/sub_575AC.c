/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_575AC
// Address: 0x000575AC

//----- (000575AC) --------------------------------------------------------
int __fastcall sub_575AC(int a1, int a2)
{
  int result; // r0
  unsigned __int8 v4; // [sp+3h] [bp-9h] BYREF

  if ( sub_57200(*(_DWORD *)(a1 + 8), (int)&v4, 1) != 1 )
    return sub_3774C((_BYTE *)a2, "read error");
  result = 0;
  *(_DWORD *)(a2 + 8) = v4;
  return result;
}
